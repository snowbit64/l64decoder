// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodeFromReference
// Entry Point: 00a595e0
// Size: 148 bytes
// Signature: undefined __thiscall getNodeFromReference(Node * this, char * param_1)


/* Node::getNodeFromReference(char const*) */

Node * __thiscall Node::getNodeFromReference(Node *this,char *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 - 0x3a < 0xfffffff6) {
      return this;
    }
    uVar2 = (uint)bVar1;
    uVar4 = uVar2 - 0x30;
    if (uVar4 < 10) {
      uVar3 = 0;
      do {
        param_1 = (char *)((byte *)param_1 + 1);
        uVar2 = (uint)(byte)*param_1;
        uVar3 = uVar4 + uVar3 * 10;
        uVar4 = uVar2 - 0x30;
      } while (uVar4 < 10);
    }
    else {
      uVar3 = 0;
    }
    if ((uint)((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28)) >> 3) <= uVar3) break;
    this = *(Node **)(*(long *)(this + 0x28) + (ulong)uVar3 * 8);
    if ((uVar2 != 0x7c) && (uVar2 != 0x3e)) {
      return this;
    }
    param_1 = (char *)((byte *)param_1 + 1);
    bVar1 = *param_1;
  }
  return (Node *)0x0;
}


