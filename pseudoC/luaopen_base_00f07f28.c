// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaopen_base
// Entry Point: 00f07f28
// Size: 396 bytes
// Signature: undefined __cdecl luaopen_base(lua_State * param_1)


/* luaopen_base(lua_State*) */

undefined8 luaopen_base(lua_State *param_1)

{
  lua_pushvalue(param_1,-0x2712);
  lua_setfield(param_1,-0x2712,"_G");
  luaL_register(param_1,"_G",(luaL_Reg *)&PTR_s_assert_01016f50);
  lua_pushlstring(param_1,"Luau",4);
  lua_setfield(param_1,-0x2712,"_VERSION");
  lua_pushcclosurek(param_1,luaB_inext,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushcclosurek(param_1,FUN_00f080b4,"ipairs",1,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-2,"ipairs");
  lua_pushcclosurek(param_1,luaB_next,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushcclosurek(param_1,FUN_00f08104,"pairs",1,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(param_1,-2,"pairs");
  lua_pushcclosurek(param_1,FUN_00f08150,"pcall",0,FUN_00f0822c);
  lua_setfield(param_1,-2,"pcall");
  lua_pushcclosurek(param_1,FUN_00f08298,"xpcall",0,FUN_00f083ac);
  lua_setfield(param_1,-2,"xpcall");
  return 1;
}


