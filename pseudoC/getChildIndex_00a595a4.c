// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildIndex
// Entry Point: 00a595a4
// Size: 60 bytes
// Signature: undefined __thiscall getChildIndex(Node * this, Node * param_1)


/* Node::getChildIndex(Node const*) const */

ulong __thiscall Node::getChildIndex(Node *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
  uVar1 = uVar3 >> 3;
  if ((int)uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(Node **)(*(long *)(this + 0x28) + uVar2 * 8) == param_1) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar3 >> 3 & 0xffffffff) != uVar2);
  }
  return uVar1;
}


