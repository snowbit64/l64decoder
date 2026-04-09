// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08298
// Entry Point: 00f08298
// Size: 276 bytes
// Signature: undefined FUN_00f08298(void)


undefined8 FUN_00f08298(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  luaL_checktype(param_1,2,7);
  lua_pushvalue(param_1,1);
  lua_pushvalue(param_1,2);
  lua_replace(param_1,1);
  lua_replace(param_1,2);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 0x24);
  lVar7 = *(long *)(param_1 + 0x30);
  lVar1 = lVar5 + 0x10;
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
  *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = uVar2 | 2;
  iVar3 = FUN_00f0b5c8(param_1,FUN_00f08e0c,lVar1,lVar1 - lVar7,lVar5 - lVar7);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1;
  if (uVar6 < *(ulong *)(param_1 + 8)) {
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
  }
  if ((iVar3 == 0) && ((param_1[3] == (lua_State)0x1 || (param_1[3] == (lua_State)0x6)))) {
    return 0xffffffff;
  }
  lua_rawcheckstack(param_1,1);
  lua_pushboolean(param_1,(uint)(iVar3 == 0));
  lua_replace(param_1,1);
  uVar4 = lua_gettop(param_1);
  return uVar4;
}


