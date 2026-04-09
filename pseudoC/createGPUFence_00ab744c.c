// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGPUFence
// Entry Point: 00ab744c
// Size: 44 bytes
// Signature: undefined createGPUFence(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::createGPUFence() */

void VulkanRenderDevice::createGPUFence(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  *(undefined4 *)(in_x0 + 0x3b0) = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = &PTR__IGPUFence_00fe6110;
  puVar1[1] = 0;
  return;
}


