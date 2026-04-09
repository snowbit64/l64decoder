// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertTicksToMs
// Entry Point: 00c68f44
// Size: 24 bytes
// Signature: undefined __cdecl convertTicksToMs(ulonglong param_1)


/* Watch::convertTicksToMs(unsigned long long) */

undefined  [16] Watch::convertTicksToMs(ulonglong param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = (double)(unkuint9)param_1 / 1000.0;
  auVar1._8_8_ = 0;
  return auVar1;
}


