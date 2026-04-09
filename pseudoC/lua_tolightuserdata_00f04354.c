// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tolightuserdata
// Entry Point: 00f04354
// Size: 128 bytes
// Signature: undefined __cdecl lua_tolightuserdata(lua_State * param_1, int param_2)


/* lua_tolightuserdata(lua_State*, int) */

undefined8 lua_tolightuserdata(lua_State *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar2 = (undefined8 *)FUN_00f068dc();
      iVar1 = *(int *)((long)puVar2 + 0xc);
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)puVar2 + 0xc);
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined8 **)(param_1 + 8) <= puVar2) {
      puVar2 = (undefined8 *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)puVar2 + 0xc);
  }
  if (iVar1 != 2) {
    return 0;
  }
  return *puVar2;
}


