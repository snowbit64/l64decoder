// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLockedGroup
// Entry Point: 00a5b6e8
// Size: 48 bytes
// Signature: undefined __thiscall setLockedGroup(ScenegraphNode * this, bool param_1)


/* ScenegraphNode::setLockedGroup(bool) */

void __thiscall ScenegraphNode::setLockedGroup(ScenegraphNode *this,bool param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) != (*(uint *)(this + 0x40) & 0x80) >> 7) {
    uVar1 = 0x80;
    if (!param_1) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xffffff7f | uVar1;
  }
  return;
}


