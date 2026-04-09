// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008acdd0
// Entry Point: 008acdd0
// Size: 936 bytes
// Signature: undefined FUN_008acdd0(void)


void FUN_008acdd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,__less *param_6)

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
  uVar6 = std::__ndk1::
          __sort4<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                    ((LoadPoint *)param_1,(LoadPoint *)param_2,(LoadPoint *)param_3,
                     (LoadPoint *)param_4,param_6);
  if (*(float *)param_5 < *(float *)param_4) {
    uVar10 = *param_4;
    uVar1 = param_4[3];
    uVar2 = param_4[4];
    puVar13 = param_4 + 2;
    uVar14 = *puVar13;
    *puVar13 = 0;
    uVar16 = param_4[6];
    uVar15 = param_4[5];
    param_4[3] = 0;
    param_4[4] = 0;
    uVar3 = *(undefined4 *)(param_5 + 1);
    *param_4 = *param_5;
    uVar4 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_4 + 1) = uVar3;
    uVar9 = param_5[3];
    *puVar13 = param_5[2];
    param_4[3] = uVar9;
    uVar11 = param_4[7];
    param_4[4] = param_5[4];
    uVar17 = param_5[5];
    param_5[2] = 0;
    param_5[3] = 0;
    uVar9 = param_5[7];
    param_5[4] = 0;
    param_4[6] = param_5[6];
    param_4[5] = uVar17;
    param_4[7] = uVar9;
    pvVar7 = (void *)param_5[2];
    *param_5 = uVar10;
    *(undefined4 *)(param_5 + 1) = uVar4;
    if (pvVar7 != (void *)0x0) {
      param_5[3] = pvVar7;
      operator_delete(pvVar7);
    }
    param_5[2] = uVar14;
    param_5[3] = uVar1;
    param_5[4] = uVar2;
    param_5[6] = uVar16;
    param_5[5] = uVar15;
    param_5[7] = uVar11;
    if (*(float *)param_3 <= *(float *)param_4) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar10 = *param_3;
      uVar1 = param_3[3];
      uVar2 = param_3[4];
      puVar12 = param_3 + 2;
      uVar14 = *puVar12;
      *puVar12 = 0;
      uVar16 = param_3[6];
      uVar15 = param_3[5];
      param_3[3] = 0;
      param_3[4] = 0;
      uVar3 = *(undefined4 *)(param_4 + 1);
      *param_3 = *param_4;
      uVar4 = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_3 + 1) = uVar3;
      uVar9 = param_4[3];
      *puVar12 = param_4[2];
      param_3[3] = uVar9;
      param_3[4] = param_4[4];
      uVar9 = param_3[7];
      uVar17 = param_4[5];
      *puVar13 = 0;
      param_4[3] = 0;
      uVar11 = param_4[7];
      param_4[4] = 0;
      param_3[6] = param_4[6];
      param_3[5] = uVar17;
      param_3[7] = uVar11;
      pvVar7 = (void *)param_4[2];
      *param_4 = uVar10;
      *(undefined4 *)(param_4 + 1) = uVar4;
      if (pvVar7 != (void *)0x0) {
        param_4[3] = pvVar7;
        operator_delete(pvVar7);
      }
      param_4[2] = uVar14;
      param_4[3] = uVar1;
      param_4[4] = uVar2;
      param_4[6] = uVar16;
      param_4[5] = uVar15;
      param_4[7] = uVar9;
      if (*(float *)param_2 <= *(float *)param_3) {
        uVar6 = uVar6 + 2;
      }
      else {
        uVar10 = *param_2;
        uVar1 = param_2[3];
        uVar2 = param_2[4];
        puVar13 = param_2 + 2;
        uVar14 = *puVar13;
        *puVar13 = 0;
        uVar16 = param_2[6];
        uVar15 = param_2[5];
        param_2[3] = 0;
        param_2[4] = 0;
        uVar3 = *(undefined4 *)(param_3 + 1);
        *param_2 = *param_3;
        uVar4 = *(undefined4 *)(param_2 + 1);
        *(undefined4 *)(param_2 + 1) = uVar3;
        uVar9 = param_3[3];
        *puVar13 = param_3[2];
        param_2[3] = uVar9;
        param_2[4] = param_3[4];
        uVar9 = param_2[7];
        uVar17 = param_3[5];
        *puVar12 = 0;
        param_3[3] = 0;
        uVar11 = param_3[7];
        param_3[4] = 0;
        param_2[6] = param_3[6];
        param_2[5] = uVar17;
        param_2[7] = uVar11;
        pvVar7 = (void *)param_3[2];
        *param_3 = uVar10;
        *(undefined4 *)(param_3 + 1) = uVar4;
        if (pvVar7 != (void *)0x0) {
          param_3[3] = pvVar7;
          operator_delete(pvVar7);
        }
        param_3[2] = uVar14;
        param_3[3] = uVar1;
        param_3[4] = uVar2;
        param_3[6] = uVar16;
        param_3[5] = uVar15;
        param_3[7] = uVar9;
        if (*(float *)param_1 <= *(float *)param_2) {
          uVar6 = uVar6 + 3;
        }
        else {
          uVar1 = param_1[2];
          uVar2 = param_1[3];
          param_1[2] = 0;
          param_1[3] = 0;
          uVar14 = param_1[4];
          param_1[4] = 0;
          uVar3 = *(undefined4 *)(param_2 + 1);
          uVar10 = *param_1;
          *param_1 = *param_2;
          uVar4 = *(undefined4 *)(param_1 + 1);
          *(undefined4 *)(param_1 + 1) = uVar3;
          uVar16 = param_1[6];
          uVar15 = param_1[5];
          uVar9 = param_2[3];
          param_1[2] = param_2[2];
          param_1[3] = uVar9;
          param_1[4] = param_2[4];
          uVar9 = param_1[7];
          uVar17 = param_2[5];
          *puVar13 = 0;
          param_2[3] = 0;
          uVar11 = param_2[7];
          param_2[4] = 0;
          param_1[6] = param_2[6];
          param_1[5] = uVar17;
          param_1[7] = uVar11;
          pvVar7 = (void *)param_2[2];
          *param_2 = uVar10;
          *(undefined4 *)(param_2 + 1) = uVar4;
          if (pvVar7 != (void *)0x0) {
            param_2[3] = pvVar7;
            operator_delete(pvVar7);
          }
          param_2[2] = uVar1;
          param_2[3] = uVar2;
          param_2[4] = uVar14;
          uVar6 = uVar6 + 4;
          param_2[6] = uVar16;
          param_2[5] = uVar15;
          param_2[7] = uVar9;
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


