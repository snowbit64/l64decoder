// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanBlendState
// Entry Point: 00aba30c
// Size: 28 bytes
// Signature: undefined __thiscall VulkanBlendState(VulkanBlendState * this, VkPipelineColorBlendStateCreateInfo * param_1, uint param_2)


/* VulkanBlendState::VulkanBlendState(VkPipelineColorBlendStateCreateInfo*, unsigned int) */

void __thiscall
VulkanBlendState::VulkanBlendState
          (VulkanBlendState *this,VkPipelineColorBlendStateCreateInfo *param_1,uint param_2)

{
  *(uint *)(this + 8) = param_2;
  *(VkPipelineColorBlendStateCreateInfo **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__VulkanBlendState_00fe6150;
  return;
}


