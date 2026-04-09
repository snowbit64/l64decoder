// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00704630
// Size: 72 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::AnimationTrack::stop() */

void AnimalAnimationSystem::AnimationTrack::stop(void)

{
  CharacterSet **in_x0;
  
  if (*(uint *)(in_x0 + 1) != 0xffffffff) {
    *(undefined *)((long)in_x0 + 0x41) = 0;
    CharacterSet::clearClip(*in_x0,*(uint *)(in_x0 + 1));
    CharacterSet::disable(*in_x0,*(uint *)(in_x0 + 1));
    return;
  }
  return;
}


