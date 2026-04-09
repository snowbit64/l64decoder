// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_34
// Entry Point: 00aa7c34
// Size: 40 bytes
// Signature: undefined _INIT_34(void)


void _INIT_34(void)

{
  RenderDeviceManager::s_renderSystemManager = 0;
  DAT_02113550 = 6;
  __cxa_atexit(RenderDeviceManager::~RenderDeviceManager,&RenderDeviceManager::s_renderSystemManager
               ,&PTR_LOOP_00fd8de0);
  return;
}


