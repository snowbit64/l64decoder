// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRenderDevice
// Entry Point: 00aa7b94
// Size: 72 bytes
// Signature: undefined __thiscall setRenderDevice(RenderDeviceManager * this, IRenderDevice * param_1, RENDERDEVICE_TYPE param_2)


/* RenderDeviceManager::setRenderDevice(IRenderDevice*, RenderDeviceManager::RENDERDEVICE_TYPE) */

void __thiscall
RenderDeviceManager::setRenderDevice
          (RenderDeviceManager *this,IRenderDevice *param_1,RENDERDEVICE_TYPE param_2)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(IRenderDevice **)this = param_1;
  *(RENDERDEVICE_TYPE *)(this + 8) = param_2;
  return;
}


