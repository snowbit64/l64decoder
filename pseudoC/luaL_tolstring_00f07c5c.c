// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_tolstring
// Entry Point: 00f07c5c
// Size: 500 bytes
// Signature: undefined __cdecl luaL_tolstring(lua_State * param_1, int param_2, ulong * param_3)


/* luaL_tolstring(lua_State*, int, unsigned long*) */

void luaL_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined2 *puVar9;
  long lVar10;
  char acStack_d8 [144];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = luaL_callmeta(param_1,param_2,"__tostring");
  if (iVar3 != 0) {
    iVar3 = lua_isstring(param_1,-1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"\'__tostring\' must return a string");
    }
    goto LAB_00f07cac;
  }
  uVar4 = lua_type(param_1,param_2);
  switch(uVar4) {
  case 0:
    lua_pushlstring(param_1,"nil",3);
    break;
  case 1:
    iVar3 = lua_toboolean(param_1,param_2);
    pcVar1 = "false";
    if (iVar3 != 0) {
      pcVar1 = "true";
    }
    lua_pushstring(param_1,pcVar1);
    break;
  default:
    uVar5 = lua_topointer(param_1,param_2);
    uVar6 = lua_encodepointer(param_1,uVar5);
    uVar7 = FUN_00f02d28(param_1,param_2);
    uVar7 = FUN_00f1990c(param_1,uVar7);
    lua_pushfstringL(param_1,"%s: 0x%016llx",uVar7,uVar6);
    break;
  case 3:
    lua_tonumberx(param_1,param_2,(int *)0x0);
    lVar10 = FUN_00f10a70(acStack_d8);
    uVar5 = lVar10 - (long)acStack_d8;
    goto LAB_00f07e1c;
  case 4:
    pfVar8 = (float *)lua_tovector(param_1,param_2);
    puVar9 = (undefined2 *)FUN_00f10a70((double)*pfVar8,acStack_d8);
    *puVar9 = 0x202c;
    puVar9 = (undefined2 *)FUN_00f10a70((double)pfVar8[1],puVar9 + 1);
    *puVar9 = 0x202c;
    lVar10 = FUN_00f10a70((double)pfVar8[2],puVar9 + 1);
    uVar5 = lVar10 - (long)acStack_d8;
LAB_00f07e1c:
    lua_pushlstring(param_1,acStack_d8,uVar5);
    break;
  case 5:
    lua_pushvalue(param_1,param_2);
  }
LAB_00f07cac:
  lua_tolstring(param_1,-1,param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


