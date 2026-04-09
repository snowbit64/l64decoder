// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_downsampler
// Entry Point: 00d6ca28
// Size: 576 bytes
// Signature: undefined jinit_downsampler(void)


void jinit_downsampler(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  code **ppcVar9;
  code **ppcVar10;
  long lVar11;
  int *piVar12;
  
  ppcVar9 = (code **)(**(code **)param_1[1])(param_1,1,0xa8);
  cVar4 = *(char *)((long)param_1 + 0x123);
  param_1[0x42] = (long)ppcVar9;
  *(undefined *)(ppcVar9 + 2) = 0;
  *ppcVar9 = FUN_00d6cc68;
  ppcVar9[1] = FUN_00d6cc6c;
  if (cVar4 != '\0') {
    ppcVar10 = (code **)*param_1;
    *(undefined4 *)(ppcVar10 + 5) = 0x1a;
    (**ppcVar10)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    lVar11 = 0;
    piVar12 = (int *)(param_1[0xd] + 0x28);
    bVar8 = true;
    do {
      iVar2 = *(int *)(param_1 + 0x2a);
      iVar5 = 0;
      if (*(int *)((long)param_1 + 0x15c) != 0) {
        iVar5 = (*piVar12 * piVar12[-7]) / *(int *)((long)param_1 + 0x15c);
      }
      iVar6 = 0;
      if (*(int *)(param_1 + 0x2b) != 0) {
        iVar6 = (piVar12[-1] * piVar12[-8]) / *(int *)(param_1 + 0x2b);
      }
      iVar3 = *(int *)((long)param_1 + 0x154);
      *(int *)((long)ppcVar9 + lVar11 * 4 + 0x68) = iVar5;
      if ((iVar2 == iVar6) && (iVar3 == iVar5)) {
        if (*(int *)(param_1 + 0x25) == 0) {
          ppcVar9[lVar11 + 3] = FUN_00d6cf44;
        }
        else {
          ppcVar9[lVar11 + 3] = FUN_00d6cd10;
          *(undefined *)(ppcVar9 + 2) = 1;
        }
      }
      else if (iVar2 == iVar6 * 2 && iVar3 == iVar5) {
        bVar8 = false;
        ppcVar9[lVar11 + 3] = FUN_00d6cfdc;
      }
      else if (iVar2 == iVar6 * 2 && iVar3 == iVar5 * 2) {
        if (*(int *)(param_1 + 0x25) == 0) {
          ppcVar9[lVar11 + 3] = FUN_00d6daec;
        }
        else {
          *(undefined *)(ppcVar9 + 2) = 1;
          ppcVar9[lVar11 + 3] = FUN_00d6d0d0;
        }
      }
      else {
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = iVar2 / iVar6;
        }
        if (iVar2 == iVar7 * iVar6) {
          iVar2 = 0;
          if (iVar5 != 0) {
            iVar2 = iVar3 / iVar5;
          }
          if (iVar3 == iVar2 * iVar5) {
            puVar1 = (undefined *)((long)ppcVar9 + lVar11 + 0x9a);
            bVar8 = false;
            ppcVar9[lVar11 + 3] = FUN_00d6dc04;
            puVar1[-10] = (char)iVar7;
            *puVar1 = (char)iVar2;
            goto LAB_00d6cae8;
          }
        }
        ppcVar10 = (code **)*param_1;
        *(undefined4 *)(ppcVar10 + 5) = 0x27;
        (**ppcVar10)(param_1);
      }
LAB_00d6cae8:
      lVar11 = lVar11 + 1;
      piVar12 = piVar12 + 0x18;
    } while (lVar11 < *(int *)((long)param_1 + 0x5c));
    if ((*(int *)(param_1 + 0x25) != 0) && (!bVar8)) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x65;
                    /* WARNING: Could not recover jumptable at 0x00d6cc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 8))(param_1,0);
      return;
    }
  }
  return;
}


