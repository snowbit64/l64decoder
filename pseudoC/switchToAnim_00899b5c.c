// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchToAnim
// Entry Point: 00899b5c
// Size: 292 bytes
// Signature: undefined __thiscall switchToAnim(PedestrianAnimationBlender * this, int param_1, float param_2)


/* PedestrianAnimationBlender::switchToAnim(int, float) */

void __thiscall
PedestrianAnimationBlender::switchToAnim(PedestrianAnimationBlender *this,int param_1,float param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(CharacterSet **)(this + 0x58) != (CharacterSet *)0x0) &&
     (this[0x75] != (PedestrianAnimationBlender)0x0)) {
    fVar3 = *(float *)(this + 8);
    if (fVar3 == 0.0) {
      *(undefined8 *)this = 0;
      *(float *)(this + 0x10) = param_2;
      uVar2 = 0;
      this[0x18] = (PedestrianAnimationBlender)0x1;
      *(undefined4 *)(this + 0x14) = 0;
      puVar1 = (undefined4 *)(this + 0x24);
      if (this[0x34] != (PedestrianAnimationBlender)0x0) {
        puVar1 = (undefined4 *)(this + 0x20);
      }
      *(undefined8 *)(this + 8) = 0x3f800000;
      uVar4 = *puVar1;
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x1c) = uVar4;
      *(undefined4 *)(this + 0x20) = uVar4;
    }
    else {
      uVar2 = 1;
      *(undefined8 *)(this + 8) = 0;
      *(float *)(this + 0x10) = param_2;
      if (this[0x18] != (PedestrianAnimationBlender)0x0) {
        fVar3 = *(float *)(this + 4);
      }
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x28) = 0;
      this[0x18] = (PedestrianAnimationBlender)0x1;
      *(float *)this = fVar3;
      *(float *)(this + 4) = fVar3;
      *(undefined8 *)(this + 0x20) = 0x3f80000000000000;
    }
    *(float *)(this + 0x2c) = param_2;
    *(undefined4 *)(this + 0x30) = 0;
    this[0x34] = (PedestrianAnimationBlender)0x1;
    CharacterSet::enable(*(CharacterSet **)(this + 0x58),uVar2);
    CharacterSet::assignClip(*(CharacterSet **)(this + 0x58),uVar2,param_1);
    CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),uVar2,0.0);
    CharacterSet::setTime(*(CharacterSet **)(this + 0x58),uVar2,0.0);
    return;
  }
  return;
}


