// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_getmetafield
// Entry Point: 00f07488
// Size: 124 bytes
// Signature: undefined __cdecl luaL_getmetafield(lua_State * param_1, int param_2, char * param_3)


/* luaL_getmetafield(lua_State*, int, char const*) */

undefined8 luaL_getmetafield(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = lua_getmetatable(param_1,param_2);
  if ((int)uVar2 != 0) {
    lua_pushstring(param_1,param_3);
    lua_rawget(param_1,-2);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 == 0) {
      lua_settop(param_1,-3);
      return 0;
    }
    lua_remove(param_1,-2);
    uVar2 = 1;
  }
  return uVar2;
}


