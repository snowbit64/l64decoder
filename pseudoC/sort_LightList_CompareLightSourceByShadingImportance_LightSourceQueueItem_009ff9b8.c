// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
// Entry Point: 009ff9b8
// Size: 2344 bytes
// Signature: void __cdecl __sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, CompareLightSourceByShadingImportance * param_3)


/* void std::__ndk1::__sort<LightList::CompareLightSourceByShadingImportance&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceByShadingImportance&) */

void std::__ndk1::__sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               CompareLightSourceByShadingImportance *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
LAB_009ffa04:
  puVar17 = (undefined8 *)((long)param_2 + -0x28);
  puVar18 = (undefined8 *)param_1;
LAB_009ffa0c:
  param_1 = (LightSourceQueueItem *)puVar18;
  uVar8 = (long)param_2 - (long)param_1;
  switch(((long)uVar8 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_009ffff0_caseD_0;
  case 2:
    if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_2 + -0x10)) {
      uVar27 = *(undefined8 *)((long)param_1 + 8);
      uVar24 = *(undefined8 *)param_1;
      uVar25 = *(undefined8 *)((long)param_1 + 0x18);
      uVar22 = *(undefined8 *)((long)param_1 + 0x10);
      uVar9 = *(undefined8 *)((long)param_1 + 0x20);
      uVar16 = *(undefined8 *)((long)param_2 + -0x10);
      uVar23 = *(undefined8 *)((long)param_2 + -0x18);
      uVar28 = *(undefined8 *)((long)param_2 + -0x20);
      uVar26 = *(undefined8 *)((long)param_2 + -0x28);
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 8) = uVar28;
      *(undefined8 *)param_1 = uVar26;
      *(undefined8 *)((long)param_1 + 0x18) = uVar16;
      *(undefined8 *)((long)param_1 + 0x10) = uVar23;
      local_70 = (undefined4)uVar9;
      *(undefined8 *)((long)param_2 + -0x10) = uVar25;
      *(undefined8 *)((long)param_2 + -0x18) = uVar22;
      *(undefined8 *)((long)param_2 + -0x20) = uVar27;
      *(undefined8 *)((long)param_2 + -0x28) = uVar24;
      *(undefined4 *)((long)param_2 + -8) = local_70;
    }
    goto switchD_009ffff0_caseD_0;
  case 3:
    fVar21 = *(float *)((long)param_1 + 0x40);
    puVar18 = (undefined8 *)((long)param_1 + 0x28);
    if (fVar21 <= *(float *)((long)param_1 + 0x18)) {
      if (fVar21 < *(float *)((long)param_2 + -0x10)) {
        uVar23 = *(undefined8 *)((long)param_1 + 0x30);
        uVar22 = *puVar18;
        uVar16 = *(undefined8 *)((long)param_1 + 0x40);
        uVar25 = *(undefined8 *)((long)param_1 + 0x38);
        uVar9 = *(undefined8 *)((long)param_1 + 0x48);
        uVar27 = *puVar17;
        uVar26 = *(undefined8 *)((long)param_2 + -0x10);
        uVar24 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_2 + -0x20);
        *puVar18 = uVar27;
        *(undefined8 *)((long)param_1 + 0x40) = uVar26;
        *(undefined8 *)((long)param_1 + 0x38) = uVar24;
        *(undefined4 *)((long)param_1 + 0x48) = uVar2;
        *(int *)((long)param_2 + -8) = (int)uVar9;
        *(undefined8 *)((long)param_2 + -0x20) = uVar23;
        *puVar17 = uVar22;
        *(undefined8 *)((long)param_2 + -0x10) = uVar16;
        *(undefined8 *)((long)param_2 + -0x18) = uVar25;
        if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_1 + 0x40)) {
          uVar16 = *(undefined8 *)((long)param_1 + 8);
          uVar25 = *(undefined8 *)param_1;
          uVar23 = *(undefined8 *)((long)param_1 + 0x18);
          uVar22 = *(undefined8 *)((long)param_1 + 0x10);
          uVar9 = *(undefined8 *)((long)param_1 + 0x20);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
          *(undefined8 *)param_1 = *puVar18;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x40);
          *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x48);
          local_70 = (undefined4)uVar9;
          *(undefined8 *)((long)param_1 + 0x30) = uVar16;
          *puVar18 = uVar25;
          *(undefined8 *)((long)param_1 + 0x40) = uVar23;
          *(undefined8 *)((long)param_1 + 0x38) = uVar22;
          *(undefined4 *)((long)param_1 + 0x48) = local_70;
        }
      }
    }
    else if (*(float *)((long)param_2 + -0x10) <= fVar21) {
      uVar16 = *(undefined8 *)((long)param_1 + 8);
      uVar25 = *(undefined8 *)param_1;
      uVar23 = *(undefined8 *)((long)param_1 + 0x18);
      uVar22 = *(undefined8 *)((long)param_1 + 0x10);
      uVar9 = *(undefined8 *)((long)param_1 + 0x20);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)param_1 = *puVar18;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x40);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x38);
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x48);
      local_70 = (undefined4)uVar9;
      *(undefined8 *)((long)param_1 + 0x30) = uVar16;
      *puVar18 = uVar25;
      *(undefined8 *)((long)param_1 + 0x40) = uVar23;
      *(undefined8 *)((long)param_1 + 0x38) = uVar22;
      *(undefined4 *)((long)param_1 + 0x48) = local_70;
      if (*(float *)((long)param_1 + 0x40) < *(float *)((long)param_2 + -0x10)) {
        uVar23 = *(undefined8 *)((long)param_1 + 0x30);
        uVar22 = *puVar18;
        uVar16 = *(undefined8 *)((long)param_1 + 0x40);
        uVar25 = *(undefined8 *)((long)param_1 + 0x38);
        uVar9 = *(undefined8 *)((long)param_1 + 0x48);
        uVar27 = *puVar17;
        uVar26 = *(undefined8 *)((long)param_2 + -0x10);
        uVar24 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_2 + -0x20);
        *puVar18 = uVar27;
        *(undefined8 *)((long)param_1 + 0x40) = uVar26;
        *(undefined8 *)((long)param_1 + 0x38) = uVar24;
        *(undefined4 *)((long)param_1 + 0x48) = uVar2;
        *(int *)((long)param_2 + -8) = (int)uVar9;
        *(undefined8 *)((long)param_2 + -0x20) = uVar23;
        *puVar17 = uVar22;
        *(undefined8 *)((long)param_2 + -0x10) = uVar16;
        *(undefined8 *)((long)param_2 + -0x18) = uVar25;
      }
    }
    else {
      uVar27 = *(undefined8 *)((long)param_1 + 8);
      uVar24 = *(undefined8 *)param_1;
      uVar25 = *(undefined8 *)((long)param_1 + 0x18);
      uVar22 = *(undefined8 *)((long)param_1 + 0x10);
      uVar9 = *(undefined8 *)((long)param_1 + 0x20);
      uVar26 = *puVar17;
      uVar16 = *(undefined8 *)((long)param_2 + -0x10);
      uVar23 = *(undefined8 *)((long)param_2 + -0x18);
      uVar2 = *(undefined4 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x20);
      *(undefined8 *)param_1 = uVar26;
      *(undefined8 *)((long)param_1 + 0x18) = uVar16;
      *(undefined8 *)((long)param_1 + 0x10) = uVar23;
      *(undefined4 *)((long)param_1 + 0x20) = uVar2;
      local_70 = (undefined4)uVar9;
      *(undefined8 *)((long)param_2 + -0x20) = uVar27;
      *puVar17 = uVar24;
      *(undefined8 *)((long)param_2 + -0x10) = uVar25;
      *(undefined8 *)((long)param_2 + -0x18) = uVar22;
      *(undefined4 *)((long)param_2 + -8) = local_70;
    }
    goto switchD_009ffff0_caseD_0;
  case 4:
    __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
              (param_1,(LightSourceQueueItem *)((long)param_1 + 0x28),
               (LightSourceQueueItem *)((long)param_1 + 0x50),(LightSourceQueueItem *)puVar17,
               param_3);
    goto switchD_009ffff0_caseD_0;
  case 5:
    puVar18 = (undefined8 *)((long)param_1 + 0x28);
    puVar17 = (undefined8 *)((long)param_1 + 0x50);
    puVar12 = (undefined8 *)((long)param_1 + 0x78);
    __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
              (param_1,(LightSourceQueueItem *)puVar18,(LightSourceQueueItem *)puVar17,
               (LightSourceQueueItem *)puVar12,param_3);
    if (*(float *)((long)param_1 + 0x90) < *(float *)((long)param_2 + -0x10)) {
      uVar23 = *(undefined8 *)((long)param_1 + 0x80);
      uVar22 = *puVar12;
      uVar16 = *(undefined8 *)((long)param_1 + 0x90);
      uVar25 = *(undefined8 *)((long)param_1 + 0x88);
      uVar9 = *(undefined8 *)((long)param_1 + 0x98);
      uVar26 = *(undefined8 *)((long)param_2 + -0x10);
      uVar24 = *(undefined8 *)((long)param_2 + -0x18);
      uVar28 = *(undefined8 *)((long)param_2 + -0x20);
      uVar27 = *(undefined8 *)((long)param_2 + -0x28);
      *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 0x80) = uVar28;
      *puVar12 = uVar27;
      *(undefined8 *)((long)param_1 + 0x90) = uVar26;
      *(undefined8 *)((long)param_1 + 0x88) = uVar24;
      *(undefined8 *)((long)param_2 + -0x10) = uVar16;
      *(undefined8 *)((long)param_2 + -0x18) = uVar25;
      *(int *)((long)param_2 + -8) = (int)uVar9;
      *(undefined8 *)((long)param_2 + -0x20) = uVar23;
      *(undefined8 *)((long)param_2 + -0x28) = uVar22;
      if (*(float *)((long)param_1 + 0x68) < *(float *)((long)param_1 + 0x90)) {
        uVar16 = *(undefined8 *)((long)param_1 + 0x58);
        uVar25 = *puVar17;
        uVar23 = *(undefined8 *)((long)param_1 + 0x68);
        uVar22 = *(undefined8 *)((long)param_1 + 0x60);
        *(undefined8 *)((long)param_1 + 0x58) = *(undefined8 *)((long)param_1 + 0x80);
        *puVar17 = *puVar12;
        *(undefined8 *)((long)param_1 + 0x68) = *(undefined8 *)((long)param_1 + 0x90);
        *(undefined8 *)((long)param_1 + 0x60) = *(undefined8 *)((long)param_1 + 0x88);
        uVar9 = *(undefined8 *)((long)param_1 + 0x70);
        *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)((long)param_1 + 0x98);
        *(undefined8 *)((long)param_1 + 0x80) = uVar16;
        *puVar12 = uVar25;
        *(undefined8 *)((long)param_1 + 0x90) = uVar23;
        *(undefined8 *)((long)param_1 + 0x88) = uVar22;
        *(int *)((long)param_1 + 0x98) = (int)uVar9;
        if (*(float *)((long)param_1 + 0x40) < *(float *)((long)param_1 + 0x68)) {
          uVar16 = *(undefined8 *)((long)param_1 + 0x30);
          uVar25 = *puVar18;
          uVar23 = *(undefined8 *)((long)param_1 + 0x40);
          uVar22 = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_1 + 0x58);
          *puVar18 = *puVar17;
          *(undefined8 *)((long)param_1 + 0x40) = *(undefined8 *)((long)param_1 + 0x68);
          *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x60);
          uVar9 = *(undefined8 *)((long)param_1 + 0x48);
          *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)((long)param_1 + 0x70);
          *(undefined8 *)((long)param_1 + 0x58) = uVar16;
          *puVar17 = uVar25;
          *(undefined8 *)((long)param_1 + 0x68) = uVar23;
          *(undefined8 *)((long)param_1 + 0x60) = uVar22;
          *(int *)((long)param_1 + 0x70) = (int)uVar9;
          if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_1 + 0x40)) {
            uVar16 = *(undefined8 *)((long)param_1 + 8);
            uVar25 = *(undefined8 *)param_1;
            uVar23 = *(undefined8 *)((long)param_1 + 0x18);
            uVar22 = *(undefined8 *)((long)param_1 + 0x10);
            uVar9 = *(undefined8 *)((long)param_1 + 0x20);
            *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
            *(undefined8 *)param_1 = *puVar18;
            *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x40);
            *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x38);
            *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x48);
            local_70 = (undefined4)uVar9;
            *(undefined8 *)((long)param_1 + 0x30) = uVar16;
            *puVar18 = uVar25;
            *(undefined8 *)((long)param_1 + 0x40) = uVar23;
            *(undefined8 *)((long)param_1 + 0x38) = uVar22;
            *(undefined4 *)((long)param_1 + 0x48) = local_70;
          }
        }
      }
    }
    goto switchD_009ffff0_caseD_0;
  }
  if ((long)uVar8 < 0x4d8) {
    __insertion_sort_3<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
              (param_1,param_2,param_3);
    goto switchD_009ffff0_caseD_0;
  }
  if (uVar8 < 0x9c19) {
    puVar18 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 & 0xffff) / 0x50) * 5 * 8);
    puVar12 = puVar18 + 3;
    fVar21 = *(float *)puVar12;
    if (fVar21 <= *(float *)((long)param_1 + 0x18)) {
      if (*(float *)((long)param_2 + -0x10) <= fVar21) {
        uVar6 = 0;
      }
      else {
        uVar27 = puVar18[1];
        uVar24 = *puVar18;
        uVar25 = puVar18[3];
        uVar22 = puVar18[2];
        uVar9 = puVar18[4];
        uVar26 = *puVar17;
        uVar16 = *(undefined8 *)((long)param_2 + -0x10);
        uVar23 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        puVar18[1] = *(undefined8 *)((long)param_2 + -0x20);
        *puVar18 = uVar26;
        puVar18[3] = uVar16;
        puVar18[2] = uVar23;
        *(undefined4 *)(puVar18 + 4) = uVar2;
        local_70 = (undefined4)uVar9;
        *(undefined8 *)((long)param_2 + -0x20) = uVar27;
        *puVar17 = uVar24;
        *(undefined8 *)((long)param_2 + -0x10) = uVar25;
        *(undefined8 *)((long)param_2 + -0x18) = uVar22;
        *(undefined4 *)((long)param_2 + -8) = local_70;
        if (*(float *)puVar12 <= *(float *)((long)param_1 + 0x18)) goto LAB_009ffd1c;
        uVar27 = *(undefined8 *)((long)param_1 + 8);
        uVar24 = *(undefined8 *)param_1;
        uVar25 = *(undefined8 *)((long)param_1 + 0x18);
        uVar22 = *(undefined8 *)((long)param_1 + 0x10);
        uVar6 = 2;
        uVar9 = *(undefined8 *)((long)param_1 + 0x20);
        uVar26 = *puVar18;
        uVar16 = puVar18[3];
        uVar23 = puVar18[2];
        uVar2 = *(undefined4 *)(puVar18 + 4);
        *(undefined8 *)((long)param_1 + 8) = puVar18[1];
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)((long)param_1 + 0x18) = uVar16;
        *(undefined8 *)((long)param_1 + 0x10) = uVar23;
        *(undefined4 *)((long)param_1 + 0x20) = uVar2;
        local_70 = (undefined4)uVar9;
        puVar18[1] = uVar27;
        *puVar18 = uVar24;
        puVar18[3] = uVar25;
        puVar18[2] = uVar22;
        *(undefined4 *)(puVar18 + 4) = local_70;
      }
    }
    else {
      if (*(float *)((long)param_2 + -0x10) <= fVar21) {
        uVar27 = *(undefined8 *)((long)param_1 + 8);
        uVar24 = *(undefined8 *)param_1;
        uVar25 = *(undefined8 *)((long)param_1 + 0x18);
        uVar22 = *(undefined8 *)((long)param_1 + 0x10);
        uVar9 = *(undefined8 *)((long)param_1 + 0x20);
        uVar26 = *puVar18;
        uVar16 = puVar18[3];
        uVar23 = puVar18[2];
        uVar2 = *(undefined4 *)(puVar18 + 4);
        *(undefined8 *)((long)param_1 + 8) = puVar18[1];
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)((long)param_1 + 0x18) = uVar16;
        *(undefined8 *)((long)param_1 + 0x10) = uVar23;
        *(undefined4 *)((long)param_1 + 0x20) = uVar2;
        local_70 = (undefined4)uVar9;
        puVar18[1] = uVar27;
        *puVar18 = uVar24;
        puVar18[3] = uVar25;
        puVar18[2] = uVar22;
        *(undefined4 *)(puVar18 + 4) = local_70;
        if (*(float *)((long)param_2 + -0x10) <= *(float *)puVar12) {
LAB_009ffd1c:
          uVar6 = 1;
          goto LAB_009ffd34;
        }
        uStack_88 = puVar18[1];
        local_90 = *puVar18;
        uStack_78 = puVar18[3];
        uStack_80 = puVar18[2];
        uVar6 = 2;
        local_70 = (undefined4)puVar18[4];
        uVar23 = *puVar17;
        uVar22 = *(undefined8 *)((long)param_2 + -0x10);
        uVar9 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        puVar18[1] = *(undefined8 *)((long)param_2 + -0x20);
        *puVar18 = uVar23;
        puVar18[3] = uVar22;
        puVar18[2] = uVar9;
        *(undefined4 *)(puVar18 + 4) = uVar2;
      }
      else {
        uStack_88 = *(undefined8 *)((long)param_1 + 8);
        local_90 = *(undefined8 *)param_1;
        uStack_78 = *(undefined8 *)((long)param_1 + 0x18);
        uStack_80 = *(undefined8 *)((long)param_1 + 0x10);
        uVar6 = 1;
        local_70 = (undefined4)*(undefined8 *)((long)param_1 + 0x20);
        uVar23 = *puVar17;
        uVar22 = *(undefined8 *)((long)param_2 + -0x10);
        uVar9 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x20);
        *(undefined8 *)param_1 = uVar23;
        *(undefined8 *)((long)param_1 + 0x18) = uVar22;
        *(undefined8 *)((long)param_1 + 0x10) = uVar9;
        *(undefined4 *)((long)param_1 + 0x20) = uVar2;
      }
      *(undefined4 *)((long)param_2 + -8) = local_70;
      *(undefined8 *)((long)param_2 + -0x20) = uStack_88;
      *puVar17 = local_90;
      *(undefined8 *)((long)param_2 + -0x10) = uStack_78;
      *(undefined8 *)((long)param_2 + -0x18) = uStack_80;
    }
  }
  else {
    uVar20 = uVar8 / 0xa0;
    puVar18 = (undefined8 *)((long)param_1 + (uVar8 / 0x50) * 5 * 8);
    puVar12 = (undefined8 *)((long)param_1 + uVar20 * 5 * 8);
    puVar14 = puVar18 + uVar20 * 5;
    uVar6 = __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
                      (param_1,(LightSourceQueueItem *)puVar12,(LightSourceQueueItem *)puVar18,
                       (LightSourceQueueItem *)puVar14,param_3);
    if (*(float *)(puVar14 + 3) < *(float *)((long)param_2 + -0x10)) {
      uVar27 = puVar14[1];
      uVar24 = *puVar14;
      uVar25 = puVar14[3];
      uVar22 = puVar14[2];
      uVar9 = puVar14[4];
      uVar26 = *puVar17;
      uVar16 = *(undefined8 *)((long)param_2 + -0x10);
      uVar23 = *(undefined8 *)((long)param_2 + -0x18);
      uVar2 = *(undefined4 *)((long)param_2 + -8);
      puVar14[1] = *(undefined8 *)((long)param_2 + -0x20);
      *puVar14 = uVar26;
      puVar14[3] = uVar16;
      puVar14[2] = uVar23;
      *(undefined4 *)(puVar14 + 4) = uVar2;
      local_70 = (undefined4)uVar9;
      *(undefined8 *)((long)param_2 + -0x20) = uVar27;
      *puVar17 = uVar24;
      *(undefined8 *)((long)param_2 + -0x10) = uVar25;
      *(undefined8 *)((long)param_2 + -0x18) = uVar22;
      *(undefined4 *)((long)param_2 + -8) = local_70;
      if (*(float *)(puVar14 + 3) <=
          *(float *)(undefined8 *)((long)param_1 + ((uVar8 / 0x50) * 5 + 3) * 8)) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar27 = puVar18[1];
        uVar24 = *puVar18;
        uVar25 = puVar18[3];
        uVar22 = puVar18[2];
        uVar9 = puVar18[4];
        uVar26 = *puVar14;
        uVar16 = puVar14[3];
        uVar23 = puVar14[2];
        uVar2 = *(undefined4 *)(puVar14 + 4);
        puVar18[1] = puVar14[1];
        *puVar18 = uVar26;
        puVar18[3] = uVar16;
        puVar18[2] = uVar23;
        *(undefined4 *)(puVar18 + 4) = uVar2;
        local_70 = (undefined4)uVar9;
        puVar14[1] = uVar27;
        *puVar14 = uVar24;
        puVar14[3] = uVar25;
        puVar14[2] = uVar22;
        *(undefined4 *)(puVar14 + 4) = local_70;
        if (*(float *)(undefined8 *)((long)param_1 + ((uVar8 / 0x50) * 5 + 3) * 8) <=
            *(float *)(undefined8 *)((long)param_1 + (uVar20 * 5 + 3) * 8)) {
          uVar6 = uVar6 + 2;
        }
        else {
          uVar27 = puVar12[1];
          uVar24 = *puVar12;
          uVar25 = puVar12[3];
          uVar22 = puVar12[2];
          uVar9 = puVar12[4];
          uVar26 = *puVar18;
          uVar16 = puVar18[3];
          uVar23 = puVar18[2];
          uVar2 = *(undefined4 *)(puVar18 + 4);
          puVar12[1] = puVar18[1];
          *puVar12 = uVar26;
          puVar12[3] = uVar16;
          puVar12[2] = uVar23;
          *(undefined4 *)(puVar12 + 4) = uVar2;
          local_70 = (undefined4)uVar9;
          puVar18[1] = uVar27;
          *puVar18 = uVar24;
          puVar18[3] = uVar25;
          puVar18[2] = uVar22;
          *(undefined4 *)(puVar18 + 4) = local_70;
          if (*(float *)(undefined8 *)((long)param_1 + (uVar20 * 5 + 3) * 8) <=
              *(float *)((long)param_1 + 0x18)) {
            uVar6 = uVar6 + 3;
          }
          else {
            uVar27 = *(undefined8 *)((long)param_1 + 8);
            uVar24 = *(undefined8 *)param_1;
            uVar25 = *(undefined8 *)((long)param_1 + 0x18);
            uVar22 = *(undefined8 *)((long)param_1 + 0x10);
            uVar6 = uVar6 + 4;
            uVar9 = *(undefined8 *)((long)param_1 + 0x20);
            uVar26 = *puVar12;
            uVar16 = puVar12[3];
            uVar23 = puVar12[2];
            uVar2 = *(undefined4 *)(puVar12 + 4);
            *(undefined8 *)((long)param_1 + 8) = puVar12[1];
            *(undefined8 *)param_1 = uVar26;
            *(undefined8 *)((long)param_1 + 0x18) = uVar16;
            *(undefined8 *)((long)param_1 + 0x10) = uVar23;
            *(undefined4 *)((long)param_1 + 0x20) = uVar2;
            local_70 = (undefined4)uVar9;
            puVar12[1] = uVar27;
            *puVar12 = uVar24;
            puVar12[3] = uVar25;
            puVar12[2] = uVar22;
            *(undefined4 *)(puVar12 + 4) = local_70;
          }
        }
      }
    }
  }
