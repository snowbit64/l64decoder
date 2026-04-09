// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0822c
// Entry Point: 00f0822c
// Size: 108 bytes
// Signature: undefined FUN_00f0822c(void)


undefined8 FUN_00f0822c(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  
  lua_rawcheckstack(param_1,1);
  if (param_2 != 0) {
    lua_pushboolean(param_1,0);
    lua_insert(param_1,-2);
    return 2;
  }
  lua_pushboolean(param_1,1);
  lua_insert(param_1,1);
  uVar1 = lua_gettop(param_1);
  return uVar1;
}


