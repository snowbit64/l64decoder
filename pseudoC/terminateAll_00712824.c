// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: terminateAll
// Entry Point: 00712824
// Size: 124 bytes
// Signature: undefined terminateAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BehaviorTree::terminateAll() */

void BehaviorTree::terminateAll(void)

{
  ulong uVar1;
  __deque_iterator in_w0;
  undefined4 in_register_00004004;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(CONCAT44(in_register_00004004,in_w0) + 0x28);
  if (uVar4 == 0) {
    return;
  }
  uVar5 = 0;
  lVar2 = *(long *)(CONCAT44(in_register_00004004,in_w0) + 0x20);
  lVar3 = *(long *)(CONCAT44(in_register_00004004,in_w0) + 8);
  do {
    uVar1 = lVar2 + uVar5;
    lVar6 = *(long *)(*(long *)(lVar3 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 8) = 0;
    }
    uVar5 = (ulong)((int)uVar5 + 1);
  } while (uVar5 < uVar4);
  if (*(long *)(CONCAT44(in_register_00004004,in_w0) + 0x10) != lVar3) {
    std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__erase_to_end(in_w0);
    return;
  }
  std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__erase_to_end(in_w0);
  return;
}