LAB_009ffd34:
  fVar21 = *(float *)((long)param_1 + 0x18);
  puVar12 = puVar17;
  if (fVar21 <= *(float *)(puVar18 + 3)) {
    do {
      puVar14 = puVar12;
      puVar12 = puVar14 + -5;
      if (puVar12 == (undefined8 *)param_1) {
        puVar12 = (undefined8 *)((long)param_1 + 0x28);
        if (fVar21 <= *(float *)((long)param_2 + -0x10)) goto joined_r0x009ffef0;
        goto LAB_009fff44;
      }
    } while (*(float *)(puVar14 + -2) <= *(float *)(puVar18 + 3));
    uVar27 = *(undefined8 *)((long)param_1 + 8);
    uVar24 = *(undefined8 *)param_1;
    uVar25 = *(undefined8 *)((long)param_1 + 0x18);
    uVar22 = *(undefined8 *)((long)param_1 + 0x10);
    uVar6 = uVar6 + 1;
    uVar9 = *(undefined8 *)((long)param_1 + 0x20);
    uVar26 = *puVar12;
    uVar16 = puVar14[-2];
    uVar23 = puVar14[-3];
    uVar2 = *(undefined4 *)(puVar14 + -1);
    *(undefined8 *)((long)param_1 + 8) = puVar14[-4];
    *(undefined8 *)param_1 = uVar26;
    *(undefined8 *)((long)param_1 + 0x18) = uVar16;
    *(undefined8 *)((long)param_1 + 0x10) = uVar23;
    *(undefined4 *)((long)param_1 + 0x20) = uVar2;
    local_70 = (undefined4)uVar9;
    puVar14[-4] = uVar27;
    *puVar12 = uVar24;
    puVar14[-2] = uVar25;
    puVar14[-3] = uVar22;
    *(undefined4 *)(puVar14 + -1) = local_70;
  }
  puVar14 = (undefined8 *)((long)param_1 + 0x28);
  puVar19 = puVar14;
  if (puVar14 < puVar12) {
    while( true ) {
      puVar14 = puVar19 + -5;
      do {
        puVar15 = puVar14;
        puVar14 = puVar15 + 5;
      } while (*(float *)(puVar18 + 3) < *(float *)(puVar15 + 8));
      puVar19 = puVar15 + 10;
      do {
        puVar10 = puVar12;
        puVar12 = puVar10 + -5;
      } while (*(float *)(puVar10 + -2) <= *(float *)(puVar18 + 3));
      if (puVar12 < puVar14) break;
      uVar25 = puVar15[6];
      uVar23 = *puVar14;
      uVar22 = puVar15[8];
      uVar9 = puVar15[7];
      uVar6 = uVar6 + 1;
      puVar1 = puVar12;
      if (puVar14 != puVar18) {
        puVar1 = puVar18;
      }
      uVar16 = puVar15[9];
      uVar27 = *puVar12;
      uVar26 = puVar10[-2];
      uVar24 = puVar10[-3];
      uVar2 = *(undefined4 *)(puVar10 + -1);
      puVar15[6] = puVar10[-4];
      *puVar14 = uVar27;
      puVar15[8] = uVar26;
      puVar15[7] = uVar24;
      *(undefined4 *)(puVar15 + 9) = uVar2;
      local_70 = (undefined4)uVar16;
      puVar10[-4] = uVar25;
      *puVar12 = uVar23;
      puVar10[-2] = uVar22;
      puVar10[-3] = uVar9;
      *(undefined4 *)(puVar10 + -1) = local_70;
      puVar18 = puVar1;
    }
  }
  if ((puVar14 != puVar18) && (*(float *)(puVar14 + 3) < *(float *)(puVar18 + 3))) {
    uVar27 = puVar14[1];
    uVar24 = *puVar14;
    uVar25 = puVar14[3];
    uVar22 = puVar14[2];
    uVar6 = uVar6 + 1;
    uVar9 = puVar14[4];
    uVar26 = *puVar18;
    uVar16 = puVar18[3];
    uVar23 = puVar18[2];
    uVar2 = *(undefined4 *)(puVar18 + 4);
    puVar14[1] = puVar18[1];
    *puVar14 = uVar26;
    puVar14[3] = uVar16;
    puVar14[2] = uVar23;
    *(undefined4 *)(puVar14 + 4) = uVar2;
    local_70 = (undefined4)uVar9;
    puVar18[1] = uVar27;
    *puVar18 = uVar24;
    puVar18[3] = uVar25;
    puVar18[2] = uVar22;
    *(undefined4 *)(puVar18 + 4) = local_70;
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
                      (param_1,(LightSourceQueueItem *)puVar14,param_3);
    bVar5 = __insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
                      ((LightSourceQueueItem *)(puVar14 + 5),param_2,param_3);
    if (bVar5) goto LAB_009fffd0;
    puVar18 = puVar14 + 5;
    if (bVar4) goto LAB_009ffa0c;
  }
  lVar13 = (long)param_2 - (long)puVar14 >> 3;
  lVar11 = ((long)puVar14 - (long)param_1 >> 3) * -0x3333333333333333;
  if (lVar11 + lVar13 * 0x3333333333333333 < 0 == SBORROW8(lVar11,lVar13 * -0x3333333333333333)) {
    __sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
              ((LightSourceQueueItem *)(puVar14 + 5),param_2,param_3);
    param_2 = (LightSourceQueueItem *)puVar14;
    goto LAB_009ffa04;
  }
  __sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
            (param_1,(LightSourceQueueItem *)puVar14,param_3);
  puVar18 = puVar14 + 5;
  goto LAB_009ffa0c;
