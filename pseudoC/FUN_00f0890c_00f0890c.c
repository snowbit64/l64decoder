// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0890c
// Entry Point: 00f0890c
// Size: 176 bytes
// Signature: undefined FUN_00f0890c(void)


int FUN_00f0890c(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = lua_gettop(param_1);
  iVar3 = lua_type(param_1,1);
  if ((iVar3 == 5) && (pcVar5 = (char *)lua_tolstring(param_1,1,(ulong *)0x0), *pcVar5 == '#')) {
    lua_pushinteger(param_1,iVar2 + -1);
    return 1;
  }
  iVar4 = luaL_checkinteger(param_1,1);
  iVar3 = iVar2;
  if (iVar4 <= iVar2) {
    iVar3 = iVar4;
  }
  iVar1 = iVar4 + iVar2;
  if (-1 < iVar4) {
    iVar1 = iVar3;
  }
  if (0 < iVar1) {
    return iVar2 - iVar1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"index out of range");
}


