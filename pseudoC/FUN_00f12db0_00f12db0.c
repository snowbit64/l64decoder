// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f12db0
// Entry Point: 00f12db0
// Size: 212 bytes
// Signature: undefined FUN_00f12db0(void)


undefined8 FUN_00f12db0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  luaL_Buffer alStack_278 [544];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop(param_1);
  lVar4 = luaL_buffinitsize(param_1,alStack_278,(long)iVar2);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      uVar3 = luaL_checkinteger(param_1,(int)lVar5 + 1);
      if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,(int)lVar5 + 1,"invalid value");
      }
      *(char *)(lVar4 + lVar5) = (char)uVar3;
      lVar5 = lVar5 + 1;
    } while (iVar2 != (int)lVar5);
  }
  luaL_pushresultsize(alStack_278,(long)iVar2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


