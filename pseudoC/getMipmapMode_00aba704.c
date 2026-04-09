// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMipmapMode
// Entry Point: 00aba704
// Size: 16 bytes
// Signature: undefined __cdecl getMipmapMode(TEXTURE_FILTER param_1)


/* VulkanSamplerObject::getMipmapMode(ISamplerObject::TEXTURE_FILTER) */

bool VulkanSamplerObject::getMipmapMode(TEXTURE_FILTER param_1)

{
  return (param_1 & 0xfffffffe) == 2;
}


