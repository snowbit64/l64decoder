// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAnimation
// Entry Point: 0070451c
// Size: 228 bytes
// Signature: undefined __thiscall setAnimation(AnimationTrack * this, uint param_1, float param_2, bool param_3, float param_4)


/* AnimalAnimationSystem::AnimationTrack::setAnimation(unsigned int, float, bool, float) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::setAnimation
          (AnimationTrack *this,uint param_1,float param_2,bool param_3,float param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  this[0x40] = (AnimationTrack)param_3;
  this[0x14] = (AnimationTrack)0x0;
  this[0x41] = (AnimationTrack)0x1;
  this[0x20] = (AnimationTrack)0x0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(float *)(this + 0x2c) = param_4;
  CharacterSet::getClip(*(CharacterSet **)this,param_1);
  uVar2 = Clip::getDuration();
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x50);
  CharacterSet::assignClip(*(CharacterSet **)this,*(uint *)(this + 8),param_1);
  CharacterSet::enable(*(CharacterSet **)this,*(uint *)(this + 8));
  CharacterSet::setTime(*(CharacterSet **)this,*(uint *)(this + 8),param_2);
  CharacterSet::setBlendWeight(*(CharacterSet **)this,*(uint *)(this + 8),1.0);
  CharacterSet::setSpeedScale(*(CharacterSet **)this,*(uint *)(this + 8),param_4);
  this[0x42] = (AnimationTrack)0x1;
  lVar1 = *(long *)this + (ulong)*(uint *)(this + 8) * 4;
  *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffffb | (uint)(byte)this[0x40] << 2;
  return;
}


