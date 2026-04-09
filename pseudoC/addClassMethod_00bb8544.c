// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClassMethod
// Entry Point: 00bb8544
// Size: 92 bytes
// Signature: undefined __thiscall addClassMethod(LuauScriptSystem * this, _func_int_void_ptr * param_1, char * param_2)


/* LuauScriptSystem::addClassMethod(int (*)(void*), char const*) */

void __thiscall
LuauScriptSystem::addClassMethod(LuauScriptSystem *this,_func_int_void_ptr *param_1,char *param_2)

{
  checkYieldState();
  lua_pushstring(*(lua_State **)(this + 8),param_2);
  lua_pushcclosurek(*(lua_State **)(this + 8),(_func_int_lua_State_ptr *)param_1,param_2,0,
                    (_func_int_lua_State_ptr_int *)0x0);
  lua_rawset(*(lua_State **)(this + 8),-3);
  return;
}


