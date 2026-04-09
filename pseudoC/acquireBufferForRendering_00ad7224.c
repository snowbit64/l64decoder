// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireBufferForRendering
// Entry Point: 00ad7224
// Size: 32 bytes
// Signature: undefined acquireBufferForRendering(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanIndexBuffer::acquireBufferForRendering() */

long VulkanIndexBuffer::acquireBufferForRendering(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 8);
  lVar1 = *(long *)(lVar2 + 0x68) + 8;
  if (*(char *)(lVar2 + 0x60) != '\0') {
    lVar1 = lVar2 + 0x70;
  }
  return lVar1;
}


