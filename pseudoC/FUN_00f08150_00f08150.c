// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08150
// Entry Point: 00f08150
// Size: 220 bytes
// Signature: undefined FUN_00f08150(void)


undefined8 FUN_00f08150(lua_State *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  luaL_checkany(param_1,1);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x24);
  lVar5 = *(long *)(param_1 + 0x30);
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
  *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = uVar1 | 2;
  iVar2 = FUN_00f0b5c8(param_1,FUN_00f08e0c,lVar4,lVar4 - lVar5,0);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1;
  if (uVar6 < *(ulong *)(param_1 + 8)) {
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
  }
  if ((iVar2 == 0) && ((param_1[3] == (lua_State)0x1 || (param_1[3] == (lua_State)0x6)))) {
    return 0xffffffff;
  }
  lua_rawcheckstack(param_1,1);
  lua_pushboolean(param_1,(uint)(iVar2 == 0));
  lua_insert(param_1,1);
  uVar3 = lua_gettop(param_1);
  return uVar3;
}


