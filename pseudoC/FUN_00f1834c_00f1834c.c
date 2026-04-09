// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1834c
// Entry Point: 00f1834c
// Size: 436 bytes
// Signature: undefined FUN_00f1834c(void)


undefined8 FUN_00f1834c(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_270;
  luaL_Buffer alStack_268 [544];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar5 = (char *)luaL_optlstring(param_1,2,"",&local_270);
  luaL_checktype(param_1,1,6);
  uVar2 = luaL_optinteger(param_1,3,1);
  uVar7 = (ulong)uVar2;
  iVar3 = lua_type(param_1,4);
  if (iVar3 < 1) {
    uVar4 = lua_objlen(param_1,1);
    uVar8 = (ulong)uVar4;
    luaL_buffinit(param_1,alStack_268);
    if ((int)uVar2 < (int)uVar4) goto LAB_00f183e8;
LAB_00f18454:
    if (uVar2 != uVar4) goto LAB_00f18480;
  }
  else {
    uVar4 = luaL_checkinteger(param_1,4);
    uVar8 = (ulong)uVar4;
    luaL_buffinit(param_1,alStack_268);
    if ((int)uVar4 <= (int)uVar2) goto LAB_00f18454;
LAB_00f183e8:
    do {
      lua_rawgeti(param_1,1,(int)uVar7);
      iVar3 = lua_isstring(param_1,-1);
      if (iVar3 == 0) {
        uVar6 = luaL_typename(param_1,-1);
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar6,uVar7);
      }
      luaL_addvalue(alStack_268);
      luaL_addlstring(alStack_268,pcVar5,local_270);
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar2;
    } while ((uint)uVar8 != uVar2);
  }
  lua_rawgeti(param_1,1,(int)uVar8);
  iVar3 = lua_isstring(param_1,-1);
  if (iVar3 == 0) {
    uVar6 = luaL_typename(param_1,-1);
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar6,uVar8);
  }
  luaL_addvalue(alStack_268);
LAB_00f18480:
  luaL_pushresult(alStack_268);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


