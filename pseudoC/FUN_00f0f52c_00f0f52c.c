// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f52c
// Entry Point: 00f0f52c
// Size: 180 bytes
// Signature: undefined FUN_00f0f52c(void)


undefined8 FUN_00f0f52c(lua_State *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)luaL_checknumber(param_1,1);
  iVar1 = lua_type(param_1,2);
  if (iVar1 < 1) {
    dVar2 = log(dVar2);
  }
  else {
    dVar3 = (double)luaL_checknumber(param_1,2);
    if (dVar3 == 2.0) {
      dVar2 = log2(dVar2);
    }
    else if (dVar3 == 10.0) {
      dVar2 = log10(dVar2);
    }
    else {
      dVar2 = log(dVar2);
      dVar3 = log(dVar3);
      dVar2 = dVar2 / dVar3;
    }
  }
  lua_pushnumber(param_1,dVar2);
  return 1;
}


