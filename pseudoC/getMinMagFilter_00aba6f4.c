// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinMagFilter
// Entry Point: 00aba6f4
// Size: 16 bytes
// Signature: undefined __cdecl getMinMagFilter(TEXTURE_FILTER param_1)


/* VulkanSamplerObject::getMinMagFilter(ISamplerObject::TEXTURE_FILTER) */

bool VulkanSamplerObject::getMinMagFilter(TEXTURE_FILTER param_1)

{
  return param_1 - 1 < 3;
}


