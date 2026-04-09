// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checklstring
// Entry Point: 00f06df0
// Size: 56 bytes
// Signature: undefined __cdecl luaL_checklstring(lua_State * param_1, int param_2, ulong * param_3)


/* luaL_checklstring(lua_State*, int, unsigned long*) */

void luaL_checklstring(lua_State *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  
  lVar1 = lua_tolstring(param_1,param_2,param_3);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f06fc0(param_1,param_2,5);
}


