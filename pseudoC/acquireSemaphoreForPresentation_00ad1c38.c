// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireSemaphoreForPresentation
// Entry Point: 00ad1c38
// Size: 60 bytes
// Signature: undefined acquireSemaphoreForPresentation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::acquireSemaphoreForPresentation() */

undefined8 VulkanCommandBuffer::acquireSemaphoreForPresentation(void)

{
  long in_x0;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x5f0);
  if ((*(char *)(in_x0 + 0xa59) != '\0') && (*(long *)(in_x0 + 0xa80) != 0)) {
    *(undefined *)(lVar1 + 0x21) = 1;
    return *(undefined8 *)(lVar1 + 0x10);
  }
  *(undefined *)(lVar1 + 0x22) = 1;
  return *(undefined8 *)(lVar1 + 0x18);
}


