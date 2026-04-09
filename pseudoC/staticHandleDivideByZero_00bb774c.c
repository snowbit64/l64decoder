// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticHandleDivideByZero
// Entry Point: 00bb774c
// Size: 16 bytes
// Signature: undefined __cdecl staticHandleDivideByZero(lua_State * param_1, lua_Debug * param_2)


/* LuauScriptSystem::staticHandleDivideByZero(lua_State*, lua_Debug*) */

void LuauScriptSystem::staticHandleDivideByZero(lua_State *param_1,lua_Debug *param_2)

{
  handleDivideByZero(s_pCallbackScriptSystem,param_2);
  return;
}


