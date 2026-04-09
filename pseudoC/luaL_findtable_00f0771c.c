// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_findtable
// Entry Point: 00f0771c
// Size: 308 bytes
// Signature: undefined __cdecl luaL_findtable(lua_State * param_1, int param_2, char * param_3, int param_4)


/* luaL_findtable(lua_State*, int, char const*, int) */

char * luaL_findtable(lua_State *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  
  lua_pushvalue(param_1,param_2);
  do {
    pcVar2 = strchr(param_3,0x2e);
    if (pcVar2 == (char *)0x0) {
      sVar3 = strlen(param_3);
      pcVar2 = param_3 + sVar3;
    }
    lua_pushlstring(param_1,param_3,(long)pcVar2 - (long)param_3);
    lua_rawget(param_1,-2);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 == 0) {
      lua_settop(param_1,-2);
      iVar1 = param_4;
      if (*pcVar2 == '.') {
        iVar1 = 1;
      }
      lua_createtable(param_1,0,iVar1);
      lua_pushlstring(param_1,param_3,(long)pcVar2 - (long)param_3);
      lua_pushvalue(param_1,-2);
      lua_settable(param_1,-4);
    }
    else {
      iVar1 = lua_type(param_1,-1);
      if (iVar1 != 6) {
        lua_settop(param_1,-3);
        return param_3;
      }
    }
    lua_remove(param_1,-2);
    param_3 = pcVar2 + 1;
  } while (*pcVar2 == '.');
  return (char *)0x0;
}


