// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_next
// Entry Point: 00f05dc0
// Size: 172 bytes
// Signature: undefined __cdecl lua_next(lua_State * param_1, int param_2)


/* lua_next(lua_State*, int) */

void lua_next(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar3 = (undefined8 *)FUN_00f068dc(param_1,param_2);
      puVar4 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar4 = *(undefined8 **)(param_1 + 8);
      puVar3 = puVar4 + (long)param_2 * 2;
    }
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar4 <= puVar3) {
      puVar3 = (undefined8 *)&DAT_0056fdf8;
    }
  }
  iVar2 = FUN_00f16738(param_1,*puVar3,puVar4 + -2);
  lVar1 = 0x10;
  if (iVar2 == 0) {
    lVar1 = -0x10;
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + lVar1;
  return;
}


