// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f13d08
// Entry Point: 00f13d08
// Size: 336 bytes
// Signature: undefined FUN_00f13d08(void)


undefined8 FUN_00f13d08(lua_State *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *__dest;
  size_t __n;
  size_t __n_00;
  ulong uVar5;
  ulong local_280;
  luaL_Buffer alStack_278 [544];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)luaL_checklstring(param_1,1,&local_280);
  uVar3 = luaL_checkinteger(param_1,2);
  if ((int)uVar3 < 1) {
    lua_pushlstring(param_1,"",0);
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00f13e44;
  }
  else {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = 0x40000000 / uVar3;
    }
    if (uVar1 < local_280) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"resulting string too large");
    }
    uVar5 = (ulong)uVar3;
    __dest = (void *)luaL_buffinitsize(param_1,alStack_278,local_280 * uVar5);
    __n = local_280;
    memcpy(__dest,pvVar4,local_280);
    pvVar4 = (void *)((long)__dest + local_280);
    __n_00 = __n * uVar5 - local_280;
    if (__n < __n_00) {
      do {
        memcpy(pvVar4,__dest,__n);
        pvVar4 = (void *)((long)pvVar4 + __n);
        __n_00 = __n_00 - __n;
        __n = __n * 2;
      } while (__n < __n_00);
    }
    memcpy(pvVar4,__dest,__n_00);
    luaL_pushresultsize(alStack_278,local_280 * uVar5);
    if (*(long *)(lVar2 + 0x28) != local_58) {
LAB_00f13e44:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return 1;
}


