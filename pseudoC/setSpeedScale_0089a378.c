// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeedScale
// Entry Point: 0089a378
// Size: 132 bytes
// Signature: undefined __thiscall setSpeedScale(PedestrianAnimationBlender * this, float param_1)


/* PedestrianAnimationBlender::setSpeedScale(float) */

void __thiscall
PedestrianAnimationBlender::setSpeedScale(PedestrianAnimationBlender *this,float param_1)

{
  if (((*(CharacterSet **)(this + 0x58) != (CharacterSet *)0x0) &&
      (this[0x75] == (PedestrianAnimationBlender)0x0)) && (*(float *)(this + 0x20) == 0.0)) {
    CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),0,param_1);
    CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),1,param_1);
    if (this[0x76] != (PedestrianAnimationBlender)0x0) {
      CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),2,param_1);
      return;
    }
  }
  return;
}


