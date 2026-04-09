// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
// Entry Point: 00a33144
// Size: 2000 bytes
// Signature: void __cdecl __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>(ShaderBucket * param_1, ShaderBucket * param_2, SortByDepth * param_3)


/* void std::__ndk1::__sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,
   RenderQueueItemAllocator::ShaderBucket*>(RenderQueueItemAllocator::ShaderBucket*,
   RenderQueueItemAllocator::ShaderBucket*, RenderQueueItemAllocator::ShaderBucket::SortByDepth&) */

void std::__ndk1::
     __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
               (ShaderBucket *param_1,ShaderBucket *param_2,SortByDepth *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
LAB_00a33184:
  puVar15 = (undefined8 *)((long)param_2 + -0x20);
  puVar11 = (undefined8 *)param_1;
LAB_00a3318c:
  param_1 = (ShaderBucket *)puVar11;
  uVar12 = (long)param_2 - (long)param_1;
  lVar7 = (long)uVar12 >> 5;
  switch(lVar7) {
  case 0:
  case 1:
    goto switchD_00a335cc_caseD_0;
  case 2:
    if (*(double *)((long)param_2 + -8) < *(double *)((long)param_1 + 0x18)) {
      uVar26 = *(undefined8 *)((long)param_1 + 8);
      uVar22 = *(undefined8 *)param_1;
      uVar23 = *(undefined8 *)((long)param_1 + 0x18);
      uVar16 = *(undefined8 *)((long)param_1 + 0x10);
      uVar25 = *(undefined8 *)((long)param_2 + -0x20);
      uVar24 = *(undefined8 *)((long)param_2 + -8);
      uVar20 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x18);
      *(undefined8 *)param_1 = uVar25;
      *(undefined8 *)((long)param_1 + 0x18) = uVar24;
      *(undefined8 *)((long)param_1 + 0x10) = uVar20;
      *(undefined8 *)((long)param_2 + -0x18) = uVar26;
      *(undefined8 *)((long)param_2 + -0x20) = uVar22;
      *(undefined8 *)((long)param_2 + -8) = uVar23;
      *(undefined8 *)((long)param_2 + -0x10) = uVar16;
    }
    goto switchD_00a335cc_caseD_0;
  case 3:
    dVar21 = *(double *)((long)param_1 + 0x38);
    puVar11 = (undefined8 *)((long)param_1 + 0x20);
    if (*(double *)((long)param_1 + 0x18) <= dVar21) {
      if (*(double *)((long)param_2 + -8) < dVar21) {
        uVar20 = *(undefined8 *)((long)param_1 + 0x28);
        uVar16 = *puVar11;
        uVar24 = *(undefined8 *)((long)param_1 + 0x38);
        uVar23 = *(undefined8 *)((long)param_1 + 0x30);
        uVar22 = *puVar15;
        uVar26 = *(undefined8 *)((long)param_2 + -8);
        uVar25 = *(undefined8 *)((long)param_2 + -0x10);
        *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_2 + -0x18);
        *puVar11 = uVar22;
        *(undefined8 *)((long)param_1 + 0x38) = uVar26;
        *(undefined8 *)((long)param_1 + 0x30) = uVar25;
        *(undefined8 *)((long)param_2 + -0x18) = uVar20;
        *puVar15 = uVar16;
        *(undefined8 *)((long)param_2 + -8) = uVar24;
        *(undefined8 *)((long)param_2 + -0x10) = uVar23;
        if (*(double *)((long)param_1 + 0x38) < *(double *)((long)param_1 + 0x18)) {
          uVar24 = *(undefined8 *)((long)param_1 + 8);
          uVar23 = *(undefined8 *)param_1;
          uVar20 = *(undefined8 *)((long)param_1 + 0x18);
          uVar16 = *(undefined8 *)((long)param_1 + 0x10);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
          *(undefined8 *)param_1 = *puVar11;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
          *(undefined8 *)((long)param_1 + 0x28) = uVar24;
          *puVar11 = uVar23;
          *(undefined8 *)((long)param_1 + 0x38) = uVar20;
          *(undefined8 *)((long)param_1 + 0x30) = uVar16;
        }
      }
    }
    else if (dVar21 <= *(double *)((long)param_2 + -8)) {
      uVar24 = *(undefined8 *)((long)param_1 + 8);
      uVar23 = *(undefined8 *)param_1;
      uVar20 = *(undefined8 *)((long)param_1 + 0x18);
      uVar16 = *(undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
      *(undefined8 *)param_1 = *puVar11;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)((long)param_1 + 0x28) = uVar24;
      *puVar11 = uVar23;
      *(undefined8 *)((long)param_1 + 0x38) = uVar20;
      *(undefined8 *)((long)param_1 + 0x30) = uVar16;
      if (*(double *)((long)param_2 + -8) < *(double *)((long)param_1 + 0x38)) {
        uVar20 = *(undefined8 *)((long)param_1 + 0x28);
        uVar16 = *puVar11;
        uVar24 = *(undefined8 *)((long)param_1 + 0x38);
        uVar23 = *(undefined8 *)((long)param_1 + 0x30);
        uVar22 = *puVar15;
        uVar26 = *(undefined8 *)((long)param_2 + -8);
        uVar25 = *(undefined8 *)((long)param_2 + -0x10);
        *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_2 + -0x18);
        *puVar11 = uVar22;
        *(undefined8 *)((long)param_1 + 0x38) = uVar26;
        *(undefined8 *)((long)param_1 + 0x30) = uVar25;
        *(undefined8 *)((long)param_2 + -0x18) = uVar20;
        *puVar15 = uVar16;
        *(undefined8 *)((long)param_2 + -8) = uVar24;
        *(undefined8 *)((long)param_2 + -0x10) = uVar23;
      }
    }
    else {
      uVar26 = *(undefined8 *)((long)param_1 + 8);
      uVar22 = *(undefined8 *)param_1;
      uVar23 = *(undefined8 *)((long)param_1 + 0x18);
      uVar16 = *(undefined8 *)((long)param_1 + 0x10);
      uVar25 = *puVar15;
      uVar24 = *(undefined8 *)((long)param_2 + -8);
      uVar20 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x18);
      *(undefined8 *)param_1 = uVar25;
      *(undefined8 *)((long)param_1 + 0x18) = uVar24;
      *(undefined8 *)((long)param_1 + 0x10) = uVar20;
      *(undefined8 *)((long)param_2 + -0x18) = uVar26;
      *puVar15 = uVar22;
      *(undefined8 *)((long)param_2 + -8) = uVar23;
      *(undefined8 *)((long)param_2 + -0x10) = uVar16;
    }
    goto switchD_00a335cc_caseD_0;
  case 4:
    __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
              (param_1,(ShaderBucket *)((long)param_1 + 0x20),(ShaderBucket *)((long)param_1 + 0x40)
               ,(ShaderBucket *)puVar15,param_3);
    goto switchD_00a335cc_caseD_0;
  case 5:
    puVar11 = (undefined8 *)((long)param_1 + 0x20);
    puVar15 = (undefined8 *)((long)param_1 + 0x40);
    puVar10 = (undefined8 *)((long)param_1 + 0x60);
    __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
              (param_1,(ShaderBucket *)puVar11,(ShaderBucket *)puVar15,(ShaderBucket *)puVar10,
               param_3);
    if (*(double *)((long)param_2 + -8) < *(double *)((long)param_1 + 0x78)) {
      uVar20 = *(undefined8 *)((long)param_1 + 0x68);
      uVar16 = *puVar10;
      uVar24 = *(undefined8 *)((long)param_1 + 0x78);
      uVar23 = *(undefined8 *)((long)param_1 + 0x70);
      uVar22 = *(undefined8 *)((long)param_2 + -0x20);
      uVar26 = *(undefined8 *)((long)param_2 + -8);
      uVar25 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 0x68) = *(undefined8 *)((long)param_2 + -0x18);
      *puVar10 = uVar22;
      *(undefined8 *)((long)param_1 + 0x78) = uVar26;
      *(undefined8 *)((long)param_1 + 0x70) = uVar25;
      *(undefined8 *)((long)param_2 + -0x18) = uVar20;
      *(undefined8 *)((long)param_2 + -0x20) = uVar16;
      *(undefined8 *)((long)param_2 + -8) = uVar24;
      *(undefined8 *)((long)param_2 + -0x10) = uVar23;
      if (*(double *)((long)param_1 + 0x78) < *(double *)((long)param_1 + 0x58)) {
        uVar24 = *(undefined8 *)((long)param_1 + 0x48);
        uVar23 = *puVar15;
        uVar20 = *(undefined8 *)((long)param_1 + 0x58);
        uVar16 = *(undefined8 *)((long)param_1 + 0x50);
        *(undefined8 *)((long)param_1 + 0x48) = *(undefined8 *)((long)param_1 + 0x68);
        *puVar15 = *puVar10;
        *(undefined8 *)((long)param_1 + 0x58) = *(undefined8 *)((long)param_1 + 0x78);
        *(undefined8 *)((long)param_1 + 0x50) = *(undefined8 *)((long)param_1 + 0x70);
        *(undefined8 *)((long)param_1 + 0x68) = uVar24;
        *puVar10 = uVar23;
        *(undefined8 *)((long)param_1 + 0x78) = uVar20;
        *(undefined8 *)((long)param_1 + 0x70) = uVar16;
        if (*(double *)((long)param_1 + 0x58) < *(double *)((long)param_1 + 0x38)) {
          uVar24 = *(undefined8 *)((long)param_1 + 0x28);
          uVar23 = *puVar11;
          uVar20 = *(undefined8 *)((long)param_1 + 0x38);
          uVar16 = *(undefined8 *)((long)param_1 + 0x30);
          *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_1 + 0x48);
          *puVar11 = *puVar15;
          *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x58);
          *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_1 + 0x50);
          *(undefined8 *)((long)param_1 + 0x48) = uVar24;
          *puVar15 = uVar23;
          *(undefined8 *)((long)param_1 + 0x58) = uVar20;
          *(undefined8 *)((long)param_1 + 0x50) = uVar16;
          if (*(double *)((long)param_1 + 0x38) < *(double *)((long)param_1 + 0x18)) {
            uVar24 = *(undefined8 *)((long)param_1 + 8);
            uVar23 = *(undefined8 *)param_1;
            uVar20 = *(undefined8 *)((long)param_1 + 0x18);
            uVar16 = *(undefined8 *)((long)param_1 + 0x10);
            *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
            *(undefined8 *)param_1 = *puVar11;
            *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
            *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
            *(undefined8 *)((long)param_1 + 0x28) = uVar24;
            *puVar11 = uVar23;
            *(undefined8 *)((long)param_1 + 0x38) = uVar20;
            *(undefined8 *)((long)param_1 + 0x30) = uVar16;
          }
        }
      }
    }
    goto switchD_00a335cc_caseD_0;
  }
  if ((long)uVar12 < 0x3e0) {
    dVar27 = *(double *)((long)param_1 + 0x38);
    puVar11 = (undefined8 *)((long)param_1 + 0x40);
    puVar15 = (undefined8 *)((long)param_1 + 0x20);
    dVar21 = *(double *)((long)param_1 + 0x58);
    if (*(double *)((long)param_1 + 0x18) <= dVar27) {
      if (dVar21 < dVar27) {
        uVar24 = *(undefined8 *)((long)param_1 + 0x28);
        uVar23 = *puVar15;
        uVar20 = *(undefined8 *)((long)param_1 + 0x38);
        uVar16 = *(undefined8 *)((long)param_1 + 0x30);
        *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_1 + 0x48);
        *puVar15 = *puVar11;
        *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x58);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_1 + 0x50);
        *(undefined8 *)((long)param_1 + 0x48) = uVar24;
        *puVar11 = uVar23;
        *(undefined8 *)((long)param_1 + 0x58) = uVar20;
        *(undefined8 *)((long)param_1 + 0x50) = uVar16;
        if (*(double *)((long)param_1 + 0x38) < *(double *)((long)param_1 + 0x18)) {
          uVar24 = *(undefined8 *)((long)param_1 + 8);
          uVar23 = *(undefined8 *)param_1;
          uVar20 = *(undefined8 *)((long)param_1 + 0x18);
          uVar16 = *(undefined8 *)((long)param_1 + 0x10);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
          *(undefined8 *)param_1 = *puVar15;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
          *(undefined8 *)((long)param_1 + 0x28) = uVar24;
          *puVar15 = uVar23;
          *(undefined8 *)((long)param_1 + 0x38) = uVar20;
          *(undefined8 *)((long)param_1 + 0x30) = uVar16;
        }
      }
    }
    else if (dVar27 <= dVar21) {
      uVar24 = *(undefined8 *)((long)param_1 + 8);
      uVar23 = *(undefined8 *)param_1;
      uVar20 = *(undefined8 *)((long)param_1 + 0x18);
      uVar16 = *(undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
      *(undefined8 *)param_1 = *puVar15;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)((long)param_1 + 0x28) = uVar24;
      *puVar15 = uVar23;
      *(undefined8 *)((long)param_1 + 0x38) = uVar20;
      *(undefined8 *)((long)param_1 + 0x30) = uVar16;
      if (dVar21 < *(double *)((long)param_1 + 0x38)) {
        uVar20 = *(undefined8 *)((long)param_1 + 0x28);
        uVar16 = *puVar15;
        uVar24 = *(undefined8 *)((long)param_1 + 0x38);
        uVar23 = *(undefined8 *)((long)param_1 + 0x30);
        *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_1 + 0x48);
        *puVar15 = *puVar11;
        *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x58);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_1 + 0x50);
        *(undefined8 *)((long)param_1 + 0x48) = uVar20;
        *puVar11 = uVar16;
        *(undefined8 *)((long)param_1 + 0x58) = uVar24;
        *(undefined8 *)((long)param_1 + 0x50) = uVar23;
      }
    }
    else {
      uVar24 = *(undefined8 *)((long)param_1 + 8);
      uVar23 = *(undefined8 *)param_1;
      uVar20 = *(undefined8 *)((long)param_1 + 0x18);
      uVar16 = *(undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x48);
      *(undefined8 *)param_1 = *puVar11;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x58);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x50);
      *(undefined8 *)((long)param_1 + 0x48) = uVar24;
      *puVar11 = uVar23;
      *(undefined8 *)((long)param_1 + 0x58) = uVar20;
      *(undefined8 *)((long)param_1 + 0x50) = uVar16;
    }
    if ((undefined8 *)((long)param_1 + 0x60) == (undefined8 *)param_2)
    goto switchD_00a335cc_caseD_0;
    lVar7 = 0;
    puVar15 = (undefined8 *)((long)param_1 + 0x60);
    goto LAB_00a33880;
  }
  lVar19 = lVar7;
  if (lVar7 < 0) {
    lVar19 = lVar7 + 1;
  }
  lVar19 = lVar19 >> 1;
  puVar11 = (undefined8 *)((long)param_1 + lVar19 * 4 * 8);
  if (uVar12 < 0x7ce1) {
    pdVar8 = (double *)(puVar11 + 3);
    dVar21 = *pdVar8;
    if (*(double *)((long)param_1 + 0x18) <= dVar21) {
      if (dVar21 <= *(double *)((long)param_2 + -8)) {
        uVar5 = 0;
      }
      else {
        uVar26 = puVar11[1];
        uVar22 = *puVar11;
        uVar23 = puVar11[3];
        uVar16 = puVar11[2];
        uVar25 = *puVar15;
        uVar24 = *(undefined8 *)((long)param_2 + -8);
        uVar20 = *(undefined8 *)((long)param_2 + -0x10);
        puVar11[1] = *(undefined8 *)((long)param_2 + -0x18);
        *puVar11 = uVar25;
        puVar11[3] = uVar24;
        puVar11[2] = uVar20;
        *(undefined8 *)((long)param_2 + -0x18) = uVar26;
        *puVar15 = uVar22;
        *(undefined8 *)((long)param_2 + -8) = uVar23;
        *(undefined8 *)((long)param_2 + -0x10) = uVar16;
        if (*(double *)((long)param_1 + 0x18) <= *pdVar8) goto LAB_00a33384;
        uVar26 = *(undefined8 *)((long)param_1 + 8);
        uVar22 = *(undefined8 *)param_1;
        uVar23 = *(undefined8 *)((long)param_1 + 0x18);
        uVar16 = *(undefined8 *)((long)param_1 + 0x10);
        uVar5 = 2;
        uVar25 = *puVar11;
        uVar24 = puVar11[3];
        uVar20 = puVar11[2];
        *(undefined8 *)((long)param_1 + 8) = puVar11[1];
        *(undefined8 *)param_1 = uVar25;
        *(undefined8 *)((long)param_1 + 0x18) = uVar24;
        *(undefined8 *)((long)param_1 + 0x10) = uVar20;
        puVar11[1] = uVar26;
        *puVar11 = uVar22;
        puVar11[3] = uVar23;
        puVar11[2] = uVar16;
      }
    }
    else {
      if (dVar21 <= *(double *)((long)param_2 + -8)) {
        uVar26 = *(undefined8 *)((long)param_1 + 8);
        uVar22 = *(undefined8 *)param_1;
        uVar23 = *(undefined8 *)((long)param_1 + 0x18);
        uVar16 = *(undefined8 *)((long)param_1 + 0x10);
        uVar25 = *puVar11;
        uVar24 = puVar11[3];
        uVar20 = puVar11[2];
        *(undefined8 *)((long)param_1 + 8) = puVar11[1];
        *(undefined8 *)param_1 = uVar25;
        *(undefined8 *)((long)param_1 + 0x18) = uVar24;
        *(undefined8 *)((long)param_1 + 0x10) = uVar20;
        puVar11[1] = uVar26;
        *puVar11 = uVar22;
        puVar11[3] = uVar23;
        puVar11[2] = uVar16;
        if (*pdVar8 <= *(double *)((long)param_2 + -8)) {
LAB_00a33384:
          uVar5 = 1;
          goto LAB_00a33398;
        }
        uStack_88 = puVar11[1];
        local_90 = *puVar11;
        uStack_78 = puVar11[3];
        local_80 = puVar11[2];
        uVar5 = 2;
        uVar23 = *puVar15;
        uVar20 = *(undefined8 *)((long)param_2 + -8);
        uVar16 = *(undefined8 *)((long)param_2 + -0x10);
        puVar11[1] = *(undefined8 *)((long)param_2 + -0x18);
        *puVar11 = uVar23;
        puVar11[3] = uVar20;
        puVar11[2] = uVar16;
      }
      else {
        uStack_88 = *(undefined8 *)((long)param_1 + 8);
        local_90 = *(undefined8 *)param_1;
        uStack_78 = *(undefined8 *)((long)param_1 + 0x18);
        local_80 = *(undefined8 *)((long)param_1 + 0x10);
        uVar5 = 1;
        uVar23 = *puVar15;
        uVar20 = *(undefined8 *)((long)param_2 + -8);
        uVar16 = *(undefined8 *)((long)param_2 + -0x10);
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x18);
        *(undefined8 *)param_1 = uVar23;
        *(undefined8 *)((long)param_1 + 0x18) = uVar20;
        *(undefined8 *)((long)param_1 + 0x10) = uVar16;
      }
      *(undefined8 *)((long)param_2 + -0x18) = uStack_88;
      *puVar15 = local_90;
      *(undefined8 *)((long)param_2 + -8) = uStack_78;
      *(undefined8 *)((long)param_2 + -0x10) = local_80;
    }
  }
  else {
    lVar18 = lVar7 + 3;
    if (-1 < lVar7) {
      lVar18 = lVar7;
    }
    lVar18 = lVar18 >> 2;
    puVar10 = (undefined8 *)((long)param_1 + lVar18 * 4 * 8);
    puVar13 = puVar11 + lVar18 * 4;
    uVar5 = __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
                      (param_1,(ShaderBucket *)puVar10,(ShaderBucket *)puVar11,
                       (ShaderBucket *)puVar13,param_3);
    if (*(double *)((long)param_2 + -8) < (double)puVar13[3]) {
      uVar26 = puVar13[1];
      uVar22 = *puVar13;
      uVar23 = puVar13[3];
      uVar16 = puVar13[2];
      uVar25 = *puVar15;
      uVar24 = *(undefined8 *)((long)param_2 + -8);
      uVar20 = *(undefined8 *)((long)param_2 + -0x10);
      puVar13[1] = *(undefined8 *)((long)param_2 + -0x18);
      *puVar13 = uVar25;
      puVar13[3] = uVar24;
      puVar13[2] = uVar20;
      *(undefined8 *)((long)param_2 + -0x18) = uVar26;
      *puVar15 = uVar22;
      *(undefined8 *)((long)param_2 + -8) = uVar23;
      *(undefined8 *)((long)param_2 + -0x10) = uVar16;
      if (*(double *)((long)param_1 + (lVar19 * 4 + 3) * 8) <= (double)puVar13[3]) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar26 = puVar11[1];
        uVar22 = *puVar11;
        uVar23 = puVar11[3];
        uVar16 = puVar11[2];
        uVar25 = *puVar13;
        uVar24 = puVar13[3];
        uVar20 = puVar13[2];
        puVar11[1] = puVar13[1];
        *puVar11 = uVar25;
        puVar11[3] = uVar24;
        puVar11[2] = uVar20;
        puVar13[1] = uVar26;
        *puVar13 = uVar22;
        puVar13[3] = uVar23;
        puVar13[2] = uVar16;
        if (*(double *)((long)param_1 + (lVar18 * 4 + 3) * 8) <=
            *(double *)((long)param_1 + (lVar19 * 4 + 3) * 8)) {
          uVar5 = uVar5 + 2;
        }
        else {
          uVar26 = puVar10[1];
          uVar22 = *puVar10;
          uVar23 = puVar10[3];
          uVar16 = puVar10[2];
          uVar25 = *puVar11;
          uVar24 = puVar11[3];
          uVar20 = puVar11[2];
          puVar10[1] = puVar11[1];
          *puVar10 = uVar25;
          puVar10[3] = uVar24;
          puVar10[2] = uVar20;
          puVar11[1] = uVar26;
          *puVar11 = uVar22;
          puVar11[3] = uVar23;
          puVar11[2] = uVar16;
          if (*(double *)((long)param_1 + 0x18) <= *(double *)((long)param_1 + (lVar18 * 4 + 3) * 8)
             ) {
            uVar5 = uVar5 + 3;
          }
          else {
            uVar26 = *(undefined8 *)((long)param_1 + 8);
            uVar22 = *(undefined8 *)param_1;
            uVar23 = *(undefined8 *)((long)param_1 + 0x18);
            uVar16 = *(undefined8 *)((long)param_1 + 0x10);
            uVar5 = uVar5 + 4;
            uVar25 = *puVar10;
            uVar24 = puVar10[3];
            uVar20 = puVar10[2];
            *(undefined8 *)((long)param_1 + 8) = puVar10[1];
            *(undefined8 *)param_1 = uVar25;
            *(undefined8 *)((long)param_1 + 0x18) = uVar24;
            *(undefined8 *)((long)param_1 + 0x10) = uVar20;
            puVar10[1] = uVar26;
            *puVar10 = uVar22;
            puVar10[3] = uVar23;
            puVar10[2] = uVar16;
          }
        }
      }
    }
  }
