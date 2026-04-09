// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deletePipelineLayout
// Entry Point: 00abc060
// Size: 32 bytes
// Signature: undefined __cdecl deletePipelineLayout(VkPipelineLayout_T * param_1, VkDevice_T * param_2)


/* VulkanProgramObject::deletePipelineLayout(VkPipelineLayout_T*, VkDevice_T*) */

void VulkanProgramObject::deletePipelineLayout(VkPipelineLayout_T *param_1,VkDevice_T *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00abc07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkDestroyPipelineLayout)(param_2,param_1,0);
  return;
}


