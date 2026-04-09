// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fadeOut
// Entry Point: 00704618
// Size: 24 bytes
// Signature: undefined __thiscall fadeOut(AnimationTrack * this, float param_1, float param_2)


/* AnimalAnimationSystem::AnimationTrack::fadeOut(float, float) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::fadeOut(AnimationTrack *this,float param_1,float param_2)

{
  *(float *)(this + 0x18) = param_2;
  this[0x20] = (AnimationTrack)0x1;
  *(float *)(this + 0x1c) = -param_1;
  return;
}


