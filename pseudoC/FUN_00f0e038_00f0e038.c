// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e038
// Entry Point: 00f0e038
// Size: 268 bytes
// Signature: undefined FUN_00f0e038(void)


ulong FUN_00f0e038(lua_State *param_1)

{
  int iVar1;
  lua_State *plVar2;
  ulong uVar3;
  int iVar4;
  
  plVar2 = (lua_State *)lua_tothread(param_1,-0x2713);
  if (plVar2[3] == (lua_State)0x6) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x1070) != 0) {
      FUN_00f1a52c(param_1,*(long *)(*(long *)(param_1 + 0x18) + 0x1070),plVar2);
    }
    uVar3 = lua_break(param_1);
    return uVar3;
  }
  if ((byte)plVar2[3] < 2) {
    uVar3 = (ulong)(*(long *)(plVar2 + 8) - *(long *)(plVar2 + 0x10)) >> 4;
    iVar4 = (int)uVar3;
    iVar1 = lua_checkstack(param_1,iVar4 + 1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"too many results to resume");
    }
    lua_xmove(plVar2,param_1,iVar4);
    if (-1 < iVar4) {
      return uVar3 & 0xffffffff;
    }
  }
  else {
    lua_rawcheckstack(param_1,2);
    lua_xmove(plVar2,param_1,1);
  }
  iVar1 = lua_isstring(param_1,-1);
  if (iVar1 != 0) {
    luaL_where(param_1,1);
    lua_insert(param_1,-2);
    lua_concat(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


