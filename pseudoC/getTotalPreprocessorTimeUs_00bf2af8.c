// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalPreprocessorTimeUs
// Entry Point: 00bf2af8
// Size: 40 bytes
// Signature: undefined getTotalPreprocessorTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getTotalPreprocessorTimeUs() */

undefined  [16] ShaderManager::getTotalPreprocessorTimeUs(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x178));
  auVar2._0_8_ = dVar1 * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


