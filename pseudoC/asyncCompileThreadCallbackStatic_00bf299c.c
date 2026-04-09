// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileThreadCallbackStatic
// Entry Point: 00bf299c
// Size: 24 bytes
// Signature: undefined __cdecl asyncCompileThreadCallbackStatic(void * param_1, bool * param_2)


/* ShaderManager::asyncCompileThreadCallbackStatic(void*, bool volatile&) */

undefined8 ShaderManager::asyncCompileThreadCallbackStatic(void *param_1,bool *param_2)

{
  asyncCompileThreadCallback((ShaderManager *)param_1,param_2);
  return 0;
}


