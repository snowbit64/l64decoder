// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMergedShadowActive
// Entry Point: 00a561e0
// Size: 20 bytes
// Signature: undefined __thiscall setMergedShadowActive(LightSource * this, bool param_1)


/* LightSource::setMergedShadowActive(bool) */

void __thiscall LightSource::setMergedShadowActive(LightSource *this,bool param_1)

{
  if (*(long *)(this + 0x158) != 0) {
    *(bool *)(*(long *)(this + 0x158) + 0x18) = param_1;
  }
  return;
}


