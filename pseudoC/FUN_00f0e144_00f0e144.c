// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e144
// Entry Point: 00f0e144
// Size: 360 bytes
// Signature: undefined FUN_00f0e144(void)


ulong FUN_00f0e144(lua_State *param_1,lua_State *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_2[3] != (lua_State)0x1) && (iVar1 = lua_costatus(param_1,param_2), iVar1 != 1)) {
    lua_pushfstringL(param_1,"cannot resume %s coroutine",(&PTR_s_running_01017180)[iVar1]);
    return 0xffffffff;
  }
  if (param_3 != 0) {
    iVar1 = lua_checkstack(param_2,param_3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"too many arguments to resume");
    }
    lua_xmove(param_1,param_2,param_3);
  }
  param_2[6] = param_1[6];
  uVar2 = lua_resume(param_2,param_1,param_3);
  if (uVar2 < 2) {
    uVar4 = (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10)) >> 4;
    iVar1 = (int)uVar4;
    if (iVar1 != 0) {
      if ((0x13 < iVar1) && (iVar3 = lua_checkstack(param_1,iVar1 + 1), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"too many results to resume");
      }
      lua_xmove(param_2,param_1,iVar1);
    }
    return uVar4 & 0xffffffff;
  }
  if (uVar2 == 6) {
    return 0xfffffffe;
  }
  lua_xmove(param_2,param_1,1);
  return 0xffffffff;
}


