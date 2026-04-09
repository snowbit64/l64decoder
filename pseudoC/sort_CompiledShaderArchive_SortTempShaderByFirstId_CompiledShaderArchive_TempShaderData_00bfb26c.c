// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
// Entry Point: 00bfb26c
// Size: 3176 bytes
// Signature: void __cdecl __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>(TempShaderData * param_1, TempShaderData * param_2, SortTempShaderByFirstId * param_3)


/* void std::__ndk1::__sort<CompiledShaderArchive::SortTempShaderByFirstId&,
   CompiledShaderArchive::TempShaderData*>(CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::SortTempShaderByFirstId&) */

void std::__ndk1::
     __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
               (TempShaderData *param_1,TempShaderData *param_2,SortTempShaderByFirstId *param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  long lVar13;
  void **ppvVar14;
  void **ppvVar15;
  void **ppvVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  void *pvVar20;
  void *pvVar21;
  int *piVar22;
  void *pvVar23;
  void **ppvVar24;
  void **ppvVar25;
  long lVar26;
  void *pvVar27;
  void **ppvVar28;
  void **ppvVar29;
  void **ppvVar30;
  void *pvVar31;
  void *pvVar32;
  
  lVar5 = tpidr_el0;
  lVar13 = *(long *)(lVar5 + 0x28);
LAB_00bfb2a8:
  ppvVar14 = (void **)((long)param_2 + -0x48);
  ppvVar15 = (void **)((long)param_2 + -0x90);
  ppvVar16 = (void **)((long)param_2 + -0x10);
  ppvVar24 = (void **)param_1;
LAB_00bfb2d0:
  param_1 = (TempShaderData *)ppvVar24;
  uVar17 = (long)param_2 - (long)param_1;
  switch(((long)uVar17 >> 3) * -0x71c71c71c71c71c7) {
  case 0:
  case 1:
    goto switchD_00bfbd08_caseD_0;
  case 2:
    if (ppvVar14 == (void **)param_1) goto switchD_00bfbd08_caseD_0;
    piVar18 = *(int **)((long)param_2 + -0x40);
    piVar22 = *(int **)((long)param_1 + 8);
    if (*piVar18 == *piVar22) {
      uVar9 = piVar18[1];
      if (uVar9 == piVar22[1]) {
        iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar9);
        if (-1 < iVar10) goto switchD_00bfbd08_caseD_0;
      }
      else if ((uint)piVar22[1] <= uVar9) goto switchD_00bfbd08_caseD_0;
    }
    else if (*piVar22 <= *piVar18) goto switchD_00bfbd08_caseD_0;
    pvVar31 = *(void **)((long)param_1 + 0x40);
    pvVar27 = *(void **)((long)param_1 + 0x38);
    pvVar1 = *(void **)((long)param_1 + 0x10);
    pvVar12 = *(void **)((long)param_1 + 0x18);
    *(void **)((long)param_1 + 8) = (void *)0x0;
    *(void **)((long)param_1 + 0x10) = (void *)0x0;
    ppvVar24 = (void **)((long)param_1 + 0x20);
    pvVar23 = *ppvVar24;
    *ppvVar24 = (void *)0x0;
    uVar4 = *(undefined4 *)param_1;
    *(void **)((long)param_1 + 0x18) = (void *)0x0;
    pvVar2 = *(void **)((long)param_1 + 0x28);
    pvVar20 = *(void **)((long)param_1 + 0x30);
    *(void **)((long)param_1 + 0x28) = (void *)0x0;
    *(void **)((long)param_1 + 0x30) = (void *)0x0;
    *(undefined4 *)param_1 = *(undefined4 *)((long)param_2 + -0x48);
    pvVar21 = *(void **)((long)param_2 + -0x38);
    *(void **)((long)param_1 + 8) = *(void **)((long)param_2 + -0x40);
    *(void **)((long)param_1 + 0x10) = pvVar21;
    *(void **)((long)param_1 + 0x18) = *(void **)((long)param_2 + -0x30);
    *(void **)((long)param_2 + -0x40) = (void *)0x0;
    *(void **)((long)param_2 + -0x38) = (void *)0x0;
    *(void **)((long)param_2 + -0x30) = (void *)0x0;
    pvVar21 = *ppvVar24;
    if (pvVar21 != (void *)0x0) {
      *(void **)((long)param_1 + 0x28) = pvVar21;
      operator_delete(pvVar21);
      *ppvVar24 = (void *)0x0;
      *(void **)((long)param_1 + 0x28) = (void *)0x0;
      *(void **)((long)param_1 + 0x30) = (void *)0x0;
    }
    *(void **)((long)param_1 + 0x20) = *(void **)((long)param_2 + -0x28);
    *(void **)((long)param_1 + 0x28) = *(void **)((long)param_2 + -0x20);
    *(void **)((long)param_1 + 0x30) = *(void **)((long)param_2 + -0x18);
    pvVar21 = *(void **)((long)param_2 + -0x10);
    *(void **)((long)param_2 + -0x28) = (void *)0x0;
    *(void **)((long)param_2 + -0x20) = (void *)0x0;
    *(void **)((long)param_2 + -0x18) = (void *)0x0;
    *(void **)((long)param_1 + 0x40) = *(void **)((long)param_2 + -8);
    *(void **)((long)param_1 + 0x38) = pvVar21;
    pvVar21 = *(void **)((long)param_2 + -0x40);
    *(undefined4 *)((long)param_2 + -0x48) = uVar4;
    if (pvVar21 != (void *)0x0) {
      *(void **)((long)param_2 + -0x38) = pvVar21;
      operator_delete(pvVar21);
    }
    pvVar21 = *(void **)((long)param_2 + -0x28);
    *(int **)((long)param_2 + -0x40) = piVar22;
    *(void **)((long)param_2 + -0x38) = pvVar1;
    *(void **)((long)param_2 + -0x30) = pvVar12;
    if (pvVar21 != (void *)0x0) {
      *(void **)((long)param_2 + -0x20) = pvVar21;
      operator_delete(pvVar21);
    }
    *(void **)((long)param_2 + -0x28) = pvVar23;
    *(void **)((long)param_2 + -0x20) = pvVar2;
    *(void **)((long)param_2 + -0x18) = pvVar20;
    *(void **)((long)param_2 + -8) = pvVar31;
    *ppvVar16 = pvVar27;
    goto switchD_00bfbd08_caseD_0;
  case 3:
    __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
              (param_1,(TempShaderData *)((long)param_1 + 0x48),(TempShaderData *)ppvVar14,param_3);
    goto switchD_00bfbd08_caseD_0;
  case 4:
    __sort4<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
              (param_1,(TempShaderData *)((long)param_1 + 0x48),
               (TempShaderData *)((long)param_1 + 0x90),(TempShaderData *)ppvVar14,param_3);
    goto switchD_00bfbd08_caseD_0;
  case 5:
    FUN_00bfca0c(param_1,(void **)((long)param_1 + 0x48),(void **)((long)param_1 + 0x90),
                 (void **)((long)param_1 + 0xd8),ppvVar14,param_3);
    goto switchD_00bfbd08_caseD_0;
  }
  if ((long)uVar17 < 0x1f8) {
    __insertion_sort_3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
              (param_1,param_2,param_3);
    goto switchD_00bfbd08_caseD_0;
  }
  if (uVar17 < 0x118f9) {
    ppvVar24 = (void **)((long)param_1 + ((uVar17 & 0xffffffff) / 0x90) * 9 * 8);
    uVar9 = __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                      (param_1,(TempShaderData *)ppvVar24,(TempShaderData *)ppvVar14,param_3);
  }
  else {
    ppvVar24 = (void **)((long)param_1 + (uVar17 / 0x90) * 9 * 8);
    uVar9 = FUN_00bfca0c(param_1,(void **)((long)param_1 + (uVar17 / 0x120) * 9 * 8),ppvVar24,
                         ppvVar24 + (uVar17 / 0x120) * 9,ppvVar14,param_3);
  }
  ppvVar28 = ppvVar15;
  if ((void **)param_1 != ppvVar24) {
    piVar18 = *(int **)((long)param_1 + 8);
    piVar22 = (int *)ppvVar24[1];
    ppvVar29 = ppvVar14;
    if (*piVar18 == *piVar22) {
      uVar3 = piVar18[1];
      if (uVar3 == piVar22[1]) {
        iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar3);
        if (-1 < iVar10) goto joined_r0x00bfb3ec;
      }
      else if ((uint)piVar22[1] <= uVar3) goto joined_r0x00bfb3ec;
LAB_00bfb584:
      ppvVar28 = (void **)((long)param_1 + 0x48);
      if (ppvVar28 < ppvVar29) {
LAB_00bfb608:
        if (ppvVar28 != ppvVar24) {
          piVar18 = (int *)ppvVar24[1];
          iVar10 = *piVar18;
          do {
            piVar22 = (int *)ppvVar28[1];
            if (*piVar22 == iVar10) {
              uVar3 = piVar22[1];
              if (uVar3 == piVar18[1]) {
                iVar11 = memcmp(*(void **)(piVar22 + 2),*(void **)(piVar18 + 2),(ulong)uVar3);
                if (-1 < iVar11) {
LAB_00bfb668:
                  bVar7 = false;
                  goto LAB_00bfb678;
                }
              }
              else if ((uint)piVar18[1] <= uVar3) goto LAB_00bfb668;
            }
            else if (iVar10 <= *piVar22) goto LAB_00bfb668;
            ppvVar28 = ppvVar28 + 9;
          } while (ppvVar28 != ppvVar24);
        }
        bVar7 = true;
        ppvVar28 = ppvVar24;
LAB_00bfb678:
        ppvVar30 = ppvVar29 + -4;
        do {
          ppvVar29 = ppvVar30 + -5;
          if (ppvVar29 != ppvVar24) {
            piVar18 = (int *)ppvVar30[-4];
            piVar22 = (int *)ppvVar24[1];
            if (*piVar18 == *piVar22) {
              uVar3 = piVar18[1];
              if (uVar3 == piVar22[1]) {
                iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar3);
                if (iVar10 < 0) goto LAB_00bfb6d8;
              }
              else if (uVar3 < (uint)piVar22[1]) goto LAB_00bfb6d8;
            }
            else if (*piVar18 < *piVar22) goto LAB_00bfb6d8;
          }
          ppvVar30 = ppvVar30 + -9;
        } while( true );
      }
