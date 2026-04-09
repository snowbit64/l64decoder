// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferUsage
// Entry Point: 00ac0b34
// Size: 32 bytes
// Signature: undefined __cdecl getBufferUsage(BUFFER_ALLOCATION_TYPE param_1)


/* VulkanResourceAllocator::getBufferUsage(VulkanResourceAllocator::BUFFER_ALLOCATION_TYPE) */

undefined4 VulkanResourceAllocator::getBufferUsage(BUFFER_ALLOCATION_TYPE param_1)

{
  if (param_1 < 8) {
    return (&DAT_00517640)[(int)param_1];
  }
  return 0;
}


