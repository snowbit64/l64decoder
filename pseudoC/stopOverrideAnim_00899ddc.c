// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopOverrideAnim
// Entry Point: 00899ddc
// Size: 352 bytes
// Signature: undefined __thiscall stopOverrideAnim(PedestrianAnimationBlender * this, float param_1, float param_2)


/* PedestrianAnimationBlender::stopOverrideAnim(float, float) */

void __thiscall
PedestrianAnimationBlender::stopOverrideAnim
          (PedestrianAnimationBlender *this,float param_1,float param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  CharacterSet *this_00;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  
  this_00 = *(CharacterSet **)(this + 0x58);
  if (this_00 != (CharacterSet *)0x0) {
    if (param_2 <= 0.0) {
      *(undefined4 *)(this + 0x68) = 0xbf800000;
      if (this[0x75] == (PedestrianAnimationBlender)0x0) {
        if ((this[0x18] == (PedestrianAnimationBlender)0x0) ||
           (fVar4 = *(float *)(this + 4), fVar4 == *(float *)(this + 8))) {
          CharacterSet::enable(this_00,0);
          CharacterSet::setTime(*(CharacterSet **)(this + 0x58),0,0.0);
          CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),0,1.0);
          this_00 = *(CharacterSet **)(this + 0x58);
          fVar4 = *(float *)(this + 4);
        }
        CharacterSet::setBlendWeight(this_00,0,fVar4);
        pfVar3 = (float *)(this + 0x20);
        CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),1,*pfVar3);
        puVar1 = (undefined4 *)(this + 8);
        if (this[0x18] != (PedestrianAnimationBlender)0x0) {
          puVar1 = (undefined4 *)(this + 4);
        }
        uVar5 = *puVar1;
        *(undefined4 *)(this + 0xc) = 0;
        pfVar2 = (float *)(this + 0x24);
        if (this[0x34] != (PedestrianAnimationBlender)0x0) {
          pfVar2 = pfVar3;
        }
        this[0x18] = (PedestrianAnimationBlender)0x1;
        *(undefined4 *)(this + 4) = uVar5;
        *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x60);
        *(float *)(this + 0x10) = param_1;
        *(undefined4 *)(this + 0x14) = 0;
        *(undefined4 *)this = uVar5;
        fVar4 = *pfVar2;
        *(undefined4 *)(this + 0x24) = 0;
        *(undefined4 *)(this + 0x28) = 0;
        this[0x34] = (PedestrianAnimationBlender)0x1;
        *(float *)(this + 0x2c) = param_1;
        *(float *)(this + 0x1c) = fVar4;
        *pfVar3 = fVar4;
        *(undefined4 *)(this + 0x30) = 0;
        if (this[0x76] != (PedestrianAnimationBlender)0x0) {
          CharacterSet::enable(*(CharacterSet **)(this + 0x58),2);
          CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),2,0.0);
          *(undefined4 *)(this + 0x44) = 0;
          *(undefined8 *)(this + 0x38) = 0;
          this[0x50] = (PedestrianAnimationBlender)0x1;
          *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 100);
          *(float *)(this + 0x48) = param_1;
          *(undefined4 *)(this + 0x4c) = 0;
        }
      }
    }
    else {
      *(float *)(this + 0x68) = param_2;
      *(float *)(this + 0x6c) = param_1;
      this[0x74] = (PedestrianAnimationBlender)0x0;
    }
  }
  return;
}


