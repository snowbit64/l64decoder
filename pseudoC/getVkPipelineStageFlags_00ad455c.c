// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVkPipelineStageFlags
// Entry Point: 00ad455c
// Size: 72 bytes
// Signature: undefined __cdecl getVkPipelineStageFlags(BUFFER_TYPE param_1, BUFFER_LAYOUT param_2, uint param_3)


/* VulkanBufferResource::getVkPipelineStageFlags(VulkanResourceAllocator::BUFFER_TYPE,
   VulkanBufferResource::BUFFER_LAYOUT, unsigned int) */

uint VulkanBufferResource::getVkPipelineStageFlags
               (BUFFER_TYPE param_1,BUFFER_LAYOUT param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(s_bufferLayoutInfo + (ulong)param_2 * 8 + (ulong)param_1 * 0x28) & 0xfffffff7;
  if ((param_3 & 2) != 0) {
    uVar2 = *(uint *)(s_bufferLayoutInfo + (ulong)param_2 * 8 + (ulong)param_1 * 0x28);
  }
  uVar1 = uVar2 & 0xffffff7f;
  if ((param_3 & 4) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 & 0xfffff7ff;
  if ((param_3 & 8) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


