// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkany
// Entry Point: 00f06fec
// Size: 64 bytes
// Signature: undefined __cdecl luaL_checkany(lua_State * param_1, int param_2)


/* luaL_checkany(lua_State*, int) */

void luaL_checkany(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"missing argument #%d",(ulong)(uint)param_2);
}


