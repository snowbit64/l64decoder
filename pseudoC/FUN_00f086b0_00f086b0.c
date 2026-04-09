// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f086b0
// Entry Point: 00f086b0
// Size: 256 bytes
// Signature: undefined FUN_00f086b0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f086b0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  size_t local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop(param_1);
  if (0 < iVar2) {
    pvVar3 = (void *)luaL_tolstring(param_1,1,&local_50);
    fwrite(pvVar3,1,local_50,_stdout);
    lua_settop(param_1,-2);
    if (iVar2 != 1) {
      iVar4 = 1;
      do {
        iVar4 = iVar4 + 1;
        pvVar3 = (void *)luaL_tolstring(param_1,iVar4,&local_50);
        fputc(9,_stdout);
        fwrite(pvVar3,1,local_50,_stdout);
        lua_settop(param_1,-2);
      } while (iVar2 != iVar4);
    }
  }
  iVar2 = fputc(10,_stdout);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


