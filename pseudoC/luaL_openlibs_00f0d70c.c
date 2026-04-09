// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_openlibs
// Entry Point: 00f0d70c
// Size: 560 bytes
// Signature: undefined __cdecl luaL_openlibs(lua_State * param_1)


/* luaL_openlibs(lua_State*) */

void luaL_openlibs(lua_State *param_1)

{
  lua_pushcclosurek(param_1,luaopen_base,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_coroutine,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"coroutine");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_table,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"table");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_os,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"os");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_string,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"string");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_math,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"math");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_debug,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"debug");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_utf8,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"utf8");
  lua_call(param_1,1,0);
  lua_pushcclosurek(param_1,luaopen_bit32,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushstring(param_1,"bit32");
  lua_call(param_1,1,0);
  return;
}


