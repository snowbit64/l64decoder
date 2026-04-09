// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkinteger
// Entry Point: 00f071f0
// Size: 112 bytes
// Signature: undefined __cdecl luaL_checkinteger(lua_State * param_1, int param_2)


/* luaL_checkinteger(lua_State*, int) */

void luaL_checkinteger(lua_State *param_1,int param_2)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lua_tointegerx(param_1,param_2,&local_3c);
  if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00f06fc0(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


