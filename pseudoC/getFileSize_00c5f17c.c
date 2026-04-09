// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileSize
// Entry Point: 00c5f17c
// Size: 12 bytes
// Signature: undefined getFileSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFileUtil::FileIterator::getFileSize() */

undefined8 NativeFileUtil::FileIterator::getFileSize(void)

{
  long in_x0;
  
  return *(undefined8 *)(*(long *)(in_x0 + 0x30) + 0x20);
}


