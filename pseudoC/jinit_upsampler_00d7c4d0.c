// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_upsampler
// Entry Point: 00d7c4d0
// Size: 488 bytes
// Signature: undefined jinit_upsampler(void)


void jinit_upsampler(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  code **ppcVar9;
  undefined8 uVar10;
  code **ppcVar11;
  code **ppcVar12;
  long lVar13;
  code *pcVar14;
  int *piVar15;
  
  ppcVar9 = (code **)(**(code **)param_1[1])(param_1,1,0x100);
  cVar6 = *(char *)(param_1 + 0x2e);
  param_1[0x4c] = (long)ppcVar9;
  *(undefined *)(ppcVar9 + 2) = 0;
  *ppcVar9 = FUN_00d7c6b8;
  ppcVar9[1] = FUN_00d7c6cc;
  if (cVar6 != '\0') {
    ppcVar11 = (code **)*param_1;
    *(undefined4 *)(ppcVar11 + 5) = 0x1a;
    (**ppcVar11)(param_1);
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar13 = 0;
    ppcVar11 = ppcVar9 + 0xd;
    piVar15 = (int *)(param_1[0x24] + 0x24);
    do {
      iVar1 = piVar15[-7];
      iVar2 = *piVar15;
      iVar3 = *(int *)(param_1 + 0x31);
      iVar4 = *(int *)(param_1 + 0x30);
      cVar6 = *(char *)(piVar15 + 4);
      iVar7 = 0;
      if (*(int *)((long)param_1 + 0x18c) != 0) {
        iVar7 = (piVar15[1] * piVar15[-6]) / *(int *)((long)param_1 + 0x18c);
      }
      iVar5 = *(int *)((long)param_1 + 0x184);
      *(int *)((long)ppcVar9 + lVar13 * 4 + 0xc0) = iVar7;
      if (cVar6 == '\0') {
        *ppcVar11 = FUN_00d7c81c;
      }
      else {
        iVar8 = 0;
        if (iVar3 != 0) {
          iVar8 = (iVar2 * iVar1) / iVar3;
        }
        if ((iVar8 == iVar4) && (iVar7 == iVar5)) {
          *ppcVar11 = FUN_00d7c824;
        }
        else {
          if (iVar8 << 1 == iVar4 && iVar7 == iVar5) {
            *ppcVar11 = FUN_00d7c82c;
          }
          else if (iVar8 << 1 == iVar4 && iVar7 << 1 == iVar5) {
            *ppcVar11 = FUN_00d7c998;
          }
          else {
            iVar1 = 0;
            if (iVar8 != 0) {
              iVar1 = iVar4 / iVar8;
            }
            if (iVar4 == iVar1 * iVar8) {
              iVar2 = 0;
              if (iVar7 != 0) {
                iVar2 = iVar5 / iVar7;
              }
              if (iVar5 == iVar2 * iVar7) {
                *ppcVar11 = FUN_00d7cb58;
                *(char *)((long)ppcVar9 + lVar13 + 0xe8) = (char)iVar1;
                *(char *)((long)ppcVar9 + lVar13 + 0xf2) = (char)iVar2;
                goto LAB_00d7c650;
              }
            }
            ppcVar12 = (code **)*param_1;
            *(undefined4 *)(ppcVar12 + 5) = 0x27;
            (**ppcVar12)(param_1);
          }
LAB_00d7c650:
          pcVar14 = *(code **)(param_1[1] + 0x10);
          uVar10 = jround_up(*(undefined4 *)((long)param_1 + 0x74),(long)*(int *)(param_1 + 0x30));
          pcVar14 = (code *)(*pcVar14)(param_1,1,uVar10,*(undefined4 *)((long)param_1 + 0x184));
          ppcVar11[-10] = pcVar14;
        }
      }
      lVar13 = lVar13 + 1;
      ppcVar11 = ppcVar11 + 1;
      piVar15 = piVar15 + 0x18;
    } while (lVar13 < *(int *)(param_1 + 7));
  }
  return;
}


