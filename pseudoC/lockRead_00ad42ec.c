// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockRead
// Entry Point: 00ad42ec
// Size: 8 bytes
// Signature: undefined __cdecl lockRead(VulkanCommandBuffer * param_1, uint param_2, uint param_3)


/* VulkanBufferResource::lockRead(VulkanCommandBuffer*, unsigned int, unsigned int) */

undefined  [16]
VulkanBufferResource::lockRead(VulkanCommandBuffer *param_1,uint param_2,uint param_3)

{
  return ZEXT416(param_2) << 0x40;
}


