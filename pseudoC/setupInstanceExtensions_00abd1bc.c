// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupInstanceExtensions
// Entry Point: 00abd1bc
// Size: 1320 bytes
// Signature: undefined __cdecl setupInstanceExtensions(VkInstance_T * param_1, uint * param_2, uint param_3)


/* VulkanExtensionUtil::setupInstanceExtensions(VkInstance_T*, unsigned int&, unsigned int) */

void VulkanExtensionUtil::setupInstanceExtensions(VkInstance_T *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)param_2 & 1) != 0) {
    vkDestroySurfaceKHR = (*vkGetInstanceProcAddr)(param_1,"vkDestroySurfaceKHR");
    vkGetPhysicalDeviceSurfaceSupportKHR =
         (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR =
         (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    vkGetPhysicalDeviceSurfaceFormatsKHR =
         (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
    vkGetPhysicalDeviceSurfacePresentModesKHR =
         (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
  }
  vkCreateAndroidSurfaceKHR = (*vkGetInstanceProcAddr)(param_1,"vkCreateAndroidSurfaceKHR");
  uVar1 = *param_2;
  if ((uVar1 >> 2 & 1) != 0) {
    vkSetDebugUtilsObjectNameEXT = (*vkGetInstanceProcAddr)(param_1,"vkSetDebugUtilsObjectNameEXT");
    vkSetDebugUtilsObjectTagEXT = (*vkGetInstanceProcAddr)(param_1,"vkSetDebugUtilsObjectTagEXT");
    vkQueueBeginDebugUtilsLabelEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkQueueBeginDebugUtilsLabelEXT");
    vkQueueEndDebugUtilsLabelEXT = (*vkGetInstanceProcAddr)(param_1,"vkQueueEndDebugUtilsLabelEXT");
    vkQueueInsertDebugUtilsLabelEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkQueueInsertDebugUtilsLabelEXT");
    vkCmdBeginDebugUtilsLabelEXT = (*vkGetInstanceProcAddr)(param_1,"vkCmdBeginDebugUtilsLabelEXT");
    vkCmdEndDebugUtilsLabelEXT = (*vkGetInstanceProcAddr)(param_1,"vkCmdEndDebugUtilsLabelEXT");
    vkCmdInsertDebugUtilsLabelEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkCmdInsertDebugUtilsLabelEXT");
    vkCreateDebugUtilsMessengerEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkCreateDebugUtilsMessengerEXT");
    vkDestroyDebugUtilsMessengerEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkDestroyDebugUtilsMessengerEXT");
    vkSubmitDebugUtilsMessageEXT = (*vkGetInstanceProcAddr)(param_1,"vkSubmitDebugUtilsMessageEXT");
    uVar1 = *param_2;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    vkCreateDebugReportCallbackEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkCreateDebugReportCallbackEXT");
    vkDestroyDebugReportCallbackEXT =
         (*vkGetInstanceProcAddr)(param_1,"vkDestroyDebugReportCallbackEXT");
    vkDebugReportMessageEXT = (*vkGetInstanceProcAddr)(param_1,"vkDebugReportMessageEXT");
    uVar1 = *param_2;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if (0x400fff < param_3) {
      vkGetPhysicalDeviceFeatures2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures2");
      vkGetPhysicalDeviceFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties2");
      vkGetPhysicalDeviceImageFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceImageFormatProperties2");
      vkGetPhysicalDeviceMemoryProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties2");
      vkGetPhysicalDeviceProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties2");
      vkGetPhysicalDeviceQueueFamilyProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
      vkGetPhysicalDeviceSparseImageFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties2");
      vkGetPhysicalDeviceFragmentShadingRatesKHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
    }
    if (vkGetPhysicalDeviceFeatures2KHR == 0) {
      vkGetPhysicalDeviceFeatures2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures2KHR");
      vkGetPhysicalDeviceFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties2KHR");
      vkGetPhysicalDeviceImageFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceImageFormatProperties2KHR");
      vkGetPhysicalDeviceMemoryProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties2KHR");
      vkGetPhysicalDeviceProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties2KHR");
      vkGetPhysicalDeviceQueueFamilyProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2KHR");
      vkGetPhysicalDeviceSparseImageFormatProperties2KHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
      vkGetPhysicalDeviceFragmentShadingRatesKHR =
           (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
      if (vkGetPhysicalDeviceFeatures2KHR == 0) {
        *param_2 = *param_2 & 0xffffff7f;
      }
    }
  }
  if (0x400fff < param_3) {
    vkGetPhysicalDevicePresentRectanglesKHR =
         (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDevicePresentRectanglesKHR");
  }
  return;
}


