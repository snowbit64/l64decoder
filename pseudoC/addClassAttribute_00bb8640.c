// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClassAttribute
// Entry Point: 00bb8640
// Size: 80 bytes
// Signature: undefined __thiscall addClassAttribute(LuauScriptSystem * this, char * param_1, char * param_2)


/* LuauScriptSystem::addClassAttribute(char const*, char const*) */

void __thiscall
LuauScriptSystem::addClassAttribute(LuauScriptSystem *this,char *param_1,char *param_2)

{
  checkYieldState();
  lua_pushstring(*(lua_State **)(this + 8),param_2);
  lua_pushstring(*(lua_State **)(this + 8),param_1);
  lua_rawset(*(lua_State **)(this + 8),-3);
  return;
}


