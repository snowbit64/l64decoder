// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStagingBuffer
// Entry Point: 00ab7408
// Size: 48 bytes
// Signature: undefined createStagingBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::createStagingBuffer() */

VulkanStagingBuffer * VulkanRenderDevice::createStagingBuffer(void)

{
  long in_x0;
  VulkanStagingBuffer *this;
  
  *(undefined4 *)(in_x0 + 0x3b0) = 0;
  this = (VulkanStagingBuffer *)operator_new(0x20);
                    /* try { // try from 00ab7424 to 00ab7427 has its CatchHandler @ 00ab7438 */
  VulkanStagingBuffer::VulkanStagingBuffer(this);
  return this;
}


