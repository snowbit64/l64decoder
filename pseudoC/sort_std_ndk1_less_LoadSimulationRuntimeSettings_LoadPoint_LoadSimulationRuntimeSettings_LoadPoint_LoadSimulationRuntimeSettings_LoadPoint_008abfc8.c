// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
// Entry Point: 008abfc8
// Size: 1852 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>(LoadPoint * param_1, LoadPoint * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&,
   LoadSimulationRuntimeSettings::LoadPoint*>(LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*,
   std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
               (LoadPoint *param_1,LoadPoint *param_2,__less *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *local_a0;
  
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x28);
  local_a0 = (undefined8 *)param_2;
LAB_008ac000:
  puVar25 = local_a0 + -8;
  puVar12 = local_a0 + -3;
  puVar23 = (undefined8 *)param_1;
LAB_008ac018:
  param_1 = (LoadPoint *)puVar23;
  uVar15 = (long)local_a0 - (long)param_1;
  uVar13 = (long)uVar15 >> 6;
  switch(uVar13) {
  case 0:
  case 1:
    goto switchD_008ac5a4_caseD_0;
  case 2:
    puVar23 = local_a0 + -8;
    if (*(float *)puVar23 < *(float *)param_1) {
      uVar4 = *(undefined4 *)((long)param_1 + 8);
      uVar17 = *(undefined8 *)param_1;
      uVar28 = *(undefined8 *)((long)param_1 + 0x30);
      uVar27 = *(undefined8 *)((long)param_1 + 0x28);
      uVar14 = *(undefined8 *)((long)param_1 + 0x38);
      uVar2 = *(undefined8 *)((long)param_1 + 0x10);
      uVar3 = *(undefined8 *)((long)param_1 + 0x18);
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      uVar20 = *(undefined8 *)((long)param_1 + 0x20);
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      uVar5 = *(undefined4 *)(local_a0 + -7);
      *(undefined8 *)param_1 = *puVar23;
      *(undefined4 *)((long)param_1 + 8) = uVar5;
      uVar16 = local_a0[-5];
      *(undefined8 *)((long)param_1 + 0x10) = local_a0[-6];
      *(undefined8 *)((long)param_1 + 0x18) = uVar16;
      *(undefined8 *)((long)param_1 + 0x20) = local_a0[-4];
      local_a0[-5] = 0;
      local_a0[-4] = 0;
      uVar29 = local_a0[-2];
      uVar16 = local_a0[-3];
      local_a0[-6] = 0;
      *(undefined8 *)((long)param_1 + 0x38) = local_a0[-1];
      *(undefined8 *)((long)param_1 + 0x30) = uVar29;
      *(undefined8 *)((long)param_1 + 0x28) = uVar16;
      pvVar10 = (void *)local_a0[-6];
      *puVar23 = uVar17;
      *(undefined4 *)(local_a0 + -7) = uVar4;
      if (pvVar10 != (void *)0x0) {
        local_a0[-5] = pvVar10;
        operator_delete(pvVar10);
      }
      local_a0[-6] = uVar2;
      local_a0[-5] = uVar3;
      local_a0[-4] = uVar20;
      local_a0[-1] = uVar14;
      local_a0[-2] = uVar28;
      *puVar12 = uVar27;
    }
    goto switchD_008ac5a4_caseD_0;
  case 3:
    __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,(LoadPoint *)((long)param_1 + 0x40),(LoadPoint *)puVar25,param_3);
    goto switchD_008ac5a4_caseD_0;
  case 4:
    __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,(LoadPoint *)((long)param_1 + 0x40),(LoadPoint *)((long)param_1 + 0x80),
               (LoadPoint *)puVar25,param_3);
    goto switchD_008ac5a4_caseD_0;
  case 5:
    FUN_008acdd0(param_1,(undefined8 *)((long)param_1 + 0x40),(undefined8 *)((long)param_1 + 0x80),
                 (undefined8 *)((long)param_1 + 0xc0),puVar25,param_3);
    goto switchD_008ac5a4_caseD_0;
  }
  if ((long)uVar15 < 0x1c0) {
    __insertion_sort_3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,(LoadPoint *)local_a0,param_3);
    goto switchD_008ac5a4_caseD_0;
  }
  uVar1 = uVar13;
  if ((long)uVar13 < 0) {
    uVar1 = uVar13 + 1;
  }
  puVar23 = (undefined8 *)((long)param_1 + (uVar1 & 0x7fffffffffffffe) * 4 * 8);
  if (uVar15 < 0xf9c1) {
    uVar9 = __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                      (param_1,(LoadPoint *)puVar23,(LoadPoint *)puVar25,param_3);
  }
  else {
    uVar15 = uVar13 + 3;
    if (-1 < (long)uVar13) {
      uVar15 = uVar13;
    }
    uVar9 = FUN_008acdd0(param_1,(undefined8 *)
                                 ((long)param_1 + (uVar15 & 0xffffffffffffffc) * 2 * 8),puVar23,
                         puVar23 + (uVar15 & 0xffffffffffffffc) * 2,puVar25,param_3);
  }
  fVar26 = *(float *)param_1;
  puVar22 = puVar25;
  if (*(float *)puVar23 <= fVar26) {
    do {
      puVar19 = puVar22;
      puVar22 = puVar19 + -8;
      if (puVar22 == (undefined8 *)param_1) {
        puVar22 = (undefined8 *)((long)param_1 + 0x40);
        if (*(float *)puVar25 <= fVar26) goto joined_r0x008ac3b0;
        goto LAB_008ac480;
      }
    } while (*(float *)puVar23 <= *(float *)(puVar19 + -8));
    uVar4 = *(undefined4 *)((long)param_1 + 8);
    uVar17 = *(undefined8 *)param_1;
    uVar28 = *(undefined8 *)((long)param_1 + 0x30);
    uVar27 = *(undefined8 *)((long)param_1 + 0x28);
    uVar14 = *(undefined8 *)((long)param_1 + 0x38);
    uVar2 = *(undefined8 *)((long)param_1 + 0x10);
    uVar3 = *(undefined8 *)((long)param_1 + 0x18);
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    uVar20 = *(undefined8 *)((long)param_1 + 0x20);
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    uVar5 = *(undefined4 *)(puVar19 + -7);
    *(undefined8 *)param_1 = *puVar22;
    *(undefined4 *)((long)param_1 + 8) = uVar5;
    uVar16 = puVar19[-5];
    *(undefined8 *)((long)param_1 + 0x10) = puVar19[-6];
    *(undefined8 *)((long)param_1 + 0x18) = uVar16;
    *(undefined8 *)((long)param_1 + 0x20) = puVar19[-4];
    puVar19[-5] = 0;
    puVar19[-4] = 0;
    uVar29 = puVar19[-2];
    uVar16 = puVar19[-3];
    puVar19[-6] = 0;
    *(undefined8 *)((long)param_1 + 0x38) = puVar19[-1];
    *(undefined8 *)((long)param_1 + 0x30) = uVar29;
    *(undefined8 *)((long)param_1 + 0x28) = uVar16;
    pvVar10 = (void *)puVar19[-6];
    *puVar22 = uVar17;
    *(undefined4 *)(puVar19 + -7) = uVar4;
    if (pvVar10 != (void *)0x0) {
      puVar19[-5] = pvVar10;
      operator_delete(pvVar10);
    }
    puVar19[-6] = uVar2;
    puVar19[-5] = uVar3;
    puVar19[-4] = uVar20;
    uVar9 = uVar9 + 1;
    puVar19[-1] = uVar14;
    puVar19[-2] = uVar28;
    puVar19[-3] = uVar27;
  }
  puVar19 = (undefined8 *)((long)param_1 + 0x40);
  puVar18 = puVar19;
  if (puVar19 < puVar22) {
    while( true ) {
      puVar19 = puVar18 + -8;
      do {
        puVar24 = puVar19;
        puVar19 = puVar24 + 8;
      } while (*(float *)puVar19 < *(float *)puVar23);
      puVar18 = puVar24 + 0x10;
      do {
        puVar21 = puVar22;
        puVar22 = puVar21 + -8;
      } while (*(float *)puVar23 <= *(float *)puVar22);
      if (puVar22 < puVar19) break;
      uVar4 = *(undefined4 *)(puVar24 + 9);
      uVar17 = *puVar19;
      uVar14 = puVar24[0xf];
      uVar29 = puVar24[0xe];
      uVar27 = puVar24[0xd];
      uVar2 = puVar24[10];
      uVar3 = puVar24[0xb];
      puVar24[10] = 0;
      uVar20 = puVar24[0xc];
      puVar24[0xb] = 0;
      puVar24[0xc] = 0;
      uVar16 = *puVar22;
      *(undefined4 *)(puVar24 + 9) = *(undefined4 *)(puVar21 + -7);
      *puVar19 = uVar16;
      uVar16 = puVar21[-5];
      puVar24[10] = puVar21[-6];
      puVar24[0xb] = uVar16;
      puVar24[0xc] = puVar21[-4];
      uVar28 = puVar21[-3];
      puVar21[-6] = 0;
      puVar21[-5] = 0;
      uVar16 = puVar21[-1];
      puVar21[-4] = 0;
      puVar24[0xe] = puVar21[-2];
      puVar24[0xd] = uVar28;
      puVar24[0xf] = uVar16;
      pvVar10 = (void *)puVar21[-6];
      *puVar22 = uVar17;
      *(undefined4 *)(puVar21 + -7) = uVar4;
      if (pvVar10 != (void *)0x0) {
        puVar21[-5] = pvVar10;
        operator_delete(pvVar10);
      }
      puVar21[-6] = uVar2;
      puVar21[-5] = uVar3;
      puVar21[-4] = uVar20;
      uVar9 = uVar9 + 1;
      puVar24 = puVar22;
      if (puVar19 != puVar23) {
        puVar24 = puVar23;
      }
      puVar21[-1] = uVar14;
      puVar21[-2] = uVar29;
      puVar21[-3] = uVar27;
      puVar23 = puVar24;
    }
  }
  if ((puVar19 != puVar23) && (*(float *)puVar23 < *(float *)puVar19)) {
    uVar4 = *(undefined4 *)(puVar19 + 1);
    uVar17 = *puVar19;
    uVar28 = puVar19[6];
    uVar27 = puVar19[5];
    uVar14 = puVar19[7];
    uVar2 = puVar19[2];
    uVar3 = puVar19[3];
    puVar19[2] = 0;
    puVar19[3] = 0;
    uVar20 = puVar19[4];
    puVar19[4] = 0;
    uVar5 = *(undefined4 *)(puVar23 + 1);
    *puVar19 = *puVar23;
    *(undefined4 *)(puVar19 + 1) = uVar5;
    uVar16 = puVar23[3];
    puVar19[2] = puVar23[2];
    puVar19[3] = uVar16;
    puVar19[4] = puVar23[4];
    puVar23[2] = 0;
    puVar23[3] = 0;
    uVar29 = puVar23[6];
    uVar16 = puVar23[5];
    puVar23[4] = 0;
    puVar19[7] = puVar23[7];
    puVar19[6] = uVar29;
    puVar19[5] = uVar16;
    pvVar10 = (void *)puVar23[2];
    *puVar23 = uVar17;
    *(undefined4 *)(puVar23 + 1) = uVar4;
    if (pvVar10 != (void *)0x0) {
      puVar23[3] = pvVar10;
      operator_delete(pvVar10);
    }
    puVar23[2] = uVar2;
    puVar23[3] = uVar3;
    puVar23[4] = uVar20;
    uVar9 = uVar9 + 1;
    puVar23[6] = uVar28;
    puVar23[5] = uVar27;
    puVar23[7] = uVar14;
  }
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                      (param_1,(LoadPoint *)puVar19,param_3);
    bVar8 = __insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                      ((LoadPoint *)(puVar19 + 8),(LoadPoint *)local_a0,param_3);
    if (bVar8) goto LAB_008ac584;
    puVar23 = puVar19 + 8;
    if (bVar7) goto LAB_008ac018;
  }
  if ((long)local_a0 - (long)puVar19 <= (long)puVar19 - (long)param_1) {
    __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              ((LoadPoint *)(puVar19 + 8),(LoadPoint *)local_a0,param_3);
    local_a0 = puVar19;
    goto LAB_008ac000;
  }
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            (param_1,(LoadPoint *)puVar19,param_3);
  puVar23 = puVar19 + 8;
  goto LAB_008ac018;
