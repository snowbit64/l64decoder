// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Track
// Entry Point: 008666b4
// Size: 8 bytes
// Signature: undefined __thiscall Track(Track * this, int param_1, int param_2)


/* ConditionalAnimationTracks::Track::Track(int, int) */

void __thiscall ConditionalAnimationTracks::Track::Track(Track *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