joined_r0x009ffef0:
  if (puVar12 == puVar17) goto switchD_009ffff0_caseD_0;
  if (*(float *)(puVar12 + 3) < fVar21) goto LAB_009fff10;
  puVar12 = puVar12 + 5;
  goto joined_r0x009ffef0;
LAB_009fff10:
  uVar27 = puVar12[1];
  uVar24 = *puVar12;
  uVar25 = puVar12[3];
  uVar22 = puVar12[2];
  uVar9 = puVar12[4];
  uVar26 = *puVar17;
  uVar16 = *(undefined8 *)((long)param_2 + -0x10);
  uVar23 = *(undefined8 *)((long)param_2 + -0x18);
  uVar2 = *(undefined4 *)((long)param_2 + -8);
  puVar12[1] = *(undefined8 *)((long)param_2 + -0x20);
  *puVar12 = uVar26;
  puVar12[3] = uVar16;
  puVar12[2] = uVar23;
  *(undefined4 *)(puVar12 + 4) = uVar2;
  puVar12 = puVar12 + 5;
  local_70 = (undefined4)uVar9;
  *(undefined8 *)((long)param_2 + -0x20) = uVar27;
  *puVar17 = uVar24;
  *(undefined8 *)((long)param_2 + -0x10) = uVar25;
  *(undefined8 *)((long)param_2 + -0x18) = uVar22;
  *(undefined4 *)((long)param_2 + -8) = local_70;
