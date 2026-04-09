// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f15f40
// Entry Point: 00f15f40
// Size: 588 bytes
// Signature: undefined FUN_00f15f40(void)


ulong FUN_00f15f40(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  char **ppcVar9;
  ulong uVar10;
  char *pcVar11;
  ulong local_298;
  ulong uStack_290;
  undefined4 local_288 [2];
  long local_280;
  char *local_278;
  long local_270;
  lua_State *local_268;
  uint local_260;
  int local_258;
  undefined4 uStack_254;
  ulong local_250;
  char *apcStack_248 [62];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = lua_tolstring(param_1,-0x2713,&uStack_290);
  lVar5 = lua_tolstring(param_1,-0x2714,&local_298);
  local_288[0] = 200;
  local_270 = lVar5 + local_298;
  local_278 = (char *)(lVar4 + uStack_290);
  local_280 = lVar4;
  local_268 = param_1;
  iVar3 = lua_tointegerx(param_1,-0x2715,(int *)0x0);
  if ((long)iVar3 <= (long)uStack_290) {
    pcVar7 = (char *)(lVar4 + iVar3);
    pcVar11 = pcVar7;
    do {
      local_260 = 0;
      pcVar6 = (char *)FUN_00f15208(local_288,pcVar7,lVar5);
      if (pcVar6 != (char *)0x0) {
        iVar3 = (int)pcVar6 - (int)lVar4;
        if (pcVar7 == pcVar6) {
          iVar3 = iVar3 + 1;
        }
        lua_pushinteger(param_1,iVar3);
        lua_replace(param_1,-0x2715);
        uVar1 = local_260;
        if (local_260 == 0 && pcVar7 != (char *)0x0) {
          uVar1 = 1;
        }
        uVar8 = (ulong)uVar1;
        luaL_checkstack(local_268,uVar1,"too many captures");
        if ((int)uVar1 < 1) goto LAB_00f16000;
        if ((int)local_260 < 1) {
          lua_pushlstring(local_268,pcVar7,(long)pcVar6 - (long)pcVar11);
        }
        else if (local_250 == 0xfffffffffffffffe) {
          lua_pushinteger(local_268,(local_258 - (int)local_280) + 1);
        }
        else {
          if (local_250 == 0xffffffffffffffff) goto LAB_00f16178;
          lua_pushlstring(local_268,(char *)CONCAT44(uStack_254,local_258),local_250);
        }
        if (uVar1 == 1) {
          uVar8 = 1;
        }
        else {
          uVar10 = 1;
          ppcVar9 = apcStack_248;
          do {
            if ((long)(int)local_260 <= (long)uVar10) {
                    /* WARNING: Subroutine does not return */
              luaL_errorL(local_268,"invalid capture index");
            }
            pcVar7 = ppcVar9[1];
            if (pcVar7 == (char *)0xfffffffffffffffe) {
              lua_pushinteger(local_268,(*(int *)ppcVar9 - (int)local_280) + 1);
            }
            else {
              if (pcVar7 == (char *)0xffffffffffffffff) {
LAB_00f16178:
                    /* WARNING: Subroutine does not return */
                luaL_errorL(local_268,"unfinished capture");
              }
              lua_pushlstring(local_268,*ppcVar9,(ulong)pcVar7);
            }
            uVar10 = uVar10 + 1;
            ppcVar9 = ppcVar9 + 2;
          } while (uVar8 != uVar10);
        }
        goto LAB_00f16000;
      }
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    } while (pcVar7 <= local_278);
  }
  uVar8 = 0;
LAB_00f16000:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


