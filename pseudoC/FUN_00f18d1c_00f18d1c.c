// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18d1c
// Entry Point: 00f18d1c
// Size: 72 bytes
// Signature: undefined FUN_00f18d1c(void)


undefined8 FUN_00f18d1c(lua_State *param_1)

{
  luaL_checktype(param_1,1,6);
  if (*(char *)(**(long **)(param_1 + 0x10) + 4) == '\0') {
    FUN_00f17d44();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09e04(param_1);
}


