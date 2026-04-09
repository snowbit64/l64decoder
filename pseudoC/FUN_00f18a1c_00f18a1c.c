// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18a1c
// Entry Point: 00f18a1c
// Size: 340 bytes
// Signature: undefined FUN_00f18a1c(void)


undefined8 FUN_00f18a1c(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  luaL_checktype(param_1,1,6);
  iVar1 = luaL_checkinteger(param_1,2);
  iVar2 = luaL_checkinteger(param_1,3);
  iVar3 = luaL_checkinteger(param_1,4);
  iVar4 = lua_type(param_1,5);
  iVar6 = 5;
  if (iVar4 < 1) {
    iVar6 = 1;
  }
  luaL_checktype(param_1,iVar6,6);
  if (iVar1 <= iVar2) {
    if ((iVar1 < 1) && (iVar1 + 0x7fffffff <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,3,"too many elements to move");
    }
    if (0x7fffffff - (iVar2 - iVar1) < iVar3) {
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,4,"destination wrap around");
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)(iVar6 - 1) * 0x10);
    if (*(char *)(lVar5 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00f09e04(param_1);
    }
    if (((0 < iVar3) && (iVar4 = *(int *)(lVar5 + 8), iVar3 + -1 <= iVar4)) &&
       (iVar4 < iVar3 + (iVar2 - iVar1))) {
      FUN_00f16914(param_1);
    }
    FUN_00f18ee8(param_1,iVar6,iVar1,iVar2,iVar3);
  }
  lua_pushvalue(param_1,iVar6);
  return 1;
}


