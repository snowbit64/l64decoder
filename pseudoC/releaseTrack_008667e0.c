// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseTrack
// Entry Point: 008667e0
// Size: 100 bytes
// Signature: undefined __thiscall releaseTrack(ConditionalAnimationTracks * this, CharacterSet * param_1, int param_2)


/* ConditionalAnimationTracks::releaseTrack(CharacterSet&, int) */

void __thiscall
ConditionalAnimationTracks::releaseTrack
          (ConditionalAnimationTracks *this,CharacterSet *param_1,int param_2)

{
  if (-1 < param_2) {
    *(undefined8 *)(this + (ulong)(uint)param_2 * 8) = 0xffffffffffffffff;
    CharacterSet::disable(param_1,param_2);
    CharacterSet::clearClip(param_1,param_2);
    CharacterSet::setBlendWeight(param_1,param_2,0.0);
    CharacterSet::setTime(param_1,param_2,0.0);
    return;
  }
  return;
}


