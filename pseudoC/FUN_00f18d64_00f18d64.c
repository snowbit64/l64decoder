// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18d64
// Entry Point: 00f18d64
// Size: 144 bytes
// Signature: undefined FUN_00f18d64(void)


undefined8 FUN_00f18d64(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  
  luaL_checktype(param_1,1,6);
  iVar1 = lua_getreadonly(param_1,1);
  if (iVar1 == 0) {
    iVar1 = luaL_getmetafield(param_1,1,"__metatable");
    if (iVar1 == 0) {
      lua_setreadonly(param_1,1,1);
      lua_pushvalue(param_1,1);
      return 1;
    }
    pcVar2 = "table has a protected metatable";
  }
  else {
    pcVar2 = "table is already frozen";
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,pcVar2);
}


