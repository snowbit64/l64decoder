// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a2f64c
// Size: 2336 bytes
// Signature: void __cdecl __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* void std::__ndk1::__sort<RenderQueueItemSortKey::SortForRendering<true, false>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<true, false>&) */

void std::__ndk1::
     __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  ulong uVar25;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
LAB_00a2f68c:
  puVar16 = (ulong *)((long)param_2 + -0x28);
  puVar18 = (ulong *)((long)param_2 + -0x50);
  puVar17 = (ulong *)param_1;
LAB_00a2f698:
  param_1 = (RenderQueueItemSortKey *)puVar17;
  uVar9 = (long)param_2 - (long)param_1;
  switch(((long)uVar9 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_00a2fe20_caseD_0;
  case 2:
    if (*(float *)((long)param_2 + -8) == *(float *)((long)param_1 + 0x20)) {
      uVar7 = *(uint *)((long)param_2 + -4) >> 0x1e & 1;
      uVar2 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
      bVar5 = uVar2 <= uVar7;
      if (((uVar7 == uVar2) &&
          (bVar5 = *(ulong *)((long)param_1 + 8) <= *(ulong *)((long)param_2 + -0x20),
          *(ulong *)((long)param_2 + -0x20) == *(ulong *)((long)param_1 + 8))) &&
         ((bVar5 = *(ulong *)param_1 <= *puVar16, *puVar16 == *(ulong *)param_1 &&
          ((bVar5 = *(ulong *)((long)param_1 + 0x10) <= *(ulong *)((long)param_2 + -0x18),
           *(ulong *)((long)param_2 + -0x18) == *(ulong *)((long)param_1 + 0x10) &&
           (bVar5 = *(ulong *)((long)param_1 + 0x18) <= *(ulong *)((long)param_2 + -0x10),
           *(ulong *)((long)param_2 + -0x10) == *(ulong *)((long)param_1 + 0x18))))))) {
        bVar5 = *(uint *)((long)param_1 + 0x24) >> 0x1f <= *(uint *)((long)param_2 + -4) >> 0x1f;
      }
      if (bVar5) goto switchD_00a2fe20_caseD_0;
    }
    else if (*(float *)((long)param_2 + -8) <= *(float *)((long)param_1 + 0x20))
    goto switchD_00a2fe20_caseD_0;
    uVar25 = *(ulong *)((long)param_1 + 8);
    uVar22 = *(ulong *)param_1;
    uVar14 = *(ulong *)((long)param_1 + 0x18);
    uVar20 = *(ulong *)((long)param_1 + 0x10);
    uVar9 = *(ulong *)((long)param_1 + 0x20);
    uVar23 = *puVar16;
    uVar15 = *(ulong *)((long)param_2 + -0x10);
    uVar21 = *(ulong *)((long)param_2 + -0x18);
    uVar12 = *(ulong *)((long)param_2 + -8);
    *(ulong *)((long)param_1 + 8) = *(ulong *)((long)param_2 + -0x20);
    *(ulong *)param_1 = uVar23;
    *(ulong *)((long)param_1 + 0x18) = uVar15;
    *(ulong *)((long)param_1 + 0x10) = uVar21;
    *(ulong *)((long)param_1 + 0x20) = uVar12;
    *(ulong *)((long)param_2 + -0x20) = uVar25;
    *puVar16 = uVar22;
    *(ulong *)((long)param_2 + -0x10) = uVar14;
    *(ulong *)((long)param_2 + -0x18) = uVar20;
    *(ulong *)((long)param_2 + -8) = uVar9;
    goto switchD_00a2fe20_caseD_0;
  case 3:
    __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,(RenderQueueItemSortKey *)((long)param_1 + 0x28),
               (RenderQueueItemSortKey *)puVar16,param_3);
    goto switchD_00a2fe20_caseD_0;
  case 4:
    __sort4<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,(RenderQueueItemSortKey *)((long)param_1 + 0x28),
               (RenderQueueItemSortKey *)((long)param_1 + 0x50),(RenderQueueItemSortKey *)puVar16,
               param_3);
    goto switchD_00a2fe20_caseD_0;
  case 5:
    FUN_00a30548(param_1,(ulong *)((long)param_1 + 0x28),(ulong *)((long)param_1 + 0x50),
                 (ulong *)((long)param_1 + 0x78),puVar16,param_3);
    goto switchD_00a2fe20_caseD_0;
  }
  if ((long)uVar9 < 0x4d8) {
    __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,param_2,param_3);
    goto switchD_00a2fe20_caseD_0;
  }
  if (uVar9 < 0x9c19) {
    puVar17 = (ulong *)((long)param_1 + (ulong)(((uint)uVar9 & 0xffff) / 0x50) * 5 * 8);
    uVar7 = __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
                      (param_1,(RenderQueueItemSortKey *)puVar17,(RenderQueueItemSortKey *)puVar16,
                       param_3);
  }
  else {
    puVar17 = (ulong *)((long)param_1 + (uVar9 / 0x50) * 5 * 8);
    uVar7 = FUN_00a30548(param_1,(ulong *)((long)param_1 + (uVar9 / 0xa0) * 5 * 8),puVar17,
                         puVar17 + (uVar9 / 0xa0) * 5,puVar16,param_3);
  }
  fVar19 = *(float *)((long)param_1 + 0x20);
  fVar24 = *(float *)(puVar17 + 4);
  puVar10 = puVar16;
  puVar13 = puVar18;
  if (fVar19 == fVar24) {
    uVar2 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
    uVar3 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
    bVar5 = uVar3 <= uVar2;
    if ((((uVar2 != uVar3) ||
         (bVar5 = puVar17[1] <= *(ulong *)((long)param_1 + 8),
         *(ulong *)((long)param_1 + 8) != puVar17[1])) ||
        (bVar5 = *puVar17 <= *(ulong *)param_1, *(ulong *)param_1 != *puVar17)) ||
       ((bVar5 = puVar17[2] <= *(ulong *)((long)param_1 + 0x10),
        *(ulong *)((long)param_1 + 0x10) != puVar17[2] ||
        (bVar5 = puVar17[3] <= *(ulong *)((long)param_1 + 0x18),
        *(ulong *)((long)param_1 + 0x18) != puVar17[3])))) {
      if (bVar5) goto joined_r0x00a2f7bc;
      goto LAB_00a2f894;
    }
    if (*(uint *)((long)param_1 + 0x24) >> 0x1f < *(uint *)((long)puVar17 + 0x24) >> 0x1f)
    goto LAB_00a2f894;
joined_r0x00a2f7bc:
    for (; (ulong *)param_1 != puVar13; puVar13 = puVar13 + -5) {
      if (*(float *)(puVar13 + 4) == fVar24) {
        uVar2 = *(uint *)((long)puVar13 + 0x24) >> 0x1e & 1;
        uVar3 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
        bVar5 = uVar3 <= uVar2;
        if (((uVar2 == uVar3) && (bVar5 = puVar17[1] <= puVar13[1], puVar13[1] == puVar17[1])) &&
           ((bVar5 = *puVar17 <= *puVar13, *puVar13 == *puVar17 &&
            ((bVar5 = puVar17[2] <= puVar13[2], puVar13[2] == puVar17[2] &&
             (bVar5 = puVar17[3] <= puVar13[3], puVar13[3] == puVar17[3])))))) {
          bVar5 = *(uint *)((long)puVar17 + 0x24) >> 0x1f <= *(uint *)((long)puVar13 + 0x24) >> 0x1f
          ;
        }
        if (!bVar5) goto LAB_00a2f860;
      }
      else if (fVar24 < *(float *)(puVar13 + 4)) {
LAB_00a2f860:
        uVar25 = *(ulong *)((long)param_1 + 8);
        uVar22 = *(ulong *)param_1;
        uVar14 = *(ulong *)((long)param_1 + 0x18);
        uVar20 = *(ulong *)((long)param_1 + 0x10);
        uVar7 = uVar7 + 1;
        uVar9 = *(ulong *)((long)param_1 + 0x20);
        uVar23 = *puVar13;
        uVar15 = puVar13[3];
        uVar21 = puVar13[2];
        uVar12 = puVar13[4];
        *(ulong *)((long)param_1 + 8) = puVar13[1];
        *(ulong *)param_1 = uVar23;
        *(ulong *)((long)param_1 + 0x18) = uVar15;
        *(ulong *)((long)param_1 + 0x10) = uVar21;
        *(ulong *)((long)param_1 + 0x20) = uVar12;
        puVar13[1] = uVar25;
        *puVar13 = uVar22;
        puVar13[3] = uVar14;
        puVar13[2] = uVar20;
        puVar13[4] = uVar9;
        puVar10 = puVar13;
        goto LAB_00a2f894;
      }
    }
    puVar17 = (ulong *)((long)param_1 + 0x28);
    if (fVar19 == *(float *)((long)param_2 + -8)) {
      uVar7 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
      uVar2 = *(uint *)((long)param_2 + -4) >> 0x1e & 1;
      bVar5 = uVar2 <= uVar7;
      if ((((uVar7 == uVar2) &&
           (bVar5 = *(ulong *)((long)param_2 + -0x20) <= *(ulong *)((long)param_1 + 8),
           *(ulong *)((long)param_1 + 8) == *(ulong *)((long)param_2 + -0x20))) &&
          (bVar5 = *puVar16 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar16)) &&
         ((bVar5 = *(ulong *)((long)param_2 + -0x18) <= *(ulong *)((long)param_1 + 0x10),
          *(ulong *)((long)param_1 + 0x10) == *(ulong *)((long)param_2 + -0x18) &&
          (bVar5 = *(ulong *)((long)param_2 + -0x10) <= *(ulong *)((long)param_1 + 0x18),
          *(ulong *)((long)param_1 + 0x18) == *(ulong *)((long)param_2 + -0x10))))) {
        if (*(uint *)((long)param_2 + -4) >> 0x1f <= *(uint *)((long)param_1 + 0x24) >> 0x1f) {
LAB_00a2fbc0:
          do {
            if (puVar17 == puVar16) goto switchD_00a2fe20_caseD_0;
            if (fVar19 == *(float *)(puVar17 + 4)) {
              uVar7 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
              uVar2 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
              bVar5 = uVar2 <= uVar7;
              if (((uVar7 == uVar2) &&
                  (bVar5 = puVar17[1] <= *(ulong *)((long)param_1 + 8),
                  *(ulong *)((long)param_1 + 8) == puVar17[1])) &&
                 ((bVar5 = *puVar17 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar17 &&
                  ((bVar5 = puVar17[2] <= *(ulong *)((long)param_1 + 0x10),
                   *(ulong *)((long)param_1 + 0x10) == puVar17[2] &&
                   (bVar5 = puVar17[3] <= *(ulong *)((long)param_1 + 0x18),
                   *(ulong *)((long)param_1 + 0x18) == puVar17[3])))))) {
                bVar5 = *(uint *)((long)puVar17 + 0x24) >> 0x1f <=
                        *(uint *)((long)param_1 + 0x24) >> 0x1f;
              }
              if (!bVar5) goto LAB_00a2fc40;
            }
            else if (*(float *)(puVar17 + 4) < fVar19) goto LAB_00a2fc40;
            puVar17 = puVar17 + 5;
          } while( true );
        }
      }
      else if (bVar5) goto LAB_00a2fbc0;
    }
    else if (fVar19 <= *(float *)((long)param_2 + -8)) goto LAB_00a2fbc0;
    goto joined_r0x00a2fc78;
  }
  if (fVar19 <= fVar24) goto joined_r0x00a2f7bc;
