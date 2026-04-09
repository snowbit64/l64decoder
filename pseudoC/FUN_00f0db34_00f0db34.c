// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0db34
// Entry Point: 00f0db34
// Size: 216 bytes
// Signature: undefined FUN_00f0db34(void)


ulong FUN_00f0db34(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar2 = lua_tothread(param_1,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,1,"thread");
  }
  uVar1 = FUN_00f0e144(param_1,lVar2,
                       (int)((ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) >> 4) + -1)
  ;
  if (uVar1 == 0xfffffffe) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x1070) != 0) {
      FUN_00f1a52c(param_1,*(long *)(*(long *)(param_1 + 0x18) + 0x1070),lVar2);
    }
    uVar3 = lua_break(param_1);
    return uVar3;
  }
  if ((int)uVar1 < 0) {
    lua_pushboolean(param_1,0);
    uVar4 = 2;
    uVar1 = 0xfffffffe;
  }
  else {
    lua_pushboolean(param_1,1);
    uVar4 = uVar1 + 1;
    uVar1 = ~uVar1;
  }
  lua_insert(param_1,uVar1);
  return (ulong)uVar4;
}


