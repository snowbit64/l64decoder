// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClassAttribute
// Entry Point: 00bb85f0
// Size: 80 bytes
// Signature: undefined __thiscall addClassAttribute(LuauScriptSystem * this, float param_1, char * param_2)


/* LuauScriptSystem::addClassAttribute(float, char const*) */

void __thiscall
LuauScriptSystem::addClassAttribute(LuauScriptSystem *this,float param_1,char *param_2)

{
  checkYieldState();
  lua_pushstring(*(lua_State **)(this + 8),param_2);
  lua_pushnumber(*(lua_State **)(this + 8),(double)param_1);
  lua_rawset(*(lua_State **)(this + 8),-3);
  return;
}


