// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalCodeGenerationTimeUs
// Entry Point: 00956bb0
// Size: 40 bytes
// Signature: undefined getTotalCodeGenerationTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShaderManager::getTotalCodeGenerationTimeUs() */

undefined  [16] MaterialShaderManager::getTotalCodeGenerationTimeUs(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x118));
  auVar2._0_8_ = dVar1 * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


