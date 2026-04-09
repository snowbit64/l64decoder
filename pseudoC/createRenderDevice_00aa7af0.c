// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderDevice
// Entry Point: 00aa7af0
// Size: 132 bytes
// Signature: undefined __cdecl createRenderDevice(RenderDeviceManager * param_1, RENDERDEVICE_TYPE param_2)


/* RenderDeviceManager::createRenderDevice(RenderDeviceManager&,
   RenderDeviceManager::RENDERDEVICE_TYPE) */

long * RenderDeviceManager::createRenderDevice
                 (RenderDeviceManager *param_1,RENDERDEVICE_TYPE param_2)

{
  long *this;
  long *plVar1;
  
  plVar1 = *(long **)param_1;
  if ((param_2 == 5) && (plVar1 == (long *)0x0)) {
    this = (long *)operator_new(0x6c0);
                    /* try { // try from 00aa7b24 to 00aa7b27 has its CatchHandler @ 00aa7b78 */
    AndroidVulkanRenderDevice::AndroidVulkanRenderDevice((AndroidVulkanRenderDevice *)this);
LAB_00aa7b44:
    plVar1 = *(long **)param_1;
    if (plVar1 == (long *)0x0) goto LAB_00aa7b58;
  }
  else {
    this = plVar1;
    if (plVar1 == (long *)0x0) {
      this = (long *)operator_new(0x138);
                    /* try { // try from 00aa7b40 to 00aa7b43 has its CatchHandler @ 00aa7b74 */
      NullConsoleDevice::NullConsoleDevice((NullConsoleDevice *)this);
      goto LAB_00aa7b44;
    }
  }
  (**(code **)(*plVar1 + 8))();
LAB_00aa7b58:
  *(long **)param_1 = this;
  *(RENDERDEVICE_TYPE *)(param_1 + 8) = param_2;
  return this;
}


