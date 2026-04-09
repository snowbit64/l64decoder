// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_17
// Entry Point: 008c27f0
// Size: 60 bytes
// Signature: undefined _INIT_17(void)


void _INIT_17(void)

{
  CullingManager::CullingManager((CullingManager *)CullingManager::s_cullingManagerInstance);
  __cxa_atexit(CullingManager::~CullingManager,CullingManager::s_cullingManagerInstance,
               &PTR_LOOP_00fd8de0);
  return;
}


