// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setuserdatatag
// Entry Point: 00f06690
// Size: 132 bytes
// Signature: undefined __cdecl lua_setuserdatatag(lua_State * param_1, int param_2, int param_3)


/* lua_setuserdatatag(lua_State*, int, int) */

void lua_setuserdatatag(lua_State *param_1,int param_2,int param_3)

{
  undefined uVar1;
  long *plVar2;
  
  uVar1 = (undefined)param_3;
  if (0 < param_2) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar2) {
      plVar2 = (long *)&DAT_0056fdf8;
    }
    *(undefined *)(*plVar2 + 3) = uVar1;
    return;
  }
  if (-10000 < param_2) {
    *(undefined *)(*(long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10) + 3) = uVar1;
    return;
  }
  plVar2 = (long *)FUN_00f068dc();
  *(undefined *)(*plVar2 + 3) = uVar1;
  return;
}


