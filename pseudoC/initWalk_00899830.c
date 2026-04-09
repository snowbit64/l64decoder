// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWalk
// Entry Point: 00899830
// Size: 356 bytes
// Signature: undefined __thiscall initWalk(PedestrianAnimationBlender * this, int param_1, int param_2, int param_3, CharacterSet * param_4)


/* PedestrianAnimationBlender::initWalk(int, int, int, CharacterSet*) */

void __thiscall
PedestrianAnimationBlender::initWalk
          (PedestrianAnimationBlender *this,int param_1,int param_2,int param_3,
          CharacterSet *param_4)

{
  uint uVar1;
  CharacterSet *this_00;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  if (param_2 == -1) {
    fVar2 = 1.0;
  }
  else {
    this[0x76] = (PedestrianAnimationBlender)0x1;
    fVar2 = (float)MathUtil::getRandom();
    *(float *)(this + 0x60) = fVar2;
    *(float *)(this + 100) = 1.0 - fVar2;
  }
  uVar4 = *(ulong *)(param_4 + 0x54);
  *(CharacterSet **)(this + 0x58) = param_4;
  *(float *)(this + 4) = fVar2;
  *(float *)(this + 8) = fVar2;
  *(float *)this = fVar2;
  this[0x75] = (PedestrianAnimationBlender)0x0;
  *(ulong *)(param_4 + 0x54) = uVar4 | 0x400000004;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x11) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  this[0x34] = (PedestrianAnimationBlender)0x0;
  CharacterSet::enable(param_4,0);
  CharacterSet::disable(*(CharacterSet **)(this + 0x58),1);
  CharacterSet::assignClip(*(CharacterSet **)(this + 0x58),0,param_1);
  CharacterSet::assignClip(*(CharacterSet **)(this + 0x58),1,param_3);
  CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),0,*(float *)(this + 0x60));
  CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),1,0.0);
  if (this[0x76] != (PedestrianAnimationBlender)0x0) {
    this_00 = *(CharacterSet **)(this + 0x58);
    uVar3 = *(undefined4 *)(this + 100);
    uVar1 = *(uint *)(this_00 + 0x5c);
    *(undefined4 *)(this + 4) = uVar3;
    *(undefined4 *)(this + 8) = uVar3;
    *(undefined4 *)this = uVar3;
    *(uint *)(this_00 + 0x5c) = uVar1 | 4;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x11) = 0;
    CharacterSet::enable(this_00,2);
    CharacterSet::assignClip(*(CharacterSet **)(this + 0x58),2,param_2);
    CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),2,*(float *)(this + 100));
    return;
  }
  return;
}


