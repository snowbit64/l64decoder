// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f12e8c
// Entry Point: 00f12e8c
// Size: 1896 bytes
// Signature: undefined FUN_00f12e8c(void)


undefined8 FUN_00f12e8c(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte bVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  double dVar19;
  undefined auVar20 [16];
  ulong local_4c0;
  ulong local_4b8;
  char local_4b0 [512];
  undefined local_2b0;
  byte abStack_2af [31];
  byte *local_290;
  byte *local_288;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  iVar6 = lua_gettop(param_1);
  pbVar9 = (byte *)luaL_checklstring(param_1,1,&local_4c0);
  luaL_buffinit(param_1,(luaL_Buffer *)&local_290);
  if (0 < (long)local_4c0) {
    bVar1 = false;
    pbVar3 = pbVar9 + local_4c0;
    iVar7 = 1;
    do {
      bVar15 = *pbVar9;
      iVar16 = iVar7;
      if (bVar15 != 0x25) {
        if (local_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
          bVar15 = *pbVar9;
        }
        pbVar9 = pbVar9 + 1;
        *local_290 = bVar15;
        local_290 = local_290 + 1;
        goto LAB_00f12f28;
      }
      pbVar18 = pbVar9 + 1;
      bVar15 = *pbVar18;
      if (bVar15 == 0x25) {
        if (local_290 < local_288) {
          bVar15 = 0x25;
        }
        else {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
          bVar15 = *pbVar18;
        }
        pbVar9 = pbVar9 + 2;
        *local_290 = bVar15;
        local_290 = local_290 + 1;
        goto LAB_00f12f28;
      }
      local_4b0[0] = '\0';
      pbVar9 = pbVar18;
      while ((bVar15 != 0 && (lVar10 = __strchr_chk("-+ #0",bVar15,6), lVar10 != 0))) {
        pbVar9 = pbVar9 + 1;
        bVar15 = *pbVar9;
      }
      if (5 < (ulong)((long)pbVar9 - (long)pbVar18)) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"invalid format (repeated flags)");
      }
      pbVar14 = pbVar9;
      if (*pbVar9 == 0x28) {
        bVar15 = pbVar9[1];
        lVar10 = 0;
        while (pbVar14 = pbVar9 + 1, bVar15 != 0) {
          if (bVar15 == 0x29) {
            lVar4 = 0x1ff;
            if (0xfffffffffffffdff < lVar10 - 0x1ffU) {
              lVar4 = lVar10;
            }
            __memcpy_chk(local_4b0,pbVar9 + 1,lVar4,0x200);
            pbVar18 = pbVar9 + lVar10 + 2;
            local_4b0[lVar4] = '\0';
            pbVar14 = pbVar18;
            break;
          }
          bVar15 = pbVar9[lVar10 + 2];
          lVar10 = lVar10 + 1;
        }
      }
      if (*pbVar14 - 0x30 < 10) {
        pbVar14 = pbVar14 + 1;
      }
      if (*pbVar14 - 0x30 < 10) {
        pbVar14 = pbVar14 + 1;
      }
      bVar15 = *pbVar14;
      pbVar17 = pbVar14;
      if (bVar15 == 0x2e) {
        lVar10 = 1;
        pbVar17 = pbVar14 + 1;
        if (0xfffffff5 < pbVar14[1] - 0x3a) {
          lVar10 = 2;
          pbVar17 = pbVar14 + 2;
        }
        if (pbVar14[lVar10] - 0x30 < 10) {
          pbVar17 = pbVar17 + 1;
        }
        bVar15 = *pbVar17;
      }
      if (0xfffffff5 < bVar15 - 0x3a) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"invalid format (width or precision too long)");
      }
      lVar10 = (long)pbVar17 - (long)pbVar18;
      local_2b0 = 0x25;
      __strncpy_chk((ulong)&local_2b0 | 1,pbVar18,lVar10 + 1,0x1f);
      *(undefined *)(((ulong)&local_2b0 | 1) + lVar10 + 1) = 0;
      if ((bVar1) || (local_4b0[0] == '\0')) {
        iVar16 = iVar7 + 1;
        if (iVar6 <= iVar7) {
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,"missing argument #%d");
        }
      }
      else {
        iVar7 = lua_gettop(param_1);
        if (iVar7 < 2) {
LAB_00f13588:
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,"missing named argument %s",local_4b0);
        }
        bVar1 = false;
        iVar16 = 1;
        while( true ) {
          iVar2 = iVar16 + 1;
          pcVar11 = (char *)lua_tolstring(param_1,iVar2,(ulong *)0x0);
          if (((pcVar11 != (char *)0x0) && (iVar8 = strcmp(pcVar11,local_4b0), iVar2 < iVar7)) &&
             (iVar8 == 0)) break;
          bVar1 = iVar7 <= iVar2;
          iVar16 = iVar2;
          if (iVar7 == iVar2) goto LAB_00f13588;
        }
        if (bVar1) goto LAB_00f13588;
        iVar16 = iVar16 + 2;
        bVar1 = true;
      }
      pbVar9 = pbVar17 + 1;
      bVar15 = *pbVar17;
      switch(bVar15) {
      case 0x2a:
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          luaL_errorL(param_1,"\'%%*\' does not take a form");
        }
        pcVar11 = (char *)luaL_tolstring(param_1,iVar16,&local_4b8);
        uVar12 = local_4b8;
        goto LAB_00f13268;
      default:
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"invalid option \'%%%c\' to \'format\'",(ulong)bVar15);
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        luaL_checknumber(param_1,iVar16);
        FUN_00f15e9c(local_4b0,extraout_x1,&local_2b0);
        break;
      case 0x58:
      case 0x6f:
      case 0x75:
      case 0x78:
        dVar19 = (double)luaL_checknumber(param_1,iVar16);
        abStack_2af[lVar10] = 0x6c;
        abStack_2af[lVar10 + 1] = 0x6c;
        abStack_2af[lVar10 + 2] = bVar15;
        abStack_2af[lVar10 + 3] = 0;
        uVar13 = extraout_x1_00;
        goto LAB_00f13244;
      case 99:
        dVar19 = (double)luaL_checknumber(param_1,iVar16);
        FUN_00f15e9c(local_4b0,extraout_x1_02,&local_2b0,(int)dVar19);
        break;
      case 100:
      case 0x69:
        abStack_2af[lVar10] = 0x6c;
        abStack_2af[lVar10 + 1] = 0x6c;
        abStack_2af[lVar10 + 2] = bVar15;
        abStack_2af[lVar10 + 3] = 0;
        dVar19 = (double)luaL_checknumber(param_1,iVar16);
        uVar13 = extraout_x1_01;
