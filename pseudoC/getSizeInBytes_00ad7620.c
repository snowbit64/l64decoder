// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSizeInBytes
// Entry Point: 00ad7620
// Size: 12 bytes
// Signature: undefined getSizeInBytes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanStructBuffer::getSizeInBytes() const */

int VulkanStructBuffer::getSizeInBytes(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x1c) * *(int *)(in_x0 + 0x18);
}


