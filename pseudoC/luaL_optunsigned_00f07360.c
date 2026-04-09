// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_optunsigned
// Entry Point: 00f07360
// Size: 144 bytes
// Signature: undefined __cdecl luaL_optunsigned(lua_State * param_1, int param_2, uint param_3)


/* luaL_optunsigned(lua_State*, int, unsigned int) */

uint luaL_optunsigned(lua_State *param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,param_2);
  if ((0 < iVar2) && (param_3 = lua_tounsignedx(param_1,param_2,&local_3c), local_3c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f06fc0(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


