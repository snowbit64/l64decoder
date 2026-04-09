// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 008666bc
// Size: 32 bytes
// Signature: undefined __thiscall operator==(Track * this, Track * param_1)


/* ConditionalAnimationTracks::Track::TEMPNAMEPLACEHOLDERVALUE(ConditionalAnimationTracks::Track
   const&) const */

bool __thiscall ConditionalAnimationTracks::Track::operator==(Track *this,Track *param_1)

{
  return *(int *)this == *(int *)param_1 && *(int *)(this + 4) == *(int *)(param_1 + 4);
}


