// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
// Entry Point: 00bfd7b0
// Size: 1876 bytes
// Signature: void __cdecl __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>(TempProgramData * param_1, TempProgramData * param_2, SortTempProgramByFirstId * param_3)


/* void std::__ndk1::__sort<CompiledShaderArchive::SortTempProgramByFirstId&,
   CompiledShaderArchive::TempProgramData*>(CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::SortTempProgramByFirstId&) */

void std::__ndk1::
     __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
               (TempProgramData *param_1,TempProgramData *param_2,SortTempProgramByFirstId *param_3)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  void **ppvVar12;
  ulong uVar13;
  void *pvVar14;
  void **ppvVar15;
  void **ppvVar16;
  void **ppvVar17;
  void **ppvVar18;
  void **ppvVar19;
  void *pvVar20;
  void *pvVar21;
  
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x28);
LAB_00bfd7ec:
  do {
    ppvVar15 = (void **)((long)param_2 + -0x28);
    ppvVar12 = (void **)((long)param_2 + -0x10);
    ppvVar16 = (void **)param_1;
LAB_00bfd804:
    while( true ) {
      param_1 = (TempProgramData *)ppvVar16;
      uVar13 = (long)param_2 - (long)param_1;
      switch(((long)uVar13 >> 3) * -0x3333333333333333) {
      case 0:
      case 1:
        goto switchD_00bfddc4_caseD_0;
      case 2:
        ppvVar12 = (void **)((long)param_2 + -0x10);
        ppvVar16 = (void **)((long)param_1 + 0x18);
        bVar7 = *(uint *)ppvVar16 <= *(uint *)ppvVar12;
        if ((*(uint *)ppvVar12 == *(uint *)ppvVar16) &&
           (bVar7 = *(uint *)((long)param_1 + 0x1c) <= *(uint *)((long)param_2 + -0xc),
           *(uint *)((long)param_2 + -0xc) == *(uint *)((long)param_1 + 0x1c))) {
          if (*(uint *)((long)param_1 + 0x24) <= *(uint *)((long)param_2 + -4))
          goto switchD_00bfddc4_caseD_0;
        }
        else if (bVar7) goto switchD_00bfddc4_caseD_0;
        pvVar21 = *(void **)((long)param_1 + 0x20);
        pvVar20 = *ppvVar16;
        pvVar2 = *(void **)((long)param_1 + 8);
        pvVar3 = *(void **)((long)param_1 + 0x10);
        *(void **)((long)param_1 + 8) = (void *)0x0;
        *(void **)((long)param_1 + 0x10) = (void *)0x0;
        pvVar14 = *(void **)param_1;
        *(void **)param_1 = (void *)0x0;
        pvVar10 = *(void **)((long)param_2 + -0x20);
        *(void **)param_1 = *(void **)((long)param_2 + -0x28);
        *(void **)((long)param_1 + 8) = pvVar10;
        *(void **)((long)param_1 + 0x10) = *(void **)((long)param_2 + -0x18);
        pvVar10 = *ppvVar12;
        *(void **)((long)param_2 + -0x28) = (void *)0x0;
        *(void **)((long)param_2 + -0x20) = (void *)0x0;
        *(void **)((long)param_2 + -0x18) = (void *)0x0;
        *(void **)((long)param_1 + 0x20) = *(void **)((long)param_2 + -8);
        *ppvVar16 = pvVar10;
        pvVar10 = *(void **)((long)param_2 + -0x28);
        if (pvVar10 != (void *)0x0) {
          *(void **)((long)param_2 + -0x20) = pvVar10;
          operator_delete(pvVar10);
        }
        *(void **)((long)param_2 + -0x28) = pvVar14;
        *(void **)((long)param_2 + -0x20) = pvVar2;
        *(void **)((long)param_2 + -0x18) = pvVar3;
        *(void **)((long)param_2 + -8) = pvVar21;
        *ppvVar12 = pvVar20;
        goto switchD_00bfddc4_caseD_0;
      case 3:
        __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                  (param_1,(TempProgramData *)((long)param_1 + 0x28),(TempProgramData *)ppvVar15,
                   param_3);
        goto switchD_00bfddc4_caseD_0;
      case 4:
        __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                  (param_1,(TempProgramData *)((long)param_1 + 0x28),
                   (TempProgramData *)((long)param_1 + 0x50),(TempProgramData *)ppvVar15,param_3);
        goto switchD_00bfddc4_caseD_0;
      case 5:
        FUN_00bfe494(param_1,(void **)((long)param_1 + 0x28),(void **)((long)param_1 + 0x50),
                     (void **)((long)param_1 + 0x78),ppvVar15,param_3);
        goto switchD_00bfddc4_caseD_0;
      }
      if ((long)uVar13 < 0x118) {
        __insertion_sort_3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                  (param_1,param_2,param_3);
        goto switchD_00bfddc4_caseD_0;
      }
      if (uVar13 < 0x9c19) {
        ppvVar16 = (void **)((long)param_1 + (ulong)(((uint)uVar13 & 0xffff) / 0x50) * 5 * 8);
        uVar9 = __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                          (param_1,(TempProgramData *)ppvVar16,(TempProgramData *)ppvVar15,param_3);
      }
      else {
        ppvVar16 = (void **)((long)param_1 + (uVar13 / 0x50) * 5 * 8);
        uVar9 = FUN_00bfe494(param_1,(void **)((long)param_1 + (uVar13 / 0xa0) * 5 * 8),ppvVar16,
                             ppvVar16 + (uVar13 / 0xa0) * 5,ppvVar15,param_3);
      }
      uVar4 = *(uint *)(ppvVar16 + 3);
      ppvVar18 = (void **)((long)param_1 + 0x18);
      uVar5 = *(uint *)ppvVar18;
      bVar7 = uVar4 <= uVar5;
      if ((uVar5 == uVar4) &&
         (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)param_1 + 0x1c),
         *(uint *)((long)param_1 + 0x1c) == *(uint *)((long)ppvVar16 + 0x1c))) {
        bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)param_1 + 0x24);
      }
      ppvVar19 = ppvVar15;
      ppvVar17 = (void **)((long)param_2 + -0x50);
      if (!bVar7) break;
      for (; (void **)param_1 != ppvVar17; ppvVar17 = ppvVar17 + -5) {
        bVar7 = uVar4 <= *(uint *)(ppvVar17 + 3);
        if ((*(uint *)(ppvVar17 + 3) == uVar4) &&
           (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)ppvVar17 + 0x1c),
           *(uint *)((long)ppvVar17 + 0x1c) == *(uint *)((long)ppvVar16 + 0x1c))) {
          bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)ppvVar17 + 0x24);
        }
        if (!bVar7) {
          pvVar21 = *(void **)((long)param_1 + 0x20);
          pvVar20 = *ppvVar18;
          pvVar2 = *(void **)((long)param_1 + 8);
          pvVar3 = *(void **)((long)param_1 + 0x10);
          *(void **)((long)param_1 + 8) = (void *)0x0;
          *(void **)((long)param_1 + 0x10) = (void *)0x0;
          pvVar14 = *(void **)param_1;
          *(void **)param_1 = (void *)0x0;
          pvVar10 = ppvVar17[1];
          *(void **)param_1 = *ppvVar17;
          *(void **)((long)param_1 + 8) = pvVar10;
          *(void **)((long)param_1 + 0x10) = ppvVar17[2];
          pvVar10 = ppvVar17[3];
          *ppvVar17 = (void *)0x0;
          ppvVar17[1] = (void *)0x0;
          ppvVar17[2] = (void *)0x0;
          *(void **)((long)param_1 + 0x20) = ppvVar17[4];
          *ppvVar18 = pvVar10;
          pvVar10 = *ppvVar17;
          if (pvVar10 != (void *)0x0) {
            ppvVar17[1] = pvVar10;
            operator_delete(pvVar10);
          }
          *ppvVar17 = pvVar14;
          ppvVar17[1] = pvVar2;
          ppvVar17[2] = pvVar3;
          uVar9 = uVar9 + 1;
          ppvVar17[4] = pvVar21;
          ppvVar17[3] = pvVar20;
          ppvVar19 = ppvVar17;
          goto LAB_00bfda20;
        }
      }
      ppvVar16 = (void **)((long)param_1 + 0x28);
      bVar7 = *(uint *)ppvVar12 <= uVar5;
      if ((uVar5 == *(uint *)ppvVar12) &&
         (bVar7 = *(uint *)((long)param_2 + -0xc) <= *(uint *)((long)param_1 + 0x1c),
         *(uint *)((long)param_1 + 0x1c) == *(uint *)((long)param_2 + -0xc))) {
        if (*(uint *)((long)param_2 + -4) <= *(uint *)((long)param_1 + 0x24)) {
joined_r0x00bfd9a4:
          while( true ) {
            if (ppvVar16 == ppvVar15) goto switchD_00bfddc4_caseD_0;
            bVar7 = *(uint *)(ppvVar16 + 3) <= uVar5;
            if ((uVar5 == *(uint *)(ppvVar16 + 3)) &&
               (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)param_1 + 0x1c),
               *(uint *)((long)param_1 + 0x1c) == *(uint *)((long)ppvVar16 + 0x1c))) {
              bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)param_1 + 0x24);
            }
            if (!bVar7) break;
            ppvVar16 = ppvVar16 + 5;
          }
          pvVar21 = ppvVar16[4];
          pvVar20 = ppvVar16[3];
          pvVar2 = ppvVar16[1];
          pvVar3 = ppvVar16[2];
          ppvVar16[1] = (void *)0x0;
          ppvVar16[2] = (void *)0x0;
          pvVar14 = *ppvVar16;
          *ppvVar16 = (void *)0x0;
          pvVar10 = *(void **)((long)param_2 + -0x20);
          *ppvVar16 = *(void **)((long)param_2 + -0x28);
          ppvVar16[1] = pvVar10;
          ppvVar16[2] = *(void **)((long)param_2 + -0x18);
          *ppvVar15 = (void *)0x0;
          *(void **)((long)param_2 + -0x20) = (void *)0x0;
          *(void **)((long)param_2 + -0x18) = (void *)0x0;
          pvVar10 = *ppvVar12;
          ppvVar16[4] = *(void **)((long)param_2 + -8);
          ppvVar16[3] = pvVar10;
          pvVar10 = *(void **)((long)param_2 + -0x28);
          if (pvVar10 != (void *)0x0) {
            *(void **)((long)param_2 + -0x20) = pvVar10;
            operator_delete(pvVar10);
          }
          *(void **)((long)param_2 + -0x28) = pvVar14;
          *(void **)((long)param_2 + -0x20) = pvVar2;
          ppvVar16 = ppvVar16 + 5;
          *(void **)((long)param_2 + -0x18) = pvVar3;
          *(void **)((long)param_2 + -8) = pvVar21;
          *ppvVar12 = pvVar20;
        }
      }
      else if (bVar7) goto joined_r0x00bfd9a4;
      ppvVar17 = ppvVar15;
      if (ppvVar16 == ppvVar15) goto switchD_00bfddc4_caseD_0;
      while( true ) {
        uVar9 = *(uint *)ppvVar18;
        while( true ) {
          bVar7 = *(uint *)(ppvVar16 + 3) <= uVar9;
          if ((uVar9 == *(uint *)(ppvVar16 + 3)) &&
             (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)param_1 + 0x1c),
             *(uint *)((long)param_1 + 0x1c) == *(uint *)((long)ppvVar16 + 0x1c))) {
            bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)param_1 + 0x24);
          }
          if (!bVar7) break;
          ppvVar16 = ppvVar16 + 5;
        }
        ppvVar17 = ppvVar17 + -2;
        while( true ) {
          bVar7 = *(uint *)ppvVar17 <= uVar9;
          if ((uVar9 == *(uint *)ppvVar17) &&
             (bVar7 = *(uint *)((long)ppvVar17 + 4) <= *(uint *)((long)param_1 + 0x1c),
             *(uint *)((long)param_1 + 0x1c) == *(uint *)((long)ppvVar17 + 4))) {
            bVar7 = *(uint *)((long)ppvVar17 + 0xc) <= *(uint *)((long)param_1 + 0x24);
          }
          if (bVar7) break;
          ppvVar17 = ppvVar17 + -5;
        }
        if (ppvVar17 + -3 <= ppvVar16) break;
        pvVar21 = ppvVar16[4];
        pvVar20 = ppvVar16[3];
        pvVar2 = ppvVar16[1];
        pvVar3 = ppvVar16[2];
        ppvVar16[1] = (void *)0x0;
        ppvVar16[2] = (void *)0x0;
        pvVar14 = *ppvVar16;
        *ppvVar16 = (void *)0x0;
        pvVar10 = ppvVar17[-2];
        *ppvVar16 = ppvVar17[-3];
        ppvVar16[1] = pvVar10;
        ppvVar16[2] = ppvVar17[-1];
        pvVar10 = *ppvVar17;
        ppvVar17[-3] = (void *)0x0;
        ppvVar17[-2] = (void *)0x0;
        ppvVar17[-1] = (void *)0x0;
        ppvVar16[4] = ppvVar17[1];
        ppvVar16[3] = pvVar10;
        pvVar10 = ppvVar17[-3];
        if (pvVar10 != (void *)0x0) {
          ppvVar17[-2] = pvVar10;
          operator_delete(pvVar10);
        }
        ppvVar17[-3] = pvVar14;
        ppvVar17[-2] = pvVar2;
        ppvVar16 = ppvVar16 + 5;
        ppvVar17[-1] = pvVar3;
        ppvVar17[1] = pvVar21;
        *ppvVar17 = pvVar20;
        ppvVar17 = ppvVar17 + -3;
      }
    }
