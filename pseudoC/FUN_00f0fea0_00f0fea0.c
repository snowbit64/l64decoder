// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0fea0
// Entry Point: 00f0fea0
// Size: 132 bytes
// Signature: undefined FUN_00f0fea0(void)


undefined8 FUN_00f0fea0(lua_State *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar2 = (double)luaL_checknumber(param_1,2);
  dVar3 = (double)luaL_checknumber(param_1,3);
  if (dVar2 <= dVar3) {
    if (dVar2 <= dVar1) {
      dVar2 = dVar1;
    }
    if (dVar2 <= dVar3) {
      dVar3 = dVar2;
    }
    lua_pushnumber(param_1,dVar3);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,3,"max must be greater than or equal to min");
}