LAB_00a2f894:
  puVar13 = (ulong *)((long)param_1 + 0x28);
  if (puVar13 < puVar10) {
LAB_00a2f8a0:
    fVar19 = *(float *)(puVar17 + 4);
    do {
      if (*(float *)(puVar13 + 4) == fVar19) {
        uVar2 = *(uint *)((long)puVar13 + 0x24) >> 0x1e & 1;
        uVar3 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
        bVar5 = uVar3 <= uVar2;
        if (((uVar2 == uVar3) && (bVar5 = puVar17[1] <= puVar13[1], puVar13[1] == puVar17[1])) &&
           ((bVar5 = *puVar17 <= *puVar13, *puVar13 == *puVar17 &&
            ((bVar5 = puVar17[2] <= puVar13[2], puVar13[2] == puVar17[2] &&
             (bVar5 = puVar17[3] <= puVar13[3], puVar13[3] == puVar17[3])))))) {
          bVar5 = *(uint *)((long)puVar17 + 0x24) >> 0x1f <= *(uint *)((long)puVar13 + 0x24) >> 0x1f
          ;
        }
        if (bVar5) goto LAB_00a2f92c;
      }
      else if (*(float *)(puVar13 + 4) <= fVar19) goto LAB_00a2f92c;
      puVar13 = puVar13 + 5;
    } while( true );
  }
