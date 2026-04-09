// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSoftShadowsEnabled
// Entry Point: 00a55684
// Size: 32 bytes
// Signature: undefined __thiscall setSoftShadowsEnabled(LightSource * this, bool param_1)


/* LightSource::setSoftShadowsEnabled(bool) */

void __thiscall LightSource::setSoftShadowsEnabled(LightSource *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x20c) = *(uint *)(this + 0x20c) & 0xfffffeff | uVar1;
  return;
}


