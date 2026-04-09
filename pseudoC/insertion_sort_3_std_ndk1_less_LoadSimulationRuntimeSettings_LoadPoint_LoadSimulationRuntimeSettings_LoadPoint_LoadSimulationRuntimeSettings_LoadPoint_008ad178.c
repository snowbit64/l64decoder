// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
// Entry Point: 008ad178
// Size: 432 bytes
// Signature: void __cdecl __insertion_sort_3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>(LoadPoint * param_1, LoadPoint * param_2, __less * param_3)


/* void 
   std::__ndk1::__insertion_sort_3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&,
   LoadSimulationRuntimeSettings::LoadPoint*>(LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*,
   std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&) */

void std::__ndk1::
     __insertion_sort_3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
               (LoadPoint *param_1,LoadPoint *param_2,__less *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  
  lVar6 = tpidr_el0;
  lVar8 = *(long *)(lVar6 + 0x28);
  __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            (param_1,param_1 + 0x40,param_1 + 0x80,param_3);
  if (param_1 + 0xc0 != param_2) {
    lVar13 = 0;
    pfVar11 = (float *)(param_1 + 0x80);
    pfVar12 = (float *)(param_1 + 0xc0);
    do {
      fVar19 = *pfVar12;
      if (fVar19 < *pfVar11) {
        uVar2 = *(undefined8 *)(pfVar12 + 6);
        uVar4 = *(undefined8 *)(pfVar12 + 8);
        pvVar7 = (void *)0x0;
        uVar14 = *(undefined8 *)(pfVar12 + 4);
        *(undefined8 *)(pfVar12 + 6) = 0;
        *(undefined8 *)(pfVar12 + 8) = 0;
        uVar18 = *(undefined8 *)(pfVar12 + 0xc);
        uVar17 = *(undefined8 *)(pfVar12 + 10);
        *(undefined8 *)(pfVar12 + 4) = 0;
        uVar9 = *(undefined8 *)(pfVar12 + 0xe);
        uVar15 = *(undefined8 *)(pfVar12 + 1);
        lVar16 = lVar13;
        while( true ) {
          *(undefined8 *)(param_1 + lVar16 + 0xc0) = *(undefined8 *)(param_1 + lVar16 + 0x80);
          *(undefined4 *)(param_1 + lVar16 + 200) = *(undefined4 *)(param_1 + lVar16 + 0x88);
          if (pvVar7 != (void *)0x0) {
            *(void **)(param_1 + lVar16 + 0xd8) = pvVar7;
            operator_delete(pvVar7);
            *(undefined8 *)(param_1 + lVar16 + 0xd8) = 0;
            *(undefined8 *)(param_1 + lVar16 + 0xe0) = 0;
          }
          uVar3 = *(undefined8 *)(param_1 + lVar16 + 0x90);
          uVar5 = *(undefined8 *)(param_1 + lVar16 + 0x98);
          *(undefined8 *)(param_1 + lVar16 + 0x90) = 0;
          *(undefined8 *)(param_1 + lVar16 + 0x98) = 0;
          uVar10 = *(undefined8 *)(param_1 + lVar16 + 0xa0);
          *(undefined8 *)(param_1 + lVar16 + 0xa0) = 0;
          *(undefined8 *)(param_1 + lVar16 + 0xd0) = uVar3;
          *(undefined8 *)(param_1 + lVar16 + 0xd8) = uVar5;
          *(undefined8 *)(param_1 + lVar16 + 0xe0) = uVar10;
          *(undefined8 *)(param_1 + lVar16 + 0xf0) = *(undefined8 *)(param_1 + lVar16 + 0xb0);
          *(undefined8 *)(param_1 + lVar16 + 0xe8) = *(undefined8 *)(param_1 + lVar16 + 0xa8);
          *(undefined8 *)(param_1 + lVar16 + 0xf8) = *(undefined8 *)(param_1 + lVar16 + 0xb8);
          pfVar11 = (float *)param_1;
          if (lVar16 == -0x80) goto LAB_008ad2c8;
          if (*(float *)(param_1 + lVar16 + 0x40) <= fVar19) break;
          pvVar7 = *(void **)(param_1 + lVar16 + 0x90);
          lVar16 = lVar16 + -0x40;
        }
        pfVar11 = (float *)(param_1 + lVar16 + 0x80);
LAB_008ad2c8:
        *pfVar11 = fVar19;
        *(undefined8 *)(pfVar11 + 1) = uVar15;
        pvVar7 = *(void **)(param_1 + lVar16 + 0x90);
        if (pvVar7 != (void *)0x0) {
          *(void **)(pfVar11 + 6) = pvVar7;
          operator_delete(pvVar7);
          *(undefined8 *)(param_1 + lVar16 + 0x98) = 0;
          *(undefined8 *)(param_1 + lVar16 + 0xa0) = 0;
        }
        *(undefined8 *)(param_1 + lVar16 + 0x90) = uVar14;
        *(undefined8 *)(pfVar11 + 6) = uVar2;
        *(undefined8 *)(pfVar11 + 8) = uVar4;
        *(undefined8 *)(param_1 + lVar16 + 0xb0) = uVar18;
        *(undefined8 *)(param_1 + lVar16 + 0xa8) = uVar17;
        *(undefined8 *)(param_1 + lVar16 + 0xb8) = uVar9;
      }
      pfVar1 = pfVar12 + 0x10;
      lVar13 = lVar13 + 0x40;
      pfVar11 = pfVar12;
      pfVar12 = pfVar1;
    } while (pfVar1 != (float *)param_2);
  }
  if (*(long *)(lVar6 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


