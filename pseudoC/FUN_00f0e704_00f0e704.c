// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e704
// Entry Point: 00f0e704
// Size: 224 bytes
// Signature: undefined FUN_00f0e704(void)


undefined8 FUN_00f0e704(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = luaL_checkunsigned(param_1,1);
  uVar3 = luaL_checkunsigned(param_1,2);
  uVar4 = luaL_checkinteger(param_1,3);
  iVar5 = luaL_optinteger(param_1,4,1);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    luaL_argerrorL(param_1,3,"field cannot be negative");
  }
  if (0 < iVar5) {
    if (iVar5 + uVar4 < 0x21) {
      uVar1 = -2 << (ulong)(iVar5 - 1U & 0x1f);
      lua_pushunsigned(param_1,uVar2 & (~uVar1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffff) |
                               (uVar3 & (uVar1 ^ 0xffffffff)) << (ulong)(uVar4 & 0x1f));
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(param_1,"trying to access non-existent bits");
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,4,"width must be positive");
}


