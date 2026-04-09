// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 00886b38
// Size: 56 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateFeed::onEnter() */

void DogStateFeed::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x18),*(BTBehavior **)(in_x0 + 0x20));
  AnimalSteering::setMaxVelocity(*(AnimalSteering **)(*(long *)(in_x0 + 0x10) + 0xb0),3.0);
  return;
}