LAB_00bfda20:
    ppvVar18 = (void **)((long)param_1 + 0x28);
    if (ppvVar18 < ppvVar19) {
      while( true ) {
        uVar4 = *(uint *)(ppvVar16 + 3);
        while( true ) {
          bVar7 = uVar4 <= *(uint *)(ppvVar18 + 3);
          if ((*(uint *)(ppvVar18 + 3) == uVar4) &&
             (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)ppvVar18 + 0x1c),
             *(uint *)((long)ppvVar18 + 0x1c) == *(uint *)((long)ppvVar16 + 0x1c))) {
            bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)ppvVar18 + 0x24);
          }
          if (bVar7) break;
          ppvVar18 = ppvVar18 + 5;
        }
        ppvVar17 = ppvVar19 + -2;
        while( true ) {
          bVar7 = uVar4 <= *(uint *)ppvVar17;
          if ((*(uint *)ppvVar17 == uVar4) &&
             (bVar7 = *(uint *)((long)ppvVar16 + 0x1c) <= *(uint *)((long)ppvVar17 + 4),
             *(uint *)((long)ppvVar17 + 4) == *(uint *)((long)ppvVar16 + 0x1c))) {
            bVar7 = *(uint *)((long)ppvVar16 + 0x24) <= *(uint *)((long)ppvVar17 + 0xc);
          }
          if (!bVar7) break;
          ppvVar17 = ppvVar17 + -5;
        }
        ppvVar19 = ppvVar17 + -3;
        if (ppvVar19 < ppvVar18) break;
        pvVar21 = ppvVar18[4];
        pvVar20 = ppvVar18[3];
        pvVar2 = ppvVar18[1];
        pvVar3 = ppvVar18[2];
        ppvVar18[1] = (void *)0x0;
        ppvVar18[2] = (void *)0x0;
        pvVar14 = *ppvVar18;
        *ppvVar18 = (void *)0x0;
        pvVar10 = ppvVar17[-2];
        *ppvVar18 = ppvVar17[-3];
        ppvVar18[1] = pvVar10;
        ppvVar18[2] = ppvVar17[-1];
        pvVar10 = *ppvVar17;
        ppvVar17[-3] = (void *)0x0;
        ppvVar17[-2] = (void *)0x0;
        ppvVar17[-1] = (void *)0x0;
        ppvVar18[4] = ppvVar17[1];
        ppvVar18[3] = pvVar10;
        pvVar10 = ppvVar17[-3];
        if (pvVar10 != (void *)0x0) {
          ppvVar17[-2] = pvVar10;
          operator_delete(pvVar10);
        }
        ppvVar17[-3] = pvVar14;
        ppvVar17[-2] = pvVar2;
        ppvVar17[-1] = pvVar3;
        uVar9 = uVar9 + 1;
        ppvVar1 = ppvVar19;
        if (ppvVar18 != ppvVar16) {
          ppvVar1 = ppvVar16;
        }
        ppvVar18 = ppvVar18 + 5;
        ppvVar17[1] = pvVar21;
        *ppvVar17 = pvVar20;
        ppvVar16 = ppvVar1;
      }
    }
    if (ppvVar18 == ppvVar16) {
LAB_00bfda70:
      if (uVar9 == 0) goto LAB_00bfdbc8;
      goto LAB_00bfdbfc;
    }
    ppvVar19 = ppvVar16 + 3;
    ppvVar17 = ppvVar18 + 3;
    bVar7 = *(uint *)ppvVar17 <= *(uint *)ppvVar19;
    if ((*(uint *)ppvVar19 == *(uint *)ppvVar17) &&
       (bVar7 = *(uint *)((long)ppvVar18 + 0x1c) <= *(uint *)((long)ppvVar16 + 0x1c),
       *(uint *)((long)ppvVar16 + 0x1c) == *(uint *)((long)ppvVar18 + 0x1c))) {
      if (*(uint *)((long)ppvVar18 + 0x24) <= *(uint *)((long)ppvVar16 + 0x24)) goto LAB_00bfda70;
    }
    else if (bVar7) goto LAB_00bfda70;
    pvVar21 = ppvVar18[4];
    pvVar20 = *ppvVar17;
    pvVar2 = ppvVar18[1];
    pvVar3 = ppvVar18[2];
    ppvVar18[1] = (void *)0x0;
    ppvVar18[2] = (void *)0x0;
    pvVar14 = *ppvVar18;
    *ppvVar18 = (void *)0x0;
    pvVar10 = ppvVar16[1];
    *ppvVar18 = *ppvVar16;
    ppvVar18[1] = pvVar10;
    ppvVar18[2] = ppvVar16[2];
    pvVar10 = *ppvVar19;
    *ppvVar16 = (void *)0x0;
    ppvVar16[1] = (void *)0x0;
    ppvVar16[2] = (void *)0x0;
    ppvVar18[4] = ppvVar16[4];
    *ppvVar17 = pvVar10;
    pvVar10 = *ppvVar16;
    if (pvVar10 != (void *)0x0) {
      ppvVar16[1] = pvVar10;
      operator_delete(pvVar10);
    }
    *ppvVar16 = pvVar14;
    ppvVar16[1] = pvVar2;
    ppvVar16[2] = pvVar3;
    ppvVar16[4] = pvVar21;
    *ppvVar19 = pvVar20;
    if (uVar9 != 0xffffffff) goto LAB_00bfdbfc;
LAB_00bfdbc8:
    bVar7 = __insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                      (param_1,(TempProgramData *)ppvVar18,param_3);
    bVar8 = __insertion_sort_incomplete<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                      ((TempProgramData *)(ppvVar18 + 5),param_2,param_3);
    if (!bVar8) break;
    param_2 = (TempProgramData *)ppvVar18;
    if (bVar7) {
switchD_00bfddc4_caseD_0:
      if (*(long *)(lVar6 + 0x28) == lVar11) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
  ppvVar16 = ppvVar18 + 5;
  if (!bVar7) {
LAB_00bfdbfc:
    if (((long)param_2 - (long)ppvVar18 >> 3) * -0x3333333333333333 <=
        ((long)ppvVar18 - (long)param_1 >> 3) * -0x3333333333333333) {
      __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                ((TempProgramData *)(ppvVar18 + 5),param_2,param_3);
      param_2 = (TempProgramData *)ppvVar18;
      goto LAB_00bfd7ec;
    }
    __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
              (param_1,(TempProgramData *)ppvVar18,param_3);
    ppvVar16 = ppvVar18 + 5;
  }
  goto LAB_00bfd804;
}


