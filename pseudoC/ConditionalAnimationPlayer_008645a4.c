// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConditionalAnimationPlayer
// Entry Point: 008645a4
// Size: 88 bytes
// Signature: undefined __thiscall ConditionalAnimationPlayer(ConditionalAnimationPlayer * this)


/* ConditionalAnimationPlayer::ConditionalAnimationPlayer() */

void __thiscall
ConditionalAnimationPlayer::ConditionalAnimationPlayer(ConditionalAnimationPlayer *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 008645c8 to 008645cb has its CatchHandler @ 00864610 */
  ConditionalAnimationTracks::ConditionalAnimationTracks
            ((ConditionalAnimationTracks *)(this + 0x20));
  *(undefined8 *)(this + 0x58) = 0;
  *(ConditionalAnimationPlayer **)(this + 0x50) = this + 0x58;
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 008645e4 to 008645e7 has its CatchHandler @ 008645fc */
  ConditionalAnimationInformation::ConditionalAnimationInformation
            ((ConditionalAnimationInformation *)(this + 0x68));
  *(undefined8 *)this = 0;
  return;
}


