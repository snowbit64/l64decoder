// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d328e8
// Entry Point: 00d328e8
// Size: 524 bytes
// Signature: undefined FUN_00d328e8(void)


long ** FUN_00d328e8(long **param_1)

{
  int iVar1;
  size_t __n;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  pplVar3 = (long **)param_1[1];
  if (pplVar3 != (long **)0x0) {
    plVar2 = param_1[4];
    if (plVar2 == (long *)0x0) {
      iVar1 = *(int *)(pplVar3 + 1);
      plVar2 = (long *)((long)pplVar3 + 0xc);
      plVar4 = *pplVar3;
      *pplVar3 = (long *)0x0;
      param_1[3] = plVar2;
      param_1[4] = plVar2;
      *param_1 = (long *)pplVar3;
      param_1[1] = plVar4;
      param_1[2] = (long *)((long)plVar2 + (long)iVar1);
      return (long **)0x1;
    }
    plVar4 = param_1[2];
    if ((long)plVar4 - (long)plVar2 < (long)*(int *)(pplVar3 + 1)) {
      plVar5 = *pplVar3;
      *pplVar3 = *param_1;
      *param_1 = (long *)pplVar3;
      param_1[1] = plVar5;
      memcpy((void *)((long)pplVar3 + 0xc),plVar2,(long)plVar4 - (long)plVar2);
      plVar2 = (long *)((long)*param_1 + 0xc);
      param_1[2] = (long *)((long)plVar2 + (long)*(int *)(*param_1 + 1));
      param_1[3] = (long *)((long)plVar2 + ((long)param_1[3] - (long)param_1[4]));
      param_1[4] = plVar2;
      return (long **)0x1;
    }
  }
  plVar2 = *param_1;
  plVar4 = param_1[4];
  if ((plVar2 == (long *)0x0) || (plVar4 != (long *)((long)plVar2 + 0xc))) {
    uVar6 = (int)param_1[2] - (int)plVar4;
    if ((int)uVar6 < 0) {
      return (long **)0x0;
    }
    if (uVar6 < 0x400) {
      uVar6 = 0x400;
    }
    else {
      uVar6 = uVar6 * 2;
      if ((int)uVar6 < 0) {
        return (long **)0x0;
      }
      if (0x7ffffff2 < uVar6 - 1) {
        return (long **)0x0;
      }
    }
    pplVar3 = (long **)(*(code *)*param_1[5])(uVar6 + 0xc);
    if (pplVar3 != (long **)0x0) {
      plVar2 = param_1[3];
      plVar4 = param_1[4];
      *(uint *)(pplVar3 + 1) = uVar6;
      plVar5 = *param_1;
      *param_1 = (long *)pplVar3;
      __n = (long)plVar2 - (long)plVar4;
      *pplVar3 = plVar5;
      plVar5 = plVar2;
      if (__n != 0) {
        memcpy((void *)((long)pplVar3 + 0xc),plVar4,__n);
        plVar2 = param_1[4];
        plVar5 = param_1[3];
      }
      plVar4 = (long *)((long)pplVar3 + 0xc);
      param_1[3] = (long *)((long)plVar4 + ((long)plVar5 - (long)plVar2));
      param_1[4] = plVar4;
      param_1[2] = (long *)((long)plVar4 + (ulong)uVar6);
      return (long **)0x1;
    }
  }
  else {
    pplVar3 = (long **)0x0;
    uVar6 = ((int)param_1[2] - (int)plVar4) * 2;
    if ((-1 < (int)uVar6) && (uVar6 - 1 < 0x7ffffff3)) {
      plVar5 = param_1[3];
      pplVar3 = (long **)(*(code *)param_1[5][1])(plVar2,uVar6 + 0xc);
      if (pplVar3 != (long **)0x0) {
        plVar2 = (long *)((long)pplVar3 + 0xc);
        *param_1 = (long *)pplVar3;
        *(uint *)(pplVar3 + 1) = uVar6;
        param_1[3] = (long *)((long)plVar2 + ((long)plVar5 - (long)plVar4));
        param_1[4] = plVar2;
        param_1[2] = (long *)((long)plVar2 + (ulong)uVar6);
        return (long **)0x1;
      }
    }
  }
  return pplVar3;
}


