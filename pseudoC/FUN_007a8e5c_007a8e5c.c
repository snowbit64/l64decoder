// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8e5c
// Entry Point: 007a8e5c
// Size: 64 bytes
// Signature: undefined FUN_007a8e5c(void)


void FUN_007a8e5c(LightSource *param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = LightSource::getLightFlags();
  LightSource::setLightFlags(param_1,uVar1 & 0xffffffdf | (uint)*param_2 << 5);
  LightSource::setDepthMapResolution(param_1,*(uint *)(param_2 + 0x10));
  return;
}


