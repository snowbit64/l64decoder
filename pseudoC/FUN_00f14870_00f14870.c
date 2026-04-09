// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f14870
// Entry Point: 00f14870
// Size: 1636 bytes
// Signature: undefined FUN_00f14870(void)


int FUN_00f14870(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  uint3 uVar8;
  uint5 uVar9;
  uint6 uVar10;
  uint7 uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  undefined *puVar18;
  float *pfVar19;
  undefined *puVar20;
  char cVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  double dVar29;
  int local_b8;
  uint uStack_b4;
  ulong local_b0;
  char *local_a8;
  lua_State *local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 uStack_8c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar14 = (char *)luaL_checklstring(param_1,1,(ulong *)0x0);
  local_a8 = pcVar14;
  lVar15 = luaL_checklstring(param_1,2,&local_b0);
  iVar12 = luaL_optinteger(param_1,3,1);
  uVar26 = ((int)local_b0 + 1U & iVar12 >> 0x1f) + iVar12;
  uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
  if (uVar26 < 2) {
    uVar26 = 1;
  }
  uVar26 = uVar26 - 1;
  uVar27 = (ulong)uVar26;
  if (local_b0 < uVar27) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"initial position out of string");
  }
  local_98 = 0x100000001;
  local_a0 = param_1;
  if (*pcVar14 == '\0') {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    do {
      iVar24 = (int)uVar27;
      uVar13 = FUN_00f1618c(&local_a0,(long)iVar24,&local_a8,&uStack_b4,&local_b8);
      uVar26 = uStack_b4;
      uVar27 = (ulong)(int)uStack_b4;
      if (local_b0 - (long)iVar24 < uVar27 + (long)local_b8) {
LAB_00f14e94:
                    /* WARNING: Subroutine does not return */
        luaL_argerrorL(param_1,2,"data string too short");
      }
      uVar28 = (long)local_b8 + (long)iVar24;
      luaL_checkstack(param_1,2,"too many results");
      iVar24 = iVar12 + 1;
      if (8 < uVar13) goto LAB_00f1493c;
      iVar25 = (int)uVar28;
      switch(uVar13) {
      case 0:
        if ((int)uVar26 < 1) {
          uVar27 = 0;
          if ((int)uVar26 < 8) goto LAB_00f14bd0;
LAB_00f14de4:
          if (uVar26 != 8) {
            cVar21 = '\0';
            if ((long)uVar27 < 0) {
              cVar21 = -1;
            }
            iVar25 = uVar26 - 9;
            iVar12 = 8;
            do {
              iVar23 = iVar25;
              if ((int)local_98 != 0) {
                iVar23 = iVar12;
              }
              if (cVar21 != *(char *)(lVar15 + uVar28 + (long)iVar23)) {
LAB_00f14e80:
                    /* WARNING: Subroutine does not return */
                luaL_errorL(param_1,"%d-byte integer does not fit into Lua Integer",(ulong)uVar26);
              }
              iVar25 = iVar25 + -1;
              iVar12 = iVar12 + 1;
            } while (iVar25 != -1);
          }
        }
        else {
          uVar13 = uVar26;
          if (7 < (int)uVar26) {
            uVar13 = 8;
          }
          uVar27 = 0;
          uVar22 = uVar13 + 1;
          iVar12 = uVar26 - uVar13;
          do {
            iVar25 = iVar12;
            if ((int)local_98 != 0) {
              iVar25 = uVar22 - 2;
            }
            uVar22 = uVar22 - 1;
            iVar12 = iVar12 + 1;
            uVar27 = (ulong)*(byte *)(lVar15 + uVar28 + (long)iVar25) | uVar27 << 8;
          } while (1 < uVar22);
          if (7 < (int)uVar26) goto LAB_00f14de4;
LAB_00f14bd0:
          uVar17 = 1L << ((ulong)(uVar26 * 8 - 1) & 0x3f);
          uVar27 = (uVar27 ^ uVar17) - uVar17;
        }
        dVar29 = (double)uVar27;
        goto LAB_00f14934;
      case 1:
        if ((int)uVar26 < 1) {
          uVar27 = 0;
        }
        else {
          uVar13 = uVar26;
          if (7 < uVar26) {
            uVar13 = 8;
          }
          uVar3 = uVar13 - 1;
          uVar22 = uVar26 - uVar13;
          if ((int)local_98 != 0) {
            uVar22 = uVar3;
          }
          lVar1 = lVar15 + iVar25;
          uVar5 = uVar13 - 2;
          uVar27 = (ulong)*(byte *)(lVar1 + (int)uVar22);
          if (1 < uVar13) {
            uVar4 = uVar26 - uVar3;
            if ((int)local_98 != 0) {
              uVar4 = uVar5;
            }
            uVar7 = CONCAT11(*(byte *)(lVar1 + (int)uVar22),*(undefined *)(lVar1 + (int)uVar4));
            uVar27 = (ulong)uVar7;
            if (1 < uVar3) {
              uVar3 = uVar13 - 3;
              uVar22 = uVar26 - uVar5;
              if ((int)local_98 != 0) {
                uVar22 = uVar3;
              }
              uVar8 = CONCAT21(uVar7,*(undefined *)(lVar1 + (int)uVar22));
              uVar27 = (ulong)uVar8;
              if (1 < uVar5) {
                uVar5 = uVar13 - 4;
                uVar22 = uVar26 - uVar3;
                if ((int)local_98 != 0) {
                  uVar22 = uVar5;
                }
                uVar22 = CONCAT31(uVar8,*(undefined *)(lVar1 + (int)uVar22));
                uVar27 = (ulong)uVar22;
                if (1 < uVar3) {
                  uVar4 = uVar13 - 5;
                  uVar3 = uVar26 - uVar5;
                  if ((int)local_98 != 0) {
                    uVar3 = uVar4;
                  }
                  uVar9 = CONCAT41(uVar22,*(undefined *)(lVar1 + (int)uVar3));
                  uVar27 = (ulong)uVar9;
                  if (1 < uVar5) {
                    uVar3 = uVar13 - 6;
                    uVar22 = uVar26 - uVar4;
                    if ((int)local_98 != 0) {
                      uVar22 = uVar3;
                    }
                    uVar10 = CONCAT51(uVar9,*(undefined *)(lVar1 + (int)uVar22));
                    uVar27 = (ulong)uVar10;
                    if (1 < uVar4) {
                      iVar12 = uVar26 - uVar3;
                      if ((int)local_98 != 0) {
                        iVar12 = uVar13 - 7;
                      }
                      uVar11 = CONCAT61(uVar10,*(undefined *)(lVar1 + iVar12));
                      uVar27 = (ulong)uVar11;
                      if (1 < uVar3) {
                        iVar12 = uVar26 - (uVar13 - 7);
                        if ((int)local_98 != 0) {
                          iVar12 = uVar13 - 8;
                        }
                        uVar27 = CONCAT71(uVar11,*(undefined *)(lVar1 + iVar12));
                      }
                    }
                  }
                }
              }
            }
          }
          iVar12 = uVar26 - 9;
          if (8 < (int)uVar26) {
            iVar25 = 8;
            do {
              iVar23 = iVar12;
              if ((int)local_98 != 0) {
                iVar23 = iVar25;
              }
              if (*(char *)(lVar1 + iVar23) != '\0') goto LAB_00f14e80;
              iVar12 = iVar12 + -1;
              iVar25 = iVar25 + 1;
            } while (iVar12 != -1);
          }
        }
        dVar29 = (double)(unkuint9)uVar27;
        goto LAB_00f14934;
      case 2:
        if ((int)local_98 == 1) {
          if (uVar26 != 0) {
            puVar20 = (undefined *)(lVar15 + iVar25);
            pfVar19 = &local_90;
            uVar13 = uVar26;
            do {
              uVar13 = uVar13 - 1;
              *(undefined *)pfVar19 = *puVar20;
              puVar20 = puVar20 + 1;
              pfVar19 = (float *)((long)pfVar19 + 1);
            } while (uVar13 != 0);
LAB_00f14da0:
            if ((uVar26 != 8) && (uVar26 == 4)) {
              dVar29 = (double)local_90;
              goto LAB_00f14934;
            }
          }
        }
        else if (uVar26 != 0) {
          puVar20 = (undefined *)((long)&local_90 + uVar27);
          puVar18 = (undefined *)(lVar15 + iVar25);
          uVar13 = uVar26;
          do {
            puVar20 = puVar20 + -1;
            uVar13 = uVar13 - 1;
            *puVar20 = *puVar18;
            puVar18 = puVar18 + 1;
          } while (uVar13 != 0);
          goto LAB_00f14da0;
        }
        dVar29 = (double)CONCAT44(uStack_8c,local_90);
LAB_00f14934:
        lua_pushnumber(param_1,dVar29);
        break;
      case 3:
        lua_pushlstring(param_1,(char *)(lVar15 + iVar25),uVar27);
        break;
      case 4:
        lVar1 = lVar15 + iVar25;
        if ((int)uVar26 < 1) {
          uVar28 = 0;
        }
        else {
          uVar13 = uVar26;
          if (7 < uVar26) {
            uVar13 = 8;
          }
          uVar3 = uVar13 - 1;
          uVar22 = uVar26 - uVar13;
          if ((int)local_98 != 0) {
            uVar22 = uVar3;
          }
          uVar28 = (ulong)*(byte *)(lVar1 + (int)uVar22);
          uVar5 = uVar13 - 2;
          if (1 < uVar13) {
            uVar4 = uVar26 - uVar3;
            if ((int)local_98 != 0) {
              uVar4 = uVar5;
            }
            uVar7 = CONCAT11(*(byte *)(lVar1 + (int)uVar22),*(undefined *)(lVar1 + (int)uVar4));
            uVar28 = (ulong)uVar7;
            if (1 < uVar3) {
              uVar3 = uVar13 - 3;
              uVar22 = uVar26 - uVar5;
              if ((int)local_98 != 0) {
                uVar22 = uVar3;
              }
              uVar8 = CONCAT21(uVar7,*(undefined *)(lVar1 + (int)uVar22));
              uVar28 = (ulong)uVar8;
              if (1 < uVar5) {
                uVar5 = uVar13 - 4;
                uVar22 = uVar26 - uVar3;
                if ((int)local_98 != 0) {
                  uVar22 = uVar5;
                }
                uVar22 = CONCAT31(uVar8,*(undefined *)(lVar1 + (int)uVar22));
                uVar28 = (ulong)uVar22;
                if (1 < uVar3) {
                  uVar4 = uVar13 - 5;
                  uVar3 = uVar26 - uVar5;
                  if ((int)local_98 != 0) {
                    uVar3 = uVar4;
                  }
                  uVar9 = CONCAT41(uVar22,*(undefined *)(lVar1 + (int)uVar3));
                  uVar28 = (ulong)uVar9;
                  if (1 < uVar5) {
                    uVar3 = uVar13 - 6;
                    uVar22 = uVar26 - uVar4;
                    if ((int)local_98 != 0) {
                      uVar22 = uVar3;
                    }
                    uVar10 = CONCAT51(uVar9,*(undefined *)(lVar1 + (int)uVar22));
                    uVar28 = (ulong)uVar10;
                    if (1 < uVar4) {
                      iVar12 = uVar26 - uVar3;
                      if ((int)local_98 != 0) {
                        iVar12 = uVar13 - 7;
                      }
                      uVar11 = CONCAT61(uVar10,*(undefined *)(lVar1 + iVar12));
                      uVar28 = (ulong)uVar11;
                      if (1 < uVar3) {
                        iVar12 = uVar26 - (uVar13 - 7);
                        if ((int)local_98 != 0) {
                          iVar12 = uVar13 - 8;
                        }
                        uVar28 = CONCAT71(uVar11,*(undefined *)(lVar1 + iVar12));
                      }
                    }
                  }
                }
              }
            }
          }
          iVar12 = uVar26 - 9;
          if (8 < (int)uVar26) {
            iVar23 = 8;
            do {
              iVar2 = iVar12;
              if ((int)local_98 != 0) {
                iVar2 = iVar23;
              }
              if (*(char *)(lVar1 + iVar2) != '\0') goto LAB_00f14e80;
              iVar12 = iVar12 + -1;
              iVar23 = iVar23 + 1;
            } while (iVar12 != -1);
          }
          if (local_b0 - ((long)iVar25 + uVar27) < uVar28) goto LAB_00f14e94;
        }
        lua_pushlstring(param_1,(char *)(lVar1 + uVar27),uVar28);
        uVar28 = (ulong)(uint)(iVar25 + (int)uVar28);
        break;
      case 5:
        pcVar14 = (char *)(lVar15 + iVar25);
        sVar16 = strlen(pcVar14);
        if (local_b0 <= sVar16 + (long)iVar25) {
                    /* WARNING: Subroutine does not return */
          luaL_argerrorL(param_1,2,"unfinished string for format \'z\'");
        }
        lua_pushlstring(param_1,pcVar14,sVar16);
        uVar28 = (ulong)(iVar25 + (int)sVar16 + 1);
        break;
      default:
        iVar24 = iVar12;
      }
LAB_00f1493c:
      iVar12 = iVar24;
      uVar26 = (int)uVar28 + uVar26;
      uVar27 = (ulong)uVar26;
    } while (*local_a8 != '\0');
  }
  lua_pushinteger(param_1,uVar26 + 1);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12 + 1;
}


