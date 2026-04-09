// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
// Entry Point: 008ad328
// Size: 808 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>(LoadPoint * param_1, LoadPoint * param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&,
   LoadSimulationRuntimeSettings::LoadPoint*>(LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*,
   std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
               (LoadPoint *param_1,LoadPoint *param_2,__less *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float *pfVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  
  lVar5 = tpidr_el0;
  lVar12 = *(long *)(lVar5 + 0x28);
  uVar8 = (long)param_2 - (long)param_1 >> 6;
  if (5 < uVar8) {
    __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,param_1 + 0x40,param_1 + 0x80,param_3);
    if (param_1 + 0xc0 != param_2) {
      lVar15 = 0;
      iVar18 = 0;
      pfVar19 = (float *)(param_1 + 0xc0);
      pfVar14 = (float *)(param_1 + 0x80);
      do {
        pfVar10 = pfVar19;
        fVar25 = *pfVar10;
        if (fVar25 < *pfVar14) {
          uVar1 = *(undefined8 *)(pfVar10 + 6);
          uVar2 = *(undefined8 *)(pfVar10 + 8);
          pvVar7 = (void *)0x0;
          uVar20 = *(undefined8 *)(pfVar10 + 4);
          *(undefined8 *)(pfVar10 + 6) = 0;
          *(undefined8 *)(pfVar10 + 8) = 0;
          uVar22 = *(undefined8 *)(pfVar10 + 0xc);
          uVar16 = *(undefined8 *)(pfVar10 + 10);
          *(undefined8 *)(pfVar10 + 4) = 0;
          uVar21 = *(undefined8 *)(pfVar10 + 1);
          uVar11 = *(undefined8 *)(pfVar10 + 0xe);
          lVar17 = lVar15;
          while( true ) {
            *(undefined8 *)(param_1 + lVar17 + 0xc0) = *(undefined8 *)(param_1 + lVar17 + 0x80);
            *(undefined4 *)(param_1 + lVar17 + 200) = *(undefined4 *)(param_1 + lVar17 + 0x88);
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_1 + lVar17 + 0xd8) = pvVar7;
              operator_delete(pvVar7);
              *(undefined8 *)(param_1 + lVar17 + 0xd8) = 0;
              *(undefined8 *)(param_1 + lVar17 + 0xe0) = 0;
            }
            uVar23 = *(undefined8 *)(param_1 + lVar17 + 0x90);
            uVar24 = *(undefined8 *)(param_1 + lVar17 + 0x98);
            *(undefined8 *)(param_1 + lVar17 + 0x90) = 0;
            *(undefined8 *)(param_1 + lVar17 + 0x98) = 0;
            uVar13 = *(undefined8 *)(param_1 + lVar17 + 0xa0);
            *(undefined8 *)(param_1 + lVar17 + 0xa0) = 0;
            *(undefined8 *)(param_1 + lVar17 + 0xd0) = uVar23;
            *(undefined8 *)(param_1 + lVar17 + 0xd8) = uVar24;
            *(undefined8 *)(param_1 + lVar17 + 0xe0) = uVar13;
            *(undefined8 *)(param_1 + lVar17 + 0xf0) = *(undefined8 *)(param_1 + lVar17 + 0xb0);
            *(undefined8 *)(param_1 + lVar17 + 0xe8) = *(undefined8 *)(param_1 + lVar17 + 0xa8);
            *(undefined8 *)(param_1 + lVar17 + 0xf8) = *(undefined8 *)(param_1 + lVar17 + 0xb8);
            pfVar19 = (float *)param_1;
            if (lVar17 == -0x80) goto LAB_008ad59c;
            if (*(float *)(param_1 + lVar17 + 0x40) <= fVar25) break;
            pvVar7 = *(void **)(param_1 + lVar17 + 0x90);
            lVar17 = lVar17 + -0x40;
          }
          pfVar19 = (float *)(param_1 + lVar17 + 0x80);
LAB_008ad59c:
          *pfVar19 = fVar25;
          *(undefined8 *)(pfVar19 + 1) = uVar21;
          pvVar7 = *(void **)(param_1 + lVar17 + 0x90);
          if (pvVar7 != (void *)0x0) {
            *(void **)(pfVar19 + 6) = pvVar7;
            operator_delete(pvVar7);
            *(undefined8 *)(param_1 + lVar17 + 0x98) = 0;
            *(undefined8 *)(param_1 + lVar17 + 0xa0) = 0;
          }
          iVar18 = iVar18 + 1;
          *(undefined8 *)(param_1 + lVar17 + 0x90) = uVar20;
          *(undefined8 *)(pfVar19 + 6) = uVar1;
          *(undefined8 *)(pfVar19 + 8) = uVar2;
          *(undefined8 *)(param_1 + lVar17 + 0xb0) = uVar22;
          *(undefined8 *)(param_1 + lVar17 + 0xa8) = uVar16;
          *(undefined8 *)(param_1 + lVar17 + 0xb8) = uVar11;
          if (iVar18 == 8) {
            bVar6 = pfVar10 + 0x10 == (float *)param_2;
            goto switchD_008ad38c_caseD_0;
          }
        }
        lVar15 = lVar15 + 0x40;
        pfVar19 = pfVar10 + 0x10;
        pfVar14 = pfVar10;
      } while (pfVar10 + 0x10 != (float *)param_2);
      bVar6 = true;
      goto switchD_008ad38c_caseD_0;
    }
    goto LAB_008ad5f8;
  }
  bVar6 = true;
  switch(uVar8) {
  case 2:
    puVar9 = (undefined8 *)(param_2 + -0x40);
    if (*(float *)puVar9 < *(float *)param_1) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar3 = *(undefined4 *)(param_2 + -0x38);
      uVar20 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *puVar9;
      uVar4 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar3;
      uVar23 = *(undefined8 *)(param_1 + 0x30);
      uVar22 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      uVar21 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + -0x20);
      uVar24 = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_2 + -0x30) = 0;
      *(undefined8 *)(param_2 + -0x28) = 0;
      uVar11 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + 0x28) = uVar24;
      *(undefined8 *)(param_1 + 0x38) = uVar11;
      pvVar7 = *(void **)(param_2 + -0x30);
      *puVar9 = uVar20;
      *(undefined4 *)(param_2 + -0x38) = uVar4;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_2 + -0x28) = pvVar7;
        operator_delete(pvVar7);
      }
      *(undefined8 *)(param_2 + -0x30) = uVar1;
      *(undefined8 *)(param_2 + -0x28) = uVar2;
      *(undefined8 *)(param_2 + -0x20) = uVar16;
      bVar6 = true;
      *(undefined8 *)(param_2 + -0x10) = uVar23;
      *(undefined8 *)(param_2 + -0x18) = uVar22;
      *(undefined8 *)(param_2 + -8) = uVar21;
      break;
    }
    goto LAB_008ad5f8;
  case 3:
    __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,param_1 + 0x40,param_2 + -0x40,param_3);
    bVar6 = true;
    break;
  case 4:
    __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (param_1,param_1 + 0x40,param_1 + 0x80,param_2 + -0x40,param_3);
LAB_008ad5f8:
    bVar6 = true;
    break;
  case 5:
    FUN_008acdd0(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,param_2 + -0x40);
    bVar6 = true;
  }
switchD_008ad38c_caseD_0:
  if (*(long *)(lVar5 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


