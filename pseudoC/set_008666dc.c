// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 008666dc
// Size: 8 bytes
// Signature: undefined __thiscall set(Track * this, int param_1, int param_2)


/* ConditionalAnimationTracks::Track::set(int, int) */

void __thiscall ConditionalAnimationTracks::Track::set(Track *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


