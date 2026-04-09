// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_41
// Entry Point: 00b07b4c
// Size: 32 bytes
// Signature: undefined _INIT_41(void)


void _INIT_41(void)

{
  AudioDeviceManager::s_AudioDeviceManager = 0;
  __cxa_atexit(AudioDeviceManager::~AudioDeviceManager,&AudioDeviceManager::s_AudioDeviceManager,
               &PTR_LOOP_00fd8de0);
  return;
}


