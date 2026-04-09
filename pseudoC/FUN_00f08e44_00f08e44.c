// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08e44
// Entry Point: 00f08e44
// Size: 932 bytes
// Signature: undefined FUN_00f08e44(void)


uint FUN_00f08e44(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  lua_State *plVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  lua_State *plVar13;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  char *local_1a0 [3];
  int local_184;
  byte local_17f;
  byte local_17e;
  char acStack_17d [269];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_type(param_1,1);
  plVar13 = param_1;
  if (iVar4 == 9) {
    plVar6 = (lua_State *)lua_tothread(param_1,1);
    bVar3 = plVar6 == param_1;
    if (!bVar3) {
      lua_rawcheckstack(plVar6,1);
      plVar13 = plVar6;
    }
    iVar4 = 2;
    iVar5 = lua_isnumber(param_1,2);
    if (iVar5 == 0) {
LAB_00f091d0:
      pcVar8 = "function or level expected";
      goto LAB_00f091d8;
    }
    uVar12 = 1;
    iVar5 = lua_tointegerx(param_1,2,(int *)0x0);
joined_r0x00f08edc:
    if (iVar5 < 0) {
      pcVar8 = "level can\'t be negative";
LAB_00f091d8:
                    /* WARNING: Subroutine does not return */
      luaL_argerrorL(param_1,iVar4,pcVar8);
    }
  }
  else {
    iVar4 = 1;
    iVar5 = lua_isnumber(param_1,1);
    if (iVar5 != 0) {
      uVar12 = 0;
      bVar3 = true;
      iVar5 = lua_tointegerx(param_1,1,(int *)0x0);
      goto joined_r0x00f08edc;
    }
    iVar4 = 1;
    iVar5 = lua_type(param_1,1);
    if (iVar5 != 7) goto LAB_00f091d0;
    iVar5 = lua_gettop(param_1);
    uVar12 = 0;
    iVar5 = -iVar5;
    bVar3 = true;
  }
  pbVar7 = (byte *)luaL_checklstring(param_1,uVar12 | 2,(ulong *)0x0);
  iVar4 = lua_getinfo(plVar13,iVar5,(char *)pbVar7,(lua_Debug *)local_1a0);
  if (iVar4 != 0) {
    uVar9 = (uint)*pbVar7;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    if (*pbVar7 != 0) {
      uVar11 = 0;
      if (bVar3) {
        pbVar7 = pbVar7 + 1;
LAB_00f08fec:
        do {
          uVar10 = (ulong)(uVar9 - 0x61);
          if (uVar9 - 0x61 < 0x1a) {
            if (*(char *)((long)&local_1c0 + uVar10) != '\0') goto LAB_00f091b0;
            *(undefined *)((long)&local_1c0 + uVar10) = 1;
          }
          switch(uVar10) {
          case 0:
            lua_pushinteger(param_1,(uint)local_17f);
            lua_pushboolean(param_1,(uint)local_17e);
            bVar1 = *pbVar7;
            uVar11 = uVar11 + 2;
            break;
          default:
            goto switchD_00f09018_caseD_1;
          case 5:
            lua_pushvalue(param_1,~uVar11);
            bVar1 = *pbVar7;
            uVar11 = uVar11 + 1;
            break;
          case 0xb:
            lua_pushinteger(param_1,local_184);
            bVar1 = *pbVar7;
            goto joined_r0x00f09088;
          case 0xd:
            pcVar8 = "";
            if (local_1a0[0] != (char *)0x0) {
              pcVar8 = local_1a0[0];
            }
            lua_pushstring(param_1,pcVar8);
            bVar1 = *pbVar7;
joined_r0x00f09088:
            uVar11 = uVar11 + 1;
            break;
          case 0x12:
            goto switchD_00f09018_caseD_12;
          }
          uVar9 = (uint)bVar1;
          pbVar7 = pbVar7 + 1;
        } while (uVar9 != 0);
        goto LAB_00f090b4;
      }
      do {
        pbVar7 = pbVar7 + 1;
        uVar10 = (ulong)(uVar9 - 0x61);
        if (uVar9 - 0x61 < 0x1a) {
          if (*(char *)((long)&local_1c0 + uVar10) != '\0') goto LAB_00f091b0;
          *(undefined *)((long)&local_1c0 + uVar10) = 1;
        }
        switch(uVar10) {
        case 0:
          lua_pushinteger(param_1,(uint)local_17f);
          lua_pushboolean(param_1,(uint)local_17e);
          iVar4 = 2;
          break;
        default:
          goto switchD_00f09018_caseD_1;
        case 5:
          iVar4 = 1;
          lua_xmove(plVar13,param_1,1);
          break;
        case 0xb:
          lua_pushinteger(param_1,local_184);
          goto LAB_00f0910c;
        case 0xd:
          pcVar8 = "";
          if (local_1a0[0] != (char *)0x0) {
            pcVar8 = local_1a0[0];
          }
          goto LAB_00f09190;
        case 0x12:
          pcVar8 = acStack_17d;
LAB_00f09190:
          lua_pushstring(param_1,pcVar8);
LAB_00f0910c:
          iVar4 = 1;
        }
        uVar9 = (uint)*pbVar7;
        uVar11 = uVar11 + iVar4;
      } while (uVar9 != 0);
      goto LAB_00f090b4;
    }
  }
  uVar11 = 0;
LAB_00f090b4:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00f09018_caseD_12:
  lua_pushstring(param_1,acStack_17d);
  bVar1 = *pbVar7;
  uVar9 = (uint)bVar1;
  uVar11 = uVar11 + 1;
  pbVar7 = pbVar7 + 1;
  if (bVar1 == 0) goto LAB_00f090b4;
  goto LAB_00f08fec;
LAB_00f091b0:
  pcVar8 = "duplicate option";
  goto LAB_00f091c4;
switchD_00f09018_caseD_1:
  pcVar8 = "invalid option";
LAB_00f091c4:
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,uVar12 | 2,pcVar8);
}


