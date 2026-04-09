// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanRasterizerState
// Entry Point: 00ad7ca4
// Size: 28 bytes
// Signature: undefined __thiscall VulkanRasterizerState(VulkanRasterizerState * this, VkPipelineRasterizationStateCreateInfo * param_1, uint param_2)


/* VulkanRasterizerState::VulkanRasterizerState(VkPipelineRasterizationStateCreateInfo*, unsigned
   int) */

void __thiscall
VulkanRasterizerState::VulkanRasterizerState
          (VulkanRasterizerState *this,VkPipelineRasterizationStateCreateInfo *param_1,uint param_2)

{
  *(uint *)(this + 8) = param_2;
  *(VkPipelineRasterizationStateCreateInfo **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__VulkanRasterizerState_00fe6c30;
  return;
}


