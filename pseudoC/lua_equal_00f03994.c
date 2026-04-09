// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_equal
// Entry Point: 00f03994
// Size: 304 bytes
// Signature: undefined __cdecl lua_equal(lua_State * param_1, int param_2, int param_3)


/* lua_equal(lua_State*, int, int) */

bool lua_equal(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined *)FUN_00f068dc(param_1);
      goto joined_r0x00f03a28;
    }
    puVar2 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    if (0 < param_3) goto LAB_00f03a2c;
LAB_00f039f4:
    if (-10000 < param_3) {
      puVar3 = (undefined *)(*(long *)(param_1 + 8) + (long)param_3 * 0x10);
      if (puVar2 == &DAT_0056fdf8) {
        return false;
      }
      goto LAB_00f03a74;
    }
    puVar3 = (undefined *)FUN_00f068dc(param_1,param_3);
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar2) {
      puVar2 = &DAT_0056fdf8;
    }
joined_r0x00f03a28:
    if (param_3 < 1) goto LAB_00f039f4;
LAB_00f03a2c:
    puVar3 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_3 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar3) {
      puVar3 = &DAT_0056fdf8;
    }
  }
  if (puVar2 == &DAT_0056fdf8) {
    return false;
  }
LAB_00f03a74:
  if (puVar3 == &DAT_0056fdf8) {
    return false;
  }
  if (*(int *)(puVar2 + 0xc) != *(int *)(puVar3 + 0xc)) {
    return false;
  }
  iVar1 = FUN_00f264b8(param_1,puVar2);
  return iVar1 != 0;
}


