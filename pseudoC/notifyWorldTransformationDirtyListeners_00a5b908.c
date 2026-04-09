// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyWorldTransformationDirtyListeners
// Entry Point: 00a5b908
// Size: 136 bytes
// Signature: undefined __thiscall notifyWorldTransformationDirtyListeners(ScenegraphNode * this, uint param_1)


/* ScenegraphNode::notifyWorldTransformationDirtyListeners(unsigned int) */

void __thiscall
ScenegraphNode::notifyWorldTransformationDirtyListeners(ScenegraphNode *this,uint param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(this + 0x50) - (long)*(long ***)(this + 0x48);
  if ((int)(uVar2 >> 3) != 0) {
    plVar1 = **(long ***)(this + 0x48);
    uVar2 = uVar2 >> 3 & 0xffffffff;
    (**(code **)(*plVar1 + 0x18))(plVar1,this,param_1);
    if (uVar2 != 1) {
      uVar3 = 1;
      do {
        plVar1 = *(long **)(*(long *)(this + 0x48) + uVar3 * 8);
        (**(code **)(*plVar1 + 0x18))(plVar1,this,param_1);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return;
}


