// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_string
// Entry Point: 00f12bdc
// Size: 168 bytes
// Signature: undefined __cdecl luaopen_string(lua_State * param_1)


/* luaopen_string(lua_State*) */

undefined8 luaopen_string(lua_State *param_1)

{
  luaL_register(param_1,"string",(luaL_Reg *)&PTR_DAT_010174f8);
  lua_createtable(param_1,0,1);
  lua_pushlstring(param_1,"",0);
  lua_pushvalue(param_1,-2);
  lua_setmetatable(param_1,-2);
  lua_settop(param_1,-2);
  lua_pushvalue(param_1,-2);
  lua_setfield(param_1,-2,"__index");
  lua_settop(param_1,-2);
  return 1;
}


