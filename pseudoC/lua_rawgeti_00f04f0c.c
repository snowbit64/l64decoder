// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawgeti
// Entry Point: 00f04f0c
// Size: 180 bytes
// Signature: undefined __cdecl lua_rawgeti(lua_State * param_1, int param_2, int param_3)


/* lua_rawgeti(lua_State*, int, int) */

undefined4 lua_rawgeti(lua_State *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00f068dc(param_1,param_2);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  puVar2 = (undefined8 *)FUN_00f170b4(*puVar2,param_3);
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar4 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar4;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xc);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return uVar1;
}