joined_r0x008ac3b0:
  if (puVar22 == puVar25) goto switchD_008ac5a4_caseD_0;
  if (fVar26 < *(float *)puVar22) goto LAB_008ac3d0;
  puVar22 = puVar22 + 8;
  goto joined_r0x008ac3b0;
LAB_008ac3d0:
  uVar4 = *(undefined4 *)(puVar22 + 1);
  uVar17 = *puVar22;
  uVar14 = puVar22[7];
  uVar29 = puVar22[6];
  uVar27 = puVar22[5];
  uVar2 = puVar22[2];
  uVar3 = puVar22[3];
  puVar22[2] = 0;
  uVar20 = puVar22[4];
  puVar22[3] = 0;
  puVar22[4] = 0;
  uVar16 = *puVar25;
  *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(local_a0 + -7);
  *puVar22 = uVar16;
  uVar16 = local_a0[-5];
  puVar22[2] = local_a0[-6];
  puVar22[3] = uVar16;
  puVar22[4] = local_a0[-4];
  local_a0[-6] = 0;
  local_a0[-5] = 0;
  uVar28 = *puVar12;
  local_a0[-4] = 0;
  uVar16 = local_a0[-1];
  puVar22[6] = local_a0[-2];
  puVar22[5] = uVar28;
  puVar22[7] = uVar16;
  pvVar10 = (void *)local_a0[-6];
  *puVar25 = uVar17;
  *(undefined4 *)(local_a0 + -7) = uVar4;
  if (pvVar10 != (void *)0x0) {
    local_a0[-5] = pvVar10;
    operator_delete(pvVar10);
  }
  local_a0[-6] = uVar2;
  local_a0[-5] = uVar3;
  puVar22 = puVar22 + 8;
  local_a0[-4] = uVar20;
  local_a0[-1] = uVar14;
  local_a0[-2] = uVar29;
  *puVar12 = uVar27;
