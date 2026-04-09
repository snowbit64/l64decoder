// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 00882ec4
// Size: 56 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeerStateFlee::onEnter() */

void DeerStateFlee::onEnter(void)

{
  long in_x0;
  
  BehaviorTree::terminateAll();
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x18),*(BTBehavior **)(in_x0 + 0x20));
  AnimalSteering::setMaxVelocity(*(AnimalSteering **)(*(long *)(in_x0 + 0x10) + 0xb0),8.0);
  return;
}


