// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f140b0
// Entry Point: 00f140b0
// Size: 348 bytes
// Signature: undefined FUN_00f140b0(void)


undefined8 FUN_00f140b0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  void *__s2;
  char *pcVar4;
  int iVar5;
  char *__s1;
  size_t sVar6;
  size_t local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_checklstring(param_1,1,&local_60);
  __s2 = (void *)luaL_optlstring(param_1,2,",",&local_68);
  lua_createtable(param_1,0,0);
  __s1 = pcVar3;
  if (local_68 == 0) {
    __s1 = pcVar3 + 1;
  }
  pcVar4 = pcVar3;
  sVar6 = local_68;
  if (pcVar3 + (local_60 - local_68) < __s1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar2 = memcmp(__s1,__s2,sVar6);
      if (iVar2 == 0) {
        iVar5 = iVar5 + 1;
        lua_pushinteger(param_1,iVar5);
        lua_pushlstring(param_1,pcVar4,(long)__s1 - (long)pcVar4);
        lua_settable(param_1,-3);
        pcVar4 = __s1 + local_68;
        sVar6 = local_68;
        if (local_68 != 0) {
          __s1 = __s1 + (local_68 - 1);
        }
      }
      __s1 = __s1 + 1;
    } while (__s1 <= pcVar3 + (local_60 - sVar6));
  }
  if (sVar6 != 0) {
    lua_pushinteger(param_1,iVar5 + 1);
    lua_pushlstring(param_1,pcVar4,(ulong)(pcVar3 + (local_60 - (long)pcVar4)));
    lua_settable(param_1,-3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


