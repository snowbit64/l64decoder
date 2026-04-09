// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_insert
// Entry Point: 00f03254
// Size: 208 bytes
// Signature: undefined __cdecl lua_insert(lua_State * param_1, int param_2)


/* lua_insert(lua_State*, int) */

void lua_insert(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined8 *)FUN_00f068dc(param_1,param_2);
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar1 < puVar2) goto LAB_00f032f4;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar1 = puVar2 + (long)param_2 * 2;
      if (puVar1 < puVar2) {
LAB_00f032f4:
        do {
          puVar3 = puVar2 + -2;
          puVar2[1] = puVar2[-1];
          *puVar2 = puVar2[-2];
          puVar2 = puVar3;
        } while (puVar1 < puVar3);
        uVar4 = **(undefined8 **)(param_1 + 8);
        puVar1[1] = (*(undefined8 **)(param_1 + 8))[1];
        *puVar1 = uVar4;
        return;
      }
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar2 <= puVar1) {
      puVar1 = (undefined8 *)&DAT_0056fdf8;
    }
    if (puVar1 < puVar2) goto LAB_00f032f4;
  }
  uVar4 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  return;
}


