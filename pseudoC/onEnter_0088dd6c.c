// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 0088dd6c
// Size: 40 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateSleep::onEnter() */

void DogStateSleep::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  return;
}


