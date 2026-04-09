// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxTurnAngle
// Entry Point: 00705cac
// Size: 40 bytes
// Signature: undefined getMaxTurnAngle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getMaxTurnAngle() */

undefined4 AnimalAnimationSystem::getMaxTurnAngle(void)

{
  long in_x0;
  
  if (*(uint *)(in_x0 + 0x2b4) != 0xffffffff) {
    return *(undefined4 *)
            (*(long *)(in_x0 + 0x288) + (ulong)*(uint *)(in_x0 + 0x2b4) * 0x70 + 0x358);
  }
  return 0;
}


