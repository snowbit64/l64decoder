// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c2110c
// Entry Point: 00c2110c
// Size: 836 bytes
// Signature: undefined FUN_00c2110c(void)


undefined4 FUN_00c2110c(GISLParserContext **param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  GISLParserContext *pGVar6;
  int iVar7;
  GISLParserContext *pGVar8;
  uint uVar9;
  GISLParserContext *pGVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar19 = *(long *)(param_1[5] + (long)param_1[3] * 8);
  pGVar6 = param_1[8];
  pGVar10 = *(GISLParserContext **)(lVar19 + 8);
  if (pGVar10 + (long)*(int *)((long)param_1 + 0x34) + 1 < pGVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00c21450("fatal flex scanner internal error--end of buffer missed");
  }
  pGVar8 = param_1[0x10];
  if (*(int *)(lVar19 + 0x34) == 0) {
    if ((long)pGVar6 - (long)pGVar8 == 1) {
      return 1;
    }
    return 2;
  }
  uVar9 = (uint)pGVar8;
  iVar5 = (int)pGVar6;
  uVar18 = iVar5 + ~uVar9;
  if (0 < (int)uVar18) {
    uVar1 = (iVar5 - uVar9) - 2;
    if ((uVar1 < 7) ||
       ((lVar19 = (ulong)((iVar5 - uVar9) - 2) + 1, pGVar10 < pGVar8 + lVar19 &&
        (pGVar8 < pGVar10 + lVar19)))) {
      uVar15 = 0;
      pGVar6 = pGVar10;
LAB_00c211a8:
      iVar5 = ((int)uVar15 + uVar9) - iVar5;
      do {
        iVar5 = iVar5 + 1;
        *pGVar6 = *pGVar8;
        pGVar6 = pGVar6 + 1;
        pGVar8 = pGVar8 + 1;
      } while (iVar5 != -1);
    }
    else if ((ulong)uVar1 < 0x1f) {
      uVar14 = 0;
LAB_00c213d8:
      puVar13 = (undefined8 *)(pGVar8 + uVar14);
      uVar16 = (ulong)((iVar5 - uVar9) - 2) + 1;
      uVar15 = uVar16 & 0x1fffffff8;
      pGVar6 = pGVar10 + uVar15;
      pGVar8 = pGVar8 + uVar15;
      lVar19 = uVar14 - uVar15;
      puVar12 = (undefined8 *)(pGVar10 + uVar14);
      do {
        lVar19 = lVar19 + 8;
        *puVar12 = *puVar13;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar19 != 0);
      if (uVar16 != uVar15) goto LAB_00c211a8;
    }
    else {
      uVar15 = (ulong)uVar1 + 1;
      puVar13 = (undefined8 *)(pGVar8 + 0x10);
      uVar14 = uVar15 & 0x1ffffffe0;
      puVar12 = (undefined8 *)(pGVar10 + 0x10);
      uVar16 = uVar14;
      do {
        puVar2 = puVar13 + -1;
        uVar20 = puVar13[-2];
        uVar22 = puVar13[1];
        uVar21 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar16 = uVar16 - 0x20;
        puVar12[-1] = *puVar2;
        puVar12[-2] = uVar20;
        puVar12[1] = uVar22;
        *puVar12 = uVar21;
        puVar12 = puVar12 + 4;
      } while (uVar16 != 0);
      if (uVar15 != uVar14) {
        if ((uVar15 & 0x18) == 0) {
          pGVar8 = pGVar8 + uVar14;
          pGVar6 = pGVar10 + uVar14;
          uVar15 = uVar15 & 0xffffffe0;
          goto LAB_00c211a8;
        }
        goto LAB_00c213d8;
      }
    }
    lVar19 = *(long *)(param_1[5] + (long)param_1[3] * 8);
  }
  if (*(int *)(lVar19 + 0x38) == 2) {
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)(lVar19 + 0x1c) = 0;
  }
  else {
    iVar5 = *(int *)(lVar19 + 0x18);
    uVar9 = iVar5 + ~uVar18;
    if ((int)uVar9 < 1) {
      pGVar6 = param_1[8];
      do {
        if (*(int *)(lVar19 + 0x20) == 0) {
          *(undefined8 *)(lVar19 + 8) = 0;
LAB_00c2142c:
                    /* WARNING: Subroutine does not return */
          FUN_00c21450("fatal error - scanner input buffer overflow");
        }
        pvVar4 = *(void **)(lVar19 + 8);
        iVar7 = iVar5 - ((uint)-iVar5 >> 3);
        if (0 < iVar5) {
          iVar7 = iVar5 << 1;
        }
        *(int *)(lVar19 + 0x18) = iVar7;
        pvVar3 = realloc(pvVar4,(ulong)(iVar7 + 2));
        *(void **)(lVar19 + 8) = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_00c2142c;
        pGVar6 = (GISLParserContext *)((long)pvVar3 + (long)((int)pGVar6 - (int)pvVar4));
        param_1[8] = pGVar6;
        lVar19 = *(long *)(param_1[5] + (long)param_1[3] * 8);
        iVar5 = *(int *)(lVar19 + 0x18);
        uVar9 = iVar5 + ~uVar18;
      } while ((int)uVar9 < 1);
    }
    if (0x1fff < uVar9) {
      uVar9 = 0x2000;
    }
    iVar5 = GISLParserContext::yyInput
                      (*param_1,(char *)(*(long *)(lVar19 + 8) + (long)(int)uVar18),uVar9);
    *(int *)((long)param_1 + 0x34) = iVar5;
    lVar19 = *(long *)(param_1[5] + (long)param_1[3] * 8);
    *(int *)(lVar19 + 0x1c) = iVar5;
    if (iVar5 != 0) {
      uVar17 = 0;
      goto LAB_00c212e4;
    }
  }
  if (uVar18 == 0) {
    gsParser_restart((__sFILE *)param_1[1],param_1);
    uVar17 = 1;
    iVar5 = *(int *)((long)param_1 + 0x34);
    lVar19 = *(long *)(param_1[5] + (long)param_1[3] * 8);
  }
  else {
    uVar17 = 2;
    iVar5 = 0;
    *(undefined4 *)(lVar19 + 0x38) = 2;
  }
LAB_00c212e4:
  iVar7 = iVar5 + uVar18;
  if (*(int *)(lVar19 + 0x18) < iVar7) {
    uVar9 = iVar7 + (iVar5 >> 1);
    pvVar4 = realloc(*(void **)(lVar19 + 8),(ulong)uVar9);
    pGVar6 = param_1[3];
    pGVar10 = param_1[5];
    *(void **)(*(long *)(pGVar10 + (long)pGVar6 * 8) + 8) = pvVar4;
    lVar11 = *(long *)(pGVar10 + (long)pGVar6 * 8);
    lVar19 = *(long *)(lVar11 + 8);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c21450("out of dynamic memory in yy_get_next_buffer()");
    }
    iVar7 = *(int *)((long)param_1 + 0x34) + uVar18;
    *(uint *)(lVar11 + 0x18) = uVar9 - 2;
  }
  else {
    lVar19 = *(long *)(lVar19 + 8);
  }
  *(int *)((long)param_1 + 0x34) = iVar7;
  *(undefined *)(lVar19 + iVar7) = 0;
  *(undefined *)
   ((long)*(int *)((long)param_1 + 0x34) +
    *(long *)(*(long *)(param_1[5] + (long)param_1[3] * 8) + 8) + 1) = 0;
  param_1[0x10] = *(GISLParserContext **)(*(long *)(param_1[5] + (long)param_1[3] * 8) + 8);
  return uVar17;
}


