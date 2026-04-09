// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitUntilGPUIdle
// Entry Point: 00ab44c4
// Size: 124 bytes
// Signature: undefined waitUntilGPUIdle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::waitUntilGPUIdle() */

void VulkanRenderDevice::waitUntilGPUIdle(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  
  if (*(long *)(in_x0 + 0x440) == 0) {
    lVar2 = 0;
    lVar1 = *(long *)(in_x0 + 0x450);
  }
  else {
    (*vkQueueWaitIdle)();
    lVar2 = *(long *)(in_x0 + 0x440);
    lVar1 = *(long *)(in_x0 + 0x450);
  }
  if ((lVar1 != 0) && (lVar1 != lVar2)) {
    (*vkQueueWaitIdle)();
    lVar2 = *(long *)(in_x0 + 0x440);
  }
  if ((*(long *)(in_x0 + 0x448) != 0) && (*(long *)(in_x0 + 0x448) != lVar2)) {
    (*vkQueueWaitIdle)();
  }
  return;
}


