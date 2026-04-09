// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_utf8
// Entry Point: 00f19ac8
// Size: 92 bytes
// Signature: undefined __cdecl luaopen_utf8(lua_State * param_1)


/* luaopen_utf8(lua_State*) */

undefined8 luaopen_utf8(lua_State *param_1)

{
  luaL_register(param_1,"utf8",(luaL_Reg *)&PTR_s_offset_01017828);
  lua_pushlstring(param_1,"[",0xe);
  lua_setfield(param_1,-2,"charpattern");
  return 1;
}


