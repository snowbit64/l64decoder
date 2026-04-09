// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_32
// Entry Point: 00a48778
// Size: 36 bytes
// Signature: undefined _INIT_32(void)


void _INIT_32(void)

{
  UpdateRenderingManager::s_updateRenderingManagerInstance = 0;
  DAT_02112ca8 = 0;
  DAT_02112cb0 = 0;
  __cxa_atexit(UpdateRenderingManager::~UpdateRenderingManager,
               &UpdateRenderingManager::s_updateRenderingManagerInstance,&PTR_LOOP_00fd8de0);
  return;
}


