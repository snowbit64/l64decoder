// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00882f18
// Size: 36 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementSetTargetProvider::update() */

undefined8 BTMovementSetTargetProvider::update(void)

{
  long in_x0;
  
  AnimalSteering::setTargetProvider(*(AnimalSteering **)(in_x0 + 0x28),*(uint *)(in_x0 + 0x30));
  return 1;
}


