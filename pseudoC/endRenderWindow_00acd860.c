// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endRenderWindow
// Entry Point: 00acd860
// Size: 88 bytes
// Signature: undefined endRenderWindow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::endRenderWindow() */

void VulkanCommandBuffer::endRenderWindow(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x460) != '\0') {
    if (*(long *)(in_x0 + 0x618) == 0) {
      (*vkCmdBindPipeline)(*(undefined8 *)(in_x0 + 0x4b8),0,*(undefined8 *)(in_x0 + 0xb58));
    }
    endRenderPass();
    return;
  }
  return;
}


