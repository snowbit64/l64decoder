// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d66cb0
// Entry Point: 00d66cb0
// Size: 3240 bytes
// Signature: undefined FUN_00d66cb0(void)


void FUN_00d66cb0(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  long *plVar8;
  char **ppcVar9;
  long lVar10;
  undefined *puVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  undefined4 *puVar17;
  
  iVar5 = *(int *)((long)param_1 + 0x5c);
  if (iVar5 < 1) {
    iVar14 = 0;
    if (*(char *)((long)param_1 + 0x121) == '\0') goto LAB_00d66d2c;
LAB_00d66d18:
    uVar4 = 0xc9;
    if (*(char *)((long)param_1 + 0x14c) != '\0') {
      uVar4 = 0xca;
    }
  }
  else {
    iVar14 = 0;
    iVar16 = 0;
    puVar17 = (undefined4 *)(param_1[0xd] + 0x10);
    do {
      iVar3 = FUN_00d68ac8(param_1,*puVar17);
      iVar5 = *(int *)((long)param_1 + 0x5c);
      iVar14 = iVar3 + iVar14;
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 0x18;
    } while (iVar16 < iVar5);
    if (*(char *)((long)param_1 + 0x121) != '\0') goto LAB_00d66d18;
LAB_00d66d2c:
    if (*(char *)((long)param_1 + 0x14c) == '\0') {
      if ((*(int *)(param_1 + 0xb) == 8) && (*(int *)((long)param_1 + 0x1cc) == 8)) {
        if (iVar5 < 1) {
          bVar1 = true;
        }
        else {
          piVar12 = (int *)(param_1[0xd] + 0x18);
          bVar1 = true;
          do {
            if ((1 < piVar12[-1]) || (1 < *piVar12)) {
              bVar1 = false;
            }
            piVar12 = piVar12 + 0x18;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((iVar14 == 0) || (!bVar1)) goto LAB_00d66d94;
        lVar10 = *param_1;
        *(undefined4 *)(lVar10 + 0x28) = 0x4d;
        (**(code **)(lVar10 + 8))(param_1,0);
        if (*(char *)((long)param_1 + 0x121) != '\0') goto LAB_00d66d18;
        if (*(char *)((long)param_1 + 0x14c) != '\0') goto LAB_00d66d9c;
LAB_00d67950:
        uVar4 = 0xc1;
      }
      else {
        bVar1 = false;
LAB_00d66d94:
        if (*(char *)((long)param_1 + 0x14c) != '\0') goto LAB_00d66d9c;
        if (!bVar1) goto LAB_00d67950;
        uVar4 = 0xc0;
      }
    }
    else {
LAB_00d66d9c:
      uVar4 = 0xc2;
    }
  }
  FUN_00d68e90(param_1,uVar4);
  if (*(int *)((long)param_1 + 0x144) != 0) {
    if ((*(int *)((long)param_1 + 0x144) != 1) || (*(int *)((long)param_1 + 0x5c) < 3)) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x1c;
      (**ppcVar6)(param_1);
    }
    plVar15 = param_1 + 5;
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xff;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xf8;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0x18;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xd;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xff;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 3;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar11 = (undefined *)*plVar8;
    uVar4 = *(undefined4 *)(param_1[0xd] + 0x60);
    *plVar8 = (long)(puVar11 + 1);
    *puVar11 = (char)uVar4;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)plVar8[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar11 = (undefined *)*plVar8;
    uVar4 = *(undefined4 *)param_1[0xd];
    *plVar8 = (long)(puVar11 + 1);
    *puVar11 = (char)uVar4;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)plVar8[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar11 = (undefined *)*plVar8;
    uVar4 = *(undefined4 *)(param_1[0xd] + 0xc0);
    *plVar8 = (long)(puVar11 + 1);
    *puVar11 = (char)uVar4;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)plVar8[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0x80;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 1;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 1;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)*plVar15;
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
      cVar2 = *(char *)((long)param_1 + 0x14c);
      goto joined_r0x00d678f8;
    }
  }
  cVar2 = *(char *)((long)param_1 + 0x14c);
joined_r0x00d678f8:
  if ((cVar2 != '\0') && (*(int *)((long)param_1 + 0x1cc) != 8)) {
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xff;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xda;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 6;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    ppcVar9 = (char **)param_1[5];
    pcVar13 = *ppcVar9;
    cVar2 = (char)*(undefined4 *)((long)param_1 + 0x1cc);
    *ppcVar9 = pcVar13 + 1;
    *pcVar13 = cVar2 * cVar2 + -1;
    pcVar13 = ppcVar9[1];
    ppcVar9[1] = pcVar13 + -1;
    if ((pcVar13 + -1 == (char *)0x0) && (cVar2 = (*(code *)ppcVar9[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar2 = (*(code *)puVar7[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d678d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar6)(param_1);
      return;
    }
  }
  return;
}


