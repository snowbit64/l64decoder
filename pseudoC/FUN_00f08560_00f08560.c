// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08560
// Entry Point: 00f08560
// Size: 100 bytes
// Signature: undefined FUN_00f08560(void)


undefined8 FUN_00f08560(lua_State *param_1)

{
  int iVar1;
  
  FUN_00f08d14(param_1,1);
  iVar1 = lua_iscfunction(param_1,-1);
  if (iVar1 == 0) {
    lua_getfenv(param_1,-1);
  }
  else {
    lua_pushvalue(param_1,-0x2712);
  }
  lua_setsafeenv(param_1,-1,0);
  return 1;
}


