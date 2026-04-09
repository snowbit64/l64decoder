// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_isuserdata
// Entry Point: 00f03834
// Size: 104 bytes
// Signature: undefined __cdecl lua_isuserdata(lua_State * param_1, int param_2)


/* lua_isuserdata(lua_State*, int) */

bool lua_isuserdata(lua_State *param_1,int param_2)

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
      puVar1 = &DAT_0056fdf8;
    }
  }
  return *(int *)(puVar1 + 0xc) == 8 || *(int *)(puVar1 + 0xc) == 2;
}


