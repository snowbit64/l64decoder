// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanupBlitShader
// Entry Point: 00acb020
// Size: 160 bytes
// Signature: undefined cleanupBlitShader(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::cleanupBlitShader() */

void VulkanCommandBuffer::cleanupBlitShader(void)

{
  long in_x0;
  
  (*vkDestroySampler)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),*(undefined8 *)(in_x0 + 0xb38)
                      ,0);
  *(undefined8 *)(in_x0 + 0xb38) = 0;
  if (*(long **)(in_x0 + 0xb30) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb30) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb30) = 0;
  if (*(long **)(in_x0 + 0xb28) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb28) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb28) = 0;
  if (*(long **)(in_x0 + 0xb20) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb20) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb20) = 0;
  if (*(long **)(in_x0 + 0xb18) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb18) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb18) = 0;
  return;
}