LAB_00bfb590:
      if (ppvVar28 == ppvVar24) {
LAB_00bfbc50:
        if (uVar9 == 0) {
LAB_00bfbc54:
          bVar7 = __insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                            (param_1,(TempShaderData *)ppvVar28,param_3);
          bVar8 = __insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                            ((TempShaderData *)(ppvVar28 + 9),param_2,param_3);
          if (bVar8) goto LAB_00bfbce8;
          ppvVar24 = ppvVar28 + 9;
          if (bVar7) goto LAB_00bfb2d0;
        }
      }
      else {
        piVar18 = (int *)ppvVar24[1];
        piVar22 = (int *)ppvVar28[1];
        if (*piVar18 != *piVar22) {
          if (*piVar18 < *piVar22) goto LAB_00bfb7d0;
          goto LAB_00bfbc50;
        }
        uVar3 = piVar18[1];
        if (uVar3 != piVar22[1]) {
          if (uVar3 < (uint)piVar22[1]) goto LAB_00bfb7d0;
          goto LAB_00bfbc50;
        }
        iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar3);
        if (-1 < iVar10) goto LAB_00bfbc50;
LAB_00bfb7d0:
        pvVar31 = ppvVar28[8];
        pvVar27 = ppvVar28[7];
        uVar4 = *(undefined4 *)ppvVar28;
        pvVar1 = ppvVar28[2];
        pvVar12 = ppvVar28[3];
        ppvVar28[1] = (void *)0x0;
        ppvVar28[2] = (void *)0x0;
        ppvVar29 = ppvVar28 + 4;
        pvVar23 = *ppvVar29;
        *ppvVar29 = (void *)0x0;
        ppvVar28[3] = (void *)0x0;
        pvVar2 = ppvVar28[5];
        pvVar20 = ppvVar28[6];
        ppvVar28[5] = (void *)0x0;
        ppvVar28[6] = (void *)0x0;
        *(undefined4 *)ppvVar28 = *(undefined4 *)ppvVar24;
        pvVar21 = ppvVar24[2];
        ppvVar28[1] = ppvVar24[1];
        ppvVar28[2] = pvVar21;
        ppvVar28[3] = ppvVar24[3];
        ppvVar24[1] = (void *)0x0;
        ppvVar24[2] = (void *)0x0;
        ppvVar24[3] = (void *)0x0;
        pvVar21 = *ppvVar29;
        if (pvVar21 != (void *)0x0) {
          ppvVar28[5] = pvVar21;
          operator_delete(pvVar21);
          *ppvVar29 = (void *)0x0;
          ppvVar28[5] = (void *)0x0;
          ppvVar28[6] = (void *)0x0;
        }
        ppvVar28[4] = ppvVar24[4];
        ppvVar28[5] = ppvVar24[5];
        ppvVar28[6] = ppvVar24[6];
        pvVar21 = ppvVar24[7];
        ppvVar24[4] = (void *)0x0;
        ppvVar24[5] = (void *)0x0;
        ppvVar24[6] = (void *)0x0;
        ppvVar28[8] = ppvVar24[8];
        ppvVar28[7] = pvVar21;
        pvVar21 = ppvVar24[1];
        *(undefined4 *)ppvVar24 = uVar4;
        if (pvVar21 != (void *)0x0) {
          ppvVar24[2] = pvVar21;
          operator_delete(pvVar21);
        }
        pvVar21 = ppvVar24[4];
        ppvVar24[1] = piVar22;
        ppvVar24[2] = pvVar1;
        ppvVar24[3] = pvVar12;
        if (pvVar21 != (void *)0x0) {
          ppvVar24[5] = pvVar21;
          operator_delete(pvVar21);
        }
        ppvVar24[6] = pvVar20;
        ppvVar24[4] = pvVar23;
        ppvVar24[5] = pvVar2;
        ppvVar24[8] = pvVar31;
        ppvVar24[7] = pvVar27;
        if (uVar9 == 0xffffffff) goto LAB_00bfbc54;
      }
      if (((long)param_2 - (long)ppvVar28 >> 3) * -0x71c71c71c71c71c7 <=
          ((long)ppvVar28 - (long)param_1 >> 3) * -0x71c71c71c71c71c7) {
        __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                  ((TempShaderData *)(ppvVar28 + 9),param_2,param_3);
        param_2 = (TempShaderData *)ppvVar28;
        goto LAB_00bfb2a8;
      }
      __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
                (param_1,(TempShaderData *)ppvVar28,param_3);
      ppvVar24 = ppvVar28 + 9;
      goto LAB_00bfb2d0;
    }
    if (*piVar18 < *piVar22) goto LAB_00bfb584;
  }
