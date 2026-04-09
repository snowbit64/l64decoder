// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f43c
// Entry Point: 00f0f43c
// Size: 108 bytes
// Signature: undefined FUN_00f0f43c(void)


undefined8 FUN_00f0f43c(lua_State *param_1)

{
  long lVar1;
  double dVar2;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)luaL_checknumber(param_1,1);
  dVar2 = frexp(dVar2,&local_2c);
  lua_pushnumber(param_1,dVar2);
  lua_pushinteger(param_1,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


