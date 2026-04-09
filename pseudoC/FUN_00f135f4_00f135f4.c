// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f135f4
// Entry Point: 00f135f4
// Size: 112 bytes
// Signature: undefined FUN_00f135f4(void)


undefined8 FUN_00f135f4(lua_State *param_1)

{
  luaL_checklstring(param_1,1,(ulong *)0x0);
  luaL_checklstring(param_1,2,(ulong *)0x0);
  lua_settop(param_1,2);
  lua_pushinteger(param_1,0);
  lua_pushcclosurek(param_1,FUN_00f15f40,(char *)0x0,3,(_func_int_lua_State_ptr_int *)0x0);
  return 1;
}


