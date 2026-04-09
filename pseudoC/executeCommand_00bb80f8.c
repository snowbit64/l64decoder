// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCommand
// Entry Point: 00bb80f8
// Size: 124 bytes
// Signature: undefined __cdecl executeCommand(char * param_1, uint param_2, char * param_3, vector * param_4)


/* LuauScriptSystem::executeCommand(char const*, unsigned int, char const*,
   std::__ndk1::vector<ScriptDebugVariable, std::__ndk1::allocator<ScriptDebugVariable> >&) */

void LuauScriptSystem::executeCommand(char *param_1,uint param_2,char *param_3,vector *param_4)

{
  int iVar1;
  
  iVar1 = lua_gettop(*(lua_State **)(param_1 + 8));
  checkYieldState();
  doBuffer((LuauScriptSystem *)param_1,*(lua_State **)(param_1 + 8),(uchar *)(ulong)param_2,
           (uint)param_3,(char *)param_4,(char *)0x0,false);
  lua_gettop(*(lua_State **)(param_1 + 8));
  lua_settop(*(lua_State **)(param_1 + 8),iVar1);
  return;
}


