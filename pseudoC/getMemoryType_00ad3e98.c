// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryType
// Entry Point: 00ad3e98
// Size: 16 bytes
// Signature: undefined __cdecl getMemoryType(uint param_1, RESOURCE_USAGE param_2, BUFFER_TYPE param_3, MEMORY_TYPE * param_4)


/* VulkanBufferResource::getMemoryType(unsigned int, IResource::RESOURCE_USAGE,
   VulkanBufferResource::BUFFER_TYPE, VulkanMemoryAllocator::MEMORY_TYPE&) */

undefined  [16]
VulkanBufferResource::getMemoryType
          (uint param_1,RESOURCE_USAGE param_2,BUFFER_TYPE param_3,MEMORY_TYPE *param_4)

{
  undefined4 *in_x4;
  undefined auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  *in_x4 = 1;
  auVar1._0_8_ = 1;
  return auVar1;
}