joined_r0x00bfb3ec:
  for (; (void **)param_1 != ppvVar28; ppvVar28 = ppvVar28 + -9) {
    if (ppvVar28 != ppvVar24) {
      piVar18 = (int *)ppvVar28[1];
      piVar22 = (int *)ppvVar24[1];
      if (*piVar18 == *piVar22) {
        uVar3 = piVar18[1];
        if (uVar3 == piVar22[1]) {
          iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar3);
          if (iVar10 < 0) {
LAB_00bfb49c:
            pvVar32 = *(void **)((long)param_1 + 0x40);
            pvVar31 = *(void **)((long)param_1 + 0x38);
            pvVar27 = *(void **)((long)param_1 + 0x18);
            pvVar1 = *(void **)((long)param_1 + 8);
            pvVar12 = *(void **)((long)param_1 + 0x10);
            *(void **)((long)param_1 + 8) = (void *)0x0;
            *(void **)((long)param_1 + 0x10) = (void *)0x0;
            ppvVar29 = (void **)((long)param_1 + 0x20);
            pvVar23 = *ppvVar29;
            *ppvVar29 = (void *)0x0;
            uVar4 = *(undefined4 *)param_1;
            *(void **)((long)param_1 + 0x18) = (void *)0x0;
            pvVar2 = *(void **)((long)param_1 + 0x28);
            pvVar20 = *(void **)((long)param_1 + 0x30);
            *(void **)((long)param_1 + 0x28) = (void *)0x0;
            *(void **)((long)param_1 + 0x30) = (void *)0x0;
            *(undefined4 *)param_1 = *(undefined4 *)ppvVar28;
            pvVar21 = ppvVar28[2];
            *(void **)((long)param_1 + 8) = ppvVar28[1];
            *(void **)((long)param_1 + 0x10) = pvVar21;
            *(void **)((long)param_1 + 0x18) = ppvVar28[3];
            ppvVar28[1] = (void *)0x0;
            ppvVar28[2] = (void *)0x0;
            ppvVar28[3] = (void *)0x0;
            pvVar21 = *ppvVar29;
            if (pvVar21 != (void *)0x0) {
              *(void **)((long)param_1 + 0x28) = pvVar21;
              operator_delete(pvVar21);
              *ppvVar29 = (void *)0x0;
              *(void **)((long)param_1 + 0x28) = (void *)0x0;
              *(void **)((long)param_1 + 0x30) = (void *)0x0;
            }
            *(void **)((long)param_1 + 0x20) = ppvVar28[4];
            *(void **)((long)param_1 + 0x28) = ppvVar28[5];
            *(void **)((long)param_1 + 0x30) = ppvVar28[6];
            pvVar21 = ppvVar28[7];
            ppvVar28[4] = (void *)0x0;
            ppvVar28[5] = (void *)0x0;
            ppvVar28[6] = (void *)0x0;
            *(void **)((long)param_1 + 0x40) = ppvVar28[8];
            *(void **)((long)param_1 + 0x38) = pvVar21;
            pvVar21 = ppvVar28[1];
            *(undefined4 *)ppvVar28 = uVar4;
            if (pvVar21 != (void *)0x0) {
              ppvVar28[2] = pvVar21;
              operator_delete(pvVar21);
            }
            pvVar21 = ppvVar28[4];
            ppvVar28[1] = pvVar1;
            ppvVar28[2] = pvVar12;
            ppvVar28[3] = pvVar27;
            if (pvVar21 != (void *)0x0) {
              ppvVar28[5] = pvVar21;
              operator_delete(pvVar21);
            }
            ppvVar28[6] = pvVar20;
            ppvVar28[4] = pvVar23;
            ppvVar28[5] = pvVar2;
            uVar9 = uVar9 + 1;
            ppvVar28[8] = pvVar32;
            ppvVar28[7] = pvVar31;
            ppvVar29 = ppvVar28;
            goto LAB_00bfb584;
          }
        }
        else if (uVar3 < (uint)piVar22[1]) goto LAB_00bfb49c;
      }
      else if (*piVar18 < *piVar22) goto LAB_00bfb49c;
    }
  }
  ppvVar24 = (void **)((long)param_1 + 0x48);
  if ((void **)param_1 != ppvVar14) {
    piVar18 = *(int **)((long)param_1 + 8);
    piVar22 = *(int **)((long)param_2 + -0x40);
    if (*piVar18 != *piVar22) {
      if (*piVar18 < *piVar22) goto LAB_00bfba44;
      goto LAB_00bfb8cc;
    }
    uVar9 = piVar18[1];
    if (uVar9 == piVar22[1]) {
      iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar9);
      if (-1 < iVar10) goto LAB_00bfb8cc;
    }
    else if ((uint)piVar22[1] <= uVar9) goto LAB_00bfb8cc;
    goto LAB_00bfba44;
  }