LAB_00a33398:
  dVar21 = *(double *)((long)param_1 + 0x18);
  puVar10 = puVar15;
  if (*(double *)((long)param_1 + (lVar19 * 4 + 3) * 8) <= dVar21) {
    do {
      puVar13 = puVar10;
      puVar10 = puVar13 + -4;
      if (puVar10 == (undefined8 *)param_1) {
        puVar10 = (undefined8 *)((long)param_1 + 0x20);
        puVar11 = puVar10;
        if (*(double *)((long)param_2 + -8) <= dVar21) goto joined_r0x00a33500;
        goto LAB_00a33538;
      }
    } while (*(double *)((long)param_1 + (lVar19 * 4 + 3) * 8) <= (double)puVar13[-1]);
    uVar26 = *(undefined8 *)((long)param_1 + 8);
    uVar22 = *(undefined8 *)param_1;
    uVar23 = *(undefined8 *)((long)param_1 + 0x18);
    uVar16 = *(undefined8 *)((long)param_1 + 0x10);
    uVar5 = uVar5 + 1;
    uVar25 = *puVar10;
    uVar24 = puVar13[-1];
    uVar20 = puVar13[-2];
    *(undefined8 *)((long)param_1 + 8) = puVar13[-3];
    *(undefined8 *)param_1 = uVar25;
    *(undefined8 *)((long)param_1 + 0x18) = uVar24;
    *(undefined8 *)((long)param_1 + 0x10) = uVar20;
    puVar13[-3] = uVar26;
    *puVar10 = uVar22;
    puVar13[-1] = uVar23;
    puVar13[-2] = uVar16;
  }
  puVar13 = (undefined8 *)((long)param_1 + 0x20);
  puVar17 = puVar13;
  if (puVar13 < puVar10) {
    while( true ) {
      puVar13 = puVar17 + -4;
      do {
        puVar14 = puVar13;
        puVar13 = puVar14 + 4;
      } while ((double)puVar14[7] < (double)puVar11[3]);
      puVar17 = puVar14 + 8;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + -4;
      } while ((double)puVar11[3] <= (double)puVar9[-1]);
      if (puVar10 < puVar13) break;
      uVar24 = puVar14[5];
      uVar23 = *puVar13;
      uVar20 = puVar14[7];
      uVar16 = puVar14[6];
      uVar5 = uVar5 + 1;
      puVar1 = puVar10;
      if (puVar13 != puVar11) {
        puVar1 = puVar11;
      }
      uVar26 = *puVar10;
      uVar25 = puVar9[-1];
      uVar22 = puVar9[-2];
      puVar14[5] = puVar9[-3];
      *puVar13 = uVar26;
      puVar14[7] = uVar25;
      puVar14[6] = uVar22;
      puVar9[-3] = uVar24;
      *puVar10 = uVar23;
      puVar9[-1] = uVar20;
      puVar9[-2] = uVar16;
      puVar11 = puVar1;
    }
  }
  if ((puVar13 != puVar11) && ((double)puVar11[3] < (double)puVar13[3])) {
    uVar26 = puVar13[1];
    uVar22 = *puVar13;
    uVar23 = puVar13[3];
    uVar16 = puVar13[2];
    uVar5 = uVar5 + 1;
    uVar25 = *puVar11;
    uVar24 = puVar11[3];
    uVar20 = puVar11[2];
    puVar13[1] = puVar11[1];
    *puVar13 = uVar25;
    puVar13[3] = uVar24;
    puVar13[2] = uVar20;
    puVar11[1] = uVar26;
    *puVar11 = uVar22;
    puVar11[3] = uVar23;
    puVar11[2] = uVar16;
  }
  if (uVar5 == 0) {
    bVar3 = __insertion_sort_incomplete<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
                      (param_1,(ShaderBucket *)puVar13,param_3);
    bVar4 = __insertion_sort_incomplete<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
                      ((ShaderBucket *)(puVar13 + 4),param_2,param_3);
    if (bVar4) goto LAB_00a335ac;
    puVar11 = puVar13 + 4;
    if (bVar3) goto LAB_00a3318c;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)param_1) {
    __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
              ((ShaderBucket *)(puVar13 + 4),param_2,param_3);
    param_2 = (ShaderBucket *)puVar13;
    goto LAB_00a33184;
  }
  __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
            (param_1,(ShaderBucket *)puVar13,param_3);
  puVar11 = puVar13 + 4;
  goto LAB_00a3318c;
