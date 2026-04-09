// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 00b0eae4
// Size: 36 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioBuffer::getDuration() const */

float SoftAudioBuffer::getDuration(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x18));
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x10));
  return (fVar1 / fVar2) * 1000.0;
}


