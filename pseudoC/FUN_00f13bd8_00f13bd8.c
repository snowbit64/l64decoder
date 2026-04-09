// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13bd8
// Entry Point: 00f13bd8
// Size: 96 bytes
// Signature: undefined FUN_00f13bd8(void)


undefined8 FUN_00f13bd8(lua_State *param_1)

{
  long lVar1;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  luaL_checklstring(param_1,1,(ulong *)&local_30);
  lua_pushinteger(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


