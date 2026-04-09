// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferSize
// Entry Point: 00b0eb08
// Size: 12 bytes
// Signature: undefined getBufferSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioBuffer::getBufferSize() const */

int SoftAudioBuffer::getBufferSize(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x14) * *(int *)(in_x0 + 0x18);
}


