// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkvector
// Entry Point: 00f073f0
// Size: 56 bytes
// Signature: undefined __cdecl luaL_checkvector(lua_State * param_1, int param_2)


/* luaL_checkvector(lua_State*, int) */

void luaL_checkvector(lua_State *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = lua_tovector(param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f06fc0(param_1,param_2,4);
}


