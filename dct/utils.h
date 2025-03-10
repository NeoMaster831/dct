#pragma once

#include <ntddk.h>

//
// Debug Print Levels
//
#define DBG_ERROR 0x00000000   // Error messages
#define DBG_WARNING 0x00000001 // Warning messages
#define DBG_INFO 0x00000002    // Information messages
#define DBG_TRACE 0x00000003   // Trace messages

//
// Debug Print Macros
//
#if DBG

#define DCT_LOG_ERROR(Format, ...)                                              \
  DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_ERROR,                                   \
             "ERROR: [Dct] " Format "\n", __VA_ARGS__)

#define DCT_LOG_WARNING(Format, ...)                                            \
  DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_WARNING,                                 \
             "WARNING: [Dct] " Format "\n", __VA_ARGS__)

#define DCT_LOG_INFO(Format, ...)                                               \
  DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_INFO, "INFO: [Dct] " Format "\n", \
             __VA_ARGS__)

#define DCT_LOG_TRACE(Format, ...)                                              \
  DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_TRACE,                                   \
             "TRACE: [Dct] " Format "\n", __VA_ARGS__)

#else

#define DCT_LOG_ERROR(Format, ...)
#define DCT_LOG_WARNING(Format, ...)
#define DCT_LOG_INFO(Format, ...)
#define DCT_LOG_TRACE(Format, ...)

#endif

#define UNUSED_PARAMETER(x) (void)(x)