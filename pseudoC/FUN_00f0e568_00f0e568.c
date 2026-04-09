// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e568
// Entry Point: 00f0e568
// Size: 192 bytes
// Signature: undefined FUN_00f0e568(void)


undefined8 FUN_00f0e568(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  uVar2 = luaL_checkinteger(param_1,2);
  iVar3 = luaL_optinteger(param_1,3,1);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,2,"field cannot be negative");
  }
  if (0 < iVar3) {
    if (iVar3 + uVar2 < 0x21) {
      lua_pushunsigned(param_1,uVar1 >> (ulong)(uVar2 & 0x1f) &
                               (-2 << (ulong)(iVar3 - 1U & 0x1f) ^ 0xffffffffU));
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"trying to access non-existent bits");
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,3,"width must be positive");
}


