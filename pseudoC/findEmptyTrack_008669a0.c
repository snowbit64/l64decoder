// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findEmptyTrack
// Entry Point: 008669a0
// Size: 100 bytes
// Signature: undefined findEmptyTrack(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationTracks::findEmptyTrack() const */

undefined4 ConditionalAnimationTracks::findEmptyTrack(void)

{
  int *in_x0;
  undefined4 uVar1;
  
  if (*in_x0 < 0) {
    return 0;
  }
  if (in_x0[2] < 0) {
    return 1;
  }
  if (in_x0[4] < 0) {
    return 2;
  }
  if (-1 < in_x0[6]) {
    if (-1 < in_x0[8]) {
      uVar1 = 5;
      if (-1 < in_x0[10]) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
    return 4;
  }
  return 3;
}


