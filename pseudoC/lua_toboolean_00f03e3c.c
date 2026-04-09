// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_toboolean
// Entry Point: 00f03e3c
// Size: 152 bytes
// Signature: undefined __cdecl lua_toboolean(lua_State * param_1, int param_2)


/* lua_toboolean(lua_State*, int) */

uint lua_toboolean(lua_State *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      piVar1 = (int *)FUN_00f068dc();
      uVar2 = piVar1[3];
    }
    else {
      piVar1 = (int *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      uVar2 = piVar1[3];
    }
    if (uVar2 != 0) goto LAB_00f03ea4;
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(int **)(param_1 + 8) <= piVar1) {
      piVar1 = (int *)&DAT_0056fdf8;
    }
    uVar2 = piVar1[3];
    if (uVar2 != 0) {
LAB_00f03ea4:
      if (uVar2 != 1) {
        return 1;
      }
      return (uint)(*piVar1 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


