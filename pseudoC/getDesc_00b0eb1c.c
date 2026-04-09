// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDesc
// Entry Point: 00b0eb1c
// Size: 24 bytes
// Signature: undefined getDesc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioBuffer::getDesc() const */

long SoftAudioBuffer::getDesc(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x29;
  if ((*(byte *)(in_x0 + 0x28) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x38);
  }
  return lVar1;
}


