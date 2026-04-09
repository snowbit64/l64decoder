// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_isstring
// Entry Point: 00f037a0
// Size: 148 bytes
// Signature: undefined __cdecl lua_isstring(lua_State * param_1, int param_2)


/* lua_isstring(lua_State*, int) */

bool lua_isstring(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar1 = (undefined *)FUN_00f068dc();
      goto joined_r0x00f03810;
    }
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    if (puVar1 == &DAT_0056fdf8) goto LAB_00f03814;
LAB_00f037d0:
    iVar2 = *(int *)(puVar1 + 0xc);
  }
  else {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar1 < *(undefined **)(param_1 + 8)) {
joined_r0x00f03810:
      if (puVar1 != &DAT_0056fdf8) goto LAB_00f037d0;
    }
LAB_00f03814:
    iVar2 = -1;
  }
  return iVar2 == 5 || iVar2 == 3;
}


