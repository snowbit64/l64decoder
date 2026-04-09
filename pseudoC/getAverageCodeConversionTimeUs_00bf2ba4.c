// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAverageCodeConversionTimeUs
// Entry Point: 00bf2ba4
// Size: 92 bytes
// Signature: undefined getAverageCodeConversionTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getAverageCodeConversionTimeUs() */

int ShaderManager::getAverageCodeConversionTimeUs(void)

{
  int iVar1;
  long in_x0;
  double dVar2;
  double dVar3;
  
  if (*(int *)(in_x0 + 0x1a0) == 0) {
    iVar1 = 0;
  }
  else {
    dVar2 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x198));
    dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(in_x0 + 0x1a0));
    iVar1 = (int)((dVar2 * 1000.0) / dVar3 + 0.5);
  }
  return iVar1;
}


