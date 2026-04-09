// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_objlen
// Entry Point: 00f04214
// Size: 176 bytes
// Signature: undefined __cdecl lua_objlen(lua_State * param_1, int param_2)


/* lua_objlen(lua_State*, int) */

ulong lua_objlen(lua_State *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar3 = (long *)FUN_00f068dc();
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar3 + 0xc);
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar3) {
      plVar3 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar3 + 0xc);
  }
  if (iVar1 == 8) {
    return (ulong)*(uint *)(*plVar3 + 4);
  }
  if (iVar1 == 6) {
    uVar2 = FUN_00f17aac(*plVar3);
    return uVar2;
  }
  if (iVar1 == 5) {
    return (ulong)*(uint *)(*plVar3 + 0x14);
  }
  return 0;
}


