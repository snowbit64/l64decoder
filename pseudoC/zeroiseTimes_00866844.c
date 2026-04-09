// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zeroiseTimes
// Entry Point: 00866844
// Size: 184 bytes
// Signature: undefined __thiscall zeroiseTimes(ConditionalAnimationTracks * this, CharacterSet * param_1)


/* ConditionalAnimationTracks::zeroiseTimes(CharacterSet&) */

void __thiscall
ConditionalAnimationTracks::zeroiseTimes(ConditionalAnimationTracks *this,CharacterSet *param_1)

{
  if (-1 < *(int *)this) {
    CharacterSet::setTime(param_1,0,0.0);
  }
  if (-1 < *(int *)(this + 8)) {
    CharacterSet::setTime(param_1,1,0.0);
  }
  if (-1 < *(int *)(this + 0x10)) {
    CharacterSet::setTime(param_1,2,0.0);
  }
  if (-1 < *(int *)(this + 0x18)) {
    CharacterSet::setTime(param_1,3,0.0);
  }
  if (-1 < *(int *)(this + 0x20)) {
    CharacterSet::setTime(param_1,4,0.0);
  }
  if (-1 < *(int *)(this + 0x28)) {
    CharacterSet::setTime(param_1,5,0.0);
    return;
  }
  return;
}


