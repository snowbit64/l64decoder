// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteBlendState
// Entry Point: 00aba49c
// Size: 16 bytes
// Signature: undefined __cdecl deleteBlendState(VkPipelineColorBlendStateCreateInfo * param_1)


/* VulkanBlendState::deleteBlendState(VkPipelineColorBlendStateCreateInfo&) */

void VulkanBlendState::deleteBlendState(VkPipelineColorBlendStateCreateInfo *param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}


