// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tick
// Entry Point: 007129e4
// Size: 124 bytes
// Signature: undefined tick(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BehaviorTree::tick() */

void BehaviorTree::tick(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(in_x0 + 8);
  lVar1 = *(long *)(in_x0 + 0x10) - lVar3;
  lVar4 = *(long *)(in_x0 + 0x28);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = lVar1 * 0x40 - 1;
  }
  uVar5 = lVar4 + *(long *)(in_x0 + 0x20);
  if (uVar2 == uVar5) {
    std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__add_back_capacity();
    lVar4 = *(long *)(in_x0 + 0x28);
    lVar3 = *(long *)(in_x0 + 8);
    uVar5 = *(long *)(in_x0 + 0x20) + lVar4;
  }
  lVar3 = *(long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8));
  *(long *)(in_x0 + 0x28) = lVar4 + 1;
  *(undefined8 *)(lVar3 + (uVar5 & 0x1ff) * 8) = 0;
  do {
    uVar2 = step();
  } while ((uVar2 & 1) != 0);
  return;
}


