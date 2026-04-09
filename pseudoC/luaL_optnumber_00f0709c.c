// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_optnumber
// Entry Point: 00f0709c
// Size: 152 bytes
// Signature: undefined __cdecl luaL_optnumber(lua_State * param_1, int param_2, double param_3)


/* luaL_optnumber(lua_State*, int, double) */

undefined  [16] luaL_optnumber(lua_State *param_1,int param_2,double param_3)

{
  long lVar1;
  int iVar2;
  undefined auVar3 [16];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,param_2);
  if ((0 < iVar2) && (param_3 = (double)lua_tonumberx(param_1,param_2,&local_3c), local_3c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f06fc0(param_1,param_2,3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3;
}


