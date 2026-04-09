// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticProfilerTrigger
// Entry Point: 00bbd37c
// Size: 24 bytes
// Signature: undefined __cdecl staticProfilerTrigger(lua_State * param_1, int param_2)


/* LuaScriptProfiler::LuauProfilerCallback::staticProfilerTrigger(lua_State*, int) */

void LuaScriptProfiler::LuauProfilerCallback::staticProfilerTrigger(lua_State *param_1,int param_2)

{
  profilerTrigger((lua_State *)(s_profilerInstance + 0xd0),(int)param_1);
  return;
}


