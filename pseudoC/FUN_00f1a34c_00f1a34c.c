// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1a34c
// Entry Point: 00f1a34c
// Size: 96 bytes
// Signature: undefined FUN_00f1a34c(void)


undefined8 FUN_00f1a34c(lua_State *param_1)

{
  luaL_checklstring(param_1,1,(ulong *)0x0);
  lua_pushcclosurek(param_1,FUN_00f1a3ac,(char *)0x0,0,(_func_int_lua_State_ptr_int *)0x0);
  lua_pushvalue(param_1,1);
  lua_pushinteger(param_1,0);
  return 3;
}


