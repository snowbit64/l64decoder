// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 0088423c
// Size: 60 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementWander::onInitialize() */

undefined8 BTMovementWander::onInitialize(void)

{
  undefined4 uVar1;
  long in_x0;
  
  AnimalSteering::startWander();
  uVar1 = BehaviorContext::addTimer
                    (*(BehaviorContext **)(in_x0 + 0x28),
                     *(float *)(*(BehaviorContext **)(in_x0 + 0x28) + 0xc0));
  *(undefined4 *)(in_x0 + 0x38) = uVar1;
  return 1;
}


