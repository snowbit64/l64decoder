// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 00704454
// Size: 52 bytes
// Signature: undefined __thiscall isPlaying(AnimationTrack * this, uint param_1)


/* AnimalAnimationSystem::AnimationTrack::isPlaying(unsigned int) */

bool __thiscall AnimalAnimationSystem::AnimationTrack::isPlaying(AnimationTrack *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = CharacterSet::getAssignedClip(*(CharacterSet **)this,*(uint *)(this + 8));
  return uVar1 == param_1;
}