LAB_00bfb8cc:
  if (ppvVar24 != ppvVar14) {
    lVar26 = 0;
    do {
      if (lVar26 != -0x48) {
        piVar18 = *(int **)((long)param_1 + 8);
        piVar22 = *(int **)((long)param_1 + lVar26 + 0x50);
        if (*piVar18 == *piVar22) {
          uVar9 = piVar18[1];
          if (uVar9 == piVar22[1]) {
            iVar10 = memcmp(*(void **)(piVar18 + 2),*(void **)(piVar22 + 2),(ulong)uVar9);
            if (iVar10 < 0) goto LAB_00bfb94c;
          }
          else if (uVar9 < (uint)piVar22[1]) goto LAB_00bfb94c;
        }
        else if (*piVar18 < *piVar22) goto LAB_00bfb94c;
      }
      lVar6 = lVar26 + 0x90;
      lVar26 = lVar26 + 0x48;
      if ((void **)((long)param_1 + lVar6) == ppvVar14) break;
    } while( true );
  }
  goto switchD_00bfbd08_caseD_0;
LAB_00bfb94c:
  pvVar1 = *(void **)((long)param_1 + lVar26 + 0x58);
  pvVar12 = *(void **)((long)param_1 + lVar26 + 0x60);
  *(undefined8 *)((long)param_1 + lVar26 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + lVar26 + 0x58) = 0;
  pvVar31 = *(void **)((long)param_1 + lVar26 + 0x88);
  pvVar27 = *(void **)((long)param_1 + lVar26 + 0x80);
  *(undefined8 *)((long)param_1 + lVar26 + 0x60) = 0;
  ppvVar24 = (void **)((long)param_1 + lVar26 + 0x68);
  pvVar23 = *ppvVar24;
  *ppvVar24 = (void *)0x0;
  uVar4 = *(undefined4 *)((long)param_1 + lVar26 + 0x48);
  pvVar2 = *(void **)((long)param_1 + lVar26 + 0x70);
  pvVar20 = *(void **)((long)param_1 + lVar26 + 0x78);
  *(undefined8 *)((long)param_1 + lVar26 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + lVar26 + 0x78) = 0;
  *(undefined4 *)((long)param_1 + lVar26 + 0x48) = *(undefined4 *)((long)param_2 + -0x48);
  pvVar21 = *(void **)((long)param_2 + -0x38);
  *(void **)((long)param_1 + lVar26 + 0x50) = *(void **)((long)param_2 + -0x40);
  *(void **)((long)param_1 + lVar26 + 0x58) = pvVar21;
  *(void **)((long)param_1 + lVar26 + 0x60) = *(void **)((long)param_2 + -0x30);
  *(void **)((long)param_2 + -0x40) = (void *)0x0;
  *(void **)((long)param_2 + -0x38) = (void *)0x0;
  *(void **)((long)param_2 + -0x30) = (void *)0x0;
  pvVar21 = *ppvVar24;
  if (pvVar21 != (void *)0x0) {
    *(void **)((long)param_1 + lVar26 + 0x70) = pvVar21;
    operator_delete(pvVar21);
    *ppvVar24 = (void *)0x0;
    *(undefined8 *)((long)param_1 + lVar26 + 0x70) = 0;
    *(undefined8 *)((long)param_1 + lVar26 + 0x78) = 0;
  }
  *(void **)((long)param_1 + lVar26 + 0x68) = *(void **)((long)param_2 + -0x28);
  *(void **)((long)param_1 + lVar26 + 0x70) = *(void **)((long)param_2 + -0x20);
  *(void **)((long)param_1 + lVar26 + 0x78) = *(void **)((long)param_2 + -0x18);
  pvVar21 = *ppvVar16;
  *(void **)((long)param_2 + -0x28) = (void *)0x0;
  *(void **)((long)param_2 + -0x20) = (void *)0x0;
  *(void **)((long)param_2 + -0x18) = (void *)0x0;
  *(void **)((long)param_1 + lVar26 + 0x88) = *(void **)((long)param_2 + -8);
  *(void **)((long)param_1 + lVar26 + 0x80) = pvVar21;
  pvVar21 = *(void **)((long)param_2 + -0x40);
  *(undefined4 *)((long)param_2 + -0x48) = uVar4;
  if (pvVar21 != (void *)0x0) {
    *(void **)((long)param_2 + -0x38) = pvVar21;
    operator_delete(pvVar21);
  }
  pvVar21 = *(void **)((long)param_2 + -0x28);
  *(void **)((long)param_2 + -0x30) = pvVar12;
  *(int **)((long)param_2 + -0x40) = piVar22;
  *(void **)((long)param_2 + -0x38) = pvVar1;
  if (pvVar21 != (void *)0x0) {
    *(void **)((long)param_2 + -0x20) = pvVar21;
    operator_delete(pvVar21);
  }
  *(void **)((long)param_2 + -0x28) = pvVar23;
  *(void **)((long)param_2 + -0x20) = pvVar2;
  *(void **)((long)param_2 + -0x18) = pvVar20;
  ppvVar24 = (void **)((long)param_1 + lVar26 + 0x90);
  *(void **)((long)param_2 + -8) = pvVar31;
  *ppvVar16 = pvVar27;
