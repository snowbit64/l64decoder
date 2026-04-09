// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_d_main_controller
// Entry Point: 00d76cc0
// Size: 476 bytes
// Signature: undefined jinit_d_main_controller(void)


void jinit_d_main_controller(long *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code **ppcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  code **ppcVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  
  ppcVar4 = (code **)(**(code **)param_1[1])(param_1,1,0x90);
  param_1[0x45] = (long)ppcVar4;
  *ppcVar4 = FUN_00d76e9c;
  if (param_2 != '\0') {
    ppcVar9 = (code **)*param_1;
    *(undefined4 *)(ppcVar9 + 5) = 3;
    (**ppcVar9)(param_1);
  }
  iVar11 = *(int *)((long)param_1 + 0x18c);
  if (*(char *)(param_1[0x4c] + 0x10) == '\0') {
    iVar8 = *(int *)(param_1 + 7);
    *(int *)((long)ppcVar4 + 100) = iVar11;
    iVar3 = iVar11;
  }
  else {
    if (iVar11 < 2) {
      ppcVar9 = (code **)*param_1;
      *(undefined4 *)(ppcVar9 + 5) = 0x30;
      (**ppcVar9)(param_1);
      iVar11 = *(int *)((long)param_1 + 0x18c);
    }
    lVar12 = param_1[0x45];
    lVar5 = (**(code **)param_1[1])(param_1,1,(long)*(int *)(param_1 + 7) << 4);
    iVar8 = *(int *)(param_1 + 7);
    *(long *)(lVar12 + 0x70) = lVar5;
    *(long *)(lVar12 + 0x78) = lVar5 + (long)iVar8 * 8;
    if (0 < iVar8) {
      lVar5 = 0;
      piVar13 = (int *)(param_1[0x24] + 0x28);
      do {
        iVar3 = 0;
        if (*(int *)((long)param_1 + 0x18c) != 0) {
          iVar3 = (*piVar13 * piVar13[-7]) / *(int *)((long)param_1 + 0x18c);
        }
        iVar2 = iVar3 * (iVar11 + 4);
        uVar1 = iVar2 * 2;
        lVar6 = (**(code **)param_1[1])
                          (param_1,1,
                           -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
        lVar10 = lVar5 * 8;
        lVar6 = lVar6 + (long)iVar3 * 8;
        iVar8 = *(int *)(param_1 + 7);
        lVar5 = lVar5 + 1;
        *(long *)(*(long *)(lVar12 + 0x70) + lVar10) = lVar6;
        *(long *)(*(long *)(lVar12 + 0x78) + lVar10) = lVar6 + (long)iVar2 * 8;
        piVar13 = piVar13 + 0x18;
      } while (lVar5 < iVar8);
    }
    iVar11 = *(int *)((long)param_1 + 0x18c);
    iVar3 = iVar11 + 2;
  }
  if (0 < iVar8) {
    lVar5 = 2;
    piVar13 = (int *)(param_1[0x24] + 0x28);
    while( true ) {
      iVar8 = 0;
      if (iVar11 != 0) {
        iVar8 = (*piVar13 * piVar13[-7]) / iVar11;
      }
      pcVar7 = (code *)(**(code **)(param_1[1] + 0x10))
                                 (param_1,1,piVar13[-1] * piVar13[-3],iVar8 * iVar3);
      iVar11 = *(int *)(param_1 + 7);
      ppcVar4[lVar5] = pcVar7;
      if ((long)iVar11 <= lVar5 + -1) break;
      iVar11 = *(int *)((long)param_1 + 0x18c);
      lVar5 = lVar5 + 1;
      piVar13 = piVar13 + 0x18;
    }
  }
  return;
}


