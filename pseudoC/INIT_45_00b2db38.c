// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_45
// Entry Point: 00b2db38
// Size: 32 bytes
// Signature: undefined _INIT_45(void)


void _INIT_45(void)

{
  CloudDeviceManager::s_cloudDeviceManager = 0;
  __cxa_atexit(CloudDeviceManager::~CloudDeviceManager,&CloudDeviceManager::s_cloudDeviceManager,
               &PTR_LOOP_00fd8de0);
  return;
}


