// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_25
// Entry Point: 00979210
// Size: 60 bytes
// Signature: undefined _INIT_25(void)


void _INIT_25(void)

{
  TextureStreamingManager::Stats::Stats((Stats *)&TextureStreamingManager::s_stats_any);
  __cxa_atexit(TextureStreamingManager::Stats::~Stats,&TextureStreamingManager::s_stats_any,
               &PTR_LOOP_00fd8de0);
  return;
}


