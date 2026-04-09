// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_type
// Entry Point: 00f03530
// Size: 124 bytes
// Signature: undefined __cdecl lua_type(lua_State * param_1, int param_2)


/* lua_type(lua_State*, int) */

undefined4 lua_type(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined *)FUN_00f068dc();
    }
    else {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar1) {
      return 0xffffffff;
    }
  }
  if (puVar1 == &DAT_0056fdf8) {
    return 0xffffffff;
  }
  return *(undefined4 *)(puVar1 + 0xc);
}


