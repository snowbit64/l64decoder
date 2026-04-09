// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValid
// Entry Point: 00c5f140
// Size: 20 bytes
// Signature: undefined isValid(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFileUtil::FileIterator::isValid() const */

bool NativeFileUtil::FileIterator::isValid(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x30) != *(long *)(in_x0 + 0x20);
}


