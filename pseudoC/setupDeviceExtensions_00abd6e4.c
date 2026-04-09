// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupDeviceExtensions
// Entry Point: 00abd6e4
// Size: 1128 bytes
// Signature: undefined __cdecl setupDeviceExtensions(VkDevice_T * param_1, uint * param_2, uint param_3)


/* VulkanExtensionUtil::setupDeviceExtensions(VkDevice_T*, unsigned int&, unsigned int) */

void VulkanExtensionUtil::setupDeviceExtensions(VkDevice_T *param_1,uint *param_2,uint param_3)

{
  if ((*(byte *)param_2 & 1) != 0) {
    vkCreateSwapchainKHR = (*vkGetDeviceProcAddr)(param_1,"vkCreateSwapchainKHR");
    vkDestroySwapchainKHR = (*vkGetDeviceProcAddr)(param_1,"vkDestroySwapchainKHR");
    vkGetSwapchainImagesKHR = (*vkGetDeviceProcAddr)(param_1,"vkGetSwapchainImagesKHR");
    vkAcquireNextImageKHR = (*vkGetDeviceProcAddr)(param_1,"vkAcquireNextImageKHR");
    vkQueuePresentKHR = (*vkGetDeviceProcAddr)(param_1,"vkQueuePresentKHR");
    if (0x400fff < param_3) {
      vkGetDeviceGroupPresentCapabilitiesKHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetDeviceGroupPresentCapabilitiesKHR");
      vkGetDeviceGroupSurfacePresentModesKHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetDeviceGroupSurfacePresentModesKHR");
      vkAcquireNextImage2KHR = (*vkGetDeviceProcAddr)(param_1,"vkAcquireNextImage2KHR");
    }
  }
  if ((*(byte *)param_2 >> 1 & 1) != 0) {
    if (0x400fff < param_3) {
      vkGetImageMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetImageMemoryRequirements2");
      vkGetBufferMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetBufferMemoryRequirements2");
      vkGetImageSparseMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetImageSparseMemoryRequirements2");
    }
    if (vkGetImageMemoryRequirements2KHR == 0) {
      vkGetImageMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetImageMemoryRequirements2KHR");
      vkGetBufferMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetBufferMemoryRequirements2KHR");
      vkGetImageSparseMemoryRequirements2KHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetImageSparseMemoryRequirements2KHR");
      if (vkGetImageMemoryRequirements2KHR == 0) {
        *param_2 = *param_2 & 0xfffffffd;
      }
    }
  }
  if ((*(byte *)param_2 >> 3 & 1) != 0) {
    if (param_3 < 0x401000) {
      if (vkTrimCommandPoolKHR != 0) goto LAB_00abd9a0;
    }
    else {
      vkTrimCommandPoolKHR = (*vkGetDeviceProcAddr)(param_1,"vkTrimCommandPool");
      if (vkTrimCommandPoolKHR != 0) goto LAB_00abd9a0;
      vkTrimCommandPoolKHR = 0;
    }
    vkTrimCommandPoolKHR = (*vkGetDeviceProcAddr)(param_1,"vkTrimCommandPoolKHR");
    if (vkTrimCommandPoolKHR == 0) {
      *param_2 = *param_2 & 0xfffffff7;
    }
  }
LAB_00abd9a0:
  if ((*(byte *)param_2 >> 6 & 1) != 0) {
    if (0x401fff < param_3) {
      vkCmdBeginRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdBeginRenderPass2");
      vkCmdEndRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdEndRenderPass2");
      vkCmdNextSubpass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdNextSubpass2");
      vkCreateRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCreateRenderPass2");
    }
    if (vkCmdBeginRenderPass2KHR == 0) {
      vkCmdBeginRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdBeginRenderPass2KHR");
      vkCmdEndRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdEndRenderPass2KHR");
      vkCmdNextSubpass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCmdNextSubpass2KHR");
      vkCreateRenderPass2KHR = (*vkGetDeviceProcAddr)(param_1,"vkCreateRenderPass2KHR");
      if (vkCmdBeginRenderPass2KHR == 0) {
        *param_2 = *param_2 & 0xffffffbf;
      }
    }
  }
  if (*(char *)param_2 < '\0') {
    if (vkGetPhysicalDeviceFragmentShadingRatesKHR == 0) {
      vkGetPhysicalDeviceFragmentShadingRatesKHR =
           (*vkGetDeviceProcAddr)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
    }
    vkCmdSetFragmentShadingRateKHR =
         (*vkGetDeviceProcAddr)(param_1,"vkCmdSetFragmentShadingRateKHR");
  }
  return;
}


