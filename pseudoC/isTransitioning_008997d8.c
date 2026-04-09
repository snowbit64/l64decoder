// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTransitioning
// Entry Point: 008997d8
// Size: 32 bytes
// Signature: undefined isTransitioning(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianTransitionValue::isTransitioning() */

bool PedestrianTransitionValue::isTransitioning(void)

{
  long in_x0;
  
  return *(char *)(in_x0 + 0x18) != '\0' && *(float *)(in_x0 + 4) != *(float *)(in_x0 + 8);
}


