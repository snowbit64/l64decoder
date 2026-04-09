// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f6e0
// Entry Point: 00f0f6e0
// Size: 124 bytes
// Signature: undefined FUN_00f0f6e0(void)


undefined8 FUN_00f0f6e0(lua_State *param_1)

{
  long lVar1;
  double dVar2;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)luaL_checknumber(param_1,1);
  dVar2 = modf(dVar2,&local_40);
  lua_pushnumber(param_1,local_40);
  lua_pushnumber(param_1,dVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


