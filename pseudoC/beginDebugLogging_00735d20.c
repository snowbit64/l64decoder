// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginDebugLogging
// Entry Point: 00735d20
// Size: 28 bytes
// Signature: undefined beginDebugLogging(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgentEntity::beginDebugLogging() */

void VehicleNavigationAgentEntity::beginDebugLogging(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x120) = 1;
  if (*(long *)(in_x0 + 0x130) != *(long *)(in_x0 + 0x128)) {
    *(long *)(in_x0 + 0x130) = *(long *)(in_x0 + 0x128);
  }
  return;
}


