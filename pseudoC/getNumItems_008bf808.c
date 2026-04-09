// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumItems
// Entry Point: 008bf808
// Size: 28 bytes
// Signature: undefined getNumItems(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::getNumItems() */

int LocalFileListChannel::getNumItems(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 3) * -0x55555555;
}


