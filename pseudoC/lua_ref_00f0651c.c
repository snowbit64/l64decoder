// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_ref
// Entry Point: 00f0651c
// Size: 292 bytes
// Signature: undefined __cdecl lua_ref(lua_State * param_1, int param_2)


/* lua_ref(lua_State*, int) */

int lua_ref(lua_State *param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      pdVar3 = (double *)FUN_00f068dc(param_1);
      iVar1 = *(int *)((long)pdVar3 + 0xc);
    }
    else {
      pdVar3 = (double *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
      iVar1 = *(int *)((long)pdVar3 + 0xc);
    }
  }
  else {
    pdVar3 = (double *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(double **)(param_1 + 8) <= pdVar3) {
      pdVar3 = (double *)&DAT_0056fdf8;
    }
    iVar1 = *(int *)((long)pdVar3 + 0xc);
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc00);
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0xbf0);
    if (iVar1 == 0) {
      iVar1 = FUN_00f17aac(lVar4);
      iVar1 = iVar1 + 1;
    }
    pdVar2 = (double *)FUN_00f178d4(param_1,lVar4,iVar1);
    if (*(int *)(lVar5 + 0xc00) != 0) {
      *(int *)(lVar5 + 0xc00) = (int)*pdVar2;
    }
    dVar6 = *pdVar3;
    pdVar2[1] = pdVar3[1];
    *pdVar2 = dVar6;
    if (((4 < *(int *)((long)pdVar3 + 0xc)) && ((*(byte *)(lVar4 + 1) >> 2 & 1) != 0)) &&
       ((*(byte *)((long)*pdVar3 + 1) & 3) != 0)) {
      FUN_00f0c9ec(param_1,lVar4);
    }
    return iVar1;
  }
  return 0;
}


