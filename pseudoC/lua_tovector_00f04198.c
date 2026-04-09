// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tovector
// Entry Point: 00f04198
// Size: 124 bytes
// Signature: undefined __cdecl lua_tovector(lua_State * param_1, int param_2)


/* lua_tovector(lua_State*, int) */

undefined * lua_tovector(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_0056fdf8;
    }
    if (*(int *)(puVar1 + 0xc) != 4) {
      puVar1 = (undefined *)0x0;
    }
    return puVar1;
  }
  if (-10000 < param_2) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    if (*(int *)(puVar1 + 0xc) != 4) {
      puVar1 = (undefined *)0x0;
    }
    return puVar1;
  }
  puVar1 = (undefined *)FUN_00f068dc();
  if (*(int *)(puVar1 + 0xc) != 4) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