LAB_00bfba44:
  ppvVar28 = ppvVar14;
  if (ppvVar24 != ppvVar14) {
    do {
      if (ppvVar24 != (void **)param_1) goto LAB_00bfba70;
      do {
        while( true ) {
          do {
            ppvVar24 = ppvVar24 + 9;
          } while (ppvVar24 == (void **)param_1);
LAB_00bfba70:
          piVar22 = *(int **)((long)param_1 + 8);
          piVar18 = (int *)ppvVar24[1];
          iVar10 = *piVar22;
          if (iVar10 != *piVar18) break;
          uVar9 = piVar22[1];
          if (uVar9 == piVar18[1]) {
            iVar11 = memcmp(*(void **)(piVar22 + 2),*(void **)(piVar18 + 2),(ulong)uVar9);
            if (iVar11 < 0) goto joined_r0x00bfbac4;
          }
          else if (uVar9 < (uint)piVar18[1]) goto joined_r0x00bfbac4;
        }
      } while (*piVar18 <= iVar10);
joined_r0x00bfbac4:
      do {
        ppvVar29 = ppvVar28;
        ppvVar28 = ppvVar29 + -9;
        ppvVar30 = (void **)param_1;
        if ((void **)param_1 == ppvVar28) break;
        piVar19 = (int *)ppvVar28[1];
        ppvVar30 = ppvVar28;
        if (iVar10 == *piVar19) {
          uVar9 = piVar22[1];
          if (uVar9 == piVar19[1]) {
            iVar11 = memcmp(*(void **)(piVar22 + 2),*(void **)(piVar19 + 2),(ulong)uVar9);
            if (-1 < iVar11) {
              ppvVar29 = ppvVar28 + 9;
              break;
            }
          }
          else if ((uint)piVar19[1] <= uVar9) break;
          goto joined_r0x00bfbac4;
        }
      } while (iVar10 < *piVar19);
      if (ppvVar30 <= ppvVar24) goto LAB_00bfb2d0;
      pvVar20 = ppvVar24[5];
      pvVar31 = ppvVar24[8];
      pvVar27 = ppvVar24[7];
      pvVar1 = ppvVar24[2];
      pvVar2 = ppvVar24[3];
      ppvVar28 = ppvVar24 + 4;
      pvVar23 = *ppvVar28;
      pvVar21 = ppvVar24[6];
      ppvVar24[1] = (void *)0x0;
      ppvVar24[2] = (void *)0x0;
      *ppvVar28 = (void *)0x0;
      uVar4 = *(undefined4 *)ppvVar24;
      ppvVar24[3] = (void *)0x0;
      ppvVar24[5] = (void *)0x0;
      ppvVar24[6] = (void *)0x0;
      *(undefined4 *)ppvVar24 = *(undefined4 *)ppvVar30;
      pvVar12 = ppvVar29[-7];
      ppvVar24[1] = ppvVar29[-8];
      ppvVar24[2] = pvVar12;
      ppvVar24[3] = ppvVar29[-6];
      ppvVar29[-8] = (void *)0x0;
      ppvVar29[-7] = (void *)0x0;
      ppvVar29[-6] = (void *)0x0;
      pvVar12 = *ppvVar28;
      if (pvVar12 != (void *)0x0) {
        ppvVar24[5] = pvVar12;
        operator_delete(pvVar12);
        *ppvVar28 = (void *)0x0;
        ppvVar24[5] = (void *)0x0;
        ppvVar24[6] = (void *)0x0;
      }
      ppvVar24[4] = ppvVar29[-5];
      ppvVar24[5] = ppvVar29[-4];
      ppvVar24[6] = ppvVar29[-3];
      pvVar12 = ppvVar29[-2];
      ppvVar29[-5] = (void *)0x0;
      ppvVar29[-4] = (void *)0x0;
      ppvVar29[-3] = (void *)0x0;
      ppvVar24[8] = ppvVar29[-1];
      ppvVar24[7] = pvVar12;
      *(undefined4 *)ppvVar30 = uVar4;
      pvVar12 = ppvVar29[-8];
      if (pvVar12 != (void *)0x0) {
        ppvVar29[-7] = pvVar12;
        operator_delete(pvVar12);
      }
      pvVar12 = ppvVar29[-5];
      ppvVar29[-8] = piVar18;
      ppvVar29[-7] = pvVar1;
      ppvVar29[-6] = pvVar2;
      if (pvVar12 != (void *)0x0) {
        ppvVar29[-4] = pvVar12;
        operator_delete(pvVar12);
      }
      ppvVar24 = ppvVar24 + 9;
      ppvVar29[-5] = pvVar23;
      ppvVar29[-4] = pvVar20;
      ppvVar29[-3] = pvVar21;
      ppvVar29[-1] = pvVar31;
      ppvVar29[-2] = pvVar27;
      ppvVar28 = ppvVar30;
    } while( true );
  }
  goto switchD_00bfbd08_caseD_0;
