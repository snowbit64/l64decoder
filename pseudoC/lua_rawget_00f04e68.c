// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawget
// Entry Point: 00f04e68
// Size: 164 bytes
// Signature: undefined __cdecl lua_rawget(lua_State * param_1, int param_2)


/* lua_rawget(lua_State*, int) */

undefined4 lua_rawget(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
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
  puVar1 = (undefined8 *)FUN_00f171e0(*puVar1,puVar2 + -2);
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *puVar1;
  *(undefined8 *)(lVar3 + -8) = puVar1[1];
  *(undefined8 *)(lVar3 + -0x10) = uVar4;
  return *(undefined4 *)(*(long *)(param_1 + 8) + -4);
}


