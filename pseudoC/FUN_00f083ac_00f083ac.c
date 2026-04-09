// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f083ac
// Entry Point: 00f083ac
// Size: 168 bytes
// Signature: undefined FUN_00f083ac(void)


undefined8 FUN_00f083ac(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lua_rawcheckstack(param_1,3);
    lua_pushboolean(param_1,0);
    lua_pushvalue(param_1,1);
    lua_pushvalue(param_1,-3);
    lVar2 = *(long *)(param_1 + 8) + -0x20;
    FUN_00f0b5c8(param_1,FUN_00f08e14,lVar2,lVar2 - *(long *)(param_1 + 0x30),
                 (*(long *)(param_1 + 8) - *(long *)(param_1 + 0x30)) + -0x30);
    return 2;
  }
  lua_rawcheckstack(param_1,1);
  lua_pushboolean(param_1,1);
  lua_replace(param_1,1);
  uVar1 = lua_gettop(param_1);
  return uVar1;
}


