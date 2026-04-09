// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSoftShadowsEnabled
// Entry Point: 00a55678
// Size: 12 bytes
// Signature: undefined getSoftShadowsEnabled(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::getSoftShadowsEnabled() const */

byte LightSource::getSoftShadowsEnabled(void)

{
  long in_x0;
  
  return *(byte *)(in_x0 + 0x20d) & 1;
}