LAB_008ac480:
  puVar19 = puVar25;
  if (puVar22 == puVar25) goto switchD_008ac5a4_caseD_0;
  while( true ) {
    puVar23 = puVar22 + -8;
    do {
      puVar18 = puVar23;
      puVar23 = puVar18 + 8;
    } while (*(float *)puVar23 <= *(float *)param_1);
    puVar22 = puVar18 + 0x10;
    do {
      puVar24 = puVar19;
      puVar19 = puVar24 + -8;
    } while (*(float *)param_1 < *(float *)puVar19);
    if (puVar19 <= puVar23) break;
    uVar4 = *(undefined4 *)(puVar18 + 9);
    uVar17 = *puVar23;
    uVar14 = puVar18[0xf];
    uVar29 = puVar18[0xe];
    uVar27 = puVar18[0xd];
    uVar2 = puVar18[10];
    uVar3 = puVar18[0xb];
    puVar18[10] = 0;
    uVar20 = puVar18[0xc];
    puVar18[0xb] = 0;
    puVar18[0xc] = 0;
    uVar16 = *puVar19;
    *(undefined4 *)(puVar18 + 9) = *(undefined4 *)(puVar24 + -7);
    *puVar23 = uVar16;
    uVar16 = puVar24[-5];
    puVar18[10] = puVar24[-6];
    puVar18[0xb] = uVar16;
    puVar18[0xc] = puVar24[-4];
    uVar28 = puVar24[-3];
    puVar24[-6] = 0;
    puVar24[-5] = 0;
    uVar16 = puVar24[-1];
    puVar24[-4] = 0;
    puVar18[0xe] = puVar24[-2];
    puVar18[0xd] = uVar28;
    puVar18[0xf] = uVar16;
    pvVar10 = (void *)puVar24[-6];
    *puVar19 = uVar17;
    *(undefined4 *)(puVar24 + -7) = uVar4;
    if (pvVar10 != (void *)0x0) {
      puVar24[-5] = pvVar10;
      operator_delete(pvVar10);
    }
    puVar24[-6] = uVar2;
    puVar24[-5] = uVar3;
    puVar24[-4] = uVar20;
    puVar24[-1] = uVar14;
    puVar24[-2] = uVar29;
    puVar24[-3] = uVar27;
  }
  goto LAB_008ac018;
LAB_008ac584:
  local_a0 = puVar19;
  if (bVar7) {
switchD_008ac5a4_caseD_0:
    if (*(long *)(lVar6 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_008ac000;
}


