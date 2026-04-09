// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAnimWalkEvents
// Entry Point: 0089a260
// Size: 192 bytes
// Signature: undefined __thiscall updateAnimWalkEvents(PedestrianAnimationBlender * this, vector * param_1)


/* PedestrianAnimationBlender::updateAnimWalkEvents(std::__ndk1::vector<float,
   std::__ndk1::allocator<float> > const&) */

bool __thiscall
PedestrianAnimationBlender::updateAnimWalkEvents(PedestrianAnimationBlender *this,vector *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
    bVar2 = false;
  }
  else {
    fVar5 = (float)CharacterSet::getWrappedTime(*(CharacterSet **)(this + 0x58),0);
    fVar6 = (float)CharacterSet::getDuration((uint)*(undefined8 *)(this + 0x58));
    fVar5 = fVar5 / fVar6;
    fVar6 = *(float *)(this + 0x70);
    if (fVar5 < fVar6) {
      fVar6 = fVar6 + -1.0;
      *(float *)(this + 0x70) = fVar6;
    }
    lVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
    if (lVar1 == 0) {
      bVar2 = false;
    }
    else {
      uVar3 = 0;
      uVar4 = lVar1 >> 2;
      do {
        fVar7 = *(float *)(*(long *)param_1 + uVar3 * 4);
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (((fVar6 > fVar7 || fVar7 > fVar5) && uVar3 <= uVar4) &&
               (fVar6 <= fVar7 && fVar7 <= fVar5 || uVar4 != uVar3));
      bVar2 = fVar6 <= fVar7 && fVar7 <= fVar5;
    }
    *(float *)(this + 0x70) = fVar5;
  }
  return bVar2;
}


