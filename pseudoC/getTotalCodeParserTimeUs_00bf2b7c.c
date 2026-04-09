// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalCodeParserTimeUs
// Entry Point: 00bf2b7c
// Size: 40 bytes
// Signature: undefined getTotalCodeParserTimeUs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::getTotalCodeParserTimeUs() */

undefined  [16] ShaderManager::getTotalCodeParserTimeUs(void)

{
  long in_x0;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)Watch::convertTicksToMs(*(ulonglong *)(in_x0 + 0x188));
  auVar2._0_8_ = dVar1 * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


