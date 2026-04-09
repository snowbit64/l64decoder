// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_lessthan
// Entry Point: 00f03ac4
// Size: 252 bytes
// Signature: undefined __cdecl lua_lessthan(lua_State * param_1, int param_2, int param_3)


/* lua_lessthan(lua_State*, int, int) */

undefined8 lua_lessthan(lua_State *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined *)FUN_00f068dc(param_1);
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
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar2 = (undefined *)FUN_00f068dc(param_1,param_3);
    }
    else {
      puVar2 = (undefined *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
    if (puVar1 == &DAT_0056fdf8) {
      return 0;
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_3 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_0056fdf8;
    }
    if (puVar1 == &DAT_0056fdf8) {
      return 0;
    }
  }
  if (puVar2 == &DAT_0056fdf8) {
    return 0;
  }
  uVar3 = FUN_00f26160(param_1,puVar1);
  return uVar3;
}