joined_r0x00a33500:
  if (puVar11 == puVar15) goto switchD_00a335cc_caseD_0;
  if (dVar21 < (double)puVar11[3]) goto LAB_00a33520;
  puVar11 = puVar11 + 4;
  goto joined_r0x00a33500;
LAB_00a33520:
  uVar26 = puVar11[1];
  uVar22 = *puVar11;
  uVar23 = puVar11[3];
  uVar16 = puVar11[2];
  uVar25 = *puVar15;
  uVar24 = *(undefined8 *)((long)param_2 + -8);
  uVar20 = *(undefined8 *)((long)param_2 + -0x10);
  puVar10 = puVar11 + 4;
  puVar11[1] = *(undefined8 *)((long)param_2 + -0x18);
  *puVar11 = uVar25;
  puVar11[3] = uVar24;
  puVar11[2] = uVar20;
  *(undefined8 *)((long)param_2 + -0x18) = uVar26;
  *puVar15 = uVar22;
  *(undefined8 *)((long)param_2 + -8) = uVar23;
  *(undefined8 *)((long)param_2 + -0x10) = uVar16;
LAB_00a33538:
  puVar13 = puVar15;
  if (puVar10 == puVar15) goto switchD_00a335cc_caseD_0;
  while( true ) {
    puVar11 = puVar10 + -4;
    do {
      puVar17 = puVar11;
      puVar11 = puVar17 + 4;
    } while ((double)puVar17[7] <= *(double *)((long)param_1 + 0x18));
    puVar10 = puVar17 + 8;
    do {
      puVar14 = puVar13;
      puVar13 = puVar14 + -4;
    } while (*(double *)((long)param_1 + 0x18) < (double)puVar14[-1]);
    if (puVar13 <= puVar11) break;
    uVar26 = puVar17[5];
    uVar22 = *puVar11;
    uVar23 = puVar17[7];
    uVar16 = puVar17[6];
    uVar25 = *puVar13;
    uVar24 = puVar14[-1];
    uVar20 = puVar14[-2];
    puVar17[5] = puVar14[-3];
    *puVar11 = uVar25;
    puVar17[7] = uVar24;
    puVar17[6] = uVar20;
    puVar14[-3] = uVar26;
    *puVar13 = uVar22;
    puVar14[-1] = uVar23;
    puVar14[-2] = uVar16;
  }
  goto LAB_00a3318c;
