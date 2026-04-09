// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_setreadonly
// Entry Point: 00f0504c
// Size: 108 bytes
// Signature: undefined __cdecl lua_setreadonly(lua_State * param_1, int param_2, int param_3)


/* lua_setreadonly(lua_State*, int, int) */

void lua_setreadonly(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc();
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
  }
  *(bool *)(*plVar1 + 4) = param_3 != 0;
  return;
}


