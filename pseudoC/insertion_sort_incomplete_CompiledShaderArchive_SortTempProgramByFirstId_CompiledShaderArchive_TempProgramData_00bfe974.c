// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
// Entry Point: 00bfe974
// Size: 856 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>(TempProgramData * param_1, TempProgramData * param_2, SortTempProgramByFirstId * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,
   CompiledShaderArchive::TempProgramData*>(CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::SortTempProgramByFirstId&) */

bool std::__ndk1::
     __insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
               (TempProgramData *param_1,TempProgramData *param_2,SortTempProgramByFirstId *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void **ppvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  void **ppvVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  uint uVar23;
  void **ppvVar24;
  TempProgramData *pTVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar6 = tpidr_el0;
  uVar9 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  lVar15 = *(long *)(lVar6 + 0x28);
  if (5 < uVar9) {
    __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
    if (param_1 + 0x78 != param_2) {
      lVar19 = 0;
      iVar22 = 0;
      ppvVar24 = (void **)(param_1 + 0x78);
      ppvVar18 = (void **)(param_1 + 0x50);
      do {
        ppvVar11 = ppvVar24;
        uVar5 = *(uint *)(ppvVar11 + 3);
        if (uVar5 == *(uint *)(ppvVar18 + 3)) {
          uVar23 = *(uint *)((long)ppvVar11 + 0x1c);
          if (uVar23 == *(uint *)((long)ppvVar18 + 0x1c)) {
            if (*(uint *)((long)ppvVar11 + 0x24) < *(uint *)((long)ppvVar18 + 0x24)) {
LAB_00bfeb14:
              pvVar14 = *ppvVar11;
              pvVar12 = ppvVar11[1];
              *ppvVar11 = (void *)0x0;
              pvVar13 = ppvVar11[2];
              ppvVar11[1] = (void *)0x0;
              ppvVar11[2] = (void *)0x0;
              uVar1 = *(undefined4 *)(ppvVar11 + 4);
              uVar2 = *(uint *)((long)ppvVar11 + 0x24);
              pTVar25 = param_1 + lVar19;
              lVar20 = lVar19;
              while( true ) {
                uVar3 = *(undefined8 *)(pTVar25 + 0x50);
                uVar4 = *(undefined8 *)(pTVar25 + 0x58);
                *(undefined8 *)(pTVar25 + 0x50) = 0;
                *(undefined8 *)(pTVar25 + 0x58) = 0;
                uVar16 = *(undefined8 *)(pTVar25 + 0x60);
                *(undefined8 *)(pTVar25 + 0x60) = 0;
                *(undefined8 *)(pTVar25 + 0x78) = uVar3;
                *(undefined8 *)(pTVar25 + 0x80) = uVar4;
                *(undefined8 *)(pTVar25 + 0x88) = uVar16;
                *(undefined8 *)(pTVar25 + 0x98) = *(undefined8 *)(pTVar25 + 0x70);
                *(undefined8 *)(pTVar25 + 0x90) = *(undefined8 *)(pTVar25 + 0x68);
                if (lVar20 == -0x50) break;
                bVar7 = *(uint *)(param_1 + lVar20 + 0x40) <= uVar5;
                if ((uVar5 == *(uint *)(param_1 + lVar20 + 0x40)) &&
                   (bVar7 = *(uint *)(param_1 + lVar20 + 0x44) <= uVar23,
                   uVar23 == *(uint *)(param_1 + lVar20 + 0x44))) {
                  bVar7 = *(uint *)(param_1 + lVar20 + 0x4c) <= uVar2;
                }
                if (bVar7) {
                  ppvVar24 = (void **)(param_1 + lVar20 + 0x50);
                  pvVar8 = *ppvVar24;
                  if (pvVar8 == (void *)0x0) goto LAB_00bfea84;
                  goto LAB_00bfea7c;
                }
                pvVar8 = *(void **)(pTVar25 + 0x50);
                lVar20 = lVar20 + -0x28;
                pTVar25 = param_1 + lVar20;
                if (pvVar8 != (void *)0x0) {
                  *(void **)(pTVar25 + 0x80) = pvVar8;
                  operator_delete(pvVar8);
                  *(undefined8 *)(pTVar25 + 0x80) = 0;
                  *(undefined8 *)(pTVar25 + 0x88) = 0;
                }
              }
              pvVar8 = *(void **)param_1;
              ppvVar24 = (void **)param_1;
              if (pvVar8 != (void *)0x0) {
LAB_00bfea7c:
                ppvVar24[1] = pvVar8;
                operator_delete(pvVar8);
              }
LAB_00bfea84:
              iVar22 = iVar22 + 1;
              *ppvVar24 = pvVar14;
              ppvVar24[1] = pvVar12;
              ppvVar24[2] = pvVar13;
              *(uint *)(param_1 + lVar20 + 0x68) = uVar5;
              *(uint *)((long)ppvVar24 + 0x24) = uVar2;
              *(uint *)((long)ppvVar24 + 0x1c) = uVar23;
              *(undefined4 *)(ppvVar24 + 4) = uVar1;
              if (iVar22 == 8) {
                bVar7 = ppvVar11 + 5 == (void **)param_2;
                goto switchD_00bfe9e0_caseD_0;
              }
            }
          }
          else if (uVar23 < *(uint *)((long)ppvVar18 + 0x1c)) goto LAB_00bfeb14;
        }
        else if (uVar5 < *(uint *)(ppvVar18 + 3)) {
          uVar23 = *(uint *)((long)ppvVar11 + 0x1c);
          goto LAB_00bfeb14;
        }
        lVar19 = lVar19 + 0x28;
        ppvVar24 = ppvVar11 + 5;
        ppvVar18 = ppvVar11;
      } while (ppvVar11 + 5 != (void **)param_2);
      bVar7 = true;
      goto switchD_00bfe9e0_caseD_0;
    }
    goto LAB_00bfec78;
  }
  bVar7 = true;
  switch(uVar9) {
  case 2:
    puVar17 = (undefined8 *)(param_2 + -0x10);
    puVar10 = (undefined8 *)(param_1 + 0x18);
    bVar7 = *(uint *)puVar10 <= *(uint *)puVar17;
    if ((*(uint *)puVar17 == *(uint *)puVar10) &&
       (bVar7 = *(uint *)(param_1 + 0x1c) <= *(uint *)(param_2 + -0xc),
       *(uint *)(param_2 + -0xc) == *(uint *)(param_1 + 0x1c))) {
      if (*(uint *)(param_1 + 0x24) <= *(uint *)(param_2 + -4)) {
LAB_00bfec78:
        bVar7 = true;
        break;
      }
    }
    else if (bVar7) goto LAB_00bfec78;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar21 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    uVar16 = *(undefined8 *)(param_2 + -0x20);
    uVar27 = *(undefined8 *)(param_1 + 0x20);
    uVar26 = *puVar10;
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0x28);
    *(undefined8 *)(param_1 + 8) = uVar16;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -0x18);
    uVar16 = *puVar17;
    *(undefined8 *)(param_2 + -0x28) = 0;
    *(undefined8 *)(param_2 + -0x20) = 0;
    *(undefined8 *)(param_2 + -0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + -8);
    *puVar10 = uVar16;
    pvVar12 = *(void **)(param_2 + -0x28);
    if (pvVar12 != (void *)0x0) {
      *(void **)(param_2 + -0x20) = pvVar12;
      operator_delete(pvVar12);
    }
    *(undefined8 *)(param_2 + -0x28) = uVar21;
    *(undefined8 *)(param_2 + -0x20) = uVar3;
    bVar7 = true;
    *(undefined8 *)(param_2 + -0x18) = uVar4;
    *(undefined8 *)(param_2 + -8) = uVar27;
    *puVar17 = uVar26;
    break;
  case 3:
    __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
              (param_1,param_1 + 0x28,param_2 + -0x28,param_3);
    bVar7 = true;
    break;
  case 4:
    __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
    bVar7 = true;
    break;
  case 5:
    FUN_00bfe494(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
    bVar7 = true;
  }
switchD_00bfe9e0_caseD_0:
  if (*(long *)(lVar6 + 0x28) == lVar15) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


