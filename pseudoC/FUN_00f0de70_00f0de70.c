// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0de70
// Entry Point: 00f0de70
// Size: 48 bytes
// Signature: undefined FUN_00f0de70(void)


undefined8 FUN_00f0de70(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_isyieldable(param_1);
  lua_pushboolean(param_1,iVar1);
  return 1;
}


