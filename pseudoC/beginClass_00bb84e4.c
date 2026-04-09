// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginClass
// Entry Point: 00bb84e4
// Size: 56 bytes
// Signature: undefined __thiscall beginClass(LuauScriptSystem * this, char * param_1)


/* LuauScriptSystem::beginClass(char const*) */

void __thiscall LuauScriptSystem::beginClass(LuauScriptSystem *this,char *param_1)

{
  checkYieldState();
  lua_pushstring(*(lua_State **)(this + 8),param_1);
  lua_rawget(*(lua_State **)(this + 8),-0x2712);
  return;
}


