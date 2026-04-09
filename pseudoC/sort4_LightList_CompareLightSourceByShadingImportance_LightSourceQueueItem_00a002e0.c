// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
// Entry Point: 00a002e0
// Size: 488 bytes
// Signature: uint __cdecl __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, LightSourceQueueItem * param_3, LightSourceQueueItem * param_4, CompareLightSourceByShadingImportance * param_5)


/* unsigned int std::__ndk1::__sort4<LightList::CompareLightSourceByShadingImportance&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*, LightSourceQueueItem*,
   LightSourceQueueItem*, LightList::CompareLightSourceByShadingImportance&) */

uint std::__ndk1::__sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               LightSourceQueueItem *param_3,LightSourceQueueItem *param_4,
               CompareLightSourceByShadingImportance *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  fVar7 = *(float *)(param_2 + 0x18);
  if (fVar7 <= *(float *)(param_1 + 0x18)) {
    if (*(float *)(param_3 + 0x18) <= fVar7) {
      uVar3 = 0;
      goto LAB_00a003fc;
    }
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar9;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar11;
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar13;
    *(undefined8 *)(param_3 + 0x10) = uVar12;
    *(int *)(param_3 + 0x20) = (int)uVar6;
    if (*(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18)) {
      uVar9 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = 2;
      *(undefined8 *)(param_2 + 8) = uVar11;
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar13;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      *(int *)(param_2 + 0x20) = (int)uVar6;
      goto LAB_00a003fc;
    }
LAB_00a003f8:
    uVar3 = 1;
  }
  else {
    if (*(float *)(param_3 + 0x18) <= fVar7) {
      uVar9 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar11;
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar13;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      *(int *)(param_2 + 0x20) = (int)uVar6;
      if (*(float *)(param_3 + 0x18) <= *(float *)(param_2 + 0x18)) goto LAB_00a003f8;
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      uVar5 = (undefined4)*(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      uVar3 = 2;
    }
    else {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      uVar5 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar3 = 1;
    }
    *(undefined8 *)(param_3 + 8) = uVar11;
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar13;
    *(undefined8 *)(param_3 + 0x10) = uVar12;
    *(undefined4 *)(param_3 + 0x20) = uVar5;
  }
LAB_00a003fc:
  if (*(float *)(param_3 + 0x18) < *(float *)(param_4 + 0x18)) {
    uVar9 = *(undefined8 *)param_4;
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    uVar11 = *(undefined8 *)(param_3 + 8);
    uVar10 = *(undefined8 *)param_3;
    uVar13 = *(undefined8 *)(param_3 + 0x18);
    uVar12 = *(undefined8 *)(param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar9;
    *(undefined8 *)(param_3 + 0x18) = uVar8;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_4 + 8) = uVar11;
    *(undefined8 *)param_4 = uVar10;
    *(undefined8 *)(param_4 + 0x18) = uVar13;
    *(undefined8 *)(param_4 + 0x10) = uVar12;
    *(int *)(param_4 + 0x20) = (int)uVar6;
    if (*(float *)(param_3 + 0x18) <= *(float *)(param_2 + 0x18)) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar9 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar11;
      *(undefined8 *)param_3 = uVar10;
      *(undefined8 *)(param_3 + 0x18) = uVar13;
      *(undefined8 *)(param_3 + 0x10) = uVar12;
      *(int *)(param_3 + 0x20) = (int)uVar6;
      if (*(float *)(param_2 + 0x18) <= *(float *)(param_1 + 0x18)) {
        uVar3 = uVar3 + 2;
      }
      else {
        uVar9 = *(undefined8 *)param_2;
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = uVar3 + 3;
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        *(undefined8 *)(param_2 + 8) = uVar11;
        *(undefined8 *)param_2 = uVar10;
        *(undefined8 *)(param_2 + 0x18) = uVar13;
        *(undefined8 *)(param_2 + 0x10) = uVar12;
        *(int *)(param_2 + 0x20) = (int)uVar6;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


