// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 007128a0
// Size: 64 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BehaviorTree::reset() */

void BehaviorTree::reset(void)

{
  __deque_iterator in_w0;
  undefined4 in_register_00004004;
  
  if (*(long *)(CONCAT44(in_register_00004004,in_w0) + 0x28) == 0) {
    return;
  }
  if (*(long *)(CONCAT44(in_register_00004004,in_w0) + 0x10) !=
      *(long *)(CONCAT44(in_register_00004004,in_w0) + 8)) {
    std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__erase_to_end(in_w0);
    return;
  }
  std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__erase_to_end(in_w0);
  return;
}


