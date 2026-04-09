// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisualizationEnable
// Entry Point: 00e3a9b8
// Size: 32 bytes
// Signature: undefined __thiscall setVisualizationEnable(Bus * this, bool param_1)


/* SoLoud::Bus::setVisualizationEnable(bool) */

void __thiscall SoLoud::Bus::setVisualizationEnable(Bus *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 2;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffd | uVar1;
  return;
}


