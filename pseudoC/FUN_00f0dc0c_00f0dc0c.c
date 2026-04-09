// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0dc0c
// Entry Point: 00f0dc0c
// Size: 284 bytes
// Signature: undefined FUN_00f0dc0c(void)


ulong FUN_00f0dc0c(lua_State *param_1)

{
  int iVar1;
  lua_State *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  plVar2 = (lua_State *)lua_tothread(param_1,1);
  if (plVar2 == (lua_State *)0x0) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,1,"thread");
  }
  if (plVar2[3] == (lua_State)0x6) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x1070) != 0) {
      FUN_00f1a52c(param_1,*(long *)(*(long *)(param_1 + 0x18) + 0x1070),plVar2);
    }
    uVar3 = lua_break(param_1);
    return uVar3;
  }
  if ((byte)plVar2[3] < 2) {
    uVar5 = (uint)((ulong)(*(long *)(plVar2 + 8) - *(long *)(plVar2 + 0x10)) >> 4);
    uVar4 = uVar5 + 1;
    iVar1 = lua_checkstack(param_1,uVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"too many results to resume");
    }
    lua_xmove(plVar2,param_1,uVar5);
    if (-1 < (int)uVar5) {
      lua_pushboolean(param_1,1);
      uVar5 = ~uVar5;
      goto LAB_00f0dce8;
    }
  }
  else {
    lua_rawcheckstack(param_1,2);
    lua_xmove(plVar2,param_1,1);
  }
  lua_pushboolean(param_1,0);
  uVar4 = 2;
  uVar5 = 0xfffffffe;
LAB_00f0dce8:
  lua_insert(param_1,uVar5);
  return (ulong)uVar4;
}


