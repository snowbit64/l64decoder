// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireTexelBuffer
// Entry Point: 00aafca0
// Size: 36 bytes
// Signature: undefined acquireTexelBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::acquireTexelBuffer() */

undefined8 VulkanTextureObject::acquireTexelBuffer(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x10);
  lVar1 = *(long *)(lVar2 + 0x68) + 8;
  if (*(char *)(lVar2 + 0x60) != '\0') {
    lVar1 = lVar2 + 0x70;
  }
  return *(undefined8 *)(lVar1 + 8);
}


