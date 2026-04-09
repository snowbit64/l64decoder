// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_register
// Entry Point: 00f075f4
// Size: 296 bytes
// Signature: undefined __cdecl luaL_register(lua_State * param_1, char * param_2, luaL_Reg * param_3)


/* luaL_register(lua_State*, char const*, luaL_Reg const*) */

void luaL_register(lua_State *param_1,char *param_2,luaL_Reg *param_3)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  char **ppcVar5;
  int iVar6;
  
  if (param_2 != (char *)0x0) {
    if (*(long *)param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      plVar3 = (long *)(param_3 + 0x10);
      do {
        lVar4 = *plVar3;
        iVar6 = iVar6 + 1;
        plVar3 = plVar3 + 2;
      } while (lVar4 != 0);
    }
    luaL_findtable(param_1,-10000,"_LOADED",1);
    lua_getfield(param_1,-1,param_2);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 != 6) {
      lua_settop(param_1,-2);
      lVar4 = luaL_findtable(param_1,-0x2712,param_2,iVar6);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(param_1,"name conflict for module \'%s\'",param_2);
      }
      lua_pushvalue(param_1,-1);
      lua_setfield(param_1,-3,param_2);
    }
    lua_remove(param_1,-2);
  }
  pcVar2 = *(char **)param_3;
  if (pcVar2 != (char *)0x0) {
    ppcVar5 = (char **)(param_3 + 0x10);
    do {
      lua_pushcclosurek(param_1,(_func_int_lua_State_ptr *)ppcVar5[-1],pcVar2,0,
                        (_func_int_lua_State_ptr_int *)0x0);
      lua_setfield(param_1,-2,ppcVar5[-2]);
      pcVar2 = *ppcVar5;
      ppcVar5 = ppcVar5 + 2;
    } while (pcVar2 != (char *)0x0);
  }
  return;
}


