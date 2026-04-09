// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8ecc
// Entry Point: 007a8ecc
// Size: 52 bytes
// Signature: undefined FUN_007a8ecc(void)


void FUN_007a8ecc(LightSource *param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = LightSource::getLightFlags();
  LightSource::setLightFlags(param_1,uVar1 & 0xffffff7f | (uint)*param_2 << 7);
  return;
}