LAB_009fff44:
  puVar14 = puVar17;
  if (puVar12 == puVar17) goto switchD_009ffff0_caseD_0;
  while( true ) {
    puVar18 = puVar12 + -5;
    do {
      puVar19 = puVar18;
      puVar18 = puVar19 + 5;
    } while (*(float *)((long)param_1 + 0x18) <= *(float *)(puVar19 + 8));
    puVar12 = puVar19 + 10;
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + -5;
    } while (*(float *)(puVar15 + -2) < *(float *)((long)param_1 + 0x18));
    if (puVar14 <= puVar18) break;
    uVar27 = puVar19[6];
    uVar24 = *puVar18;
    uVar25 = puVar19[8];
    uVar22 = puVar19[7];
    uVar9 = puVar19[9];
    uVar26 = *puVar14;
    uVar16 = puVar15[-2];
    uVar23 = puVar15[-3];
    uVar2 = *(undefined4 *)(puVar15 + -1);
    puVar19[6] = puVar15[-4];
    *puVar18 = uVar26;
    puVar19[8] = uVar16;
    puVar19[7] = uVar23;
    *(undefined4 *)(puVar19 + 9) = uVar2;
    local_70 = (undefined4)uVar9;
    puVar15[-4] = uVar27;
    *puVar14 = uVar24;
    puVar15[-2] = uVar25;
    puVar15[-3] = uVar22;
    *(undefined4 *)(puVar15 + -1) = local_70;
  }
  goto LAB_009ffa0c;
LAB_009fffd0:
  param_2 = (LightSourceQueueItem *)puVar14;
  if (bVar4) {
switchD_009ffff0_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_009ffa04;
}


