// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f091e8
// Entry Point: 00f091e8
// Size: 688 bytes
// Signature: undefined FUN_00f091e8(void)


undefined8 FUN_00f091e8(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  lua_State *plVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  byte local_3c1;
  char *local_3c0;
  char *local_3b8;
  long local_3b0;
  uint local_3a4;
  char acStack_39d [269];
  undefined *local_290;
  undefined *puStack_288;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  iVar4 = lua_type(param_1,1);
  plVar6 = param_1;
  if (iVar4 == 9) {
    plVar6 = (lua_State *)lua_tothread(param_1,1);
  }
  uVar10 = (uint)(iVar4 == 9);
  pcVar7 = (char *)luaL_optlstring(param_1,uVar10 + 1,(char *)0x0,(ulong *)0x0);
  uVar10 = uVar10 | 2;
  iVar4 = luaL_optinteger(param_1,uVar10,(uint)(plVar6 == param_1));
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,uVar10,"level can\'t be negative");
  }
  luaL_buffinit(param_1,(luaL_Buffer *)&local_290);
  if (pcVar7 != (char *)0x0) {
    sVar8 = strlen(pcVar7);
    luaL_addlstring((luaL_Buffer *)&local_290,pcVar7,sVar8);
    luaL_addlstring((luaL_Buffer *)&local_290,"\n",1);
  }
  iVar5 = lua_getinfo(plVar6,iVar4,"sln",(lua_Debug *)&local_3c0);
  if (iVar5 != 0) {
    do {
      iVar5 = strcmp(local_3b8,"C");
      if (iVar5 != 0) {
        if (local_3b0 != 0) {
          uVar9 = __strlen_chk(acStack_39d,0x10d);
          luaL_addlstring((luaL_Buffer *)&local_290,acStack_39d,uVar9);
        }
        if (0 < (int)local_3a4) {
          lVar2 = 0;
          uVar10 = local_3a4;
          do {
            lVar11 = lVar2;
            bVar3 = 9 < uVar10;
            (&local_3c1)[lVar11] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
            lVar2 = lVar11 + -1;
            uVar10 = uVar10 / 10;
          } while (bVar3);
          if (puStack_288 <= local_290) {
            luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
          }
          *local_290 = 0x3a;
          local_290 = local_290 + 1;
          luaL_addlstring((luaL_Buffer *)&local_290,(char *)(&local_3c1 + lVar11),-(lVar11 + -1));
        }
        if (local_3c0 != (char *)0x0) {
          luaL_addlstring((luaL_Buffer *)&local_290," function ",10);
          pcVar7 = local_3c0;
          sVar8 = strlen(local_3c0);
          luaL_addlstring((luaL_Buffer *)&local_290,pcVar7,sVar8);
        }
        if (puStack_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
        }
        *local_290 = 10;
        local_290 = local_290 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = lua_getinfo(plVar6,iVar4,"sln",(lua_Debug *)&local_3c0);
    } while (iVar5 != 0);
  }
  luaL_pushresult((luaL_Buffer *)&local_290);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


