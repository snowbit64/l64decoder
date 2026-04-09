// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: step
// Entry Point: 007128e0
// Size: 260 bytes
// Signature: undefined step(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BehaviorTree::step() */

bool BehaviorTree::step(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(in_x0 + 0x20);
  lVar4 = *(long *)((long)*(void ***)(in_x0 + 8) + (uVar6 >> 6 & 0x3fffffffffffff8));
  *(long *)(in_x0 + 0x28) = *(long *)(in_x0 + 0x28) + -1;
  *(ulong *)(in_x0 + 0x20) = uVar6 + 1;
  lVar4 = *(long *)(lVar4 + (uVar6 & 0x1ff) * 8);
  if (0x3ff < uVar6 + 1) {
    operator_delete(**(void ***)(in_x0 + 8));
    *(long *)(in_x0 + 8) = *(long *)(in_x0 + 8) + 8;
    *(long *)(in_x0 + 0x20) = *(long *)(in_x0 + 0x20) + -0x200;
  }
  if (lVar4 != 0) {
    BTBehavior::tick();
    if ((*(int *)(lVar4 + 8) == 3) || (*(code **)(lVar4 + 0x10) == (code *)0x0)) {
      lVar2 = *(long *)(in_x0 + 8);
      lVar1 = *(long *)(in_x0 + 0x10) - lVar2;
      lVar3 = *(long *)(in_x0 + 0x28);
      uVar6 = 0;
      if (lVar1 != 0) {
        uVar6 = lVar1 * 0x40 - 1;
      }
      uVar5 = lVar3 + *(long *)(in_x0 + 0x20);
      if (uVar6 == uVar5) {
        std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__add_back_capacity();
        lVar3 = *(long *)(in_x0 + 0x28);
        lVar2 = *(long *)(in_x0 + 8);
        uVar5 = *(long *)(in_x0 + 0x20) + lVar3;
      }
      lVar2 = *(long *)(lVar2 + (uVar5 >> 6 & 0x3fffffffffffff8));
      *(long *)(in_x0 + 0x28) = lVar3 + 1;
      *(long *)(lVar2 + (uVar5 & 0x1ff) * 8) = lVar4;
    }
    else {
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20));
    }
  }
  return lVar4 != 0;
}


