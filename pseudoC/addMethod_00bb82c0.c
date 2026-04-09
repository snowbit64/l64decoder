// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMethod
// Entry Point: 00bb82c0
// Size: 84 bytes
// Signature: undefined __thiscall addMethod(LuauScriptSystem * this, _func_int_void_ptr * param_1, char * param_2)


/* LuauScriptSystem::addMethod(int (*)(void*), char const*) */

void __thiscall
LuauScriptSystem::addMethod(LuauScriptSystem *this,_func_int_void_ptr *param_1,char *param_2)

{
  checkYieldState();
  lua_pushcclosurek(*(lua_State **)(this + 8),(_func_int_lua_State_ptr *)param_1,param_2,0,
                    (_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(*(lua_State **)(this + 8),-0x2712,param_2);
  return;
}


