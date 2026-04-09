// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getreadonly
// Entry Point: 00f050b8
// Size: 112 bytes
// Signature: undefined __cdecl lua_getreadonly(lua_State * param_1, int param_2)


/* lua_getreadonly(lua_State*, int) */

undefined lua_getreadonly(lua_State *param_1,int param_2)

{
  long *plVar1;
  
  if (0 < param_2) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
    return *(undefined *)(*plVar1 + 4);
  }
  if (-10000 < param_2) {
    return *(undefined *)(*(long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10) + 4);
  }
  plVar1 = (long *)FUN_00f068dc();
  return *(undefined *)(*plVar1 + 4);
}


