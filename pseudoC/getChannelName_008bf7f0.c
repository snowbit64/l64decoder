// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChannelName
// Entry Point: 008bf7f0
// Size: 24 bytes
// Signature: undefined getChannelName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::getChannelName() */

long LocalFileListChannel::getChannelName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x51;
  if ((*(byte *)(in_x0 + 0x50) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x60);
  }
  return lVar1;
}


