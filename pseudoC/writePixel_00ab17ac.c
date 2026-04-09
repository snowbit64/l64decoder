// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writePixel
// Entry Point: 00ab17ac
// Size: 8 bytes
// Signature: undefined __cdecl writePixel(uint param_1, uint param_2, void * param_3, uint param_4)


/* VulkanTextureObject::writePixel(unsigned int, unsigned int, void const*, unsigned int) */

undefined  [16]
VulkanTextureObject::writePixel(uint param_1,uint param_2,void *param_3,uint param_4)

{
  return ZEXT416(param_2) << 0x40;
}


