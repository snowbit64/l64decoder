// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bfe494
// Entry Point: 00bfe494
// Size: 804 bytes
// Signature: undefined FUN_00bfe494(void)


void FUN_00bfe494(void **param_1,void **param_2,void **param_3,void **param_4,void **param_5,
                 SortTempProgramByFirstId *param_6)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  void **ppvVar9;
  void **ppvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  uVar5 = std::__ndk1::
          __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                    ((TempProgramData *)param_1,(TempProgramData *)param_2,
                     (TempProgramData *)param_3,(TempProgramData *)param_4,param_6);
  ppvVar10 = param_5 + 3;
  ppvVar9 = param_4 + 3;
  bVar4 = *(uint *)ppvVar9 <= *(uint *)ppvVar10;
  if ((*(uint *)ppvVar10 == *(uint *)ppvVar9) &&
     (bVar4 = *(uint *)((long)param_4 + 0x1c) <= *(uint *)((long)param_5 + 0x1c),
     *(uint *)((long)param_5 + 0x1c) == *(uint *)((long)param_4 + 0x1c))) {
    bVar4 = *(uint *)((long)param_4 + 0x24) <= *(uint *)((long)param_5 + 0x24);
  }
  uVar6 = uVar5;
  if (!bVar4) {
    pvVar11 = *param_4;
    pvVar1 = param_4[1];
    pvVar2 = param_4[2];
    param_4[1] = (void *)0x0;
    param_4[2] = (void *)0x0;
    *param_4 = (void *)0x0;
    pvVar13 = param_4[4];
    pvVar12 = *ppvVar9;
    pvVar7 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = pvVar7;
    param_4[2] = param_5[2];
    pvVar7 = *ppvVar10;
    *param_5 = (void *)0x0;
    param_5[1] = (void *)0x0;
    param_5[2] = (void *)0x0;
    param_4[4] = param_5[4];
    *ppvVar9 = pvVar7;
    pvVar7 = *param_5;
    if (pvVar7 != (void *)0x0) {
      param_5[1] = pvVar7;
      operator_delete(pvVar7);
    }
    *param_5 = pvVar11;
    param_5[1] = pvVar1;
    param_5[2] = pvVar2;
    uVar6 = uVar5 + 1;
    param_5[4] = pvVar13;
    *ppvVar10 = pvVar12;
    ppvVar10 = param_3 + 3;
    bVar4 = *(uint *)ppvVar10 <= *(uint *)ppvVar9;
    if ((*(uint *)ppvVar9 == *(uint *)ppvVar10) &&
       (bVar4 = *(uint *)((long)param_3 + 0x1c) <= *(uint *)((long)param_4 + 0x1c),
       *(uint *)((long)param_4 + 0x1c) == *(uint *)((long)param_3 + 0x1c))) {
      if (*(uint *)((long)param_3 + 0x24) <= *(uint *)((long)param_4 + 0x24)) goto LAB_00bfe784;
    }
    else if (bVar4) goto LAB_00bfe784;
    pvVar1 = param_3[1];
    pvVar2 = param_3[2];
    param_3[1] = (void *)0x0;
    param_3[2] = (void *)0x0;
    pvVar11 = *param_3;
    *param_3 = (void *)0x0;
    pvVar7 = param_4[1];
    pvVar13 = param_3[4];
    pvVar12 = *ppvVar10;
    *param_3 = *param_4;
    param_3[1] = pvVar7;
    param_3[2] = param_4[2];
    pvVar7 = *ppvVar9;
    *param_4 = (void *)0x0;
    param_4[1] = (void *)0x0;
    param_4[2] = (void *)0x0;
    param_3[4] = param_4[4];
    *ppvVar10 = pvVar7;
    pvVar7 = *param_4;
    if (pvVar7 != (void *)0x0) {
      param_4[1] = pvVar7;
      operator_delete(pvVar7);
    }
    *param_4 = pvVar11;
    param_4[1] = pvVar1;
    param_4[2] = pvVar2;
    uVar6 = uVar5 + 2;
    param_4[4] = pvVar13;
    *ppvVar9 = pvVar12;
    ppvVar9 = param_2 + 3;
    bVar4 = *(uint *)ppvVar9 <= *(uint *)ppvVar10;
    if ((*(uint *)ppvVar10 == *(uint *)ppvVar9) &&
       (bVar4 = *(uint *)((long)param_2 + 0x1c) <= *(uint *)((long)param_3 + 0x1c),
       *(uint *)((long)param_3 + 0x1c) == *(uint *)((long)param_2 + 0x1c))) {
      bVar4 = *(uint *)((long)param_2 + 0x24) <= *(uint *)((long)param_3 + 0x24);
    }
    if (!bVar4) {
      pvVar1 = param_2[1];
      pvVar2 = param_2[2];
      param_2[1] = (void *)0x0;
      param_2[2] = (void *)0x0;
      pvVar11 = *param_2;
      *param_2 = (void *)0x0;
      pvVar7 = param_3[1];
      pvVar13 = param_2[4];
      pvVar12 = *ppvVar9;
      *param_2 = *param_3;
      param_2[1] = pvVar7;
      param_2[2] = param_3[2];
      pvVar7 = *ppvVar10;
      *param_3 = (void *)0x0;
      param_3[1] = (void *)0x0;
      param_3[2] = (void *)0x0;
      param_2[4] = param_3[4];
      *ppvVar9 = pvVar7;
      pvVar7 = *param_3;
      if (pvVar7 != (void *)0x0) {
        param_3[1] = pvVar7;
        operator_delete(pvVar7);
      }
      *param_3 = pvVar11;
      param_3[1] = pvVar1;
      uVar6 = uVar5 + 3;
      param_3[2] = pvVar2;
      param_3[4] = pvVar13;
      *ppvVar10 = pvVar12;
      ppvVar10 = param_1 + 3;
      bVar4 = *(uint *)ppvVar10 <= *(uint *)ppvVar9;
      if ((*(uint *)ppvVar9 == *(uint *)ppvVar10) &&
         (bVar4 = *(uint *)((long)param_1 + 0x1c) <= *(uint *)((long)param_2 + 0x1c),
         *(uint *)((long)param_2 + 0x1c) == *(uint *)((long)param_1 + 0x1c))) {
        bVar4 = *(uint *)((long)param_1 + 0x24) <= *(uint *)((long)param_2 + 0x24);
      }
      if (!bVar4) {
        pvVar1 = param_1[1];
        pvVar2 = param_1[2];
        param_1[1] = (void *)0x0;
        param_1[2] = (void *)0x0;
        pvVar11 = *param_1;
        *param_1 = (void *)0x0;
        pvVar7 = param_2[1];
        pvVar13 = param_1[4];
        pvVar12 = *ppvVar10;
        *param_1 = *param_2;
        param_1[1] = pvVar7;
        param_1[2] = param_2[2];
        pvVar7 = *ppvVar9;
        *param_2 = (void *)0x0;
        param_2[1] = (void *)0x0;
        param_2[2] = (void *)0x0;
        param_1[4] = param_2[4];
        *ppvVar10 = pvVar7;
        pvVar7 = *param_2;
        if (pvVar7 != (void *)0x0) {
          param_2[1] = pvVar7;
          operator_delete(pvVar7);
        }
        uVar6 = uVar5 + 4;
        *param_2 = pvVar11;
        param_2[1] = pvVar1;
        param_2[2] = pvVar2;
        param_2[4] = pvVar13;
        *ppvVar9 = pvVar12;
      }
    }
  }
LAB_00bfe784:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


