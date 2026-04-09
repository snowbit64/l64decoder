// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00883068
// Size: 40 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementStop::onInitialize() */

undefined8 BTMovementStop::onInitialize(void)

{
  long in_x0;
  
  if (**(int **)(in_x0 + 0x28) != 2) {
    AnimalSteering::startArrive();
  }
  return 1;
}


