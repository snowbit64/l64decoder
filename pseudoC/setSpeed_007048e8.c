// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeed
// Entry Point: 007048e8
// Size: 20 bytes
// Signature: undefined __thiscall setSpeed(AnimationTrack * this, float param_1)


/* AnimalAnimationSystem::AnimationTrack::setSpeed(float) */

void __thiscall AnimalAnimationSystem::AnimationTrack::setSpeed(AnimationTrack *this,float param_1)

{
  *(float *)(this + 0x2c) = param_1;
  CharacterSet::setSpeedScale(*(CharacterSet **)this,*(uint *)(this + 8),param_1);
  return;
}


