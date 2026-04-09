// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTaskComplete
// Entry Point: 00886dac
// Size: 268 bytes
// Signature: undefined __thiscall onTaskComplete(BTParallel * this, uint param_1)


/* BTParallel::onTaskComplete(unsigned int) */

void __thiscall BTParallel::onTaskComplete(BTParallel *this,uint param_1)

{
  uint uVar1;
  BehaviorTree *this_00;
  BTBehavior *pBVar2;
  Status SVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(this + 0x28);
  SVar3 = *(Status *)(*(long *)(lVar4 + (ulong)param_1 * 8) + 8);
  uVar1 = *(int *)(this + 0x48) + 1;
  *(uint *)(this + 0x48) = uVar1;
  if (SVar3 == 2) {
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  }
  if (this[0x51] == (BTParallel)0x0) {
    lVar5 = *(long *)(this + 0x30);
    if (lVar5 != lVar4) {
      uVar6 = 0;
      do {
        pBVar2 = *(BTBehavior **)(lVar4 + uVar6 * 8);
        if (*(int *)(pBVar2 + 8) == 3) {
          BehaviorTree::terminate(*(BehaviorTree **)(this + 0x40),pBVar2,2,false);
          lVar4 = *(long *)(this + 0x28);
          lVar5 = *(long *)(this + 0x30);
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
      SVar3 = *(Status *)(*(long *)(lVar4 + (ulong)param_1 * 8) + 8);
    }
    this_00 = *(BehaviorTree **)(this + 0x40);
  }
  else {
    if ((ulong)uVar1 != *(long *)(this + 0x30) - lVar4 >> 3) {
      return;
    }
    this_00 = *(BehaviorTree **)(this + 0x40);
    if ((this[0x50] == (BTParallel)0x0) || (uVar1 != *(uint *)(this + 0x4c))) {
      SVar3 = 1;
    }
    else {
      SVar3 = 2;
    }
  }
  BehaviorTree::terminate(this_00,(BTBehavior *)this,SVar3,true);
  return;
}


