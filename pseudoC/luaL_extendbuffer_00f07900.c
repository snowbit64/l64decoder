// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_extendbuffer
// Entry Point: 00f07900
// Size: 236 bytes
// Signature: undefined __cdecl luaL_extendbuffer(luaL_Buffer * param_1, ulong param_2, int param_3)


/* luaL_extendbuffer(luaL_Buffer*, unsigned long, int) */

void luaL_extendbuffer(luaL_Buffer *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  void *__dest;
  ulong uVar2;
  luaL_Buffer *__src;
  lua_State *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  plVar3 = *(lua_State **)(param_1 + 0x10);
  __src = param_1 + 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    __src = (luaL_Buffer *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  uVar5 = *(long *)(param_1 + 8) - (long)__src;
  uVar2 = uVar5 + param_2;
  if (!CARRY8(uVar2,uVar5)) {
    uVar5 = uVar5 + (uVar5 >> 1);
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    lVar4 = FUN_00f125f4(plVar3,uVar2);
    __dest = (void *)(lVar4 + 0x18);
    memcpy(__dest,__src,*(long *)param_1 - (long)__src);
    if (__src == param_1 + 0x20) {
      lua_pushnil(plVar3);
      lua_insert(plVar3,param_3);
    }
    plVar1 = (long *)(*(long *)(plVar3 + 8) + (long)param_3 * 0x10);
    *plVar1 = lVar4;
    lVar6 = *(long *)param_1;
    *(long *)(param_1 + 0x18) = lVar4;
    *(undefined4 *)((long)plVar1 + 0xc) = 5;
    *(long *)param_1 = (long)__dest + (lVar6 - (long)__src);
    *(ulong *)(param_1 + 8) = (long)__dest + uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(plVar3,"buffer too large");
}


