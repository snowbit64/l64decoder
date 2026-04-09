// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsParent
// Entry Point: 00a5b76c
// Size: 124 bytes
// Signature: undefined __thiscall propagateTowardsParent(ScenegraphNode * this, uint param_1)


/* ScenegraphNode::propagateTowardsParent(unsigned int) */

void __thiscall ScenegraphNode::propagateTowardsParent(ScenegraphNode *this,uint param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  do {
    if ((param_1 & 1) == 0) {
LAB_00a5b7c4:
      this = *(ScenegraphNode **)(this + 0x20);
    }
    else {
      if (*(long *)(this + 0x50) == *(long *)(this + 0x48)) {
        plVar2 = *(long **)(this + 0x28);
        if ((int)((ulong)(*(long *)(this + 0x30) - (long)plVar2) >> 3) != 0) {
          uVar3 = (ulong)(*(long *)(this + 0x30) - (long)plVar2) >> 3 & 0xffffffff;
          do {
            if ((*(byte *)(*plVar2 + 0x40) >> 4 & 1) != 0) goto LAB_00a5b77c;
            plVar2 = plVar2 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if ((*(uint *)(this + 0x40) >> 4 & 1) == 0) goto LAB_00a5b7c0;
        uVar1 = *(uint *)(this + 0x40) & 0xffffffef;
      }
      else {
LAB_00a5b77c:
        if ((*(uint *)(this + 0x40) >> 4 & 1) != 0) {
LAB_00a5b7c0:
          param_1 = param_1 & 0xfffffffe;
          goto LAB_00a5b7c4;
        }
        uVar1 = *(uint *)(this + 0x40) | 0x10;
      }
      *(uint *)(this + 0x40) = uVar1;
      this = *(ScenegraphNode **)(this + 0x20);
    }
    if ((this == (ScenegraphNode *)0x0) || (param_1 == 0)) {
      return;
    }
  } while( true );
}


