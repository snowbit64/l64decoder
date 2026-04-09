// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13664
// Entry Point: 00f13664
// Size: 1396 bytes
// Signature: undefined FUN_00f13664(void)


undefined8 FUN_00f13664(lua_State *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  lua_State *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  char cVar15;
  char **ppcVar16;
  ulong uVar17;
  int iVar18;
  ulong local_4d8;
  int local_4d0;
  undefined4 uStack_4cc;
  ulong local_4c8;
  char *local_4c0;
  char *pcStack_4b8;
  undefined4 local_2a0 [2];
  char *local_298;
  char *local_290;
  char *local_288;
  lua_State *local_280;
  uint local_278;
  int local_270;
  undefined4 uStack_26c;
  ulong local_268;
  char *apcStack_260 [62];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pcVar9 = (char *)luaL_checklstring(param_1,1,(ulong *)&local_4d0);
  pcVar10 = (char *)luaL_checklstring(param_1,2,&local_4d8);
  iVar6 = lua_type(param_1,3);
  iVar7 = luaL_optinteger(param_1,4,local_4d0 + 1);
  cVar2 = *pcVar10;
  if ((2 < iVar6 - 5U) && (iVar6 != 3)) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,3,"string/function/table");
  }
  luaL_buffinit(param_1,(luaL_Buffer *)&local_4c0);
  if (cVar2 == '^') {
    pcVar10 = pcVar10 + 1;
    local_4d8 = local_4d8 - 1;
  }
  local_288 = pcVar10 + local_4d8;
  iVar18 = 0;
  local_2a0[0] = 200;
  local_290 = pcVar9 + CONCAT44(uStack_4cc,local_4d0);
  local_298 = pcVar9;
  local_280 = param_1;
  do {
    if (iVar7 <= iVar18) break;
    local_278 = 0;
    pcVar11 = (char *)FUN_00f15208(local_2a0,pcVar9,pcVar10);
    plVar5 = local_280;
    if (pcVar11 == (char *)0x0) {
LAB_00f13ac8:
      if (local_290 <= pcVar9) break;
      if (pcStack_4b8 <= local_4c0) {
        luaL_extendbuffer((luaL_Buffer *)&local_4c0,1,-1);
      }
      *local_4c0 = *pcVar9;
      pcVar11 = pcVar9 + 1;
      local_4c0 = local_4c0 + 1;
    }
    else {
      if (iVar6 == 6) {
        if ((int)local_278 < 1) {
          uVar17 = (long)pcVar11 - (long)pcVar9;
          pcVar14 = pcVar9;
LAB_00f13980:
          lua_pushlstring(local_280,pcVar14,uVar17);
        }
        else {
          if (local_268 != 0xfffffffffffffffe) {
            if (local_268 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              luaL_errorL(local_280,"unfinished capture");
            }
            pcVar14 = (char *)CONCAT44(uStack_26c,local_270);
            uVar17 = local_268;
            goto LAB_00f13980;
          }
          lua_pushinteger(local_280,(local_270 - (int)local_298) + 1);
        }
        lua_gettable(plVar5,3);
        iVar8 = lua_toboolean(plVar5,-1);
        if (iVar8 == 0) goto LAB_00f13a98;
LAB_00f139bc:
        iVar8 = lua_isstring(plVar5,-1);
        if (iVar8 == 0) {
          uVar13 = luaL_typename(plVar5,-1);
                    /* WARNING: Subroutine does not return */
          luaL_errorL(plVar5,"invalid replacement value (a %s)",uVar13);
        }
LAB_00f13ab4:
        luaL_addvalue((luaL_Buffer *)&local_4c0);
      }
      else {
        if (iVar6 == 7) {
          lua_pushvalue(local_280,3);
          uVar1 = local_278;
          if (local_278 == 0 && pcVar9 != (char *)0x0) {
            uVar1 = 1;
          }
          luaL_checkstack(local_280,uVar1,"too many captures");
          if (0 < (int)uVar1) {
            if ((int)local_278 < 1) {
              lua_pushlstring(local_280,pcVar9,(long)pcVar11 - (long)pcVar9);
            }
            else if (local_268 == 0xfffffffffffffffe) {
              lua_pushinteger(local_280,(local_270 - (int)local_298) + 1);
            }
            else {
              if (local_268 == 0xffffffffffffffff) {
LAB_00f13b6c:
                    /* WARNING: Subroutine does not return */
                luaL_errorL(local_280,"unfinished capture");
              }
              lua_pushlstring(local_280,(char *)CONCAT44(uStack_26c,local_270),local_268);
            }
            if (uVar1 != 1) {
              uVar17 = 1;
              ppcVar16 = apcStack_260;
              do {
                while( true ) {
                  if ((long)(int)local_278 <= (long)uVar17) {
                    /* WARNING: Subroutine does not return */
                    luaL_errorL(local_280,"invalid capture index");
                  }
                  pcVar14 = ppcVar16[1];
                  if (pcVar14 == (char *)0xfffffffffffffffe) break;
                  if (pcVar14 == (char *)0xffffffffffffffff) goto LAB_00f13b6c;
                  lua_pushlstring(local_280,*ppcVar16,(ulong)pcVar14);
                  uVar17 = uVar17 + 1;
                  ppcVar16 = ppcVar16 + 2;
                  if (uVar1 == uVar17) goto LAB_00f13a74;
                }
                lua_pushinteger(local_280,(*(int *)ppcVar16 - (int)local_298) + 1);
                uVar17 = uVar17 + 1;
                ppcVar16 = ppcVar16 + 2;
              } while (uVar1 != uVar17);
            }
          }
LAB_00f13a74:
          lua_call(plVar5,uVar1,1);
          iVar8 = lua_toboolean(plVar5,-1);
          if (iVar8 != 0) goto LAB_00f139bc;
LAB_00f13a98:
          lua_settop(plVar5,-2);
          lua_pushlstring(plVar5,pcVar9,(long)pcVar11 - (long)pcVar9);
          goto LAB_00f13ab4;
        }
        lVar12 = lua_tolstring(local_280,3,&local_4c8);
        luaL_reservebuffer((luaL_Buffer *)&local_4c0,local_4c8,-1);
        if (local_4c8 != 0) {
          uVar17 = 0;
          do {
            cVar15 = *(char *)(lVar12 + uVar17);
            if (cVar15 == '%') {
              uVar17 = uVar17 + 1;
              bVar3 = *(byte *)(lVar12 + uVar17);
              if (bVar3 - 0x3a < 0xfffffff6) {
                if (bVar3 != 0x25) {
                    /* WARNING: Subroutine does not return */
                  luaL_errorL(local_280,"invalid use of \'%c\' in replacement string",0x25);
                }
                if (local_4c0 < pcStack_4b8) {
                  cVar15 = '%';
                }
                else {
                  luaL_extendbuffer((luaL_Buffer *)&local_4c0,1,-1);
                  cVar15 = *(char *)(lVar12 + uVar17);
                }
                *local_4c0 = cVar15;
                local_4c0 = local_4c0 + 1;
              }
              else if (bVar3 == 0x30) {
                luaL_addlstring((luaL_Buffer *)&local_4c0,pcVar9,(long)pcVar11 - (long)pcVar9);
              }
              else {
                FUN_00f15e08(local_2a0,bVar3 - 0x31,pcVar9,pcVar11);
                luaL_addvalue((luaL_Buffer *)&local_4c0);
              }
            }
            else {
              if (pcStack_4b8 <= local_4c0) {
                luaL_extendbuffer((luaL_Buffer *)&local_4c0,1,-1);
                cVar15 = *(char *)(lVar12 + uVar17);
              }
              *local_4c0 = cVar15;
              local_4c0 = local_4c0 + 1;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_4c8);
        }
      }
      iVar18 = iVar18 + 1;
      if (pcVar11 <= pcVar9) goto LAB_00f13ac8;
    }
    pcVar9 = pcVar11;
  } while (cVar2 != '^');
  luaL_addlstring((luaL_Buffer *)&local_4c0,pcVar9,(long)local_290 - (long)pcVar9);
  luaL_pushresult((luaL_Buffer *)&local_4c0);
  lua_pushinteger(param_1,iVar18);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


