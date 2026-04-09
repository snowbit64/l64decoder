// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserveTrack
// Entry Point: 0086690c
// Size: 148 bytes
// Signature: undefined __thiscall reserveTrack(ConditionalAnimationTracks * this, CharacterSet * param_1, Track * param_2)


/* ConditionalAnimationTracks::reserveTrack(CharacterSet&, ConditionalAnimationTracks::Track const&)
    */

uint __thiscall
ConditionalAnimationTracks::reserveTrack
          (ConditionalAnimationTracks *this,CharacterSet *param_1,Track *param_2)

{
  uint uVar1;
  
  if (*(int *)this < 0) {
    uVar1 = 0;
  }
  else if (*(int *)(this + 8) < 0) {
    uVar1 = 1;
  }
  else if (*(int *)(this + 0x10) < 0) {
    uVar1 = 2;
  }
  else if (*(int *)(this + 0x18) < 0) {
    uVar1 = 3;
  }
  else if (*(int *)(this + 0x20) < 0) {
    uVar1 = 4;
  }
  else {
    if (-1 < *(int *)(this + 0x28)) {
      return 0xffffffff;
    }
    uVar1 = 5;
  }
  *(undefined8 *)(this + (ulong)uVar1 * 8) = *(undefined8 *)param_2;
  CharacterSet::enable(param_1,uVar1);
  return uVar1;
}


