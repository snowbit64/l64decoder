// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_table
// Entry Point: 00f18168
// Size: 104 bytes
// Signature: undefined __cdecl luaopen_table(lua_State * param_1)


/* luaopen_table(lua_State*) */

undefined8 luaopen_table(lua_State *param_1)

{
  luaL_register(param_1,"table",(luaL_Reg *)&PTR_s_concat_01017618);
  lua_pushcclosurek(param_1,FUN_00f181d0,"unpack",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-0x2712,"unpack");
  return 1;
}


