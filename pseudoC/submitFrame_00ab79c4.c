// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitFrame
// Entry Point: 00ab79c4
// Size: 84 bytes
// Signature: undefined submitFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::submitFrame() */

void VulkanRenderDevice::submitFrame(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(long *)(in_x0 + 0x5c0) != *(long *)(in_x0 + 0x5b8)) {
    uVar1 = 0;
    do {
      VulkanCommandBuffer::submitFrame();
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(in_x0 + 0x5c0) - *(long *)(in_x0 + 0x5b8) >> 3));
  }
  VulkanCommandBuffer::submitFrame();
  return;
}


