// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18e38
// Entry Point: 00f18e38
// Size: 176 bytes
// Signature: undefined FUN_00f18e38(void)


undefined8 FUN_00f18e38(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  luaL_checktype(param_1,1,6);
  iVar2 = luaL_getmetafield(param_1,1,"__metatable");
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,1,"table has a protected metatable");
  }
  local_48 = FUN_00f17c10(param_1,**(undefined8 **)(param_1 + 0x10));
  local_3c = 6;
  FUN_00f02da8(param_1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


