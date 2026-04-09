// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistanceToTarget
// Entry Point: 00880b3c
// Size: 24 bytes
// Signature: undefined getDistanceToTarget(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::getDistanceToTarget() */

undefined4 AnimalSteering::getDistanceToTarget(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0xd8) != 0) {
    return *(undefined4 *)(*(long *)(in_x0 + 0xd8) + 0x28);
  }
  return 0;
}


