// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTrack
// Entry Point: 0089a18c
// Size: 212 bytes
// Signature: undefined __thiscall updateTrack(PedestrianAnimationBlender * this, float param_1, PedestrianTransitionValue * param_2, int param_3)


/* PedestrianAnimationBlender::updateTrack(float, PedestrianTransitionValue&, int) */

void __thiscall
PedestrianAnimationBlender::updateTrack
          (PedestrianAnimationBlender *this,float param_1,PedestrianTransitionValue *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2[0x18] != (PedestrianTransitionValue)0x0) {
    fVar2 = *(float *)(param_2 + 8);
    if (*(float *)(param_2 + 4) != fVar2) {
      if (*(float *)(param_2 + 0x14) <= 0.0) {
        fVar1 = *(float *)(param_2 + 0xc) + param_1;
        *(float *)(param_2 + 0xc) = fVar1;
        if (fVar1 <= *(float *)(param_2 + 0x10)) {
          fVar2 = (float)NEON_fmadd(fVar2 - *(float *)param_2,fVar1 / *(float *)(param_2 + 0x10),
                                    *(float *)param_2);
          *(float *)(param_2 + 4) = fVar2;
        }
        else {
          param_2[0x18] = (PedestrianTransitionValue)0x0;
          *(float *)(param_2 + 4) = fVar2;
        }
      }
      else {
        *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) - param_1;
        fVar2 = *(float *)(param_2 + 4);
      }
      CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),param_3,fVar2);
      if ((*(float *)(param_2 + 4) == *(float *)(param_2 + 8) ||
           param_2[0x18] == (PedestrianTransitionValue)0x0) && (*(float *)(param_2 + 4) == 0.0)) {
        CharacterSet::disable(*(CharacterSet **)(this + 0x58),param_3);
        return;
      }
    }
  }
  return;
}


