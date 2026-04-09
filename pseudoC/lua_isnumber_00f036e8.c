// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_isnumber
// Entry Point: 00f036e8
// Size: 184 bytes
// Signature: undefined __cdecl lua_isnumber(lua_State * param_1, int param_2)


/* lua_isnumber(lua_State*, int) */

void lua_isnumber(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined auStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      puVar5 = (undefined *)FUN_00f068dc();
      iVar1 = *(int *)(puVar5 + 0xc);
    }
    else {
      puVar5 = (undefined *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)(puVar5 + 0xc);
    }
  }
  else {
    puVar5 = (undefined *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(undefined **)(param_1 + 8) <= puVar5) {
      puVar5 = &DAT_0056fdf8;
    }
    iVar1 = *(int *)(puVar5 + 0xc);
  }
  if (iVar1 == 3) {
    bVar3 = true;
  }
  else {
    lVar4 = FUN_00f25c40(puVar5,auStack_38);
    bVar3 = lVar4 != 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


