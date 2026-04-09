// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bfca0c
// Entry Point: 00bfca0c
// Size: 1508 bytes
// Signature: undefined FUN_00bfca0c(void)


uint FUN_00bfca0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,SortTempShaderByFirstId *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  int *piVar16;
  uint uVar17;
  void **ppvVar18;
  undefined8 *puVar19;
  void **ppvVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  uVar7 = std::__ndk1::
          __sort4<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                    ((TempShaderData *)param_1,(TempShaderData *)param_2,(TempShaderData *)param_3,
                     (TempShaderData *)param_4,param_6);
  uVar17 = uVar7;
  if (param_5 != param_4) {
    piVar11 = *(int **)(param_5 + 2);
    piVar16 = *(int **)(param_4 + 2);
    if (*piVar11 == *piVar16) {
      uVar4 = piVar11[1];
      if (uVar4 == piVar16[1]) {
        iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar16 + 2),(ulong)uVar4);
        if (-1 < iVar8) goto LAB_00bfcfb8;
      }
      else if ((uint)piVar16[1] <= uVar4) goto LAB_00bfcfb8;
    }
    else if (*piVar16 <= *piVar11) goto LAB_00bfcfb8;
    uVar12 = *(undefined8 *)(param_4 + 10);
    uVar2 = *(undefined8 *)(param_4 + 4);
    uVar3 = *(undefined8 *)(param_4 + 6);
    ppvVar20 = (void **)(param_4 + 8);
    pvVar14 = *ppvVar20;
    uVar13 = *(undefined8 *)(param_4 + 0xc);
    *ppvVar20 = (void *)0x0;
    puVar19 = (undefined8 *)(param_4 + 2);
    *puVar19 = 0;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    uVar24 = *(undefined8 *)(param_4 + 0x10);
    uVar22 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(param_4 + 10) = 0;
    *(undefined8 *)(param_4 + 0xc) = 0;
    uVar5 = *param_4;
    *param_4 = *param_5;
    uVar23 = *(undefined8 *)(param_5 + 4);
    *puVar19 = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_4 + 4) = uVar23;
    *(undefined8 *)(param_4 + 6) = *(undefined8 *)(param_5 + 6);
    puVar1 = (undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(param_5 + 2) = 0;
    *(undefined8 *)(param_5 + 4) = 0;
    *(undefined8 *)(param_5 + 6) = 0;
    pvVar9 = *ppvVar20;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_4 + 10) = pvVar9;
      operator_delete(pvVar9);
      *ppvVar20 = (void *)0x0;
      *(undefined8 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 0xc) = 0;
    }
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(param_4 + 10) = *(undefined8 *)(param_5 + 10);
    *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(param_5 + 0xc);
    uVar23 = *(undefined8 *)(param_5 + 0xe);
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *puVar1 = uVar23;
    pvVar9 = *(void **)(param_5 + 2);
    *param_5 = uVar5;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_5 + 4) = pvVar9;
      operator_delete(pvVar9);
    }
    pvVar9 = *(void **)(param_5 + 8);
    *(undefined8 *)(param_5 + 6) = uVar3;
    *(int **)(param_5 + 2) = piVar16;
    *(undefined8 *)(param_5 + 4) = uVar2;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_5 + 10) = pvVar9;
      operator_delete(pvVar9);
    }
    uVar17 = uVar7 + 1;
    *(void **)(param_5 + 8) = pvVar14;
    *(undefined8 *)(param_5 + 10) = uVar12;
    *(undefined8 *)(param_5 + 0x10) = uVar24;
    *(undefined8 *)(param_5 + 0xe) = uVar22;
    *(undefined8 *)(param_5 + 0xc) = uVar13;
    if (param_4 != param_3) {
      piVar11 = *(int **)(param_4 + 2);
      piVar16 = *(int **)(param_3 + 2);
      if (*piVar11 == *piVar16) {
        uVar4 = piVar11[1];
        if (uVar4 == piVar16[1]) {
          iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar16 + 2),(ulong)uVar4);
          if (-1 < iVar8) goto LAB_00bfcfb8;
        }
        else if ((uint)piVar16[1] <= uVar4) goto LAB_00bfcfb8;
      }
      else if (*piVar16 <= *piVar11) goto LAB_00bfcfb8;
      uVar2 = *(undefined8 *)(param_3 + 10);
      uVar23 = *(undefined8 *)(param_3 + 0xc);
      ppvVar18 = (void **)(param_3 + 8);
      pvVar14 = *ppvVar18;
      puVar15 = (undefined8 *)(param_3 + 2);
      *puVar15 = 0;
      uVar3 = *(undefined8 *)(param_3 + 4);
      uVar12 = *(undefined8 *)(param_3 + 6);
      *ppvVar18 = (void *)0x0;
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined8 *)(param_3 + 6) = 0;
      uVar5 = *param_3;
      *(undefined8 *)(param_3 + 10) = 0;
      *(undefined8 *)(param_3 + 0xc) = 0;
      uVar24 = *(undefined8 *)(param_3 + 0x10);
      uVar22 = *(undefined8 *)(param_3 + 0xe);
      *param_3 = *param_4;
      uVar13 = *(undefined8 *)(param_4 + 4);
      *puVar15 = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)(param_3 + 4) = uVar13;
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_4 + 6);
      *puVar19 = 0;
      *(undefined8 *)(param_4 + 4) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      puVar19 = (undefined8 *)(param_3 + 0xe);
      pvVar9 = *ppvVar18;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_3 + 10) = pvVar9;
        operator_delete(pvVar9);
        *ppvVar18 = (void *)0x0;
        *(undefined8 *)(param_3 + 10) = 0;
        *(undefined8 *)(param_3 + 0xc) = 0;
      }
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_4 + 10);
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_4 + 0xc);
      *ppvVar20 = (void *)0x0;
      *(undefined8 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 0xc) = 0;
      uVar13 = *puVar1;
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
      *puVar19 = uVar13;
      pvVar9 = *(void **)(param_4 + 2);
      *param_4 = uVar5;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_4 + 4) = pvVar9;
        operator_delete(pvVar9);
      }
      pvVar9 = *(void **)(param_4 + 8);
      *(int **)(param_4 + 2) = piVar16;
      *(undefined8 *)(param_4 + 4) = uVar3;
      *(undefined8 *)(param_4 + 6) = uVar12;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_4 + 10) = pvVar9;
        operator_delete(pvVar9);
      }
      *(void **)(param_4 + 8) = pvVar14;
      *(undefined8 *)(param_4 + 10) = uVar2;
      uVar17 = uVar7 + 2;
      *(undefined8 *)(param_4 + 0xc) = uVar23;
      *(undefined8 *)(param_4 + 0x10) = uVar24;
      *puVar1 = uVar22;
      if (param_3 != param_2) {
        piVar11 = *(int **)(param_3 + 2);
        piVar16 = *(int **)(param_2 + 2);
        if (*piVar11 == *piVar16) {
          uVar4 = piVar11[1];
          if (uVar4 == piVar16[1]) {
            iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar16 + 2),(ulong)uVar4);
            if (-1 < iVar8) goto LAB_00bfcfb8;
          }
          else if ((uint)piVar16[1] <= uVar4) goto LAB_00bfcfb8;
        }
        else if (*piVar16 <= *piVar11) goto LAB_00bfcfb8;
        uVar12 = *(undefined8 *)(param_2 + 10);
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar3 = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_2 + 4) = 0;
        *(undefined8 *)(param_2 + 6) = 0;
        ppvVar20 = (void **)(param_2 + 8);
        pvVar14 = *ppvVar20;
        uVar13 = *(undefined8 *)(param_2 + 0xc);
        puVar21 = (undefined8 *)(param_2 + 2);
        *puVar21 = 0;
        *ppvVar20 = (void *)0x0;
        uVar5 = *param_2;
        *(undefined8 *)(param_2 + 10) = 0;
        *(undefined8 *)(param_2 + 0xc) = 0;
        uVar24 = *(undefined8 *)(param_2 + 0x10);
        uVar22 = *(undefined8 *)(param_2 + 0xe);
        *param_2 = *param_3;
        uVar23 = *(undefined8 *)(param_3 + 4);
        *puVar21 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_2 + 4) = uVar23;
        *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
        *puVar15 = 0;
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        puVar1 = (undefined8 *)(param_2 + 0xe);
        pvVar9 = *ppvVar20;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_2 + 10) = pvVar9;
          operator_delete(pvVar9);
          *ppvVar20 = (void *)0x0;
          *(undefined8 *)(param_2 + 10) = 0;
          *(undefined8 *)(param_2 + 0xc) = 0;
        }
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
        *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
        uVar23 = *puVar19;
        *ppvVar18 = (void *)0x0;
        *(undefined8 *)(param_3 + 10) = 0;
        *(undefined8 *)(param_3 + 0xc) = 0;
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
        *puVar1 = uVar23;
        pvVar9 = *(void **)(param_3 + 2);
        *param_3 = uVar5;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_3 + 4) = pvVar9;
          operator_delete(pvVar9);
        }
        pvVar9 = *(void **)(param_3 + 8);
        *(int **)(param_3 + 2) = piVar16;
        *(undefined8 *)(param_3 + 4) = uVar2;
        *(undefined8 *)(param_3 + 6) = uVar3;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_3 + 10) = pvVar9;
          operator_delete(pvVar9);
        }
        *(void **)(param_3 + 8) = pvVar14;
        *(undefined8 *)(param_3 + 10) = uVar12;
        *(undefined8 *)(param_3 + 0x10) = uVar24;
        *puVar19 = uVar22;
        uVar17 = uVar7 + 3;
        *(undefined8 *)(param_3 + 0xc) = uVar13;
        if (param_2 != param_1) {
          piVar11 = *(int **)(param_2 + 2);
          piVar16 = *(int **)(param_1 + 2);
          if (*piVar11 == *piVar16) {
            uVar4 = piVar11[1];
            if (uVar4 == piVar16[1]) {
              iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar16 + 2),(ulong)uVar4);
              if (-1 < iVar8) goto LAB_00bfcfb8;
            }
            else if ((uint)piVar16[1] <= uVar4) goto LAB_00bfcfb8;
          }
          else if (*piVar16 <= *piVar11) goto LAB_00bfcfb8;
          uVar5 = *param_1;
          uVar2 = *(undefined8 *)(param_1 + 10);
          uVar23 = *(undefined8 *)(param_1 + 0xc);
          ppvVar18 = (void **)(param_1 + 8);
          pvVar14 = *ppvVar18;
          uVar3 = *(undefined8 *)(param_1 + 4);
          uVar12 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 2) = 0;
          *(undefined8 *)(param_1 + 4) = 0;
          *ppvVar18 = (void *)0x0;
          uVar24 = *(undefined8 *)(param_1 + 0x10);
          uVar22 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)(param_1 + 6) = 0;
          *(undefined8 *)(param_1 + 10) = 0;
          *(undefined8 *)(param_1 + 0xc) = 0;
          *param_1 = *param_2;
          uVar13 = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)(param_1 + 4) = uVar13;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
          *puVar21 = 0;
          *(undefined8 *)(param_2 + 4) = 0;
          *(undefined8 *)(param_2 + 6) = 0;
          pvVar9 = *ppvVar18;
          if (pvVar9 != (void *)0x0) {
            *(void **)(param_1 + 10) = pvVar9;
            operator_delete(pvVar9);
            *ppvVar18 = (void *)0x0;
            *(undefined8 *)(param_1 + 10) = 0;
            *(undefined8 *)(param_1 + 0xc) = 0;
          }
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
          *ppvVar20 = (void *)0x0;
          *(undefined8 *)(param_2 + 10) = 0;
          *(undefined8 *)(param_2 + 0xc) = 0;
          uVar13 = *puVar1;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0xe) = uVar13;
          pvVar9 = *(void **)(param_2 + 2);
          *param_2 = uVar5;
          if (pvVar9 != (void *)0x0) {
            *(void **)(param_2 + 4) = pvVar9;
            operator_delete(pvVar9);
          }
          pvVar9 = *(void **)(param_2 + 8);
          *(int **)(param_2 + 2) = piVar16;
          *(undefined8 *)(param_2 + 4) = uVar3;
          *(undefined8 *)(param_2 + 6) = uVar12;
          if (pvVar9 != (void *)0x0) {
            *(void **)(param_2 + 10) = pvVar9;
            operator_delete(pvVar9);
          }
          *(void **)(param_2 + 8) = pvVar14;
          *(undefined8 *)(param_2 + 10) = uVar2;
          *(undefined8 *)(param_2 + 0xc) = uVar23;
          *(undefined8 *)(param_2 + 0x10) = uVar24;
          *puVar1 = uVar22;
          uVar17 = uVar7 + 4;
        }
      }
    }
  }
LAB_00bfcfb8:
  if (*(long *)(lVar6 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


