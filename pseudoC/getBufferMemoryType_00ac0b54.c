// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferMemoryType
// Entry Point: 00ac0b54
// Size: 32 bytes
// Signature: undefined __cdecl getBufferMemoryType(BUFFER_ALLOCATION_TYPE param_1)


/* VulkanResourceAllocator::getBufferMemoryType(VulkanResourceAllocator::BUFFER_ALLOCATION_TYPE) */

undefined4 VulkanResourceAllocator::getBufferMemoryType(BUFFER_ALLOCATION_TYPE param_1)

{
  if (param_1 < 8) {
    return (&DAT_005176e0)[(int)param_1];
  }
  return 4;
}


