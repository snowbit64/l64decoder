// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDesiredSpeed
// Entry Point: 00705cd4
// Size: 140 bytes
// Signature: undefined getDesiredSpeed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getDesiredSpeed() */

float AnimalAnimationSystem::getDesiredSpeed(void)

{
  uint uVar1;
  long in_x0;
  float fVar2;
  
  uVar1 = *(uint *)(in_x0 + 0x2b4);
  fVar2 = 0.0;
  if (((uVar1 != 0xffffffff) &&
      (*(float *)(*(long *)(in_x0 + 0x288) + (ulong)uVar1 * 0x70 + 0x354) != 0.0)) &&
     (uVar1 = *(uint *)(*(long *)(in_x0 + 0x288) + (ulong)uVar1 * 0x70 + 0x34c), uVar1 != 0xffffffff
     )) {
    CharacterSet::getClip(*(CharacterSet **)(in_x0 + 0x298),uVar1);
    fVar2 = (float)Clip::getDuration();
    fVar2 = *(float *)(*(long *)(in_x0 + 0x288) + (ulong)*(uint *)(in_x0 + 0x2b4) * 0x70 + 0x354) /
            (fVar2 * 0.001);
  }
  return fVar2;
}


