// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10724
// Entry Point: 00f10724
// Size: 536 bytes
// Signature: undefined FUN_00f10724(void)


void * FUN_00f10724(long param_1,void *param_2,ulong param_3,ulong param_4,byte param_5)

{
  size_t __n;
  int iVar1;
  void *__dest;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  long **pplVar8;
  long lVar9;
  uint uVar10;
  
  if (param_4 - 1 < 0x200) {
    cVar2 = (&DAT_021248e8)[param_4];
    lVar9 = *(long *)(param_1 + 0x18);
    if (0x1ff < param_3 - 1) goto LAB_00f1077c;
LAB_00f1079c:
    uVar10 = (uint)(char)(&DAT_021248e8)[param_3];
  }
  else {
    cVar2 = -1;
    lVar9 = *(long *)(param_1 + 0x18);
    if (param_3 - 1 < 0x200) goto LAB_00f1079c;
LAB_00f1077c:
    uVar10 = 0xffffffff;
  }
  if ((cVar2 < '\0') && ((int)uVar10 < 0)) {
    __dest = (void *)(**(code **)(lVar9 + 0x10))
                               (*(undefined8 *)(lVar9 + 0x18),param_2,param_3,param_4);
    if ((param_4 != 0) && (__dest == (void *)0x0)) goto LAB_00f10930;
    goto LAB_00f108f4;
  }
  if (cVar2 < '\0') {
    __dest = (void *)(**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 0x18),0,0,param_4);
  }
  else {
    __dest = (void *)FUN_00f10138(param_1);
  }
  if ((param_4 != 0) && (__dest == (void *)0x0)) {
LAB_00f10930:
                    /* WARNING: Subroutine does not return */
    FUN_00f0a90c(param_1,4);
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    __n = param_3;
    if (param_4 <= param_3) {
      __n = param_4;
    }
    memcpy(__dest,param_2,__n);
  }
  if ((int)uVar10 < 0) {
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 0x18),param_2,param_3,0);
    goto LAB_00f108f4;
  }
  pplVar8 = (long **)((long)param_2 + -8);
  plVar3 = *pplVar8;
  lVar4 = *(long *)(param_1 + 0x18);
  plVar5 = (long *)plVar3[5];
  if (plVar5 == (long *)0x0) {
    if (-1 < *(int *)(plVar3 + 6)) {
      plVar5 = (long *)0x0;
      goto LAB_00f10844;
    }
    pplVar6 = (long **)(lVar4 + (ulong)uVar10 * 8 + 0x60);
    plVar5 = *pplVar6;
    plVar3[1] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)plVar3;
    }
    *pplVar6 = plVar3;
    iVar1 = *(int *)((long)plVar3 + 0x34);
    *pplVar8 = (long *)plVar3[5];
    plVar3[5] = (long)pplVar8;
    iVar1 = iVar1 + -1;
    *(int *)((long)plVar3 + 0x34) = iVar1;
  }
  else {
LAB_00f10844:
    iVar1 = *(int *)((long)plVar3 + 0x34);
    *pplVar8 = plVar5;
    plVar3[5] = (long)pplVar8;
    iVar1 = iVar1 + -1;
    *(int *)((long)plVar3 + 0x34) = iVar1;
  }
  if (iVar1 != 0) goto LAB_00f108f4;
  plVar5 = (long *)plVar3[1];
  if (plVar5 != (long *)0x0) {
    *plVar5 = *plVar3;
  }
  if (*plVar3 == 0) {
    pplVar8 = (long **)(lVar4 + (ulong)uVar10 * 8 + 0x60);
    if (*pplVar8 == plVar3) goto LAB_00f10878;
  }
  else {
    pplVar8 = (long **)(*plVar3 + 8);
LAB_00f10878:
    *pplVar8 = plVar5;
  }
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))
            (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),plVar3,(long)*(int *)(plVar3 + 4),0);
LAB_00f108f4:
  lVar4 = lVar9 + (ulong)param_5 * 8;
  lVar7 = *(long *)(lVar4 + 0x270);
  *(ulong *)(lVar9 + 0x48) = (param_4 - param_3) + *(long *)(lVar9 + 0x48);
  *(ulong *)(lVar4 + 0x270) = (param_4 - param_3) + lVar7;
  return __dest;
}


