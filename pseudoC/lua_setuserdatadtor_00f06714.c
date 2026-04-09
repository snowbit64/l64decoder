// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setuserdatadtor
// Entry Point: 00f06714
// Size: 16 bytes
// Signature: undefined __cdecl lua_setuserdatadtor(lua_State * param_1, int param_2, _func_void_lua_State_ptr_void_ptr * param_3)


/* lua_setuserdatadtor(lua_State*, int, void (*)(lua_State*, void*)) */

void lua_setuserdatadtor(lua_State *param_1,int param_2,_func_void_lua_State_ptr_void_ptr *param_3)

{
  *(_func_void_lua_State_ptr_void_ptr **)(*(long *)(param_1 + 0x18) + (long)param_2 * 8 + 0xc38) =
       param_3;
  return;
}


