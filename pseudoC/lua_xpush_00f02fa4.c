// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_xpush
// Entry Point: 00f02fa4
// Size: 164 bytes
// Signature: undefined __cdecl lua_xpush(lua_State * param_1, lua_State * param_2, int param_3)


/* lua_xpush(lua_State*, lua_State*, int) */

void lua_xpush(lua_State *param_1,lua_State *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((byte)param_2[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_2,param_2,param_2 + 0x68);
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
      puVar1 = (undefined8 *)FUN_00f068dc(param_1,param_3);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_3 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar1) {
      puVar1 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar3 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar3;
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
  return;
}


