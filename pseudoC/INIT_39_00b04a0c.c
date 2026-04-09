// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_39
// Entry Point: 00b04a0c
// Size: 80 bytes
// Signature: undefined _INIT_39(void)


void _INIT_39(void)

{
  UpdateManager::s_singletonUpdateManager._24_8_ = 0;
  UpdateManager::s_singletonUpdateManager._16_8_ = 0;
  UpdateManager::s_singletonUpdateManager._40_8_ = 0;
  UpdateManager::s_singletonUpdateManager._32_8_ = 0;
  UpdateManager::s_singletonUpdateManager._8_8_ = 0;
  UpdateManager::s_singletonUpdateManager._0_8_ = 0;
                    /* try { // try from 00b04a2c to 00b04a37 has its CatchHandler @ 00b04a5c */
  Mutex::Mutex((Mutex *)(UpdateManager::s_singletonUpdateManager + 0x30),true);
  UpdateManager::s_singletonUpdateManager._88_8_ = 0;
  __cxa_atexit(UpdateManager::~UpdateManager,UpdateManager::s_singletonUpdateManager,
               &PTR_LOOP_00fd8de0);
  return;
}


