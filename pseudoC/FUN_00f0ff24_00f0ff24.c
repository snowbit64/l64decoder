// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ff24
// Entry Point: 00f0ff24
// Size: 72 bytes
// Signature: undefined FUN_00f0ff24(void)


undefined8 FUN_00f0ff24(lua_State *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar2 = -1.0;
  if (0.0 <= dVar1) {
    dVar2 = 0.0;
  }
  dVar3 = 1.0;
  if (dVar1 <= 0.0) {
    dVar3 = dVar2;
  }
  lua_pushnumber(param_1,dVar3);
  return 1;
}


