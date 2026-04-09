// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ddfc
// Entry Point: 00f0ddfc
// Size: 100 bytes
// Signature: undefined FUN_00f0ddfc(void)


undefined8 FUN_00f0ddfc(lua_State *param_1)

{
  lua_State *plVar1;
  
  luaL_checktype(param_1,1,7);
  plVar1 = (lua_State *)lua_newthread(param_1);
  lua_xpush(param_1,plVar1,1);
  lua_pushcclosurek(param_1,FUN_00f0df88,(char *)0x0,1,FUN_00f0e038);
  return 1;
}


