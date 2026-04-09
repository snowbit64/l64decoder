// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f188dc
// Entry Point: 00f188dc
// Size: 144 bytes
// Signature: undefined FUN_00f188dc(void)


undefined8 FUN_00f188dc(lua_State *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  luaL_checktype(param_1,1,6);
  uVar1 = lua_objlen(param_1,1);
  luaL_checkstack(param_1,0x28,"");
  iVar2 = lua_type(param_1,2);
  if (0 < iVar2) {
    luaL_checktype(param_1,2,7);
  }
  lua_settop(param_1,2);
  FUN_00f190a0(param_1,1,uVar1);
  return 0;
}


