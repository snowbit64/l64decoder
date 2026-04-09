// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveAnimationSpeed
// Entry Point: 00705e98
// Size: 40 bytes
// Signature: undefined getActiveAnimationSpeed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getActiveAnimationSpeed() */

undefined4 AnimalAnimationSystem::getActiveAnimationSpeed(void)

{
  long in_x0;
  
  if (*(uint *)(in_x0 + 0x2b4) != 0xffffffff) {
    return *(undefined4 *)
            (*(long *)(in_x0 + 0x288) + (ulong)*(uint *)(in_x0 + 0x2b4) * 0x70 + 0x35c);
  }
  return 0x3f800000;
}


