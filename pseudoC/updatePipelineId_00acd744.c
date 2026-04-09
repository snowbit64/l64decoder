// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePipelineId
// Entry Point: 00acd744
// Size: 48 bytes
// Signature: undefined __thiscall updatePipelineId(VulkanCommandBuffer * this, PIPELINE_TYPE param_1, uint param_2, uint param_3, uint param_4)


/* VulkanCommandBuffer::updatePipelineId(VulkanCommandBuffer::PIPELINE_TYPE, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
VulkanCommandBuffer::updatePipelineId
          (VulkanCommandBuffer *this,PIPELINE_TYPE param_1,uint param_2,uint param_3,uint param_4)

{
  *(ulong *)(this + (ulong)param_1 * 8 + 0x5f8) =
       *(ulong *)(this + (ulong)param_1 * 8 + 0x5f8) &
       (~(-1L << ((ulong)param_4 & 0x3f)) << ((ulong)param_3 & 0x3f) ^ 0xffffffffffffffffU) |
       (ulong)param_2 << ((ulong)param_3 & 0x3f);
  return;
}


