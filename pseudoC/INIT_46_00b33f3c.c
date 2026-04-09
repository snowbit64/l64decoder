// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_46
// Entry Point: 00b33f3c
// Size: 60 bytes
// Signature: undefined _INIT_46(void)


void _INIT_46(void)

{
  FileManager::FileManager((FileManager *)FileManager::s_singletonFileManager);
  __cxa_atexit(FileManager::~FileManager,FileManager::s_singletonFileManager,&PTR_LOOP_00fd8de0);
  return;
}


