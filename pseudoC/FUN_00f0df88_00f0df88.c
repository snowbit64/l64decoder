// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0df88
// Entry Point: 00f0df88
// Size: 176 bytes
// Signature: undefined FUN_00f0df88(void)


void FUN_00f0df88(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = lua_tothread(param_1,-0x2713);
  iVar1 = FUN_00f0e144(param_1,uVar2,
                       (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4);
  if (iVar1 == -2) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x1070) != 0) {
      FUN_00f1a52c(param_1,*(long *)(*(long *)(param_1 + 0x18) + 0x1070),uVar2);
    }
    lua_break(param_1);
    return;
  }
  if (-1 < iVar1) {
    return;
  }
  iVar1 = lua_isstring(param_1,-1);
  if (iVar1 != 0) {
    luaL_where(param_1,1);
    lua_insert(param_1,-2);
    lua_concat(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


