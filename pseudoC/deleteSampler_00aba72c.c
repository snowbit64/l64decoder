// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteSampler
// Entry Point: 00aba72c
// Size: 32 bytes
// Signature: undefined __cdecl deleteSampler(VkSampler_T * param_1, VkDevice_T * param_2)


/* VulkanSamplerObject::deleteSampler(VkSampler_T*, VkDevice_T*) */

void VulkanSamplerObject::deleteSampler(VkSampler_T *param_1,VkDevice_T *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aba748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkDestroySampler)(param_2,param_1,0);
  return;
}


