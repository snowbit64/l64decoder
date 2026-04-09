// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 00c70de8
// Size: 36 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoPlayer::getDuration() const */

float VideoPlayer::getDuration(void)

{
  long in_x0;
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(in_x0 + 8);
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x10c));
  return (float)(ulong)(uint)(*(int *)(lVar1 + 0x110) * *(int *)(lVar1 + 0x114)) / fVar2;
}