LAB_00a2fa14:
  if (puVar13 != puVar17) {
    if (*(float *)(puVar17 + 4) == *(float *)(puVar13 + 4)) {
      uVar2 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
      uVar3 = *(uint *)((long)puVar13 + 0x24) >> 0x1e & 1;
      bVar5 = uVar3 <= uVar2;
      if ((((uVar2 == uVar3) && (bVar5 = puVar13[1] <= puVar17[1], puVar17[1] == puVar13[1])) &&
          (bVar5 = *puVar13 <= *puVar17, *puVar17 == *puVar13)) &&
         ((bVar5 = puVar13[2] <= puVar17[2], puVar17[2] == puVar13[2] &&
          (bVar5 = puVar13[3] <= puVar17[3], puVar17[3] == puVar13[3])))) {
        if (*(uint *)((long)puVar17 + 0x24) >> 0x1f < *(uint *)((long)puVar13 + 0x24) >> 0x1f) {
LAB_00a2fa30:
          uVar25 = puVar13[1];
          uVar22 = *puVar13;
          uVar14 = puVar13[3];
          uVar20 = puVar13[2];
          uVar7 = uVar7 + 1;
          uVar9 = puVar13[4];
          uVar23 = *puVar17;
          uVar15 = puVar17[3];
          uVar21 = puVar17[2];
          uVar12 = puVar17[4];
          puVar13[1] = puVar17[1];
          *puVar13 = uVar23;
          puVar13[3] = uVar15;
          puVar13[2] = uVar21;
          puVar13[4] = uVar12;
          puVar17[1] = uVar25;
          *puVar17 = uVar22;
          puVar17[3] = uVar14;
          puVar17[2] = uVar20;
          puVar17[4] = uVar9;
        }
      }
      else if (!bVar5) goto LAB_00a2fa30;
    }
    else if (*(float *)(puVar13 + 4) < *(float *)(puVar17 + 4)) goto LAB_00a2fa30;
  }
  if (uVar7 == 0) {
    bVar5 = __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
                      (param_1,(RenderQueueItemSortKey *)puVar13,param_3);
    bVar6 = __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
                      ((RenderQueueItemSortKey *)(puVar13 + 5),param_2,param_3);
    if (bVar6) goto LAB_00a2fe00;
    puVar17 = puVar13 + 5;
    if (bVar5) goto LAB_00a2f698;
  }
  if (((long)param_2 - (long)puVar13 >> 3) * -0x3333333333333333 <=
      ((long)puVar13 - (long)param_1 >> 3) * -0x3333333333333333) {
    __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              ((RenderQueueItemSortKey *)(puVar13 + 5),param_2,param_3);
    param_2 = (RenderQueueItemSortKey *)puVar13;
    goto LAB_00a2f68c;
  }
  __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
            (param_1,(RenderQueueItemSortKey *)puVar13,param_3);
  puVar17 = puVar13 + 5;
  goto LAB_00a2f698;
