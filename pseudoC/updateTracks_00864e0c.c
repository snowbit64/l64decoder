// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTracks
// Entry Point: 00864e0c
// Size: 24 bytes
// Signature: undefined __thiscall updateTracks(ConditionalAnimationPlayer * this, ConditionalAnimationInformation * param_1, vector * param_2)


/* ConditionalAnimationPlayer::updateTracks(ConditionalAnimationInformation const&,
   std::__ndk1::vector<ConditionalAnimationTracks::Track,
   std::__ndk1::allocator<ConditionalAnimationTracks::Track> > const&) */

void __thiscall
ConditionalAnimationPlayer::updateTracks
          (ConditionalAnimationPlayer *this,ConditionalAnimationInformation *param_1,vector *param_2
          )

{
  ConditionalAnimationTracks::update
            ((ConditionalAnimationTracks *)(this + 0x20),param_1,*(CharacterSet **)this,param_2,
             (vector *)(this + 8));
  return;
}