LAB_00f13244:
        FUN_00f15e9c(local_4b0,uVar13,&local_2b0,(long)dVar19);
        break;
      case 0x71:
        pbVar18 = (byte *)luaL_checklstring(param_1,iVar16,&local_4b8);
        luaL_reservebuffer((luaL_Buffer *)&local_290,local_4b8 + 2,-1);
        if (local_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
        }
        *local_290 = 0x22;
        local_290 = local_290 + 1;
        while (uVar12 = local_4b8 - 1, local_4b8 != 0) {
          bVar15 = *pbVar18;
          switch(bVar15) {
          case 0:
            local_4b8 = uVar12;
            luaL_addlstring((luaL_Buffer *)&local_290,"\\000",4);
            break;
          case 10:
          case 0x22:
switchD_00f1333c_caseD_a:
            pbVar14 = local_290;
            local_4b8 = uVar12;
            if (local_288 <= local_290) {
              luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
              pbVar14 = local_290;
            }
            local_290 = pbVar14 + 1;
            *pbVar14 = 0x5c;
            if (local_288 <= local_290) {
              luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
            }
            *local_290 = *pbVar18;
            local_290 = local_290 + 1;
            break;
          case 0xd:
            local_4b8 = uVar12;
            luaL_addlstring((luaL_Buffer *)&local_290,"\\r",2);
            break;
          default:
            if (bVar15 == 0x5c) goto switchD_00f1333c_caseD_a;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
            local_4b8 = uVar12;
            if (local_288 <= local_290) {
              luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
              bVar15 = *pbVar18;
            }
            *local_290 = bVar15;
            local_290 = local_290 + 1;
          }
          pbVar18 = pbVar18 + 1;
        }
        local_4b8 = uVar12;
        if (local_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
        }
        *local_290 = 0x22;
        local_290 = local_290 + 1;
        goto LAB_00f12f28;
      case 0x73:
        iVar7 = lua_type(param_1,iVar16);
        if ((iVar7 != 3) && (iVar7 != 5)) {
          luaL_tolstring(param_1,iVar16,&local_4b8);
        }
        iVar2 = iVar16;
        if (iVar7 != 5 && iVar7 != 3) {
          iVar2 = -1;
        }
        uVar13 = luaL_checklstring(param_1,iVar2,&local_4b8);
        auVar20 = __strchr_chk(&local_2b0,0x2e,0x20);
        if ((auVar20._0_8_ != 0) || (local_4b8 < 100)) {
          FUN_00f15e9c(local_4b0,auVar20._8_8_,&local_2b0,uVar13);
          if ((iVar7 != 3) && (iVar7 != 5)) {
            lua_settop(param_1,-2);
          }
          break;
        }
        lua_pushvalue(param_1,iVar2);
        luaL_addvalue((luaL_Buffer *)&local_290);
        if ((iVar7 != 3) && (iVar7 != 5)) {
          lua_settop(param_1,-2);
        }
        goto LAB_00f12f28;
      }
      uVar12 = __strlen_chk(local_4b0,0x200);
      pcVar11 = local_4b0;
LAB_00f13268:
      luaL_addlstring((luaL_Buffer *)&local_290,pcVar11,uVar12);
LAB_00f12f28:
      iVar7 = iVar16;
    } while (pbVar9 < pbVar3);
  }
  luaL_pushresult((luaL_Buffer *)&local_290);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


