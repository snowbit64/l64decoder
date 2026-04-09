// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_23
// Entry Point: 00952378
// Size: 60 bytes
// Signature: undefined _INIT_23(void)


void _INIT_23(void)

{
  MaterialManager::MaterialManager((MaterialManager *)MaterialManager::s_materialManager);
  __cxa_atexit(MaterialManager::~MaterialManager,MaterialManager::s_materialManager,
               &PTR_LOOP_00fd8de0);
  return;
}


