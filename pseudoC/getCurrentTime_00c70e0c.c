// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentTime
// Entry Point: 00c70e0c
// Size: 36 bytes
// Signature: undefined getCurrentTime(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoPlayer::getCurrentTime() const */

float VideoPlayer::getCurrentTime(void)

{
  long in_x0;
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(in_x0 + 8);
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x10c));
  return (float)(ulong)(uint)(*(int *)(lVar1 + 0x110) * *(int *)(lVar1 + 0x118)) / fVar2;
}


