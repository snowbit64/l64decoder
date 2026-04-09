// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13fe8
// Entry Point: 00f13fe8
// Size: 200 bytes
// Signature: undefined FUN_00f13fe8(void)


undefined8 FUN_00f13fe8(lua_State *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_260;
  luaL_Buffer alStack_258 [544];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_260);
  lVar5 = luaL_buffinitsize(param_1,alStack_258,local_260);
  if (local_260 == 0) {
    luaL_pushresultsize(alStack_258,0);
    if (*(long *)(lVar3 + 0x28) != local_38) goto LAB_00f140ac;
  }
  else {
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(lVar4 + uVar6);
      bVar1 = bVar2 ^ 0x20;
      if (0x19 < bVar2 - 0x61) {
        bVar1 = bVar2;
      }
      *(byte *)(lVar5 + uVar6) = bVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_260);
    luaL_pushresultsize(alStack_258,local_260);
    if (*(long *)(lVar3 + 0x28) != local_38) {
LAB_00f140ac:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return 1;
}


