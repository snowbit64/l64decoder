// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1043c
// Entry Point: 00f1043c
// Size: 300 bytes
// Signature: undefined FUN_00f1043c(void)


void FUN_00f1043c(long param_1,long *param_2,long param_3,byte param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (param_3 - 1U < 0x200) {
    cVar2 = (&DAT_021248e8)[param_3];
    if (cVar2 < 0) goto LAB_00f104d0;
    pplVar6 = (long **)(param_2 + -1);
    param_2 = *pplVar6;
    plVar7 = (long *)param_2[5];
    if (plVar7 == (long *)0x0) {
      if (-1 < *(int *)(param_2 + 6)) {
        plVar7 = (long *)0x0;
        goto LAB_00f10494;
      }
      pplVar9 = (long **)(lVar10 + (ulong)(uint)(int)cVar2 * 8 + 0x60);
      plVar7 = *pplVar9;
      param_2[1] = (long)plVar7;
      if (plVar7 != (long *)0x0) {
        *plVar7 = (long)param_2;
      }
      *pplVar9 = param_2;
      iVar1 = *(int *)((long)param_2 + 0x34);
      *pplVar6 = (long *)param_2[5];
      param_2[5] = (long)pplVar6;
      iVar1 = iVar1 + -1;
      *(int *)((long)param_2 + 0x34) = iVar1;
    }
    else {
LAB_00f10494:
      iVar1 = *(int *)((long)param_2 + 0x34);
      *pplVar6 = plVar7;
      param_2[5] = (long)pplVar6;
      iVar1 = iVar1 + -1;
      *(int *)((long)param_2 + 0x34) = iVar1;
    }
    if (iVar1 != 0) goto LAB_00f104e4;
    plVar7 = (long *)param_2[1];
    if (plVar7 != (long *)0x0) {
      *plVar7 = *param_2;
    }
    if (*param_2 == 0) {
      pplVar6 = (long **)(lVar10 + ((long)cVar2 & 0xffffffffU) * 8 + 0x60);
      if (*pplVar6 == param_2) goto LAB_00f104c8;
    }
    else {
      pplVar6 = (long **)(*param_2 + 8);
LAB_00f104c8:
      *pplVar6 = plVar7;
    }
    pcVar5 = *(code **)(*(long *)(param_1 + 0x18) + 0x10);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
    lVar4 = (long)*(int *)(param_2 + 4);
  }
  else {
LAB_00f104d0:
    pcVar5 = *(code **)(lVar10 + 0x10);
    uVar3 = *(undefined8 *)(lVar10 + 0x18);
    lVar4 = param_3;
  }
  (*pcVar5)(uVar3,param_2,lVar4,0);
LAB_00f104e4:
  lVar4 = lVar10 + (ulong)param_4 * 8;
  lVar8 = *(long *)(lVar4 + 0x270);
  *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) - param_3;
  *(long *)(lVar4 + 0x270) = lVar8 - param_3;
  return;
}


