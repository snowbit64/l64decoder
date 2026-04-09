// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isMainAnimationFinished
// Entry Point: 0089a3fc
// Size: 124 bytes
// Signature: undefined isMainAnimationFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianAnimationBlender::isMainAnimationFinished() */

CharacterSet * PedestrianAnimationBlender::isMainAnimationFinished(void)

{
  long in_x0;
  CharacterSet *this;
  uint uVar1;
  float fVar2;
  float fVar3;
  
  this = *(CharacterSet **)(in_x0 + 0x58);
  if (this != (CharacterSet *)0x0) {
    if (*(float *)(in_x0 + 8) == 1.0) {
      uVar1 = 0;
    }
    else {
      if (*(float *)(in_x0 + 0x24) != 1.0) {
        return (CharacterSet *)0x0;
      }
      uVar1 = 1;
    }
    fVar2 = (float)CharacterSet::getTime(this,uVar1);
    fVar3 = (float)CharacterSet::getDuration((uint)*(undefined8 *)(in_x0 + 0x58));
    this = (CharacterSet *)(ulong)(fVar3 < fVar2);
  }
  return this;
}


