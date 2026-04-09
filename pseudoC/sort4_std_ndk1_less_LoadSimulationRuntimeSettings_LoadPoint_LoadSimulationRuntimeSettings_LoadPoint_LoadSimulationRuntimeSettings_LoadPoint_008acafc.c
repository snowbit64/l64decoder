// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
// Entry Point: 008acafc
// Size: 724 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>(LoadPoint * param_1, LoadPoint * param_2, LoadPoint * param_3, LoadPoint * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&,
   LoadSimulationRuntimeSettings::LoadPoint*>(LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*, LoadSimulationRuntimeSettings::LoadPoint*,
   LoadSimulationRuntimeSettings::LoadPoint*,
   std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,
   LoadSimulationRuntimeSettings::LoadPoint>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
               (LoadPoint *param_1,LoadPoint *param_2,LoadPoint *param_3,LoadPoint *param_4,
               __less *param_5)

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
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  uVar6 = __sort3<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                    (param_1,param_2,param_3,param_5);
  if (*(float *)param_4 < *(float *)param_3) {
    uVar10 = *(undefined8 *)param_3;
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    puVar13 = (undefined8 *)(param_3 + 0x10);
    uVar14 = *puVar13;
    *puVar13 = 0;
    uVar16 = *(undefined8 *)(param_3 + 0x30);
    uVar15 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    uVar3 = *(undefined4 *)(param_4 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    uVar4 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 8) = uVar3;
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    *puVar13 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = uVar9;
    uVar11 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    uVar17 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    uVar9 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_4 + 0x30);
    *(undefined8 *)(param_3 + 0x28) = uVar17;
    *(undefined8 *)(param_3 + 0x38) = uVar9;
    pvVar7 = *(void **)(param_4 + 0x10);
    *(undefined8 *)param_4 = uVar10;
    *(undefined4 *)(param_4 + 8) = uVar4;
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_4 + 0x18) = pvVar7;
      operator_delete(pvVar7);
    }
    *(undefined8 *)(param_4 + 0x10) = uVar14;
    *(undefined8 *)(param_4 + 0x18) = uVar1;
    *(undefined8 *)(param_4 + 0x20) = uVar2;
    *(undefined8 *)(param_4 + 0x30) = uVar16;
    *(undefined8 *)(param_4 + 0x28) = uVar15;
    *(undefined8 *)(param_4 + 0x38) = uVar11;
    if (*(float *)param_2 <= *(float *)param_3) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = *(undefined8 *)param_2;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      puVar12 = (undefined8 *)(param_2 + 0x10);
      uVar14 = *puVar12;
      *puVar12 = 0;
      uVar16 = *(undefined8 *)(param_2 + 0x30);
      uVar15 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      uVar3 = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar4 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_2 + 8) = uVar3;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      *puVar12 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      uVar17 = *(undefined8 *)(param_3 + 0x28);
      *puVar13 = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar11 = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x28) = uVar17;
      *(undefined8 *)(param_2 + 0x38) = uVar11;
      pvVar7 = *(void **)(param_3 + 0x10);
      *(undefined8 *)param_3 = uVar10;
      *(undefined4 *)(param_3 + 8) = uVar4;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_3 + 0x18) = pvVar7;
        operator_delete(pvVar7);
      }
      *(undefined8 *)(param_3 + 0x10) = uVar14;
      *(undefined8 *)(param_3 + 0x18) = uVar1;
      *(undefined8 *)(param_3 + 0x20) = uVar2;
      *(undefined8 *)(param_3 + 0x30) = uVar16;
      *(undefined8 *)(param_3 + 0x28) = uVar15;
      *(undefined8 *)(param_3 + 0x38) = uVar9;
      if (*(float *)param_1 <= *(float *)param_2) {
        uVar6 = uVar6 + 2;
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        uVar3 = *(undefined4 *)(param_2 + 8);
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        uVar4 = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = uVar3;
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        uVar17 = *(undefined8 *)(param_2 + 0x28);
        *puVar12 = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        uVar11 = *(undefined8 *)(param_2 + 0x38);
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = uVar17;
        *(undefined8 *)(param_1 + 0x38) = uVar11;
        pvVar7 = *(void **)(param_2 + 0x10);
        *(undefined8 *)param_2 = uVar10;
        *(undefined4 *)(param_2 + 8) = uVar4;
        if (pvVar7 != (void *)0x0) {
          *(void **)(param_2 + 0x18) = pvVar7;
          operator_delete(pvVar7);
        }
        uVar6 = uVar6 + 3;
        *(undefined8 *)(param_2 + 0x10) = uVar1;
        *(undefined8 *)(param_2 + 0x18) = uVar2;
        *(undefined8 *)(param_2 + 0x20) = uVar14;
        *(undefined8 *)(param_2 + 0x30) = uVar16;
        *(undefined8 *)(param_2 + 0x28) = uVar15;
        *(undefined8 *)(param_2 + 0x38) = uVar9;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


