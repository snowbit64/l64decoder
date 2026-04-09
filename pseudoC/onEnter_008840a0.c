// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 008840a0
// Size: 56 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeerStateIdle::onEnter() */

void DeerStateIdle::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  AnimalSteering::setMaxVelocity(*(AnimalSteering **)(*(long *)(in_x0 + 0x20) + 0xb0),1.0);
  return;
}


