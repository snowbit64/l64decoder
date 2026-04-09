// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13e58
// Entry Point: 00f13e58
// Size: 168 bytes
// Signature: undefined FUN_00f13e58(void)


undefined8 FUN_00f13e58(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong local_260;
  long local_258 [68];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = luaL_checklstring(param_1,1,&local_260);
  puVar4 = (undefined *)luaL_buffinitsize(param_1,(luaL_Buffer *)local_258,local_260);
  while (bVar2 = local_260 != 0, local_260 = local_260 - 1, bVar2) {
    *puVar4 = *(undefined *)(lVar3 + local_260);
    puVar4 = puVar4 + 1;
  }
  luaL_pushresultsize((luaL_Buffer *)local_258,(long)puVar4 - local_258[0]);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


