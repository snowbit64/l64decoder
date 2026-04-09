// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_addvalue
// Entry Point: 00f07a54
// Size: 180 bytes
// Signature: undefined __cdecl luaL_addvalue(luaL_Buffer * param_1)


/* luaL_addvalue(luaL_Buffer*) */

void luaL_addvalue(luaL_Buffer *param_1)

{
  ulong uVar1;
  long lVar2;
  void *__src;
  void *__dest;
  lua_State *plVar3;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(lua_State **)(param_1 + 0x10);
  __src = (void *)lua_tolstring(plVar3,-1,&local_40);
  if (__src != (void *)0x0) {
    __dest = *(void **)param_1;
    uVar1 = local_40 - (*(long *)(param_1 + 8) - (long)__dest);
    if ((ulong)(*(long *)(param_1 + 8) - (long)__dest) <= local_40 && uVar1 != 0) {
      luaL_extendbuffer(param_1,uVar1,-2);
      __dest = *(void **)param_1;
    }
    memcpy(__dest,__src,local_40);
    *(ulong *)param_1 = *(long *)param_1 + local_40;
    lua_settop(plVar3,-2);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


