// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overrideWithIdleAnim
// Entry Point: 00899c80
// Size: 348 bytes
// Signature: undefined __thiscall overrideWithIdleAnim(PedestrianAnimationBlender * this, float param_1, float param_2)


/* PedestrianAnimationBlender::overrideWithIdleAnim(float, float) */

void __thiscall
PedestrianAnimationBlender::overrideWithIdleAnim
          (PedestrianAnimationBlender *this,float param_1,float param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  CharacterSet *this_00;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  
  this_00 = *(CharacterSet **)(this + 0x58);
  if (this_00 != (CharacterSet *)0x0) {
    if (param_2 <= 0.0) {
      *(undefined4 *)(this + 0x68) = 0xbf800000;
      if (this[0x75] == (PedestrianAnimationBlender)0x0) {
        if ((this[0x34] == (PedestrianAnimationBlender)0x0) ||
           (*(float *)(this + 0x20) == *(float *)(this + 0x24))) {
          CharacterSet::enable(this_00,1);
          CharacterSet::setTime(*(CharacterSet **)(this + 0x58),1,0.0);
          CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),1,1.0);
          this_00 = *(CharacterSet **)(this + 0x58);
        }
        pfVar3 = (float *)(this + 4);
        CharacterSet::setBlendWeight(this_00,0,*pfVar3);
        pfVar4 = (float *)(this + 0x20);
        CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),1,*pfVar4);
        pfVar1 = (float *)(this + 8);
        if (this[0x18] != (PedestrianAnimationBlender)0x0) {
          pfVar1 = pfVar3;
        }
        fVar5 = *pfVar1;
        *(undefined8 *)(this + 8) = 0;
        this[0x18] = (PedestrianAnimationBlender)0x1;
        *(float *)(this + 0x10) = param_1;
        *(undefined4 *)(this + 0x14) = 0;
        pfVar1 = (float *)(this + 0x24);
        if (this[0x34] != (PedestrianAnimationBlender)0x0) {
          pfVar1 = pfVar4;
        }
        *(float *)this = fVar5;
        *pfVar3 = fVar5;
        fVar5 = *pfVar1;
        *(undefined8 *)(this + 0x24) = 0x3f800000;
        this[0x34] = (PedestrianAnimationBlender)0x1;
        *(float *)(this + 0x2c) = param_1;
        *(float *)(this + 0x1c) = fVar5;
        *pfVar4 = fVar5;
        *(undefined4 *)(this + 0x30) = 0;
        if (this[0x76] != (PedestrianAnimationBlender)0x0) {
          puVar2 = (undefined4 *)(this + 0x40);
          if (this[0x50] != (PedestrianAnimationBlender)0x0) {
            puVar2 = (undefined4 *)(this + 0x3c);
          }
          uVar6 = *puVar2;
          *(undefined8 *)(this + 0x40) = 0;
          this[0x50] = (PedestrianAnimationBlender)0x1;
          *(float *)(this + 0x48) = param_1;
          *(undefined4 *)(this + 0x38) = uVar6;
          *(undefined4 *)(this + 0x3c) = uVar6;
          *(undefined4 *)(this + 0x4c) = 0;
        }
      }
    }
    else {
      *(float *)(this + 0x68) = param_2;
      *(float *)(this + 0x6c) = param_1;
      this[0x74] = (PedestrianAnimationBlender)0x1;
    }
  }
  return;
}


