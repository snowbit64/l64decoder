// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_44
// Entry Point: 00b2cde8
// Size: 60 bytes
// Signature: undefined _INIT_44(void)


void _INIT_44(void)

{
  ResourceManager::ResourceManager((ResourceManager *)ResourceManager::s_singletonResourceManager);
  __cxa_atexit(ResourceManager::~ResourceManager,ResourceManager::s_singletonResourceManager,
               &PTR_LOOP_00fd8de0);
  return;
}


