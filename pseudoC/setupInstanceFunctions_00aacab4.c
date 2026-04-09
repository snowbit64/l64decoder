// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupInstanceFunctions
// Entry Point: 00aacab4
// Size: 352 bytes
// Signature: undefined __cdecl setupInstanceFunctions(VkInstance_T * param_1)


/* VulkanLoaderUtil::setupInstanceFunctions(VkInstance_T*) */

void VulkanLoaderUtil::setupInstanceFunctions(VkInstance_T *param_1)

{
  vkCreateDevice = (*vkGetInstanceProcAddr)(param_1,"vkCreateDevice");
  vkDestroyInstance = (*vkGetInstanceProcAddr)(param_1,"vkDestroyInstance");
  vkEnumerateDeviceExtensionProperties =
       (*vkGetInstanceProcAddr)(param_1,"vkEnumerateDeviceExtensionProperties");
  vkEnumeratePhysicalDevices = (*vkGetInstanceProcAddr)(param_1,"vkEnumeratePhysicalDevices");
  vkGetDeviceProcAddr = (*vkGetInstanceProcAddr)(param_1,"vkGetDeviceProcAddr");
  vkGetPhysicalDeviceFeatures = (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures");
  vkGetPhysicalDeviceFormatProperties =
       (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties");
  vkGetPhysicalDeviceMemoryProperties =
       (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties");
  vkGetPhysicalDeviceProperties = (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties");
  vkGetPhysicalDeviceQueueFamilyProperties =
       (*vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
  return;
}


