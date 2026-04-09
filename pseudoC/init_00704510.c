// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00704510
// Size: 12 bytes
// Signature: undefined __thiscall init(AnimationTrack * this, CharacterSet * param_1, uint param_2)


/* AnimalAnimationSystem::AnimationTrack::init(CharacterSet*, unsigned int) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::init(AnimationTrack *this,CharacterSet *param_1,uint param_2)

{
  *(CharacterSet **)this = param_1;
  *(uint *)(this + 8) = param_2;
  return;
}


