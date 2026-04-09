// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0dea0
// Entry Point: 00f0dea0
// Size: 232 bytes
// Signature: undefined FUN_00f0dea0(void)


undefined8 FUN_00f0dea0(lua_State *param_1)

{
  int iVar1;
  lua_State *plVar2;
  
  plVar2 = (lua_State *)lua_tothread(param_1,1);
  if (plVar2 == (lua_State *)0x0) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,1,"thread");
  }
  iVar1 = lua_costatus(param_1,plVar2);
  if ((1 < iVar1 - 3U) && (iVar1 != 1)) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"cannot close %s coroutine",(&PTR_s_running_01017180)[iVar1]);
  }
  if ((byte)plVar2[3] < 2) {
    lua_pushboolean(param_1,1);
    lua_resetthread(plVar2);
    return 1;
  }
  lua_pushboolean(param_1,0);
  iVar1 = lua_gettop(plVar2);
  if (iVar1 != 0) {
    lua_xmove(plVar2,param_1,1);
  }
  lua_resetthread(plVar2);
  return 2;
}


