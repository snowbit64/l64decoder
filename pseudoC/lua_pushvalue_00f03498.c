// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushvalue
// Entry Point: 00f03498
// Size: 152 bytes
// Signature: undefined __cdecl lua_pushvalue(lua_State * param_1, int param_2)


/* lua_pushvalue(lua_State*, int) */

void lua_pushvalue(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00f068dc(param_1,param_2);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar1 = puVar2 + (long)param_2 * 2;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar2 <= puVar1) {
      puVar1 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  uVar3 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar3;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


