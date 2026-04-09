// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
// Entry Point: 008ac704
// Size: 1016 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>(LoadPoint * param_1, LoadPoint * param_2, LoadPoint * param_3, __less * param_4)


/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&,
   LoadSimulationRuntimeSettings::LoadPoint*>(LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*, LoadSimulationRuntimeSettings::LoadPoint*,
   std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
               (LoadPoint *param_1,LoadPoint *param_2,LoadPoint *param_3,__less *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void **ppvVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  fVar15 = *(float *)param_2;
  if (*(float *)param_1 <= fVar15) {
    if (fVar15 <= *(float *)param_3) {
      uVar6 = 0;
      goto LAB_008acac8;
    }
    uVar10 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    puVar12 = (undefined8 *)(param_2 + 0x10);
    uVar13 = *puVar12;
    *puVar12 = 0;
    uVar17 = *(undefined8 *)(param_2 + 0x30);
    uVar16 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar3 = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    uVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = uVar3;
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    *puVar12 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = uVar9;
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar9 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uVar18;
    *(undefined8 *)(param_2 + 0x38) = uVar9;
    pvVar7 = *(void **)(param_3 + 0x10);
    *(undefined8 *)param_3 = uVar10;
    *(undefined4 *)(param_3 + 8) = uVar4;
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_3 + 0x18) = pvVar7;
      operator_delete(pvVar7);
    }
    *(undefined8 *)(param_3 + 0x10) = uVar13;
    *(undefined8 *)(param_3 + 0x18) = uVar1;
    *(undefined8 *)(param_3 + 0x20) = uVar2;
    *(undefined8 *)(param_3 + 0x30) = uVar17;
    *(undefined8 *)(param_3 + 0x28) = uVar16;
    *(undefined8 *)(param_3 + 0x38) = uVar11;
    if (*(float *)param_2 < *(float *)param_1) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar4 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar3;
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      uVar18 = *(undefined8 *)(param_2 + 0x28);
      *puVar12 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar18;
      *(undefined8 *)(param_1 + 0x38) = uVar11;
      pvVar7 = *(void **)(param_2 + 0x10);
      *(undefined8 *)param_2 = uVar10;
      *(undefined4 *)(param_2 + 8) = uVar4;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_2 + 0x18) = pvVar7;
        operator_delete(pvVar7);
      }
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      uVar6 = 2;
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      *(undefined8 *)(param_2 + 0x28) = uVar16;
      *(undefined8 *)(param_2 + 0x38) = uVar9;
      goto LAB_008acac8;
    }
  }
  else {
    if (*(float *)param_3 < fVar15) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar3 = *(undefined4 *)(param_3 + 8);
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      uVar4 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar3;
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      uVar18 = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar9 = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar18;
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      pvVar7 = *(void **)(param_3 + 0x10);
      *(undefined8 *)param_3 = uVar10;
      *(undefined4 *)(param_3 + 8) = uVar4;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_3 + 0x18) = pvVar7;
        operator_delete(pvVar7);
      }
      *(undefined8 *)(param_3 + 0x10) = uVar1;
      *(undefined8 *)(param_3 + 0x18) = uVar2;
      *(undefined8 *)(param_3 + 0x20) = uVar13;
      uVar6 = 1;
      *(undefined8 *)(param_3 + 0x30) = uVar17;
      *(undefined8 *)(param_3 + 0x28) = uVar16;
      *(undefined8 *)(param_3 + 0x38) = uVar11;
      goto LAB_008acac8;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar4 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar17 = *(undefined8 *)(param_1 + 0x30);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    ppvVar14 = (void **)(param_2 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(void **)(param_1 + 0x10) = *ppvVar14;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    uVar18 = *(undefined8 *)(param_2 + 0x28);
    *ppvVar14 = (void *)0x0;
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar18;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    pvVar7 = *ppvVar14;
    puVar12 = (undefined8 *)(param_2 + 0x28);
    *(undefined8 *)param_2 = uVar10;
    *(undefined4 *)(param_2 + 8) = uVar4;
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_2 + 0x18) = pvVar7;
      operator_delete(pvVar7);
    }
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    *(undefined8 *)(param_2 + 0x20) = uVar13;
    *(undefined8 *)(param_2 + 0x30) = uVar17;
    *puVar12 = uVar16;
    *(undefined8 *)(param_2 + 0x38) = uVar11;
    if (*(float *)param_3 < *(float *)param_2) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      uVar3 = *(undefined4 *)(param_2 + 8);
      *ppvVar14 = (void *)0x0;
      uVar17 = *(undefined8 *)(param_2 + 0x30);
      uVar16 = *puVar12;
      uVar9 = *(undefined8 *)param_3;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
      uVar10 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar9;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      uVar18 = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar11 = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
      *puVar12 = uVar18;
      *(undefined8 *)(param_2 + 0x38) = uVar11;
      pvVar7 = *(void **)(param_3 + 0x10);
      *(undefined8 *)param_3 = uVar10;
      *(undefined4 *)(param_3 + 8) = uVar3;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_3 + 0x18) = pvVar7;
        operator_delete(pvVar7);
      }
      uVar6 = 2;
      *(undefined8 *)(param_3 + 0x10) = uVar1;
      *(undefined8 *)(param_3 + 0x18) = uVar2;
      *(undefined8 *)(param_3 + 0x20) = uVar13;
      *(undefined8 *)(param_3 + 0x30) = uVar17;
      *(undefined8 *)(param_3 + 0x28) = uVar16;
      *(undefined8 *)(param_3 + 0x38) = uVar9;
      goto LAB_008acac8;
    }
  }
  uVar6 = 1;
LAB_008acac8:
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


