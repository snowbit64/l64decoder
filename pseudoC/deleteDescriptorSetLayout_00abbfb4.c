// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteDescriptorSetLayout
// Entry Point: 00abbfb4
// Size: 32 bytes
// Signature: undefined __cdecl deleteDescriptorSetLayout(VkDescriptorSetLayout_T * param_1, VkDevice_T * param_2)


/* VulkanProgramObject::deleteDescriptorSetLayout(VkDescriptorSetLayout_T*, VkDevice_T*) */

void VulkanProgramObject::deleteDescriptorSetLayout
               (VkDescriptorSetLayout_T *param_1,VkDevice_T *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00abbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkDestroyDescriptorSetLayout)(param_2,param_1,0);
  return;
}