LAB_00bfb6d8:
  if (ppvVar29 < ppvVar28) goto LAB_00bfb590;
  pvVar32 = ppvVar28[8];
  pvVar31 = ppvVar28[7];
  pvVar1 = ppvVar28[1];
  pvVar2 = ppvVar28[2];
  ppvVar28[1] = (void *)0x0;
  ppvVar28[2] = (void *)0x0;
  ppvVar25 = ppvVar28 + 4;
  pvVar20 = *ppvVar25;
  pvVar27 = ppvVar28[3];
  *ppvVar25 = (void *)0x0;
  ppvVar28[3] = (void *)0x0;
  uVar4 = *(undefined4 *)ppvVar28;
  pvVar21 = ppvVar28[5];
  pvVar23 = ppvVar28[6];
  ppvVar28[5] = (void *)0x0;
  ppvVar28[6] = (void *)0x0;
  *(undefined4 *)ppvVar28 = *(undefined4 *)(ppvVar30 + -5);
  pvVar12 = ppvVar30[-3];
  ppvVar28[1] = ppvVar30[-4];
  ppvVar28[2] = pvVar12;
  ppvVar28[3] = ppvVar30[-2];
  ppvVar30[-4] = (void *)0x0;
  ppvVar30[-3] = (void *)0x0;
  ppvVar30[-2] = (void *)0x0;
  pvVar12 = *ppvVar25;
  if (pvVar12 != (void *)0x0) {
    ppvVar28[5] = pvVar12;
    operator_delete(pvVar12);
    *ppvVar25 = (void *)0x0;
    ppvVar28[5] = (void *)0x0;
    ppvVar28[6] = (void *)0x0;
  }
  ppvVar28[4] = ppvVar30[-1];
  ppvVar28[5] = *ppvVar30;
  ppvVar28[6] = ppvVar30[1];
  pvVar12 = ppvVar30[2];
  ppvVar30[-1] = (void *)0x0;
  *ppvVar30 = (void *)0x0;
  ppvVar30[1] = (void *)0x0;
  ppvVar28[8] = ppvVar30[3];
  ppvVar28[7] = pvVar12;
  pvVar12 = ppvVar30[-4];
  *(undefined4 *)(ppvVar30 + -5) = uVar4;
  if (pvVar12 != (void *)0x0) {
    ppvVar30[-3] = pvVar12;
    operator_delete(pvVar12);
  }
  pvVar12 = ppvVar30[-1];
  ppvVar30[-4] = pvVar1;
  ppvVar30[-3] = pvVar2;
  ppvVar30[-2] = pvVar27;
  if (pvVar12 != (void *)0x0) {
    *ppvVar30 = pvVar12;
    operator_delete(pvVar12);
  }
  uVar9 = uVar9 + 1;
  ppvVar25 = ppvVar29;
  if (!bVar7) {
    ppvVar25 = ppvVar24;
  }
  ppvVar28 = ppvVar28 + 9;
  ppvVar30[-1] = pvVar20;
  *ppvVar30 = pvVar21;
  ppvVar30[1] = pvVar23;
  ppvVar30[3] = pvVar32;
  ppvVar30[2] = pvVar31;
  ppvVar24 = ppvVar25;
  goto LAB_00bfb608;
LAB_00bfbce8:
  param_2 = (TempShaderData *)ppvVar28;
  if (bVar7) {
switchD_00bfbd08_caseD_0:
    if (*(long *)(lVar5 + 0x28) != lVar13) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00bfb2a8;
}


