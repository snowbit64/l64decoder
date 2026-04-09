// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferType
// Entry Point: 00ad3ea8
// Size: 32 bytes
// Signature: undefined __cdecl getBufferType(BUFFER_TYPE param_1)


/* VulkanBufferResource::getBufferType(VulkanBufferResource::BUFFER_TYPE) */

undefined4 VulkanBufferResource::getBufferType(BUFFER_TYPE param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_00523930 + (long)(int)param_1 * 4);
  }
  return 8;
}


