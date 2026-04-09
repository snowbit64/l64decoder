// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChild
// Entry Point: 00a5953c
// Size: 104 bytes
// Signature: undefined __thiscall removeChild(Node * this, Node * param_1, bool param_2)


/* Node::removeChild(Node const*, bool) */

ulong __thiscall Node::removeChild(Node *this,Node *param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
  uVar1 = uVar2 >> 3;
  if ((int)uVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(Node **)(*(long *)(this + 0x28) + uVar3 * 8) == param_1) {
        (**(code **)(*(long *)this + 0x10))(this,uVar3 & 0xffffffff,param_2);
        uVar1 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar2 >> 3 & 0xffffffff) != uVar3);
  }
  return uVar1 & 0xffffffff;
}


