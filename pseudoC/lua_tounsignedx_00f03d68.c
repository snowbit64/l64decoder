// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_tounsignedx
// Entry Point: 00f03d68
// Size: 212 bytes
// Signature: undefined __cdecl lua_tounsignedx(lua_State * param_1, int param_2, int * param_3)


/* lua_tounsignedx(lua_State*, int, int*) */

void lua_tounsignedx(lua_State *param_1,int param_2,int *param_3)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  undefined auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar2 = (double *)FUN_00f068dc();
      iVar4 = *(int *)((long)pdVar2 + 0xc);
      goto joined_r0x00f03de8;
    }
    pdVar2 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    if (*(int *)((long)pdVar2 + 0xc) != 3) goto LAB_00f03dec;
LAB_00f03df8:
    lVar3 = (long)*pdVar2;
    if (param_3 == (int *)0x0) goto LAB_00f03e0c;
    iVar4 = 1;
  }
  else {
    pdVar2 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(double **)(param_1 + 8) <= pdVar2) {
      pdVar2 = (double *)&DAT_0056fdf8;
    }
    iVar4 = *(int *)((long)pdVar2 + 0xc);
joined_r0x00f03de8:
    if (iVar4 == 3) goto LAB_00f03df8;
LAB_00f03dec:
    pdVar2 = (double *)FUN_00f25c40(pdVar2,auStack_38);
    if (pdVar2 != (double *)0x0) goto LAB_00f03df8;
    iVar4 = 0;
    lVar3 = 0;
    if (param_3 == (int *)0x0) goto LAB_00f03e0c;
  }
  *param_3 = iVar4;
LAB_00f03e0c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


