// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0088f36c
// Size: 40 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogTransition::init() */

void DogTransition::init(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  return;
}


