// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0dd6c
// Entry Point: 00f0dd6c
// Size: 48 bytes
// Signature: undefined FUN_00f0dd6c(void)


undefined8 FUN_00f0dd6c(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_pushthread(param_1);
  if (iVar1 != 0) {
    lua_pushnil(param_1);
  }
  return 1;
}


