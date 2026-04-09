// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18c18
// Entry Point: 00f18c18
// Size: 260 bytes
// Signature: undefined FUN_00f18c18(void)


undefined8 FUN_00f18c18(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  luaL_checktype(param_1,1,6);
  luaL_checkany(param_1,2);
  iVar1 = luaL_optinteger(param_1,3,1);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"index out of range");
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = *puVar5;
  lVar3 = FUN_00f170b4(uVar4,iVar1);
  iVar2 = *(int *)(lVar3 + 0xc);
  while( true ) {
    if (iVar2 == 0) {
      lua_pushnil(param_1);
      return 1;
    }
    if ((*(int *)((long)puVar5 + 0x1c) == iVar2) &&
       (iVar2 = FUN_00f264b8(param_1,puVar5 + 2,lVar3), iVar2 != 0)) break;
    iVar1 = iVar1 + 1;
    lVar3 = FUN_00f170b4(uVar4,iVar1);
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  lua_pushinteger(param_1,iVar1);
  return 1;
}


