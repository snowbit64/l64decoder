// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_18
// Entry Point: 008c3c54
// Size: 36 bytes
// Signature: undefined _INIT_18(void)


void _INIT_18(void)

{
  OcclusionCullingManager::s_occlusionCullingManagerInstance._8_8_ = 0;
  OcclusionCullingManager::s_occlusionCullingManagerInstance._0_8_ = 0;
  OcclusionCullingManager::s_occlusionCullingManagerInstance._24_8_ = 0;
  OcclusionCullingManager::s_occlusionCullingManagerInstance._16_8_ = 0;
  __cxa_atexit(OcclusionCullingManager::~OcclusionCullingManager,
               OcclusionCullingManager::s_occlusionCullingManagerInstance,&PTR_LOOP_00fd8de0);
  return;
}


