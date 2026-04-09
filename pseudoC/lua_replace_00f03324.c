// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_replace
// Entry Point: 00f03324
// Size: 372 bytes
// Signature: undefined __cdecl lua_replace(lua_State * param_1, int param_2)


/* lua_replace(lua_State*, int) */

void lua_replace(lua_State *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar3 = (undefined8 *)FUN_00f068dc(param_1,param_2);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar3) {
      puVar3 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  if (param_2 == -0x2712) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
    return;
  }
  if (param_2 == -0x2711) {
    lVar5 = *(long *)(param_1 + 8);
    iVar1 = *(int *)(lVar5 + -4);
    lVar4 = **(long **)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + -0x10);
    if (iVar1 < 5) goto LAB_00f033d8;
    bVar2 = *(byte *)(lVar4 + 1);
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
    puVar3[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
    *puVar3 = uVar6;
    if ((-0x2713 < param_2) || (lVar5 = *(long *)(param_1 + 8), *(int *)(lVar5 + -4) < 5))
    goto LAB_00f033d8;
    bVar2 = *(byte *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 1);
  }
  if (((bVar2 >> 2 & 1) != 0) && ((*(byte *)(*(long *)(lVar5 + -0x10) + 1) & 3) != 0)) {
    FUN_00f0c888(param_1);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
    return;
  }
LAB_00f033d8:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
  return;
}


