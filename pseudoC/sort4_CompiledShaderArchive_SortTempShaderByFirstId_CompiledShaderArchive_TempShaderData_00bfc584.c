// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
// Entry Point: 00bfc584
// Size: 1160 bytes
// Signature: uint __cdecl __sort4<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>(TempShaderData * param_1, TempShaderData * param_2, TempShaderData * param_3, TempShaderData * param_4, SortTempShaderByFirstId * param_5)


/* unsigned int std::__ndk1::__sort4<CompiledShaderArchive::SortTempShaderByFirstId&,
   CompiledShaderArchive::TempShaderData*>(CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::SortTempShaderByFirstId&) */

uint std::__ndk1::
     __sort4<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
               (TempShaderData *param_1,TempShaderData *param_2,TempShaderData *param_3,
               TempShaderData *param_4,SortTempShaderByFirstId *param_5)

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
  uint uVar16;
  void **ppvVar17;
  int *piVar18;
  void **ppvVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  uVar7 = __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                    (param_1,param_2,param_3,param_5);
  uVar16 = uVar7;
  if (param_4 != param_3) {
    piVar11 = *(int **)(param_4 + 8);
    piVar18 = *(int **)(param_3 + 8);
    if (*piVar11 == *piVar18) {
      uVar4 = piVar11[1];
      if (uVar4 == piVar18[1]) {
        iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar18 + 2),(ulong)uVar4);
        if (-1 < iVar8) goto LAB_00bfc9d4;
      }
      else if ((uint)piVar18[1] <= uVar4) goto LAB_00bfc9d4;
    }
    else if (*piVar18 <= *piVar11) goto LAB_00bfc9d4;
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    uVar12 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar5 = *(undefined4 *)param_3;
    ppvVar19 = (void **)(param_3 + 0x20);
    pvVar14 = *ppvVar19;
    uVar13 = *(undefined8 *)(param_3 + 0x30);
    puVar20 = (undefined8 *)(param_3 + 8);
    *puVar20 = 0;
    *ppvVar19 = (void *)0x0;
    uVar23 = *(undefined8 *)(param_3 + 0x40);
    uVar21 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined4 *)param_3 = *(undefined4 *)param_4;
    uVar22 = *(undefined8 *)(param_4 + 0x10);
    *puVar20 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_3 + 0x10) = uVar22;
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    puVar1 = (undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    pvVar9 = *ppvVar19;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_3 + 0x28) = pvVar9;
      operator_delete(pvVar9);
      *ppvVar19 = (void *)0x0;
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x30) = 0;
    }
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_4 + 0x30);
    uVar22 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_4 + 0x40);
    *puVar1 = uVar22;
    pvVar9 = *(void **)(param_4 + 8);
    *(undefined4 *)param_4 = uVar5;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_4 + 0x10) = pvVar9;
      operator_delete(pvVar9);
    }
    pvVar9 = *(void **)(param_4 + 0x20);
    *(int **)(param_4 + 8) = piVar18;
    *(undefined8 *)(param_4 + 0x10) = uVar2;
    *(undefined8 *)(param_4 + 0x18) = uVar3;
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_4 + 0x28) = pvVar9;
      operator_delete(pvVar9);
    }
    uVar16 = uVar7 + 1;
    *(void **)(param_4 + 0x20) = pvVar14;
    *(undefined8 *)(param_4 + 0x28) = uVar12;
    *(undefined8 *)(param_4 + 0x40) = uVar23;
    *(undefined8 *)(param_4 + 0x38) = uVar21;
    *(undefined8 *)(param_4 + 0x30) = uVar13;
    if (param_3 != param_2) {
      piVar11 = *(int **)(param_3 + 8);
      piVar18 = *(int **)(param_2 + 8);
      if (*piVar11 == *piVar18) {
        uVar4 = piVar11[1];
        if (uVar4 == piVar18[1]) {
          iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar18 + 2),(ulong)uVar4);
          if (-1 < iVar8) goto LAB_00bfc9d4;
        }
        else if ((uint)piVar18[1] <= uVar4) goto LAB_00bfc9d4;
      }
      else if (*piVar18 <= *piVar11) goto LAB_00bfc9d4;
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      puVar15 = (undefined8 *)(param_2 + 8);
      *puVar15 = 0;
      ppvVar17 = (void **)(param_2 + 0x20);
      pvVar14 = *ppvVar17;
      uVar13 = *(undefined8 *)(param_2 + 0x30);
      *ppvVar17 = (void *)0x0;
      uVar5 = *(undefined4 *)param_2;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar23 = *(undefined8 *)(param_2 + 0x40);
      uVar21 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      uVar22 = *(undefined8 *)(param_3 + 0x10);
      *puVar15 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 0x10) = uVar22;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *puVar20 = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      puVar20 = (undefined8 *)(param_2 + 0x38);
      pvVar9 = *ppvVar17;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_2 + 0x28) = pvVar9;
        operator_delete(pvVar9);
        *ppvVar17 = (void *)0x0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
      *ppvVar19 = (void *)0x0;
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x30) = 0;
      uVar22 = *puVar1;
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      *puVar20 = uVar22;
      pvVar9 = *(void **)(param_3 + 8);
      *(undefined4 *)param_3 = uVar5;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_3 + 0x10) = pvVar9;
        operator_delete(pvVar9);
      }
      pvVar9 = *(void **)(param_3 + 0x20);
      *(undefined8 *)(param_3 + 0x18) = uVar3;
      *(int **)(param_3 + 8) = piVar18;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      if (pvVar9 != (void *)0x0) {
        *(void **)(param_3 + 0x28) = pvVar9;
        operator_delete(pvVar9);
      }
      uVar16 = uVar7 + 2;
      *(void **)(param_3 + 0x20) = pvVar14;
      *(undefined8 *)(param_3 + 0x28) = uVar12;
      *(undefined8 *)(param_3 + 0x30) = uVar13;
      *(undefined8 *)(param_3 + 0x40) = uVar23;
      *puVar1 = uVar21;
      if (param_2 != param_1) {
        piVar11 = *(int **)(param_2 + 8);
        piVar18 = *(int **)(param_1 + 8);
        if (*piVar11 == *piVar18) {
          uVar4 = piVar11[1];
          if (uVar4 == piVar18[1]) {
            iVar8 = memcmp(*(void **)(piVar11 + 2),*(void **)(piVar18 + 2),(ulong)uVar4);
            if (-1 < iVar8) goto LAB_00bfc9d4;
          }
          else if ((uint)piVar18[1] <= uVar4) goto LAB_00bfc9d4;
        }
        else if (*piVar18 <= *piVar11) goto LAB_00bfc9d4;
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        ppvVar19 = (void **)(param_1 + 0x20);
        pvVar14 = *ppvVar19;
        *ppvVar19 = (void *)0x0;
        uVar5 = *(undefined4 *)param_1;
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar23 = *(undefined8 *)(param_1 + 0x40);
        uVar21 = *(undefined8 *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        uVar22 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x10) = uVar22;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *puVar15 = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        pvVar9 = *ppvVar19;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_1 + 0x28) = pvVar9;
          operator_delete(pvVar9);
          *ppvVar19 = (void *)0x0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
        uVar22 = *puVar20;
        *ppvVar17 = (void *)0x0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = uVar22;
        pvVar9 = *(void **)(param_2 + 8);
        *(undefined4 *)param_2 = uVar5;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_2 + 0x10) = pvVar9;
          operator_delete(pvVar9);
        }
        pvVar9 = *(void **)(param_2 + 0x20);
        *(int **)(param_2 + 8) = piVar18;
        *(undefined8 *)(param_2 + 0x10) = uVar2;
        *(undefined8 *)(param_2 + 0x18) = uVar3;
        if (pvVar9 != (void *)0x0) {
          *(void **)(param_2 + 0x28) = pvVar9;
          operator_delete(pvVar9);
        }
        uVar16 = uVar7 + 3;
        *(void **)(param_2 + 0x20) = pvVar14;
        *(undefined8 *)(param_2 + 0x28) = uVar13;
        *(undefined8 *)(param_2 + 0x40) = uVar23;
        *puVar20 = uVar21;
        *(undefined8 *)(param_2 + 0x30) = uVar12;
      }
    }
  }
LAB_00bfc9d4:
  if (*(long *)(lVar6 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


