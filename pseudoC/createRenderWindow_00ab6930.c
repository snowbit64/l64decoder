// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderWindow
// Entry Point: 00ab6930
// Size: 56 bytes
// Signature: undefined __cdecl createRenderWindow(RenderWindowDesc * param_1)


/* VulkanRenderDevice::createRenderWindow(RenderWindowDesc&) */

void VulkanRenderDevice::createRenderWindow(RenderWindowDesc *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}


