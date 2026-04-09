// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08d14
// Entry Point: 00f08d14
// Size: 248 bytes
// Signature: undefined FUN_00f08d14(void)


void FUN_00f08d14(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  lua_Debug alStack_168 [304];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,1);
  if (iVar2 == 7) {
    lua_pushvalue(param_1,1);
LAB_00f08da4:
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (param_2 == 0) {
    uVar3 = luaL_checkinteger(param_1,1);
  }
  else {
    uVar3 = luaL_optinteger(param_1,1,1);
  }
  if ((int)uVar3 < 0) {
    pcVar4 = "level must be non-negative";
  }
  else {
    iVar2 = lua_getinfo(param_1,uVar3,"f",alStack_168);
    if (iVar2 != 0) {
      iVar2 = lua_type(param_1,-1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"no function environment for tail call at level %d",(ulong)uVar3);
      }
      goto LAB_00f08da4;
    }
    pcVar4 = "invalid level";
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,pcVar4);
}


