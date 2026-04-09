// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCFunctionCallstackAsString
// Entry Point: 00bba8e0
// Size: 68 bytes
// Signature: undefined __thiscall getCFunctionCallstackAsString(LuauScriptSystem * this, lua_State * param_1, char * param_2, uint param_3)


/* LuauScriptSystem::getCFunctionCallstackAsString(lua_State*, char const*, unsigned int) */

void __thiscall
LuauScriptSystem::getCFunctionCallstackAsString
          (LuauScriptSystem *this,lua_State *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulong)param_3;
  checkYieldState();
  getCFunctionCallstackAsStringStatic
            ((LuauScriptSystem *)param_1,(lua_State *)param_2,pcVar1,param_3);
  return;
}


