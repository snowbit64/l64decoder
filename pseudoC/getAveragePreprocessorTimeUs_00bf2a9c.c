// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAveragePreprocessorTimeUs
// Entry Point: 00bf2a9c
// Size: 92 bytes
// Signature: undefined getAveragePreprocessorTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getAveragePreprocessorTimeUs() */

int ShaderManager::getAveragePreprocessorTimeUs(void)

{
  int iVar1;
  long in_x0;
  double dVar2;
  double dVar3;
  
  if (*(int *)(in_x0 + 0x180) == 0) {
    iVar1 = 0;
  }
  else {
    dVar2 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x178));
    dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(in_x0 + 0x180));
    iVar1 = (int)((dVar2 * 1000.0) / dVar3 + 0.5);
  }
  return iVar1;
}


