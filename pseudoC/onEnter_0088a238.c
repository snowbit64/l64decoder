// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 0088a238
// Size: 64 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateGoToDoghouse::onEnter() */

void DogStateGoToDoghouse::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x18),*(BTBehavior **)(in_x0 + 0x28));
  AnimalSteering::setMaxVelocity(*(AnimalSteering **)(in_x0 + 0x10),3.0);
  AnimalSteering::manualUpdateAllTargetProviders();
  return;
}


