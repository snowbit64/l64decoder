// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillDefaultStencilOpState
// Entry Point: 00ad7c94
// Size: 16 bytes
// Signature: undefined __cdecl fillDefaultStencilOpState(VkStencilOpState * param_1)


/* VulkanDepthStencilState::fillDefaultStencilOpState(VkStencilOpState&) */

void VulkanDepthStencilState::fillDefaultStencilOpState(VkStencilOpState *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


