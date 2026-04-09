// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPerformanceClassStr
// Entry Point: 0075710c
// Size: 32 bytes
// Signature: undefined __cdecl getPerformanceClassStr(PERFORMANCE_CLASS param_1)


/* HardwareScalability::getPerformanceClassStr(HardwareScalability::PERFORMANCE_CLASS) */

undefined * HardwareScalability::getPerformanceClassStr(PERFORMANCE_CLASS param_1)

{
  if ((int)param_1 < 4) {
    return (&s_performanceClassNames)[param_1];
  }
  return (undefined *)0x0;
}


