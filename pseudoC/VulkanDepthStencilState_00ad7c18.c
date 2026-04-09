// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanDepthStencilState
// Entry Point: 00ad7c18
// Size: 28 bytes
// Signature: undefined __thiscall VulkanDepthStencilState(VulkanDepthStencilState * this, VkPipelineDepthStencilStateCreateInfo * param_1, uint param_2)


/* VulkanDepthStencilState::VulkanDepthStencilState(VkPipelineDepthStencilStateCreateInfo*, unsigned
   int) */

void __thiscall
VulkanDepthStencilState::VulkanDepthStencilState
          (VulkanDepthStencilState *this,VkPipelineDepthStencilStateCreateInfo *param_1,uint param_2
          )

{
  *(uint *)(this + 8) = param_2;
  *(VkPipelineDepthStencilStateCreateInfo **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__VulkanDepthStencilState_00fe6be8;
  return;
}


