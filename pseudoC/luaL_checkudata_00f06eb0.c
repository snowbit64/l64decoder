// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkudata
// Entry Point: 00f06eb0
// Size: 140 bytes
// Signature: undefined __cdecl luaL_checkudata(lua_State * param_1, int param_2, char * param_3)


/* luaL_checkudata(lua_State*, int, char const*) */

long luaL_checkudata(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = lua_touserdata(param_1,param_2);
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,param_2), iVar1 != 0)) {
    lua_getfield(param_1,-10000,param_3);
    iVar1 = lua_rawequal(param_1,-1,-2);
    if (iVar1 != 0) {
      lua_settop(param_1,-3);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,param_2,param_3);
}


