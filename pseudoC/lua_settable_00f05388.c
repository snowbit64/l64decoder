// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_settable
// Entry Point: 00f05388
// Size: 132 bytes
// Signature: undefined __cdecl lua_settable(lua_State * param_1, int param_2)


/* lua_settable(lua_State*, int) */

void lua_settable(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined *)FUN_00f068dc(param_1);
      puVar2 = *(undefined **)(param_1 + 8);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 8);
      puVar1 = puVar2 + (long)param_2 * 0x10;
    }
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar2 <= puVar1) {
      puVar1 = &DAT_0056fdf8;
    }
  }
  FUN_00f25f08(param_1,puVar1,puVar2 + -0x20,puVar2 + -0x10);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x20;
  return;
}


