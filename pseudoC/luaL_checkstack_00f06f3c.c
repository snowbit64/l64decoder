// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkstack
// Entry Point: 00f06f3c
// Size: 60 bytes
// Signature: undefined __cdecl luaL_checkstack(lua_State * param_1, int param_2, char * param_3)


/* luaL_checkstack(lua_State*, int, char const*) */

void luaL_checkstack(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = lua_checkstack(param_1,param_2);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"stack overflow (%s)",param_3);
}


