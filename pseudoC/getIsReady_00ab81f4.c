// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsReady
// Entry Point: 00ab81f4
// Size: 40 bytes
// Signature: undefined getIsReady(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanGPUFence::getIsReady() */

undefined8 VulkanGPUFence::getIsReady(void)

{
  long in_x0;
  
  if ((*(long *)(in_x0 + 8) != 0) &&
     (*(ulong *)(*(long *)(in_x0 + 8) + 8) < *(ulong *)(in_x0 + 0x10))) {
    return 0;
  }
  return 1;
}


