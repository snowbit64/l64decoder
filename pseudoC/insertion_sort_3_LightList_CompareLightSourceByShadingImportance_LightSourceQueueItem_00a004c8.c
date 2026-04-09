// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
// Entry Point: 00a004c8
// Size: 472 bytes
// Signature: void __cdecl __insertion_sort_3<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, CompareLightSourceByShadingImportance * param_3)


/* void std::__ndk1::__insertion_sort_3<LightList::CompareLightSourceByShadingImportance&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceByShadingImportance&) */

void std::__ndk1::
     __insertion_sort_3<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               CompareLightSourceByShadingImportance *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  
  lVar3 = tpidr_el0;
  puVar9 = (undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x50);
  fVar15 = *(float *)(param_1 + 0x40);
  fVar12 = *(float *)(param_1 + 0x68);
  if (fVar15 <= *(float *)(param_1 + 0x18)) {
    if (fVar15 < fVar12) {
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar14 = *puVar9;
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
      *puVar9 = *puVar6;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x58) = uVar16;
      *puVar6 = uVar14;
      *(undefined8 *)(param_1 + 0x68) = uVar13;
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      *(int *)(param_1 + 0x70) = (int)uVar8;
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x40)) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)param_1 = *puVar9;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar14;
        *puVar9 = uVar13;
        *(undefined8 *)(param_1 + 0x40) = uVar11;
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = (int)uVar8;
      }
    }
  }
  else if (fVar12 <= fVar15) {
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *puVar9;
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 8);
    *puVar9 = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 8) = uVar14;
    *(undefined8 *)param_1 = uVar13;
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    if (*(float *)(param_1 + 0x40) < fVar12) {
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *puVar9;
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
      *puVar9 = *puVar6;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = uVar14;
      *puVar6 = uVar13;
      *(undefined8 *)(param_1 + 0x68) = uVar11;
      *(undefined8 *)(param_1 + 0x60) = uVar8;
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = (int)uVar8;
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)param_1;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)param_1 = *puVar6;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar14;
    *puVar6 = uVar13;
    *(undefined8 *)(param_1 + 0x68) = uVar11;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = (int)uVar8;
  }
  if (param_1 + 0x78 != param_2) {
    lVar7 = 0;
    puVar9 = (undefined8 *)(param_1 + 0x78);
    do {
      fVar12 = *(float *)(puVar9 + 3);
      if (*(float *)(puVar6 + 3) < fVar12) {
        uVar14 = puVar9[1];
        uVar13 = *puVar9;
        uVar11 = puVar9[2];
        uVar8 = *(undefined8 *)((long)puVar9 + 0x1c);
        lVar4 = lVar7;
        do {
          lVar10 = lVar4;
          *(undefined8 *)(param_1 + lVar10 + 0x80) = *(undefined8 *)(param_1 + lVar10 + 0x58);
          *(undefined8 *)(param_1 + lVar10 + 0x78) = *(undefined8 *)(param_1 + lVar10 + 0x50);
          *(undefined8 *)(param_1 + lVar10 + 0x90) = *(undefined8 *)(param_1 + lVar10 + 0x68);
          *(undefined8 *)(param_1 + lVar10 + 0x88) = *(undefined8 *)(param_1 + lVar10 + 0x60);
          *(undefined4 *)(param_1 + lVar10 + 0x98) = *(undefined4 *)(param_1 + lVar10 + 0x70);
          puVar6 = (undefined8 *)param_1;
          if (lVar10 == -0x50) goto LAB_00a005e8;
          lVar4 = lVar10 + -0x28;
        } while (*(float *)(param_1 + lVar10 + 0x40) < fVar12);
        puVar6 = (undefined8 *)(param_1 + lVar10 + 0x50);
LAB_00a005e8:
        *(float *)(puVar6 + 3) = fVar12;
        *(undefined8 *)((long)puVar6 + 0x1c) = uVar8;
        puVar6[1] = uVar14;
        *puVar6 = uVar13;
        puVar6[2] = uVar11;
      }
      puVar1 = puVar9 + 5;
      lVar7 = lVar7 + 0x28;
      puVar6 = puVar9;
      puVar9 = puVar1;
    } while (puVar1 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


