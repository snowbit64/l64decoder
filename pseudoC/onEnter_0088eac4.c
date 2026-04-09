// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 0088eac4
// Size: 68 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateWander::onEnter() */

void DogStateWander::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  AnimalSteering::setMaxVelocity(*(AnimalSteering **)(*(long *)(in_x0 + 0x20) + 0xb0),1.0);
  AnimalSteering::manualUpdateAllTargetProviders();
  return;
}


