// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f22e00
// Entry Point: 00f22e00
// Size: 616 bytes
// Signature: undefined FUN_00f22e00(void)


undefined8 FUN_00f22e00(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  long **pplVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  
  if (*(int *)((long)param_2 + 0xc) != 7) {
    FUN_00f272e0(param_1,param_2);
  }
  lVar20 = *param_2;
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x38)) {
    pplVar6 = (long **)FUN_00f0ab3c(param_1);
  }
  else {
    pplVar6 = (long **)(*(long *)(param_1 + 0x20) + 0x28);
    *(long ***)(param_1 + 0x20) = pplVar6;
  }
  bVar3 = *(byte *)(lVar20 + 5);
  lVar7 = *(long *)(param_1 + 8);
  *(int *)(pplVar6 + 4) = param_3;
  *(undefined4 *)((long)pplVar6 + 0x24) = 0;
  lVar17 = *(long *)(param_1 + 0x28);
  lVar15 = (ulong)bVar3 * 0x10;
  *pplVar6 = param_2 + 2;
  pplVar6[1] = param_2;
  *(long **)(param_1 + 0x10) = param_2 + 2;
  lVar17 = lVar17 - lVar7;
  pplVar6[2] = (long *)(lVar7 + lVar15);
  pplVar6[3] = (long *)0x0;
  if (lVar17 == lVar15 || (long)(lVar17 + (ulong)bVar3 * -0x10) < 0 != SBORROW8(lVar17,lVar15)) {
    FUN_00f0ab24(param_1);
  }
  if (*(char *)(lVar20 + 3) != '\0') {
    uVar5 = (**(code **)(lVar20 + 0x18))(param_1);
    if ((int)uVar5 < 0) {
      return 2;
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x20) + -0x28);
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
    if ((param_3 != 0) && (uVar5 != 0)) {
      uVar16 = *(ulong *)(param_1 + 8);
      puVar10 = puVar9;
      uVar18 = uVar16 + (1 - (ulong)uVar5) * 0x10;
      do {
        uVar14 = *(undefined8 *)(uVar18 - 0x10);
        puVar9 = puVar10 + 2;
        param_3 = param_3 + -1;
        puVar10[1] = *(undefined8 *)(uVar18 - 8);
        *puVar10 = uVar14;
        if (param_3 == 0) break;
        bVar4 = uVar18 < uVar16;
        puVar10 = puVar9;
        uVar18 = uVar18 + 0x10;
      } while (bVar4);
    }
    puVar10 = puVar9;
    if (0 < param_3) {
      if (param_3 - 1U != 0) {
        uVar18 = (ulong)(param_3 - 1U) + 1;
        uVar19 = uVar18 & 0x1fffffffe;
        param_3 = param_3 - (int)uVar19;
        puVar10 = puVar9 + uVar19 * 2;
        puVar11 = (undefined4 *)((long)puVar9 + 0x1c);
        uVar16 = uVar19;
        do {
          uVar16 = uVar16 - 2;
          puVar11[-4] = 0;
          *puVar11 = 0;
          puVar11 = puVar11 + 8;
        } while (uVar16 != 0);
        puVar9 = puVar10;
        if (uVar18 == uVar19) goto LAB_00f23044;
      }
      uVar5 = param_3 + 1;
      do {
        *(undefined4 *)((long)puVar9 + 0xc) = 0;
        uVar5 = uVar5 - 1;
        puVar10 = puVar9 + 2;
        puVar9 = puVar9 + 2;
      } while (1 < uVar5);
    }
LAB_00f23044:
    uVar14 = *puVar8;
    *(undefined8 **)(param_1 + 0x20) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 *)(param_1 + 0x10) = uVar14;
    return 1;
  }
  lVar7 = *(long *)(lVar20 + 0x18);
  plVar13 = *(long **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)*(byte *)(lVar7 + 0x81) * 0x10);
  if (plVar1 <= plVar13) goto LAB_00f22fc8;
  plVar2 = plVar1;
  if (plVar1 <= plVar13 + 2) {
    plVar2 = plVar13 + 2;
  }
  plVar12 = plVar13;
  if ((long)plVar2 + ~(ulong)plVar13 < 0x10) {
LAB_00f22fac:
    do {
      plVar13 = plVar12 + 2;
      *(undefined4 *)((long)plVar12 + 0xc) = 0;
      plVar12 = plVar13;
    } while (plVar13 < plVar1);
  }
  else {
    uVar18 = ((long)plVar2 + ~(ulong)plVar13 >> 4) + 1;
    uVar19 = uVar18 & 0x1ffffffffffffffe;
    puVar11 = (undefined4 *)((long)plVar13 + 0x1c);
    uVar16 = uVar19;
    do {
      uVar16 = uVar16 - 2;
      puVar11[-4] = 0;
      *puVar11 = 0;
      puVar11 = puVar11 + 8;
    } while (uVar16 != 0);
    plVar12 = plVar13 + uVar19 * 2;
    plVar13 = plVar13 + uVar19 * 2;
    if (uVar18 != uVar19) goto LAB_00f22fac;
  }
  lVar7 = *(long *)(lVar20 + 0x18);
LAB_00f22fc8:
  if (*(char *)(lVar7 + 0x82) == '\0') {
    plVar13 = pplVar6[2];
  }
  *(long **)(param_1 + 8) = plVar13;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) =
       *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x10);
  return 0;
}


