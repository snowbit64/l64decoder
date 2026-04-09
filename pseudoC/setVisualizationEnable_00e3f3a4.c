// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisualizationEnable
// Entry Point: 00e3f3a4
// Size: 32 bytes
// Signature: undefined __thiscall setVisualizationEnable(Soloud * this, bool param_1)


/* SoLoud::Soloud::setVisualizationEnable(bool) */

void __thiscall SoLoud::Soloud::setVisualizationEnable(Soloud *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 2;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x20bc) = *(uint *)(this + 0x20bc) & 0xfffffffd | uVar1;
  return;
}


