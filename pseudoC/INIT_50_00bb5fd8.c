// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_50
// Entry Point: 00bb5fd8
// Size: 32 bytes
// Signature: undefined _INIT_50(void)


void _INIT_50(void)

{
  ScriptSystemManager::s_scriptSystemManager = 0;
  __cxa_atexit(ScriptSystemManager::~ScriptSystemManager,&ScriptSystemManager::s_scriptSystemManager
               ,&PTR_LOOP_00fd8de0);
  return;
}


