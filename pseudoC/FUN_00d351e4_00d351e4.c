// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d351e4
// Entry Point: 00d351e4
// Size: 872 bytes
// Signature: undefined FUN_00d351e4(void)


undefined8 FUN_00d351e4(long param_1)

{
  long lVar1;
  undefined uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char **ppcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar11 = *(undefined8 **)(param_1 + 0x2a0);
  lVar6 = puVar11[0x27];
  if (lVar6 == 0) {
LAB_00d352c0:
    puVar15 = (undefined8 *)puVar11[0xf];
    lVar1 = param_1 + 0x310;
    lVar8 = puVar11[0x11];
    puVar13 = puVar15;
    while (puVar16 = puVar13, puVar16 != puVar15 + lVar8) {
      ppcVar14 = (char **)*puVar16;
      puVar13 = puVar16 + 1;
      if ((ppcVar14 != (char **)0x0) && (ppcVar14[1] != (char *)0x0)) {
        if ((int)lVar6 != 0) {
          puVar7 = *(undefined **)(param_1 + 0x328);
          if (puVar7 == *(undefined **)(param_1 + 800)) {
            cVar4 = FUN_00d328e8(lVar1);
            if (cVar4 == '\0') goto LAB_00d3552c;
            puVar7 = *(undefined **)(param_1 + 0x328);
          }
          *(undefined **)(param_1 + 0x328) = puVar7 + 1;
          *puVar7 = 0xc;
        }
        cVar4 = **ppcVar14;
        pcVar10 = *ppcVar14;
        while (cVar4 != '\0') {
          pcVar9 = *(char **)(param_1 + 0x328);
          if (pcVar9 == *(char **)(param_1 + 800)) {
            cVar4 = FUN_00d328e8(lVar1);
            if (cVar4 == '\0') goto LAB_00d3552c;
            cVar4 = *pcVar10;
            pcVar9 = *(char **)(param_1 + 0x328);
          }
          *(char **)(param_1 + 0x328) = pcVar9 + 1;
          *pcVar9 = cVar4;
          cVar4 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        }
        puVar7 = *(undefined **)(param_1 + 0x328);
        if (puVar7 == *(undefined **)(param_1 + 800)) {
          cVar4 = FUN_00d328e8(lVar1);
          if (cVar4 == '\0') goto LAB_00d3552c;
          puVar7 = *(undefined **)(param_1 + 0x328);
        }
        *(undefined **)(param_1 + 0x328) = puVar7 + 1;
        *puVar7 = 0x3d;
        uVar3 = *(int *)(ppcVar14[1] + 0x28) - (uint)(*(char *)(param_1 + 0x37c) != '\0');
        lVar6 = 1;
        puVar13 = puVar16 + 1;
        if (0 < (int)uVar3) {
          uVar12 = 0;
          do {
            puVar7 = *(undefined **)(param_1 + 0x328);
            if (puVar7 == *(undefined **)(param_1 + 800)) {
              cVar4 = FUN_00d328e8(lVar1);
              if (cVar4 == '\0') goto LAB_00d3552c;
              puVar7 = *(undefined **)(param_1 + 0x328);
            }
            uVar2 = *(undefined *)(*(long *)(ppcVar14[1] + 0x20) + uVar12);
            uVar12 = uVar12 + 1;
            *(undefined **)(param_1 + 0x328) = puVar7 + 1;
            *puVar7 = uVar2;
          } while (uVar3 != uVar12);
          lVar6 = 1;
        }
      }
    }
    puVar13 = (undefined8 *)*puVar11;
    lVar8 = puVar11[2];
    puVar11 = puVar13;
    while (puVar15 = puVar11, puVar15 != puVar13 + lVar8) {
      ppcVar14 = (char **)*puVar15;
      puVar11 = puVar15 + 1;
      if ((ppcVar14 != (char **)0x0) && (*(char *)(ppcVar14 + 7) != '\0')) {
        if ((int)lVar6 != 0) {
          puVar7 = *(undefined **)(param_1 + 0x328);
          if (puVar7 == *(undefined **)(param_1 + 800)) {
            cVar4 = FUN_00d328e8(lVar1);
            if (cVar4 == '\0') goto LAB_00d3552c;
            puVar7 = *(undefined **)(param_1 + 0x328);
          }
          *(undefined **)(param_1 + 0x328) = puVar7 + 1;
          *puVar7 = 0xc;
        }
        pcVar10 = *ppcVar14;
        lVar6 = 1;
        cVar4 = *pcVar10;
        puVar11 = puVar15 + 1;
        if (cVar4 != '\0') {
          do {
            pcVar9 = *(char **)(param_1 + 0x328);
            if (pcVar9 == *(char **)(param_1 + 800)) {
              cVar4 = FUN_00d328e8(lVar1);
              if (cVar4 == '\0') goto LAB_00d3552c;
              cVar4 = *pcVar10;
              pcVar9 = *(char **)(param_1 + 0x328);
            }
            *(char **)(param_1 + 0x328) = pcVar9 + 1;
            *pcVar9 = cVar4;
            cVar4 = pcVar10[1];
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          lVar6 = 1;
        }
      }
    }
    puVar7 = *(undefined **)(param_1 + 0x328);
    if (puVar7 == *(undefined **)(param_1 + 800)) {
      cVar4 = FUN_00d328e8(lVar1);
      if (cVar4 == '\0') goto LAB_00d3552c;
      puVar7 = *(undefined **)(param_1 + 0x328);
    }
    *(undefined **)(param_1 + 0x328) = puVar7 + 1;
    *puVar7 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x330);
  }
  else {
    puVar7 = *(undefined **)(param_1 + 0x328);
    if (puVar7 != *(undefined **)(param_1 + 800)) {
LAB_00d35238:
      *(undefined **)(param_1 + 0x328) = puVar7 + 1;
      *puVar7 = 0x3d;
      uVar3 = *(int *)(puVar11[0x27] + 0x28) - (uint)(*(char *)(param_1 + 0x37c) != '\0');
      if (0 < (int)uVar3) {
        uVar12 = 0;
        do {
          puVar7 = *(undefined **)(param_1 + 0x328);
          if (puVar7 == *(undefined **)(param_1 + 800)) {
            cVar4 = FUN_00d328e8(param_1 + 0x310);
            if (cVar4 == '\0') goto LAB_00d3552c;
            puVar7 = *(undefined **)(param_1 + 0x328);
          }
          uVar2 = *(undefined *)(*(long *)(puVar11[0x27] + 0x20) + uVar12);
          uVar12 = uVar12 + 1;
          *(undefined **)(param_1 + 0x328) = puVar7 + 1;
          *puVar7 = uVar2;
        } while (uVar3 != uVar12);
      }
      lVar6 = 1;
      goto LAB_00d352c0;
    }
    cVar4 = FUN_00d328e8(param_1 + 0x310);
    if (cVar4 != '\0') {
      puVar7 = *(undefined **)(param_1 + 0x328);
      goto LAB_00d35238;
    }
LAB_00d3552c:
    uVar5 = 0;
  }
  return uVar5;
}


