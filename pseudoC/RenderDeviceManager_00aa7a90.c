// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderDeviceManager
// Entry Point: 00aa7a90
// Size: 52 bytes
// Signature: undefined __thiscall ~RenderDeviceManager(RenderDeviceManager * this)


/* RenderDeviceManager::~RenderDeviceManager() */

void __thiscall RenderDeviceManager::~RenderDeviceManager(RenderDeviceManager *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


