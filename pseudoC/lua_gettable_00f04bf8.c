// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_gettable
// Entry Point: 00f04bf8
// Size: 160 bytes
// Signature: undefined __cdecl lua_gettable(lua_State * param_1, int param_2)


/* lua_gettable(lua_State*, int) */

undefined4 lua_gettable(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined *)FUN_00f068dc(param_1,param_2);
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
  FUN_00f25d84(param_1,puVar1,puVar2 + -0x10,puVar2 + -0x10);
  return *(undefined4 *)(*(long *)(param_1 + 8) + -4);
}


