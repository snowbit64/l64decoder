// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_remove
// Entry Point: 00f031c0
// Size: 148 bytes
// Signature: undefined __cdecl lua_remove(lua_State * param_1, int param_2)


/* lua_remove(lua_State*, int) */

void lua_remove(lua_State *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      lVar1 = FUN_00f068dc(param_1);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar3 = (undefined8 *)(lVar1 + 0x10);
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar3 = puVar2 + (long)param_2 * 2 + 2;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (puVar2 <= puVar3) {
      puVar3 = (undefined8 *)&DAT_0056fdf8;
    }
    puVar3 = puVar3 + 2;
  }
  for (; puVar3 < puVar2; puVar3 = puVar3 + 2) {
    puVar3[-1] = puVar3[1];
    puVar3[-2] = *puVar3;
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + -2;
  return;
}


