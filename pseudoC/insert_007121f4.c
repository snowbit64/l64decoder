// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 007121f4
// Size: 152 bytes
// Signature: undefined __thiscall insert(BehaviorTree * this, BTBehavior * param_1, BTTaskObserver * param_2)


/* BehaviorTree::insert(BTBehavior*, BTTaskObserver const&) */

void __thiscall BehaviorTree::insert(BehaviorTree *this,BTBehavior *param_1,BTTaskObserver *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(this + 0x20);
  if (uVar2 == 0) {
    std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__add_front_capacity();
    uVar2 = *(ulong *)(this + 0x20);
  }
  plVar1 = (long *)(*(long *)(this + 8) + (uVar2 >> 6 & 0x3fffffffffffff8));
  lVar4 = *plVar1;
  lVar3 = 0;
  if (*(long *)(this + 0x10) != *(long *)(this + 8)) {
    lVar3 = lVar4 + (uVar2 & 0x1ff) * 8;
  }
  if (lVar3 == lVar4) {
    lVar3 = plVar1[-1] + 0x1000;
  }
  lVar4 = *(long *)(this + 0x28);
  *(BTBehavior **)(lVar3 + -8) = param_1;
  *(ulong *)(this + 0x20) = uVar2 - 1;
  *(long *)(this + 0x28) = lVar4 + 1;
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  return;
}


