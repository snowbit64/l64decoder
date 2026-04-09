// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 0088a758
// Size: 40 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStatePet::onEnter() */

void DogStatePet::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  return;
}


