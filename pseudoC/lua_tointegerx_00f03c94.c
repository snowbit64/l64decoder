// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tointegerx
// Entry Point: 00f03c94
// Size: 212 bytes
// Signature: undefined __cdecl lua_tointegerx(lua_State * param_1, int param_2, int * param_3)


/* lua_tointegerx(lua_State*, int, int*) */

void lua_tointegerx(lua_State *param_1,int param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  undefined auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar3 = (double *)FUN_00f068dc();
      iVar2 = *(int *)((long)pdVar3 + 0xc);
      goto joined_r0x00f03d14;
    }
    pdVar3 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    if (*(int *)((long)pdVar3 + 0xc) != 3) goto LAB_00f03d18;
LAB_00f03d24:
    iVar2 = (int)*pdVar3;
    if (param_3 == (int *)0x0) goto LAB_00f03d38;
    iVar4 = 1;
  }
  else {
    pdVar3 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(double **)(param_1 + 8) <= pdVar3) {
      pdVar3 = (double *)&DAT_0056fdf8;
    }
    iVar2 = *(int *)((long)pdVar3 + 0xc);
joined_r0x00f03d14:
    if (iVar2 == 3) goto LAB_00f03d24;
LAB_00f03d18:
    pdVar3 = (double *)FUN_00f25c40(pdVar3,auStack_38);
    if (pdVar3 != (double *)0x0) goto LAB_00f03d24;
    iVar4 = 0;
    iVar2 = 0;
    if (param_3 == (int *)0x0) goto LAB_00f03d38;
  }
  *param_3 = iVar4;
LAB_00f03d38:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