LAB_00a335ac:
  param_2 = (ShaderBucket *)puVar13;
  if (bVar3) goto switchD_00a335cc_caseD_0;
  goto LAB_00a33184;
LAB_00a33880:
  do {
    dVar21 = (double)puVar15[3];
    if (dVar21 < (double)puVar11[3]) {
      uVar16 = puVar15[2];
      uVar23 = puVar15[1];
      uVar20 = *puVar15;
      lVar19 = lVar7;
      do {
        lVar18 = lVar19;
        *(undefined8 *)((long)param_1 + lVar18 + 0x68) =
             *(undefined8 *)((long)param_1 + lVar18 + 0x48);
        *(undefined8 *)((long)param_1 + lVar18 + 0x60) =
             *(undefined8 *)((long)param_1 + lVar18 + 0x40);
        *(undefined8 *)((long)param_1 + lVar18 + 0x78) =
             *(undefined8 *)((long)param_1 + lVar18 + 0x58);
        *(undefined8 *)((long)param_1 + lVar18 + 0x70) =
             *(undefined8 *)((long)param_1 + lVar18 + 0x50);
        puVar11 = (undefined8 *)param_1;
        if (lVar18 == -0x40) goto LAB_00a3385c;
        lVar19 = lVar18 + -0x20;
      } while (dVar21 < *(double *)((long)param_1 + lVar18 + 0x38));
      puVar11 = (undefined8 *)((long)param_1 + lVar18 + 0x40);
LAB_00a3385c:
      puVar11[3] = dVar21;
      puVar11[2] = uVar16;
      puVar11[1] = uVar23;
      *puVar11 = uVar20;
    }
    puVar10 = puVar15 + 4;
    lVar7 = lVar7 + 0x20;
    puVar11 = puVar15;
    puVar15 = puVar10;
  } while (puVar10 != (undefined8 *)param_2);
switchD_00a335cc_caseD_0:
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


