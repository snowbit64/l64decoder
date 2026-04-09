// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCullOverride
// Entry Point: 00a5b74c
// Size: 32 bytes
// Signature: undefined __thiscall setCullOverride(ScenegraphNode * this, bool param_1)


/* ScenegraphNode::setCullOverride(bool) */

void __thiscall ScenegraphNode::setCullOverride(ScenegraphNode *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffffffb | uVar1;
  return;
}


