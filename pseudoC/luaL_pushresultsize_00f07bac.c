// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_pushresultsize
// Entry Point: 00f07bac
// Size: 176 bytes
// Signature: undefined __cdecl luaL_pushresultsize(luaL_Buffer * param_1, ulong param_2)


/* luaL_pushresultsize(luaL_Buffer*, unsigned long) */

void luaL_pushresultsize(luaL_Buffer *param_1,ulong param_2)

{
  lua_State *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = *(lua_State **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)param_1 + param_2;
  *(long *)param_1 = lVar4;
  if (lVar2 != 0) {
    if (*(ulong *)(*(long *)(plVar1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(plVar1 + 0x18) + 0x48))
    {
      FUN_00f0bdd8(plVar1,1);
      lVar4 = *(long *)param_1;
    }
    lVar5 = *(long *)(plVar1 + 8);
    if (lVar4 == *(long *)(param_1 + 8)) {
      uVar3 = FUN_00f1266c(plVar1,lVar2);
    }
    else {
      uVar3 = FUN_00f128c0(plVar1,lVar2 + 0x18,lVar4 - (lVar2 + 0x18));
    }
    *(undefined8 *)(lVar5 + -0x10) = uVar3;
    *(undefined4 *)(lVar5 + -4) = 5;
    return;
  }
  lua_pushlstring(plVar1,(char *)(param_1 + 0x20),lVar4 - (long)(param_1 + 0x20));
  return;
}


