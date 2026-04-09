// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f089bc
// Entry Point: 00f089bc
// Size: 220 bytes
// Signature: undefined FUN_00f089bc(void)


undefined8 FUN_00f089bc(lua_State *param_1)

{
  int iVar1;
  double dVar2;
  
  luaL_checktype(param_1,2,6);
  FUN_00f08d14(param_1,0);
  lua_pushvalue(param_1,2);
  lua_setsafeenv(param_1,-1,0);
  iVar1 = lua_isnumber(param_1,1);
  if ((iVar1 != 0) && (dVar2 = (double)lua_tonumberx(param_1,1,(int *)0x0), dVar2 == 0.0)) {
    lua_pushthread(param_1);
    lua_insert(param_1,-2);
    lua_setfenv(param_1,-2);
    return 0;
  }
  iVar1 = lua_iscfunction(param_1,-2);
  if ((iVar1 == 0) && (iVar1 = lua_setfenv(param_1,-2), iVar1 != 0)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"\'setfenv\' cannot change environment of given object");
}


