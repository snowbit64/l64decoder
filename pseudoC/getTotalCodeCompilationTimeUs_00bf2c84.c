// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalCodeCompilationTimeUs
// Entry Point: 00bf2c84
// Size: 40 bytes
// Signature: undefined getTotalCodeCompilationTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getTotalCodeCompilationTimeUs() */

undefined  [16] ShaderManager::getTotalCodeCompilationTimeUs(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x1a8));
  auVar2._0_8_ = dVar1 * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


