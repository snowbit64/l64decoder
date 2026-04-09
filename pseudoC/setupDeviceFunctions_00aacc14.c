// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupDeviceFunctions
// Entry Point: 00aacc14
// Size: 2592 bytes
// Signature: undefined __cdecl setupDeviceFunctions(VkDevice_T * param_1)


/* VulkanLoaderUtil::setupDeviceFunctions(VkDevice_T*) */

void VulkanLoaderUtil::setupDeviceFunctions(VkDevice_T *param_1)

{
  vkAllocateCommandBuffers = (*vkGetDeviceProcAddr)(param_1,"vkAllocateCommandBuffers");
  vkAllocateDescriptorSets = (*vkGetDeviceProcAddr)(param_1,"vkAllocateDescriptorSets");
  vkAllocateMemory = (*vkGetDeviceProcAddr)(param_1,"vkAllocateMemory");
  vkBeginCommandBuffer = (*vkGetDeviceProcAddr)(param_1,"vkBeginCommandBuffer");
  vkBindBufferMemory = (*vkGetDeviceProcAddr)(param_1,"vkBindBufferMemory");
  vkBindImageMemory = (*vkGetDeviceProcAddr)(param_1,"vkBindImageMemory");
  vkCmdBeginRenderPass = (*vkGetDeviceProcAddr)(param_1,"vkCmdBeginRenderPass");
  vkCmdBindDescriptorSets = (*vkGetDeviceProcAddr)(param_1,"vkCmdBindDescriptorSets");
  vkCmdBindIndexBuffer = (*vkGetDeviceProcAddr)(param_1,"vkCmdBindIndexBuffer");
  vkCmdBindPipeline = (*vkGetDeviceProcAddr)(param_1,"vkCmdBindPipeline");
  vkCmdBindVertexBuffers = (*vkGetDeviceProcAddr)(param_1,"vkCmdBindVertexBuffers");
  vkCmdBlitImage = (*vkGetDeviceProcAddr)(param_1,"vkCmdBlitImage");
  vkCmdCopyBuffer = (*vkGetDeviceProcAddr)(param_1,"vkCmdCopyBuffer");
  vkCmdCopyBufferToImage = (*vkGetDeviceProcAddr)(param_1,"vkCmdCopyBufferToImage");
  vkCmdCopyImage = (*vkGetDeviceProcAddr)(param_1,"vkCmdCopyImage");
  vkCmdCopyImageToBuffer = (*vkGetDeviceProcAddr)(param_1,"vkCmdCopyImageToBuffer");
  vkCmdDispatch = (*vkGetDeviceProcAddr)(param_1,"vkCmdDispatch");
  vkCmdDraw = (*vkGetDeviceProcAddr)(param_1,"vkCmdDraw");
  vkCmdDrawIndexed = (*vkGetDeviceProcAddr)(param_1,"vkCmdDrawIndexed");
  vkCmdEndRenderPass = (*vkGetDeviceProcAddr)(param_1,"vkCmdEndRenderPass");
  vkCmdPipelineBarrier = (*vkGetDeviceProcAddr)(param_1,"vkCmdPipelineBarrier");
  vkCmdResetQueryPool = (*vkGetDeviceProcAddr)(param_1,"vkCmdResetQueryPool");
  vkCmdSetLineWidth = (*vkGetDeviceProcAddr)(param_1,"vkCmdSetLineWidth");
  vkCmdSetScissor = (*vkGetDeviceProcAddr)(param_1,"vkCmdSetScissor");
  vkCmdSetViewport = (*vkGetDeviceProcAddr)(param_1,"vkCmdSetViewport");
  vkCmdWriteTimestamp = (*vkGetDeviceProcAddr)(param_1,"vkCmdWriteTimestamp");
  vkCreateBuffer = (*vkGetDeviceProcAddr)(param_1,"vkCreateBuffer");
  vkCreateBufferView = (*vkGetDeviceProcAddr)(param_1,"vkCreateBufferView");
  vkCreateCommandPool = (*vkGetDeviceProcAddr)(param_1,"vkCreateCommandPool");
  vkCreateComputePipelines = (*vkGetDeviceProcAddr)(param_1,"vkCreateComputePipelines");
  vkCreateDescriptorPool = (*vkGetDeviceProcAddr)(param_1,"vkCreateDescriptorPool");
  vkCreateDescriptorSetLayout = (*vkGetDeviceProcAddr)(param_1,"vkCreateDescriptorSetLayout");
  vkCreateFence = (*vkGetDeviceProcAddr)(param_1,"vkCreateFence");
  vkCreateGraphicsPipelines = (*vkGetDeviceProcAddr)(param_1,"vkCreateGraphicsPipelines");
  vkCreateFramebuffer = (*vkGetDeviceProcAddr)(param_1,"vkCreateFramebuffer");
  vkCreateImage = (*vkGetDeviceProcAddr)(param_1,"vkCreateImage");
  vkCreateImageView = (*vkGetDeviceProcAddr)(param_1,"vkCreateImageView");
  vkCreatePipelineLayout = (*vkGetDeviceProcAddr)(param_1,"vkCreatePipelineLayout");
  vkCreateQueryPool = (*vkGetDeviceProcAddr)(param_1,"vkCreateQueryPool");
  vkCreateRenderPass = (*vkGetDeviceProcAddr)(param_1,"vkCreateRenderPass");
  vkCreateSampler = (*vkGetDeviceProcAddr)(param_1,"vkCreateSampler");
  vkCreateSemaphore = (*vkGetDeviceProcAddr)(param_1,"vkCreateSemaphore");
  vkCreateShaderModule = (*vkGetDeviceProcAddr)(param_1,"vkCreateShaderModule");
  vkDestroyBufferView = (*vkGetDeviceProcAddr)(param_1,"vkDestroyBufferView");
  vkDestroyBuffer = (*vkGetDeviceProcAddr)(param_1,"vkDestroyBuffer");
  vkDestroyCommandPool = (*vkGetDeviceProcAddr)(param_1,"vkDestroyCommandPool");
  vkDestroyDescriptorPool = (*vkGetDeviceProcAddr)(param_1,"vkDestroyDescriptorPool");
  vkDestroyDescriptorSetLayout = (*vkGetDeviceProcAddr)(param_1,"vkDestroyDescriptorSetLayout");
  vkDestroyDevice = (*vkGetDeviceProcAddr)(param_1,"vkDestroyDevice");
  vkDestroyFence = (*vkGetDeviceProcAddr)(param_1,"vkDestroyFence");
  vkDestroyFramebuffer = (*vkGetDeviceProcAddr)(param_1,"vkDestroyFramebuffer");
  vkDestroyImage = (*vkGetDeviceProcAddr)(param_1,"vkDestroyImage");
  vkDestroyImageView = (*vkGetDeviceProcAddr)(param_1,"vkDestroyImageView");
  vkDestroyPipeline = (*vkGetDeviceProcAddr)(param_1,"vkDestroyPipeline");
  vkDestroyPipelineLayout = (*vkGetDeviceProcAddr)(param_1,"vkDestroyPipelineLayout");
  vkDestroyQueryPool = (*vkGetDeviceProcAddr)(param_1,"vkDestroyQueryPool");
  vkDestroyRenderPass = (*vkGetDeviceProcAddr)(param_1,"vkDestroyRenderPass");
  vkDestroySampler = (*vkGetDeviceProcAddr)(param_1,"vkDestroySampler");
  vkDestroySemaphore = (*vkGetDeviceProcAddr)(param_1,"vkDestroySemaphore");
  vkDestroyShaderModule = (*vkGetDeviceProcAddr)(param_1,"vkDestroyShaderModule");
  vkCreatePipelineCache = (*vkGetDeviceProcAddr)(param_1,"vkCreatePipelineCache");
  vkDestroyPipelineCache = (*vkGetDeviceProcAddr)(param_1,"vkDestroyPipelineCache");
  vkEndCommandBuffer = (*vkGetDeviceProcAddr)(param_1,"vkEndCommandBuffer");
  vkFlushMappedMemoryRanges = (*vkGetDeviceProcAddr)(param_1,"vkFlushMappedMemoryRanges");
  vkFreeMemory = (*vkGetDeviceProcAddr)(param_1,"vkFreeMemory");
  vkGetBufferMemoryRequirements = (*vkGetDeviceProcAddr)(param_1,"vkGetBufferMemoryRequirements");
  vkGetImageMemoryRequirements = (*vkGetDeviceProcAddr)(param_1,"vkGetImageMemoryRequirements");
  vkGetDeviceQueue = (*vkGetDeviceProcAddr)(param_1,"vkGetDeviceQueue");
  vkGetFenceStatus = (*vkGetDeviceProcAddr)(param_1,"vkGetFenceStatus");
  vkGetQueryPoolResults = (*vkGetDeviceProcAddr)(param_1,"vkGetQueryPoolResults");
  vkInvalidateMappedMemoryRanges = (*vkGetDeviceProcAddr)(param_1,"vkInvalidateMappedMemoryRanges");
  vkMapMemory = (*vkGetDeviceProcAddr)(param_1,"vkMapMemory");
  vkQueueSubmit = (*vkGetDeviceProcAddr)(param_1,"vkQueueSubmit");
  vkQueueWaitIdle = (*vkGetDeviceProcAddr)(param_1,"vkQueueWaitIdle");
  vkResetCommandBuffer = (*vkGetDeviceProcAddr)(param_1,"vkResetCommandBuffer");
  vkResetCommandPool = (*vkGetDeviceProcAddr)(param_1,"vkResetCommandPool");
  vkResetDescriptorPool = (*vkGetDeviceProcAddr)(param_1,"vkResetDescriptorPool");
  vkResetFences = (*vkGetDeviceProcAddr)(param_1,"vkResetFences");
  vkUpdateDescriptorSets = (*vkGetDeviceProcAddr)(param_1,"vkUpdateDescriptorSets");
  vkWaitForFences = (*vkGetDeviceProcAddr)(param_1,"vkWaitForFences");
  return;
}


