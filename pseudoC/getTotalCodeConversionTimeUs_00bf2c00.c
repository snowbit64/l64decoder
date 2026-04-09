// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalCodeConversionTimeUs
// Entry Point: 00bf2c00
// Size: 40 bytes
// Signature: undefined getTotalCodeConversionTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getTotalCodeConversionTimeUs() */

undefined  [16] ShaderManager::getTotalCodeConversionTimeUs(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x198));
  auVar2._0_8_ = dVar1 * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


