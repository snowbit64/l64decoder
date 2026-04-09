// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_topointer
// Entry Point: 00f04614
// Size: 168 bytes
// Signature: undefined __cdecl lua_topointer(lua_State * param_1, int param_2)


/* lua_topointer(lua_State*, int) */

void lua_topointer(lua_State *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      lVar3 = FUN_00f068dc();
      iVar2 = *(int *)(lVar3 + 0xc);
    }
    else {
      iVar2 = *(int *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10 + 0xc);
    }
  }
  else {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar1) {
      puVar1 = &DAT_0056fdf8;
    }
    iVar2 = *(int *)(puVar1 + 0xc);
  }
  if (iVar2 - 2U < 8) {
                    /* WARNING: Could not recover jumptable at 0x00f046b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00f046b4 + (ulong)(byte)(&DAT_0056f666)[iVar2 - 2U] * 4))(0);
    return;
  }
  return;
}


