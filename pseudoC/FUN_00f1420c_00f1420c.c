// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1420c
// Entry Point: 00f1420c
// Size: 1400 bytes
// Signature: undefined FUN_00f1420c(void)


undefined8 FUN_00f1420c(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  double dVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  int local_2e8;
  int iStack_2e4;
  char *local_2e0;
  lua_State *plStack_2d8;
  undefined8 local_2d0;
  ulong local_2c8 [2];
  undefined8 local_2b8;
  undefined *local_290;
  undefined *puStack_288;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  local_2d0 = 0x100000001;
  local_2e0 = pcVar6;
  plStack_2d8 = param_1;
  lua_pushnil(param_1);
  luaL_buffinit(param_1,(luaL_Buffer *)&local_290);
  if (*pcVar6 != '\0') {
    lVar17 = 0;
    iVar18 = 1;
    do {
      uVar5 = FUN_00f1618c(&plStack_2d8,lVar17,&local_2e0,&iStack_2e4,&local_2e8);
      iVar21 = iStack_2e4;
      iVar13 = local_2e8;
      if (0 < local_2e8) {
        iVar20 = local_2e8 + 1;
        do {
          if (puStack_288 <= local_290) {
            luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
          }
          puVar12 = local_290 + 1;
          iVar20 = iVar20 + -1;
          *local_290 = 0;
          local_290 = puVar12;
        } while (1 < iVar20);
      }
      iVar20 = iVar18 + 1;
      lVar17 = lVar17 + (iVar21 + iVar13);
      dVar19 = (double)(long)iVar21;
      switch(uVar5) {
      case 0:
        dVar22 = (double)luaL_checknumber(param_1,iVar20);
        uVar10 = (ulong)dVar22;
        if ((iVar21 < 8) &&
           ((lVar8 = 1L << ((ulong)(iVar21 * 8 - 1) & 0x3f),
            -uVar10 != lVar8 && (long)uVar10 <= -lVar8 || (lVar8 <= (long)uVar10)))) {
          pcVar6 = "integer overflow";
LAB_00f14774:
                    /* WARNING: Subroutine does not return */
          luaL_argerrorL(param_1,iVar20,pcVar6);
        }
        iVar18 = iVar21 + -1;
        if ((int)local_2d0 != 0) {
          iVar18 = 0;
        }
        iVar13 = iVar21 + -2;
        *(char *)((long)&local_2b8 + (long)iVar18) = (char)uVar10;
        if (1 < iVar21) {
          iVar18 = 1;
          uVar16 = uVar10;
          do {
            iVar1 = iVar13;
            if ((int)local_2d0 != 0) {
              iVar1 = iVar18;
            }
            iVar18 = iVar18 + 1;
            iVar13 = iVar13 + -1;
            *(char *)((long)&local_2b8 + (long)iVar1) = (char)(uVar16 >> 8);
            uVar16 = uVar16 >> 8;
          } while (iVar13 != -1);
          if ((8 < iVar21) && ((long)uVar10 < 0)) {
            uVar14 = iVar21 - 8;
            if (uVar14 < 2) {
              uVar11 = 8;
            }
            else {
              uVar2 = uVar14 & 0xfffffffe;
              uVar15 = 0;
              uVar11 = uVar2 + 8;
              iVar18 = iVar21 + -10;
              do {
                iVar13 = uVar15 + 8;
                iVar1 = uVar15 + 9;
                if ((int)local_2d0 == 0) {
                  iVar13 = iVar18 + 1;
                  iVar1 = iVar18;
                }
                uVar15 = uVar15 + 2;
                iVar18 = iVar18 + -2;
                *(undefined *)((long)&local_2b8 + (long)iVar13) = 0xff;
                *(undefined *)((long)&local_2b8 + (long)iVar1) = 0xff;
              } while (uVar2 != uVar15);
              if (uVar14 == uVar2) goto LAB_00f146e8;
            }
            uVar14 = ~uVar11 + iVar21;
            do {
              uVar15 = uVar14;
              if ((int)local_2d0 != 0) {
                uVar15 = uVar11;
              }
              uVar11 = uVar11 + 1;
              uVar14 = uVar14 - 1;
              *(undefined *)((long)&local_2b8 + (long)(int)uVar15) = 0xff;
            } while (uVar14 != 0xffffffff);
          }
        }
        goto LAB_00f146e8;
      case 1:
        dVar22 = (double)luaL_checknumber(param_1,iVar20);
        uVar10 = (ulong)dVar22;
        if ((iVar21 < 8) && (uVar10 >> ((ulong)(uint)(iVar21 << 3) & 0x3f) != 0)) {
          pcVar6 = "unsigned overflow";
          goto LAB_00f14774;
        }
        iVar18 = iVar21 + -1;
        if ((int)local_2d0 != 0) {
          iVar18 = 0;
        }
        iVar13 = iVar21 + -2;
        *(char *)((long)&local_2b8 + (long)iVar18) = (char)uVar10;
        if (1 < iVar21) {
          iVar18 = 1;
          do {
            iVar21 = iVar13;
            if ((int)local_2d0 != 0) {
              iVar21 = iVar18;
            }
            iVar18 = iVar18 + 1;
            iVar13 = iVar13 + -1;
            *(char *)((long)&local_2b8 + (long)iVar21) = (char)(uVar10 >> 8);
            uVar10 = uVar10 >> 8;
          } while (iVar13 != -1);
        }
LAB_00f146e8:
        puVar7 = &local_2b8;
LAB_00f146f0:
        luaL_addlstring((luaL_Buffer *)&local_290,(char *)puVar7,(ulong)dVar19);
        iVar18 = iVar20;
        break;
      case 2:
        dVar22 = (double)luaL_checknumber(param_1,iVar20);
        if ((iVar21 == 8) || (iVar21 != 4)) {
          local_2b8 = dVar22;
          if ((int)local_2d0 != 1) goto LAB_00f144b4;
LAB_00f14658:
          if (iVar21 != 0) {
            puVar7 = local_2c8;
            puVar9 = &local_2b8;
            do {
              iVar21 = iVar21 + -1;
              *(undefined *)puVar7 = *(undefined *)puVar9;
              puVar7 = (ulong *)((long)puVar7 + 1);
              puVar9 = (undefined8 *)((long)puVar9 + 1);
            } while (iVar21 != 0);
          }
        }
        else {
          local_2b8 = (double)CONCAT44(local_2b8._4_4_,(float)dVar22);
          if ((int)local_2d0 == 1) goto LAB_00f14658;
LAB_00f144b4:
          if (iVar21 != 0) {
            puVar12 = (undefined *)((long)local_2c8 + (long)dVar19);
            puVar9 = &local_2b8;
            do {
              puVar12 = puVar12 + -1;
              iVar21 = iVar21 + -1;
              *puVar12 = *(undefined *)puVar9;
              puVar9 = (undefined8 *)((long)puVar9 + 1);
            } while (iVar21 != 0);
          }
        }
        puVar7 = local_2c8;
        goto LAB_00f146f0;
      case 3:
        pcVar6 = (char *)luaL_checklstring(param_1,iVar20,&local_2b8);
        if ((ulong)dVar19 < (ulong)local_2b8) {
          pcVar6 = "string longer than given size";
          goto LAB_00f14774;
        }
        luaL_addlstring((luaL_Buffer *)&local_290,pcVar6,(ulong)local_2b8);
        while (dVar22 = (double)((long)local_2b8 + 1), bVar4 = (ulong)local_2b8 < (ulong)dVar19,
              iVar18 = iVar20, local_2b8 = dVar22, bVar4) {
          if (puStack_288 <= local_290) {
            luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
          }
          *local_290 = 0;
          local_290 = local_290 + 1;
        }
        break;
      case 4:
        pcVar6 = (char *)luaL_checklstring(param_1,iVar20,local_2c8);
        if ((iVar21 < 8) && (local_2c8[0] >> ((ulong)(uint)(iVar21 << 3) & 0x3f) != 0)) {
          pcVar6 = "string length does not fit in given size";
          goto LAB_00f14774;
        }
        iVar18 = iVar21 + -1;
        if ((int)local_2d0 != 0) {
          iVar18 = 0;
        }
        iVar13 = iVar21 + -2;
        *(char *)((long)&local_2b8 + (long)iVar18) = (char)local_2c8[0];
        if (1 < iVar21) {
          iVar18 = 1;
          uVar10 = local_2c8[0];
          do {
            iVar21 = iVar13;
            if ((int)local_2d0 != 0) {
              iVar21 = iVar18;
            }
            iVar18 = iVar18 + 1;
            iVar13 = iVar13 + -1;
            *(char *)((long)&local_2b8 + (long)iVar21) = (char)(uVar10 >> 8);
            uVar10 = uVar10 >> 8;
          } while (iVar13 != -1);
        }
        luaL_addlstring((luaL_Buffer *)&local_290,(char *)&local_2b8,(ulong)dVar19);
        luaL_addlstring((luaL_Buffer *)&local_290,pcVar6,local_2c8[0]);
        lVar17 = local_2c8[0] + lVar17;
        iVar18 = iVar20;
        break;
      case 5:
        pcVar6 = (char *)luaL_checklstring(param_1,iVar20,&local_2b8);
        dVar19 = (double)strlen(pcVar6);
        if (dVar19 != local_2b8) {
          pcVar6 = "string contains zeros";
          goto LAB_00f14774;
        }
        luaL_addlstring((luaL_Buffer *)&local_290,pcVar6,(ulong)dVar19);
        if (puStack_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
        }
        *local_290 = 0;
        lVar17 = lVar17 + (long)local_2b8 + 1;
        iVar18 = iVar20;
        local_290 = local_290 + 1;
        break;
      case 6:
        if (puStack_288 <= local_290) {
          luaL_extendbuffer((luaL_Buffer *)&local_290,1,-1);
        }
        *local_290 = 0;
        local_290 = local_290 + 1;
      }
    } while (*local_2e0 != '\0');
  }
  luaL_pushresult((luaL_Buffer *)&local_290);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


