// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishRenderPass
// Entry Point: 00acd8b8
// Size: 88 bytes
// Signature: undefined finishRenderPass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::finishRenderPass() */

void VulkanCommandBuffer::finishRenderPass(void)

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


