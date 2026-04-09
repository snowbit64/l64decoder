// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f194a4
// Entry Point: 00f194a4
// Size: 168 bytes
// Signature: undefined FUN_00f194a4(void)


ulong FUN_00f194a4(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,2);
  if (iVar1 != 0) {
    lua_pushvalue(param_1,2);
    lua_pushvalue(param_1,param_2 + -1);
    lua_pushvalue(param_1,param_3 + -2);
    lua_call(param_1,2,1);
    uVar2 = lua_toboolean(param_1,-1);
    lua_settop(param_1,-2);
    return uVar2 & 0xffffffff;
  }
  uVar2 = lua_lessthan(param_1,param_2,param_3);
  return uVar2;
}


