// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetBehavior
// Entry Point: 0070350c
// Size: 48 bytes
// Signature: undefined resetBehavior(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Animal::resetBehavior() */

void Animal::resetBehavior(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert((BehaviorTree *)(in_x0 + 0x6c8),*(BTBehavior **)(in_x0 + 0x6f8));
  return;
}


