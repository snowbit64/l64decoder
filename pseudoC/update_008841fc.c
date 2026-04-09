// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008841fc
// Size: 64 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementWander::update() */

undefined8 BTMovementWander::update(void)

{
  long in_x0;
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = BehaviorContext::isTimerExpired
                    (*(BehaviorContext **)(in_x0 + 0x28),*(int *)(in_x0 + 0x38));
  if ((uVar1 & 1) == 0) {
    uVar2 = 3;
  }
  else {
    AnimalSteering::startArrive();
    uVar2 = 1;
  }
  return uVar2;
}


