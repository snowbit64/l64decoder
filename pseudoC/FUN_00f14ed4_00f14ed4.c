// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f14ed4
// Entry Point: 00f14ed4
// Size: 820 bytes
// Signature: undefined FUN_00f14ed4(void)


int FUN_00f14ed4(lua_State *param_1,int param_2)

{
  void *__s1;
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  void *pvVar11;
  void *__s;
  size_t __n;
  ulong uVar12;
  ulong uVar13;
  ulong local_2b0;
  int local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0 [2];
  long local_298;
  ulong local_290;
  byte *local_288;
  lua_State *local_280;
  int local_278;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar6 = luaL_checklstring(param_1,1,(ulong *)&local_2a8);
  pbVar7 = (byte *)luaL_checklstring(param_1,2,&local_2b0);
  iVar4 = luaL_optinteger(param_1,3,1);
  iVar4 = (local_2a8 + 1U & iVar4 >> 0x1f) + iVar4;
  iVar10 = (int)lVar6;
  if (iVar4 < 1) {
    iVar4 = 1;
    if (param_2 == 0) goto LAB_00f15038;
LAB_00f14f6c:
    iVar5 = lua_toboolean(param_1,4);
    uVar12 = local_2b0;
    if (iVar5 == 0) {
      uVar13 = 0;
      do {
        pcVar8 = strpbrk((char *)(pbVar7 + uVar13),"^$*+?.([%-");
        if (pcVar8 != (char *)0x0) goto LAB_00f15038;
        sVar9 = strlen((char *)(pbVar7 + uVar13));
        uVar13 = uVar13 + sVar9 + 1;
      } while (uVar13 <= uVar12);
    }
    pvVar11 = (void *)(lVar6 + iVar4 + -1);
    if (local_2b0 == 0) {
LAB_00f151dc:
      iVar10 = (int)pvVar11 - iVar10;
      lua_pushinteger(param_1,iVar10 + 1);
      lua_pushinteger(param_1,iVar10 + (int)local_2b0);
      iVar4 = 2;
      goto LAB_00f1514c;
    }
    uVar12 = (CONCAT44(uStack_2a4,local_2a8) - (long)iVar4) + 1;
    if (local_2b0 <= uVar12) {
      __n = local_2b0 - 1;
      sVar9 = uVar12 - __n;
      if (sVar9 != 0) {
        bVar1 = *pbVar7;
        __s = pvVar11;
        do {
          pvVar11 = memchr(__s,(uint)bVar1,sVar9);
          if (pvVar11 == (void *)0x0) break;
          __s1 = (void *)((long)pvVar11 + 1);
          iVar4 = memcmp(__s1,pbVar7 + 1,__n);
          if (iVar4 == 0) goto LAB_00f151dc;
          sVar9 = (long)__s + (sVar9 - (long)__s1);
          __s = __s1;
        } while (sVar9 != 0);
      }
    }
  }
  else if (iVar4 <= (int)(local_2a8 + 1U)) {
    if (param_2 != 0) goto LAB_00f14f6c;
LAB_00f15038:
    uVar12 = (lVar6 + iVar4) - 1;
    local_298 = lVar6;
    local_280 = param_1;
    if (*pbVar7 == 0x5e) {
      local_278 = 0;
      local_288 = pbVar7 + local_2b0;
      local_290 = lVar6 + CONCAT44(uStack_2a4,local_2a8);
      local_2a0[0] = 200;
      local_2b0 = local_2b0 - 1;
      lVar6 = FUN_00f15208(local_2a0,uVar12,pbVar7 + 1);
      if (lVar6 != 0) {
joined_r0x00f15184:
        if (param_2 == 0) {
          iVar4 = local_278;
          if (local_278 == 0) {
            iVar4 = 1;
          }
          luaL_checkstack(local_280,iVar4,"too many captures");
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              FUN_00f15e08(local_2a0,iVar10,uVar12,lVar6);
              iVar10 = iVar10 + 1;
            } while (iVar4 != iVar10);
          }
        }
        else {
          lua_pushinteger(param_1,((int)uVar12 - iVar10) + 1);
          lua_pushinteger(param_1,(int)lVar6 - iVar10);
          iVar4 = local_278;
          luaL_checkstack(local_280,local_278,"too many captures");
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              FUN_00f15e08(local_2a0,iVar10,0,0);
              iVar10 = iVar10 + 1;
            } while (iVar4 != iVar10);
          }
          iVar4 = iVar4 + 2;
        }
        goto LAB_00f1514c;
      }
    }
    else {
      local_2a0[0] = 200;
      local_288 = pbVar7 + local_2b0;
      local_290 = lVar6 + CONCAT44(uStack_2a4,local_2a8);
      do {
        local_278 = 0;
        lVar6 = FUN_00f15208(local_2a0,uVar12,pbVar7);
        if (lVar6 != 0) goto joined_r0x00f15184;
        bVar3 = uVar12 < local_290;
        uVar12 = uVar12 + 1;
      } while (bVar3);
    }
  }
  lua_pushnil(param_1);
  iVar4 = 1;
LAB_00f1514c:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


