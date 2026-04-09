// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_touserdatatagged
// Entry Point: 00f0446c
// Size: 164 bytes
// Signature: undefined __cdecl lua_touserdatatagged(lua_State * param_1, int param_2, int param_3)


/* lua_touserdatatagged(lua_State*, int, int) */

long lua_touserdatatagged(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar2 = (long *)FUN_00f068dc();
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)plVar2 + 0xc);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = (long *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)plVar2 + 0xc);
  }
  if ((iVar1 == 8) && ((uint)*(byte *)(*plVar2 + 3) == param_3)) {
    return *plVar2 + 0x10;
  }
  return 0;
}


