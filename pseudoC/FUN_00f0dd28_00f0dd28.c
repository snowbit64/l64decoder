// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0dd28
// Entry Point: 00f0dd28
// Size: 68 bytes
// Signature: undefined FUN_00f0dd28(void)


undefined8 FUN_00f0dd28(lua_State *param_1)

{
  lua_State *plVar1;
  
  luaL_checktype(param_1,1,7);
  plVar1 = (lua_State *)lua_newthread(param_1);
  lua_xpush(param_1,plVar1,1);
  return 1;
}


