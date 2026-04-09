// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxAngularVelocity
// Entry Point: 00705c58
// Size: 84 bytes
// Signature: undefined getMaxAngularVelocity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getMaxAngularVelocity() */

float AnimalAnimationSystem::getMaxAngularVelocity(void)

{
  long in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(uint *)(in_x0 + 0x2b4) == 0xffffffff) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = *(long *)(in_x0 + 0x288) + (ulong)*(uint *)(in_x0 + 0x2b4) * 0x70;
    fVar3 = *(float *)(lVar1 + 0x358);
    CharacterSet::getClip(*(CharacterSet **)(in_x0 + 0x298),*(uint *)(lVar1 + 0x34c));
    fVar2 = (float)Clip::getDuration();
    fVar3 = fVar3 / fVar2;
  }
  return fVar3;
}


