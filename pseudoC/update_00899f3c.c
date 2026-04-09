// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00899f3c
// Size: 592 bytes
// Signature: undefined __thiscall update(PedestrianAnimationBlender * this, float param_1)


/* PedestrianAnimationBlender::update(float) */

void __thiscall PedestrianAnimationBlender::update(PedestrianAnimationBlender *this,float param_1)

{
  PedestrianAnimationBlender PVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(this + 0x58) == 0) {
    return;
  }
  if ((0.0 < *(float *)(this + 0x68)) &&
     (fVar2 = *(float *)(this + 0x68) - param_1, *(float *)(this + 0x68) = fVar2, fVar2 <= 0.0)) {
    if (this[0x74] == (PedestrianAnimationBlender)0x0) {
      stopOverrideAnim(this,*(float *)(this + 0x6c),0.0);
      PVar1 = this[0x18];
      goto joined_r0x00899f94;
    }
    overrideWithIdleAnim(this,*(float *)(this + 0x6c),0.0);
  }
  PVar1 = this[0x18];
joined_r0x00899f94:
  if (PVar1 != (PedestrianAnimationBlender)0x0) {
    fVar2 = *(float *)(this + 8);
    if (*(float *)(this + 4) != fVar2) {
      if (*(float *)(this + 0x14) <= 0.0) {
        fVar3 = *(float *)(this + 0xc) + param_1;
        *(float *)(this + 0xc) = fVar3;
        if (fVar3 <= *(float *)(this + 0x10)) {
          fVar2 = (float)NEON_fmadd(fVar2 - *(float *)this,fVar3 / *(float *)(this + 0x10),
                                    *(float *)this);
          *(float *)(this + 4) = fVar2;
        }
        else {
          this[0x18] = (PedestrianAnimationBlender)0x0;
          *(float *)(this + 4) = fVar2;
        }
      }
      else {
        *(float *)(this + 0x14) = *(float *)(this + 0x14) - param_1;
        fVar2 = *(float *)(this + 4);
      }
      CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),0,fVar2);
      if ((*(float *)(this + 4) == *(float *)(this + 8) ||
           this[0x18] == (PedestrianAnimationBlender)0x0) && (*(float *)(this + 4) == 0.0)) {
        CharacterSet::disable(*(CharacterSet **)(this + 0x58),0);
      }
    }
  }
  if (this[0x34] != (PedestrianAnimationBlender)0x0) {
    fVar2 = *(float *)(this + 0x24);
    if (*(float *)(this + 0x20) != fVar2) {
      if (*(float *)(this + 0x30) <= 0.0) {
        fVar3 = *(float *)(this + 0x28) + param_1;
        *(float *)(this + 0x28) = fVar3;
        if (fVar3 <= *(float *)(this + 0x2c)) {
          fVar2 = (float)NEON_fmadd(fVar2 - *(float *)(this + 0x1c),fVar3 / *(float *)(this + 0x2c),
                                    *(float *)(this + 0x1c));
          *(float *)(this + 0x20) = fVar2;
        }
        else {
          this[0x34] = (PedestrianAnimationBlender)0x0;
          *(float *)(this + 0x20) = fVar2;
        }
      }
      else {
        *(float *)(this + 0x30) = *(float *)(this + 0x30) - param_1;
        fVar2 = *(float *)(this + 0x20);
      }
      CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),1,fVar2);
      if ((*(float *)(this + 0x20) == *(float *)(this + 0x24) ||
           this[0x34] == (PedestrianAnimationBlender)0x0) && (*(float *)(this + 0x20) == 0.0)) {
        CharacterSet::disable(*(CharacterSet **)(this + 0x58),1);
      }
    }
  }
  if ((this[0x76] != (PedestrianAnimationBlender)0x0) &&
     (this[0x50] != (PedestrianAnimationBlender)0x0)) {
    fVar2 = *(float *)(this + 0x40);
    if (*(float *)(this + 0x3c) != fVar2) {
      if (*(float *)(this + 0x4c) <= 0.0) {
        fVar3 = *(float *)(this + 0x44) + param_1;
        *(float *)(this + 0x44) = fVar3;
        if (fVar3 <= *(float *)(this + 0x48)) {
          fVar2 = (float)NEON_fmadd(fVar2 - *(float *)(this + 0x38),fVar3 / *(float *)(this + 0x48),
                                    *(float *)(this + 0x38));
          *(float *)(this + 0x3c) = fVar2;
        }
        else {
          this[0x50] = (PedestrianAnimationBlender)0x0;
          *(float *)(this + 0x3c) = fVar2;
        }
      }
      else {
        *(float *)(this + 0x4c) = *(float *)(this + 0x4c) - param_1;
        fVar2 = *(float *)(this + 0x3c);
      }
      CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),2,fVar2);
      if ((*(float *)(this + 0x3c) == *(float *)(this + 0x40) ||
           this[0x50] == (PedestrianAnimationBlender)0x0) && (*(float *)(this + 0x3c) == 0.0)) {
        CharacterSet::disable(*(CharacterSet **)(this + 0x58),2);
        return;
      }
    }
  }
  return;
}


