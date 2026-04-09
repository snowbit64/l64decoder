// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAddressMode
// Entry Point: 00aba714
// Size: 24 bytes
// Signature: undefined __cdecl getAddressMode(TEXTURE_ADDRESSING_MODE param_1)


/* VulkanSamplerObject::getAddressMode(ISamplerObject::TEXTURE_ADDRESSING_MODE) */

undefined4 VulkanSamplerObject::getAddressMode(TEXTURE_ADDRESSING_MODE param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


