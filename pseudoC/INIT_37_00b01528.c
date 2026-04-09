// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_37
// Entry Point: 00b01528
// Size: 60 bytes
// Signature: undefined _INIT_37(void)


void _INIT_37(void)

{
  ProfilerManager::ProfilerManager((ProfilerManager *)ProfilerManager::s_singletonProfilerManager);
  __cxa_atexit(ProfilerManager::~ProfilerManager,ProfilerManager::s_singletonProfilerManager,
               &PTR_LOOP_00fd8de0);
  return;
}


