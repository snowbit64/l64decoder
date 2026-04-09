// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_pushresult
// Entry Point: 00f07b08
// Size: 164 bytes
// Signature: undefined __cdecl luaL_pushresult(luaL_Buffer * param_1)


/* luaL_pushresult(luaL_Buffer*) */

void luaL_pushresult(luaL_Buffer *param_1)

{
  lua_State *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = *(lua_State **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(ulong *)(*(long *)(plVar1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(plVar1 + 0x18) + 0x48))
    {
      FUN_00f0bdd8(plVar1,1);
    }
    lVar4 = *(long *)(plVar1 + 8);
    if (*(long *)param_1 == *(long *)(param_1 + 8)) {
      uVar3 = FUN_00f1266c(plVar1,lVar2);
    }
    else {
      uVar3 = FUN_00f128c0(plVar1,lVar2 + 0x18,*(long *)param_1 - (lVar2 + 0x18));
    }
    *(undefined8 *)(lVar4 + -0x10) = uVar3;
    *(undefined4 *)(lVar4 + -4) = 5;
    return;
  }
  lua_pushlstring(plVar1,(char *)(param_1 + 0x20),*(long *)param_1 - (long)(param_1 + 0x20));
  return;
}


