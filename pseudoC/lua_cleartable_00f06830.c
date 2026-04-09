// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_cleartable
// Entry Point: 00f06830
// Size: 116 bytes
// Signature: undefined __cdecl lua_cleartable(lua_State * param_1, int param_2)


/* lua_cleartable(lua_State*, int) */

void lua_cleartable(lua_State *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc(param_1);
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
  if (*(char *)(*plVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00f09e04(param_1);
  }
  FUN_00f17d44();
  return;
}


