// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferAllocationType
// Entry Point: 00ac1cd8
// Size: 96 bytes
// Signature: undefined __cdecl getBufferAllocationType(BUFFER_TYPE param_1, MEMORY_TYPE param_2)


/* VulkanResourceAllocator::getBufferAllocationType(VulkanResourceAllocator::BUFFER_TYPE,
   VulkanMemoryAllocator::MEMORY_TYPE) */

BUFFER_TYPE
VulkanResourceAllocator::getBufferAllocationType(BUFFER_TYPE param_1,MEMORY_TYPE param_2)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (3 < param_2) {
      return 6;
    }
    puVar1 = &DAT_004c4e10;
    break;
  case 4:
  case 5:
    if (3 < param_2) {
      return 6;
    }
    puVar1 = &DAT_004c40a0;
    break;
  case 6:
    return 6;
  case 7:
    goto switchD_00ac1cf8_caseD_7;
  default:
    return 8;
  }
  param_1 = *(BUFFER_TYPE *)(puVar1 + (long)(int)param_2 * 4);
switchD_00ac1cf8_caseD_7:
  return param_1;
}


