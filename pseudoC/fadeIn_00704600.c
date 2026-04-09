// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fadeIn
// Entry Point: 00704600
// Size: 24 bytes
// Signature: undefined __thiscall fadeIn(AnimationTrack * this, float param_1, float param_2)


/* AnimalAnimationSystem::AnimationTrack::fadeIn(float, float) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::fadeIn(AnimationTrack *this,float param_1,float param_2)

{
  *(float *)(this + 0xc) = param_2;
  this[0x14] = (AnimationTrack)0x1;
  *(float *)(this + 0x10) = -param_1;
  return;
}


