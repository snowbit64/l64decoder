// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_debug
// Entry Point: 00f08e1c
// Size: 40 bytes
// Signature: undefined __cdecl luaopen_debug(lua_State * param_1)


/* luaopen_debug(lua_State*) */

undefined8 luaopen_debug(lua_State *param_1)

{
  luaL_register(param_1,"debug",(luaL_Reg *)&PTR_DAT_01017090);
  return 1;
}


