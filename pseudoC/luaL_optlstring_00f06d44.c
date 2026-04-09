// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_optlstring
// Entry Point: 00f06d44
// Size: 172 bytes
// Signature: undefined __cdecl luaL_optlstring(lua_State * param_1, int param_2, char * param_3, ulong * param_4)


/* luaL_optlstring(lua_State*, int, char const*, unsigned long*) */

char * luaL_optlstring(lua_State *param_1,int param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 < 1) {
    if (param_4 != (ulong *)0x0) {
      if (param_3 != (char *)0x0) {
        sVar2 = strlen(param_3);
        *param_4 = sVar2;
        return param_3;
      }
      *param_4 = 0;
      return (char *)0x0;
    }
  }
  else {
    param_3 = (char *)lua_tolstring(param_1,param_2,param_4);
    if (param_3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00f06fc0(param_1,param_2,5);
    }
  }
  return param_3;
}


