#include <ntddk.h>
#include "utils.h"

VOID DriverUnload(PDRIVER_OBJECT DriverObject)
{
  UNREFERENCED_PARAMETER(DriverObject);

  DCT_LOG_INFO("Driver unloaded");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  UNREFERENCED_PARAMETER(RegistryPath);

  DriverObject->DriverUnload = DriverUnload;

  DCT_LOG_INFO("Driver loaded");

  return STATUS_SUCCESS;
}