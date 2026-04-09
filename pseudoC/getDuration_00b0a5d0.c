// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 00b0a5d0
// Size: 32 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullAudioBuffer::getDuration() const */

float NullAudioBuffer::getDuration(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x14));
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(in_x0 + 0x10));
  return (fVar1 / fVar2) * 1000.0;
}