LAB_00a2fc40:
  uVar25 = puVar17[1];
  uVar22 = *puVar17;
  uVar14 = puVar17[3];
  uVar20 = puVar17[2];
  uVar9 = puVar17[4];
  uVar23 = *puVar16;
  uVar15 = *(ulong *)((long)param_2 + -0x10);
  uVar21 = *(ulong *)((long)param_2 + -0x18);
  uVar12 = *(ulong *)((long)param_2 + -8);
  puVar17[1] = *(ulong *)((long)param_2 + -0x20);
  *puVar17 = uVar23;
  puVar17[3] = uVar15;
  puVar17[2] = uVar21;
  puVar17[4] = uVar12;
  puVar17 = puVar17 + 5;
  *(ulong *)((long)param_2 + -0x20) = uVar25;
  *puVar16 = uVar22;
  *(ulong *)((long)param_2 + -0x10) = uVar14;
  *(ulong *)((long)param_2 + -0x18) = uVar20;
  *(ulong *)((long)param_2 + -8) = uVar9;
joined_r0x00a2fc78:
  puVar13 = puVar16;
  if (puVar17 != puVar16) {
LAB_00a2fc80:
    fVar19 = *(float *)((long)param_1 + 0x20);
    do {
      if (fVar19 == *(float *)(puVar17 + 4)) {
        uVar7 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
        uVar2 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
        bVar5 = uVar2 <= uVar7;
        if ((((uVar7 == uVar2) &&
             (bVar5 = puVar17[1] <= *(ulong *)((long)param_1 + 8),
             *(ulong *)((long)param_1 + 8) == puVar17[1])) &&
            (bVar5 = *puVar17 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar17)) &&
           ((bVar5 = puVar17[2] <= *(ulong *)((long)param_1 + 0x10),
            *(ulong *)((long)param_1 + 0x10) == puVar17[2] &&
            (bVar5 = puVar17[3] <= *(ulong *)((long)param_1 + 0x18),
            *(ulong *)((long)param_1 + 0x18) == puVar17[3])))) {
          bVar5 = *(uint *)((long)puVar17 + 0x24) >> 0x1f <= *(uint *)((long)param_1 + 0x24) >> 0x1f
          ;
        }
        if (!bVar5) goto LAB_00a2fd0c;
      }
      else if (*(float *)(puVar17 + 4) < fVar19) goto LAB_00a2fd0c;
      puVar17 = puVar17 + 5;
    } while( true );
  }
  goto switchD_00a2fe20_caseD_0;
  while (*(float *)(puVar10 + -1) < fVar19) {
LAB_00a2fd0c:
    puVar10 = puVar13;
    puVar13 = puVar10 + -5;
    if (fVar19 == *(float *)(puVar10 + -1)) {
      uVar7 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
      uVar2 = *(uint *)((long)puVar10 - 4) >> 0x1e & 1;
      if (uVar7 == uVar2) {
        if (*(ulong *)((long)param_1 + 8) == puVar10[-4]) {
          if (*(ulong *)param_1 == *puVar13) {
            if (*(ulong *)((long)param_1 + 0x10) == puVar10[-3]) {
              if (*(ulong *)((long)param_1 + 0x18) == puVar10[-2]) {
                if (*(uint *)((long)puVar10 - 4) >> 0x1f <= *(uint *)((long)param_1 + 0x24) >> 0x1f)
                break;
              }
              else if (puVar10[-2] <= *(ulong *)((long)param_1 + 0x18)) break;
            }
            else if (puVar10[-3] <= *(ulong *)((long)param_1 + 0x10)) break;
          }
          else if (*puVar13 <= *(ulong *)param_1) break;
        }
        else if (puVar10[-4] <= *(ulong *)((long)param_1 + 8)) break;
      }
      else if (uVar2 <= uVar7) break;
      goto LAB_00a2fd0c;
    }
  }
  if (puVar13 <= puVar17) goto LAB_00a2f698;
  uVar25 = puVar17[1];
  uVar22 = *puVar17;
  uVar14 = puVar17[3];
  uVar20 = puVar17[2];
  uVar9 = puVar17[4];
  uVar23 = *puVar13;
  uVar15 = puVar10[-2];
  uVar21 = puVar10[-3];
  uVar12 = puVar10[-1];
  puVar17[1] = puVar10[-4];
  *puVar17 = uVar23;
  puVar17[3] = uVar15;
  puVar17[2] = uVar21;
  puVar17[4] = uVar12;
  puVar17 = puVar17 + 5;
  puVar10[-4] = uVar25;
  *puVar13 = uVar22;
  puVar10[-2] = uVar14;
  puVar10[-3] = uVar20;
  puVar10[-1] = uVar9;
  goto LAB_00a2fc80;
  while (*(float *)(puVar11 + -1) <= fVar19) {
LAB_00a2f92c:
    puVar11 = puVar10;
    puVar10 = puVar11 + -5;
    if (*(float *)(puVar11 + -1) == fVar19) {
      uVar2 = *(uint *)((long)puVar11 - 4) >> 0x1e & 1;
      uVar3 = *(uint *)((long)puVar17 + 0x24) >> 0x1e & 1;
      if (uVar2 == uVar3) {
        if (puVar11[-4] == puVar17[1]) {
          if (*puVar10 == *puVar17) {
            if (puVar11[-3] == puVar17[2]) {
              if (puVar11[-2] == puVar17[3]) {
                if (*(uint *)((long)puVar11 - 4) >> 0x1f < *(uint *)((long)puVar17 + 0x24) >> 0x1f)
                break;
              }
              else if (puVar11[-2] < puVar17[3]) break;
            }
            else if (puVar11[-3] < puVar17[2]) break;
          }
          else if (*puVar10 < *puVar17) break;
        }
        else if (puVar11[-4] < puVar17[1]) break;
      }
      else if (uVar2 < uVar3) break;
      goto LAB_00a2f92c;
    }
  }
  if (puVar10 < puVar13) goto LAB_00a2fa14;
  uVar21 = puVar13[1];
  uVar20 = *puVar13;
  uVar12 = puVar13[3];
  uVar9 = puVar13[2];
  uVar7 = uVar7 + 1;
  puVar1 = puVar10;
  if (puVar13 != puVar17) {
    puVar1 = puVar17;
  }
  uVar14 = puVar13[4];
  uVar25 = *puVar10;
  uVar23 = puVar11[-2];
  uVar22 = puVar11[-3];
  uVar15 = puVar11[-1];
  puVar13[1] = puVar11[-4];
  *puVar13 = uVar25;
  puVar13[3] = uVar23;
  puVar13[2] = uVar22;
  puVar13[4] = uVar15;
  puVar13 = puVar13 + 5;
  puVar11[-4] = uVar21;
  *puVar10 = uVar20;
  puVar11[-2] = uVar12;
  puVar11[-3] = uVar9;
  puVar11[-1] = uVar14;
  puVar17 = puVar1;
  goto LAB_00a2f8a0;
LAB_00a2fe00:
  param_2 = (RenderQueueItemSortKey *)puVar13;
  if (bVar5) {
switchD_00a2fe20_caseD_0:
    if (*(long *)(lVar4 + 0x28) == lVar8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00a2f68c;
}


