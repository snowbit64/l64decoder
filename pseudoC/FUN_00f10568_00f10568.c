// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10568
// Entry Point: 00f10568
// Size: 444 bytes
// Signature: undefined FUN_00f10568(void)


void FUN_00f10568(long param_1,undefined *param_2,long param_3,byte param_4,long *param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (param_3 - 1U < 0x200) {
    cVar2 = (&DAT_021248e8)[param_3];
    if (cVar2 < 0) goto LAB_00f105f0;
    *param_2 = 0;
    lVar3 = *(long *)(param_1 + 0x18);
    if (param_5[5] == 0) {
      if (*(int *)(param_5 + 6) < 0) {
        lVar4 = lVar3 + (ulong)(uint)(int)cVar2 * 8;
        pplVar6 = *(long ***)(lVar4 + 0x160);
        param_5[1] = (long)pplVar6;
        if (pplVar6 != (long **)0x0) {
          *pplVar6 = param_5;
        }
        *(long **)(lVar4 + 0x160) = param_5;
        iVar1 = *(int *)((long)param_5 + 0x34);
        *(long *)(param_2 + 8) = param_5[5];
        param_5[5] = (long)param_2;
        iVar1 = iVar1 + -1;
        *(int *)((long)param_5 + 0x34) = iVar1;
      }
      else {
        iVar1 = *(int *)((long)param_5 + 0x34);
        *(undefined8 *)(param_2 + 8) = 0;
        param_5[5] = (long)param_2;
        iVar1 = iVar1 + -1;
        *(int *)((long)param_5 + 0x34) = iVar1;
      }
    }
    else {
      iVar1 = *(int *)((long)param_5 + 0x34);
      *(long *)(param_2 + 8) = param_5[5];
      param_5[5] = (long)param_2;
      iVar1 = iVar1 + -1;
      *(int *)((long)param_5 + 0x34) = iVar1;
    }
    if (iVar1 != 0) goto LAB_00f106f0;
    plVar5 = (long *)param_5[1];
    if (plVar5 != (long *)0x0) {
      *plVar5 = *param_5;
    }
    if (*param_5 == 0) {
      lVar4 = lVar3 + ((long)cVar2 & 0xffffffffU) * 8;
      if (*(long **)(lVar4 + 0x160) == param_5) {
        pplVar6 = (long **)(lVar4 + 0x160);
        goto LAB_00f105e8;
      }
    }
    else {
      pplVar6 = (long **)(*param_5 + 8);
LAB_00f105e8:
      *pplVar6 = plVar5;
    }
    plVar5 = (long *)param_5[3];
    lVar4 = *(long *)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
      plVar5[2] = param_5[2];
    }
    if (param_5[2] == 0) {
      pplVar6 = (long **)(lVar3 + 0x260);
      if (*pplVar6 == param_5) goto LAB_00f10688;
    }
    else {
      pplVar6 = (long **)(param_5[2] + 0x18);
LAB_00f10688:
      *pplVar6 = plVar5;
    }
  }
  else {
LAB_00f105f0:
    plVar5 = (long *)param_5[3];
    if (plVar5 != (long *)0x0) {
      plVar5[2] = param_5[2];
    }
    lVar4 = lVar7;
    if (param_5[2] == 0) {
      pplVar6 = (long **)(lVar7 + 0x260);
      if (*pplVar6 != param_5) goto LAB_00f106dc;
    }
    else {
      pplVar6 = (long **)(param_5[2] + 0x18);
    }
    *pplVar6 = plVar5;
  }
LAB_00f106dc:
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 0x18),param_5,(long)*(int *)(param_5 + 4),0);
LAB_00f106f0:
  lVar4 = lVar7 + (ulong)param_4 * 8;
  lVar3 = *(long *)(lVar4 + 0x270);
  *(long *)(lVar7 + 0x48) = *(long *)(lVar7 + 0x48) - param_3;
  *(long *)(lVar4 + 0x270) = lVar3 - param_3;
  return;
}


