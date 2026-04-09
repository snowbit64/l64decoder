// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13f00
// Entry Point: 00f13f00
// Size: 232 bytes
// Signature: undefined FUN_00f13f00(void)


undefined8 FUN_00f13f00(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  uint local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = luaL_checklstring(param_1,1,(ulong *)&local_40);
  iVar4 = luaL_checkinteger(param_1,2);
  uVar1 = (local_40 + 1 & iVar4 >> 0x1f) + iVar4;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  iVar4 = luaL_optinteger(param_1,3,-1);
  uVar2 = (local_40 + 1 & iVar4 >> 0x1f) + iVar4;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  if ((int)uVar2 <= (int)local_40) {
    local_40 = uVar2;
  }
  if ((int)local_40 < (int)uVar1) {
    pcVar6 = "";
    uVar7 = 0;
  }
  else {
    pcVar6 = (char *)(lVar5 + (ulong)uVar1 + -1);
    uVar7 = (ulong)(int)((local_40 - uVar1) + 1);
  }
  lua_pushlstring(param_1,pcVar6,uVar7);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


