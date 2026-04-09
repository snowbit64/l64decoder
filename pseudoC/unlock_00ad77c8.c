// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad77c8
// Size: 12 bytes
// Signature: undefined __cdecl unlock(ICommandBuffer * param_1)


/* VulkanStagingBuffer::unlock(ICommandBuffer*) */

void VulkanStagingBuffer::unlock(ICommandBuffer *param_1)

{
  param_1[0xc] = (ICommandBuffer)0x0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


