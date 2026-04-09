// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
// Entry Point: 00a006a0
// Size: 1188 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, CompareLightSourceByShadingImportance * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceByShadingImportance&) */

bool std::__ndk1::
     __insertion_sort_incomplete<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               CompareLightSourceByShadingImportance *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar3 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  lVar11 = *(long *)(lVar3 + 0x28);
  if (uVar6 < 6) {
    bVar5 = true;
    switch(uVar6) {
    default:
      goto switchD_00a00708_caseD_0;
    case 2:
      if (*(float *)(param_1 + 0x18) < *(float *)(param_2 + -0x10)) {
        uVar21 = *(undefined8 *)(param_1 + 8);
        uVar20 = *(undefined8 *)param_1;
        uVar23 = *(undefined8 *)(param_1 + 0x18);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        bVar5 = true;
        uVar15 = *(undefined8 *)(param_2 + -0x20);
        uVar14 = *(undefined8 *)(param_2 + -0x28);
        uVar18 = *(undefined8 *)(param_2 + -0x10);
        uVar17 = *(undefined8 *)(param_2 + -0x18);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 8) = uVar15;
        *(undefined8 *)param_1 = uVar14;
        *(undefined8 *)(param_1 + 0x18) = uVar18;
        *(undefined8 *)(param_1 + 0x10) = uVar17;
        *(undefined8 *)(param_2 + -0x10) = uVar23;
        *(undefined8 *)(param_2 + -0x18) = uVar22;
        *(undefined8 *)(param_2 + -0x20) = uVar21;
        *(undefined8 *)(param_2 + -0x28) = uVar20;
        *(int *)(param_2 + -8) = (int)uVar12;
        goto switchD_00a00708_caseD_0;
      }
      break;
    case 3:
      fVar16 = *(float *)(param_1 + 0x40);
      puVar7 = (undefined8 *)(param_1 + 0x28);
      puVar8 = (undefined8 *)(param_2 + -0x28);
      if (fVar16 <= *(float *)(param_1 + 0x18)) {
        if (fVar16 < *(float *)(param_2 + -0x10)) {
          uVar15 = *puVar8;
          uVar14 = *(undefined8 *)(param_2 + -0x10);
          uVar12 = *(undefined8 *)(param_2 + -0x18);
          uVar18 = *(undefined8 *)(param_1 + 0x30);
          uVar17 = *puVar7;
          uVar21 = *(undefined8 *)(param_1 + 0x40);
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar2 = *(undefined4 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + -0x20);
          *puVar7 = uVar15;
          *(undefined8 *)(param_1 + 0x40) = uVar14;
          *(undefined8 *)(param_1 + 0x38) = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
          *(undefined8 *)(param_2 + -0x20) = uVar18;
          *puVar8 = uVar17;
          *(undefined8 *)(param_2 + -0x10) = uVar21;
          *(undefined8 *)(param_2 + -0x18) = uVar20;
          *(int *)(param_2 + -8) = (int)uVar12;
          if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x40)) {
            bVar5 = true;
            uVar17 = *(undefined8 *)(param_1 + 8);
            uVar15 = *(undefined8 *)param_1;
            uVar14 = *(undefined8 *)(param_1 + 0x18);
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)param_1 = *puVar7;
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x30) = uVar17;
            *puVar7 = uVar15;
            *(undefined8 *)(param_1 + 0x40) = uVar14;
            *(undefined8 *)(param_1 + 0x38) = uVar12;
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) = (int)uVar12;
            goto switchD_00a00708_caseD_0;
          }
        }
      }
      else {
        if (fVar16 < *(float *)(param_2 + -0x10)) {
          uVar15 = *puVar8;
          uVar14 = *(undefined8 *)(param_2 + -0x10);
          uVar12 = *(undefined8 *)(param_2 + -0x18);
          bVar5 = true;
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar21 = *(undefined8 *)(param_1 + 0x18);
          uVar20 = *(undefined8 *)(param_1 + 0x10);
          uVar2 = *(undefined4 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
          *(undefined8 *)param_1 = uVar15;
          *(undefined8 *)(param_1 + 0x18) = uVar14;
          *(undefined8 *)(param_1 + 0x10) = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
          *(undefined8 *)(param_2 + -0x20) = uVar18;
          *puVar8 = uVar17;
          *(undefined8 *)(param_2 + -0x10) = uVar21;
          *(undefined8 *)(param_2 + -0x18) = uVar20;
          *(int *)(param_2 + -8) = (int)uVar12;
          goto switchD_00a00708_caseD_0;
        }
        uVar17 = *(undefined8 *)(param_1 + 8);
        uVar15 = *(undefined8 *)param_1;
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)param_1 = *puVar7;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar17;
        *puVar7 = uVar15;
        *(undefined8 *)(param_1 + 0x40) = uVar14;
        *(undefined8 *)(param_1 + 0x38) = uVar12;
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = (int)uVar12;
        if (*(float *)(param_1 + 0x40) < *(float *)(param_2 + -0x10)) {
          uVar15 = *puVar8;
          uVar14 = *(undefined8 *)(param_2 + -0x10);
          uVar12 = *(undefined8 *)(param_2 + -0x18);
          bVar5 = true;
          uVar18 = *(undefined8 *)(param_1 + 0x30);
          uVar17 = *puVar7;
          uVar21 = *(undefined8 *)(param_1 + 0x40);
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar2 = *(undefined4 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + -0x20);
          *puVar7 = uVar15;
          *(undefined8 *)(param_1 + 0x40) = uVar14;
          *(undefined8 *)(param_1 + 0x38) = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
          *(undefined8 *)(param_2 + -0x20) = uVar18;
          *puVar8 = uVar17;
          *(undefined8 *)(param_2 + -0x10) = uVar21;
          *(undefined8 *)(param_2 + -0x18) = uVar20;
          *(int *)(param_2 + -8) = (int)uVar12;
          goto switchD_00a00708_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
                (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
      break;
    case 5:
      puVar7 = (undefined8 *)(param_1 + 0x28);
      puVar8 = (undefined8 *)(param_1 + 0x50);
      puVar1 = (undefined8 *)(param_1 + 0x78);
      __sort4<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
                (param_1,(LightSourceQueueItem *)puVar7,(LightSourceQueueItem *)puVar8,
                 (LightSourceQueueItem *)puVar1,param_3);
      if (*(float *)(param_1 + 0x90) < *(float *)(param_2 + -0x10)) {
        uVar21 = *(undefined8 *)(param_1 + 0x80);
        uVar20 = *puVar1;
        uVar23 = *(undefined8 *)(param_1 + 0x90);
        uVar22 = *(undefined8 *)(param_1 + 0x88);
        uVar15 = *(undefined8 *)(param_2 + -0x20);
        uVar14 = *(undefined8 *)(param_2 + -0x28);
        uVar18 = *(undefined8 *)(param_2 + -0x10);
        uVar17 = *(undefined8 *)(param_2 + -0x18);
        uVar12 = *(undefined8 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 0x80) = uVar15;
        *puVar1 = uVar14;
        *(undefined8 *)(param_1 + 0x90) = uVar18;
        *(undefined8 *)(param_1 + 0x88) = uVar17;
        *(undefined8 *)(param_2 + -0x10) = uVar23;
        *(undefined8 *)(param_2 + -0x18) = uVar22;
        *(undefined8 *)(param_2 + -0x20) = uVar21;
        *(undefined8 *)(param_2 + -0x28) = uVar20;
        *(int *)(param_2 + -8) = (int)uVar12;
        if (*(float *)(param_1 + 0x68) < *(float *)(param_1 + 0x90)) {
          uVar18 = *(undefined8 *)(param_1 + 0x58);
          uVar17 = *puVar8;
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          uVar14 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x80);
          *puVar8 = *puVar1;
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x90);
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x88);
          uVar12 = *(undefined8 *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x98);
          *(undefined8 *)(param_1 + 0x80) = uVar18;
          *puVar1 = uVar17;
          *(undefined8 *)(param_1 + 0x90) = uVar15;
          *(undefined8 *)(param_1 + 0x88) = uVar14;
          *(int *)(param_1 + 0x98) = (int)uVar12;
          if (*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x68)) {
            uVar18 = *(undefined8 *)(param_1 + 0x30);
            uVar17 = *puVar7;
            uVar15 = *(undefined8 *)(param_1 + 0x40);
            uVar14 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
            *puVar7 = *puVar8;
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
            uVar12 = *(undefined8 *)(param_1 + 0x48);
            *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
            *(undefined8 *)(param_1 + 0x58) = uVar18;
            *puVar8 = uVar17;
            *(undefined8 *)(param_1 + 0x68) = uVar15;
            *(undefined8 *)(param_1 + 0x60) = uVar14;
            *(int *)(param_1 + 0x70) = (int)uVar12;
            if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x40)) {
              bVar5 = true;
              uVar17 = *(undefined8 *)(param_1 + 8);
              uVar15 = *(undefined8 *)param_1;
              uVar14 = *(undefined8 *)(param_1 + 0x18);
              uVar12 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)param_1 = *puVar7;
              *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
              *(undefined8 *)(param_1 + 0x30) = uVar17;
              *puVar7 = uVar15;
              *(undefined8 *)(param_1 + 0x40) = uVar14;
              *(undefined8 *)(param_1 + 0x38) = uVar12;
              uVar12 = *(undefined8 *)(param_1 + 0x20);
              *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
              *(int *)(param_1 + 0x48) = (int)uVar12;
              goto switchD_00a00708_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    fVar19 = *(float *)(param_1 + 0x40);
    puVar7 = (undefined8 *)(param_1 + 0x50);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    fVar16 = *(float *)(param_1 + 0x68);
    if (fVar19 <= *(float *)(param_1 + 0x18)) {
      if (fVar19 < fVar16) {
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        uVar17 = *puVar8;
        uVar15 = *(undefined8 *)(param_1 + 0x40);
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
        *puVar8 = *puVar7;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x58) = uVar18;
        *puVar7 = uVar17;
        *(undefined8 *)(param_1 + 0x68) = uVar15;
        *(undefined8 *)(param_1 + 0x60) = uVar14;
        *(int *)(param_1 + 0x70) = (int)uVar12;
        if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x40)) {
          uVar17 = *(undefined8 *)(param_1 + 8);
          uVar15 = *(undefined8 *)param_1;
          uVar14 = *(undefined8 *)(param_1 + 0x18);
          uVar12 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)param_1 = *puVar8;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x30) = uVar17;
          *puVar8 = uVar15;
          *(undefined8 *)(param_1 + 0x40) = uVar14;
          *(undefined8 *)(param_1 + 0x38) = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
          *(int *)(param_1 + 0x48) = (int)uVar12;
        }
      }
    }
    else if (fVar16 <= fVar19) {
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *puVar8;
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 8);
      *puVar8 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 8) = uVar17;
      *(undefined8 *)param_1 = uVar15;
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      *(undefined8 *)(param_1 + 0x10) = uVar12;
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      if (*(float *)(param_1 + 0x40) < fVar16) {
        uVar17 = *(undefined8 *)(param_1 + 0x30);
        uVar15 = *puVar8;
        uVar14 = *(undefined8 *)(param_1 + 0x40);
        uVar12 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
        *puVar8 = *puVar7;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x58) = uVar17;
        *puVar7 = uVar15;
        *(undefined8 *)(param_1 + 0x68) = uVar14;
        *(undefined8 *)(param_1 + 0x60) = uVar12;
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = (int)uVar12;
      }
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 8);
      uVar15 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)param_1 = *puVar7;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = uVar17;
      *puVar7 = uVar15;
      *(undefined8 *)(param_1 + 0x68) = uVar14;
      *(undefined8 *)(param_1 + 0x60) = uVar12;
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = (int)uVar12;
    }
    if (param_1 + 0x78 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar8 = (undefined8 *)(param_1 + 0x78);
      do {
        fVar16 = *(float *)(puVar8 + 3);
        if (*(float *)(puVar7 + 3) < fVar16) {
          uVar17 = puVar8[1];
          uVar15 = *puVar8;
          uVar14 = puVar8[2];
          uVar12 = *(undefined8 *)((long)puVar8 + 0x1c);
          lVar4 = lVar9;
          do {
            lVar13 = lVar4;
            *(undefined8 *)(param_1 + lVar13 + 0x80) = *(undefined8 *)(param_1 + lVar13 + 0x58);
            *(undefined8 *)(param_1 + lVar13 + 0x78) = *(undefined8 *)(param_1 + lVar13 + 0x50);
            *(undefined8 *)(param_1 + lVar13 + 0x90) = *(undefined8 *)(param_1 + lVar13 + 0x68);
            *(undefined8 *)(param_1 + lVar13 + 0x88) = *(undefined8 *)(param_1 + lVar13 + 0x60);
            *(undefined4 *)(param_1 + lVar13 + 0x98) = *(undefined4 *)(param_1 + lVar13 + 0x70);
            puVar7 = (undefined8 *)param_1;
            if (lVar13 == -0x50) goto LAB_00a00a60;
            lVar4 = lVar13 + -0x28;
          } while (*(float *)(param_1 + lVar13 + 0x40) < fVar16);
          puVar7 = (undefined8 *)(param_1 + lVar13 + 0x50);
LAB_00a00a60:
          iVar10 = iVar10 + 1;
          *(float *)(puVar7 + 3) = fVar16;
          puVar7[1] = uVar17;
          *puVar7 = uVar15;
          puVar7[2] = uVar14;
          *(undefined8 *)((long)puVar7 + 0x1c) = uVar12;
          if (iVar10 == 8) {
            bVar5 = puVar8 + 5 == (undefined8 *)param_2;
            goto switchD_00a00708_caseD_0;
          }
        }
        puVar1 = puVar8 + 5;
        lVar9 = lVar9 + 0x28;
        puVar7 = puVar8;
        puVar8 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar5 = true;
switchD_00a00708_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


