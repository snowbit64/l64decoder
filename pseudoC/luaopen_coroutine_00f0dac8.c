// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_coroutine
// Entry Point: 00f0dac8
// Size: 108 bytes
// Signature: undefined __cdecl luaopen_coroutine(lua_State * param_1)


/* luaopen_coroutine(lua_State*) */

undefined8 luaopen_coroutine(lua_State *param_1)

{
  luaL_register(param_1,"coroutine",(luaL_Reg *)&PTR_s_create_01017100);
  lua_pushcclosurek(param_1,FUN_00f0db34,"resume",0,FUN_00f0dc0c);
  lua_setfield(param_1,-2,"resume");
  return 1;
}


