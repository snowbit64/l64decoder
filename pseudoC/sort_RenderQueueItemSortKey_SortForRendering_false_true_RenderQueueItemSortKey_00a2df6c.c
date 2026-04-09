// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
// Entry Point: 00a2df6c
// Size: 2288 bytes
// Signature: void __cdecl __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* void std::__ndk1::__sort<RenderQueueItemSortKey::SortForRendering<false, true>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<false, true>&) */

void std::__ndk1::
     __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  lVar7 = tpidr_el0;
  lVar12 = *(long *)(lVar7 + 0x28);
LAB_00a2dfac:
  puVar19 = (ulong *)((long)param_2 + -0x28);
  puVar20 = (ulong *)param_1;
LAB_00a2dfb8:
  param_1 = (RenderQueueItemSortKey *)puVar20;
  uVar13 = (long)param_2 - (long)param_1;
  switch(((long)uVar13 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_00a2e70c_caseD_0;
  case 2:
    uVar11 = *(uint *)((long)param_2 + -4) >> 0x1e & 1;
    uVar2 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
    bVar9 = uVar2 <= uVar11;
    if (((uVar11 == uVar2) &&
        (bVar9 = *(ulong *)((long)param_1 + 8) <= *(ulong *)((long)param_2 + -0x20),
        *(ulong *)((long)param_2 + -0x20) == *(ulong *)((long)param_1 + 8))) &&
       ((bVar9 = *(ulong *)param_1 <= *puVar19, *puVar19 == *(ulong *)param_1 &&
        (((bVar9 = *(ulong *)((long)param_1 + 0x10) <= *(ulong *)((long)param_2 + -0x18),
          *(ulong *)((long)param_2 + -0x18) == *(ulong *)((long)param_1 + 0x10) &&
          (bVar9 = *(ulong *)((long)param_1 + 0x18) <= *(ulong *)((long)param_2 + -0x10),
          *(ulong *)((long)param_2 + -0x10) == *(ulong *)((long)param_1 + 0x18))) &&
         (uVar11 = *(uint *)((long)param_2 + -4) >> 0x1f,
         uVar2 = -((int)*(uint *)((long)param_1 + 0x24) >> 0x1f), bVar9 = uVar2 <= uVar11,
         uVar11 == uVar2)))))) {
      if (*(float *)((long)param_1 + 0x20) <= *(float *)((long)param_2 + -8))
      goto switchD_00a2e70c_caseD_0;
    }
    else if (bVar9) goto switchD_00a2e70c_caseD_0;
    uVar27 = *(ulong *)((long)param_1 + 8);
    uVar25 = *(ulong *)param_1;
    uVar17 = *(ulong *)((long)param_1 + 0x18);
    uVar23 = *(ulong *)((long)param_1 + 0x10);
    uVar13 = *(ulong *)((long)param_1 + 0x20);
    uVar26 = *puVar19;
    uVar18 = *(ulong *)((long)param_2 + -0x10);
    uVar24 = *(ulong *)((long)param_2 + -0x18);
    uVar16 = *(ulong *)((long)param_2 + -8);
    *(ulong *)((long)param_1 + 8) = *(ulong *)((long)param_2 + -0x20);
    *(ulong *)param_1 = uVar26;
    *(ulong *)((long)param_1 + 0x18) = uVar18;
    *(ulong *)((long)param_1 + 0x10) = uVar24;
    *(ulong *)((long)param_1 + 0x20) = uVar16;
    *(ulong *)((long)param_2 + -0x20) = uVar27;
    *puVar19 = uVar25;
    *(ulong *)((long)param_2 + -0x10) = uVar17;
    *(ulong *)((long)param_2 + -0x18) = uVar23;
    *(ulong *)((long)param_2 + -8) = uVar13;
    goto switchD_00a2e70c_caseD_0;
  case 3:
    __sort3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
              (param_1,(RenderQueueItemSortKey *)((long)param_1 + 0x28),
               (RenderQueueItemSortKey *)puVar19,param_3);
    goto switchD_00a2e70c_caseD_0;
  case 4:
    __sort4<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
              (param_1,(RenderQueueItemSortKey *)((long)param_1 + 0x28),
               (RenderQueueItemSortKey *)((long)param_1 + 0x50),(RenderQueueItemSortKey *)puVar19,
               param_3);
    goto switchD_00a2e70c_caseD_0;
  case 5:
    FUN_00a2ee08(param_1,(ulong *)((long)param_1 + 0x28),(ulong *)((long)param_1 + 0x50),
                 (ulong *)((long)param_1 + 0x78),puVar19,param_3);
    goto switchD_00a2e70c_caseD_0;
  }
  if ((long)uVar13 < 0x4d8) {
    __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
              (param_1,param_2,param_3);
    goto switchD_00a2e70c_caseD_0;
  }
  if (uVar13 < 0x9c19) {
    puVar20 = (ulong *)((long)param_1 + (ulong)(((uint)uVar13 & 0xffff) / 0x50) * 5 * 8);
    uVar11 = __sort3<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
                       (param_1,(RenderQueueItemSortKey *)puVar20,(RenderQueueItemSortKey *)puVar19,
                        param_3);
  }
  else {
    puVar20 = (ulong *)((long)param_1 + (uVar13 / 0x50) * 5 * 8);
    uVar11 = FUN_00a2ee08(param_1,(ulong *)((long)param_1 + (uVar13 / 0xa0) * 5 * 8),puVar20,
                          puVar20 + (uVar13 / 0xa0) * 5,puVar19,param_3);
  }
  uVar2 = *(uint *)((long)param_1 + 0x24);
  fVar22 = *(float *)((long)param_1 + 0x20);
  uVar4 = uVar2 >> 0x1e & 1;
  uVar5 = *(uint *)((long)puVar20 + 0x24) >> 0x1e & 1;
  bVar9 = uVar5 <= uVar4;
  iVar8 = (int)*(uint *)((long)puVar20 + 0x24) >> 0x1f;
  puVar15 = puVar19;
  if ((((uVar4 == uVar5) &&
       (bVar9 = puVar20[1] <= *(ulong *)((long)param_1 + 8),
       *(ulong *)((long)param_1 + 8) == puVar20[1])) &&
      (bVar9 = *puVar20 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar20)) &&
     (((bVar9 = puVar20[2] <= *(ulong *)((long)param_1 + 0x10),
       *(ulong *)((long)param_1 + 0x10) == puVar20[2] &&
       (bVar9 = puVar20[3] <= *(ulong *)((long)param_1 + 0x18),
       *(ulong *)((long)param_1 + 0x18) == puVar20[3])) &&
      (uVar3 = -iVar8, bVar9 = uVar3 <= uVar2 >> 0x1f, uVar2 >> 0x1f == uVar3)))) {
    if (*(float *)(puVar20 + 4) <= fVar22) goto LAB_00a2e0c4;
LAB_00a2e294:
    puVar21 = (ulong *)((long)param_1 + 0x28);
    if (puVar21 < puVar15) {
LAB_00a2e2a0:
      uVar4 = *(uint *)((long)puVar20 + 0x24) >> 0x1e & 1;
      uVar2 = -((int)*(uint *)((long)puVar20 + 0x24) >> 0x1f);
      do {
        uVar5 = *(uint *)((long)puVar21 + 0x24) >> 0x1e & 1;
        bVar9 = uVar4 <= uVar5;
        if ((((uVar5 == uVar4) && (bVar9 = puVar20[1] <= puVar21[1], puVar21[1] == puVar20[1])) &&
            ((bVar9 = *puVar20 <= *puVar21, *puVar21 == *puVar20 &&
             ((bVar9 = puVar20[2] <= puVar21[2], puVar21[2] == puVar20[2] &&
              (bVar9 = puVar20[3] <= puVar21[3], puVar21[3] == puVar20[3])))))) &&
           (uVar5 = *(uint *)((long)puVar21 + 0x24) >> 0x1f, bVar9 = uVar2 <= uVar5, uVar5 == uVar2)
           ) {
          if (*(float *)(puVar20 + 4) <= *(float *)(puVar21 + 4)) goto LAB_00a2e32c;
        }
        else if (bVar9) goto LAB_00a2e32c;
        puVar21 = puVar21 + 5;
      } while( true );
    }
LAB_00a2e40c:
    if (puVar21 != puVar20) {
      uVar2 = *(uint *)((long)puVar20 + 0x24) >> 0x1e & 1;
      uVar4 = *(uint *)((long)puVar21 + 0x24) >> 0x1e & 1;
      bVar9 = uVar4 <= uVar2;
      if ((((uVar2 == uVar4) && (bVar9 = puVar21[1] <= puVar20[1], puVar20[1] == puVar21[1])) &&
          (bVar9 = *puVar21 <= *puVar20, *puVar20 == *puVar21)) &&
         (((bVar9 = puVar21[2] <= puVar20[2], puVar20[2] == puVar21[2] &&
           (bVar9 = puVar21[3] <= puVar20[3], puVar20[3] == puVar21[3])) &&
          (uVar2 = *(uint *)((long)puVar20 + 0x24) >> 0x1f,
          uVar4 = -((int)*(uint *)((long)puVar21 + 0x24) >> 0x1f), bVar9 = uVar4 <= uVar2,
          uVar2 == uVar4)))) {
        if (*(float *)(puVar20 + 4) < *(float *)(puVar21 + 4)) {
LAB_00a2e494:
          uVar27 = puVar21[1];
          uVar25 = *puVar21;
          uVar17 = puVar21[3];
          uVar23 = puVar21[2];
          uVar11 = uVar11 + 1;
          uVar13 = puVar21[4];
          uVar26 = *puVar20;
          uVar18 = puVar20[3];
          uVar24 = puVar20[2];
          uVar16 = puVar20[4];
          puVar21[1] = puVar20[1];
          *puVar21 = uVar26;
          puVar21[3] = uVar18;
          puVar21[2] = uVar24;
          puVar21[4] = uVar16;
          puVar20[1] = uVar27;
          *puVar20 = uVar25;
          puVar20[3] = uVar17;
          puVar20[2] = uVar23;
          puVar20[4] = uVar13;
        }
      }
      else if (!bVar9) goto LAB_00a2e494;
    }
    if (uVar11 == 0) {
      bVar9 = __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
                        (param_1,(RenderQueueItemSortKey *)puVar21,param_3);
      bVar10 = __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
                         ((RenderQueueItemSortKey *)(puVar21 + 5),param_2,param_3);
      if (bVar10) goto LAB_00a2e6ec;
      puVar20 = puVar21 + 5;
      if (bVar9) goto LAB_00a2dfb8;
    }
    if (((long)param_2 - (long)puVar21 >> 3) * -0x3333333333333333 <=
        ((long)puVar21 - (long)param_1 >> 3) * -0x3333333333333333) {
      __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
                ((RenderQueueItemSortKey *)(puVar21 + 5),param_2,param_3);
      param_2 = (RenderQueueItemSortKey *)puVar21;
      goto LAB_00a2dfac;
    }
    __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
              (param_1,(RenderQueueItemSortKey *)puVar21,param_3);
    puVar20 = puVar21 + 5;
    goto LAB_00a2dfb8;
  }
  if (!bVar9) goto LAB_00a2e294;
LAB_00a2e0c4:
  if ((ulong *)param_1 != (ulong *)((long)param_2 + -0x50)) {
    uVar3 = -iVar8;
    puVar15 = (ulong *)((long)param_2 + -0x50);
    do {
      uVar6 = *(uint *)((long)puVar15 + 0x24) >> 0x1e & 1;
      bVar9 = uVar5 <= uVar6;
      if (((uVar6 == uVar5) && (bVar9 = puVar20[1] <= puVar15[1], puVar15[1] == puVar20[1])) &&
         ((bVar9 = *puVar20 <= *puVar15, *puVar15 == *puVar20 &&
          (((bVar9 = puVar20[2] <= puVar15[2], puVar15[2] == puVar20[2] &&
            (bVar9 = puVar20[3] <= puVar15[3], puVar15[3] == puVar20[3])) &&
           (uVar6 = *(uint *)((long)puVar15 + 0x24) >> 0x1f, bVar9 = uVar3 <= uVar6, uVar6 == uVar3)
           ))))) {
        if (*(float *)(puVar15 + 4) < *(float *)(puVar20 + 4)) {
LAB_00a2e260:
          uVar27 = *(ulong *)((long)param_1 + 8);
          uVar25 = *(ulong *)param_1;
          uVar17 = *(ulong *)((long)param_1 + 0x18);
          uVar23 = *(ulong *)((long)param_1 + 0x10);
          uVar11 = uVar11 + 1;
          uVar13 = *(ulong *)((long)param_1 + 0x20);
          uVar26 = *puVar15;
          uVar18 = puVar15[3];
          uVar24 = puVar15[2];
          uVar16 = puVar15[4];
          *(ulong *)((long)param_1 + 8) = puVar15[1];
          *(ulong *)param_1 = uVar26;
          *(ulong *)((long)param_1 + 0x18) = uVar18;
          *(ulong *)((long)param_1 + 0x10) = uVar24;
          *(ulong *)((long)param_1 + 0x20) = uVar16;
          puVar15[1] = uVar27;
          *puVar15 = uVar25;
          puVar15[3] = uVar17;
          puVar15[2] = uVar23;
          puVar15[4] = uVar13;
          goto LAB_00a2e294;
        }
      }
      else if (!bVar9) goto LAB_00a2e260;
      puVar15 = puVar15 + -5;
    } while (puVar15 != (ulong *)param_1);
  }
  puVar20 = (ulong *)((long)param_1 + 0x28);
  uVar11 = *(uint *)((long)param_2 + -4) >> 0x1e & 1;
  bVar9 = uVar11 <= uVar4;
  if (((uVar4 == uVar11) &&
      (bVar9 = *(ulong *)((long)param_2 + -0x20) <= *(ulong *)((long)param_1 + 8),
      *(ulong *)((long)param_1 + 8) == *(ulong *)((long)param_2 + -0x20))) &&
     (((bVar9 = *puVar19 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar19 &&
       ((bVar9 = *(ulong *)((long)param_2 + -0x18) <= *(ulong *)((long)param_1 + 0x10),
        *(ulong *)((long)param_1 + 0x10) == *(ulong *)((long)param_2 + -0x18) &&
        (bVar9 = *(ulong *)((long)param_2 + -0x10) <= *(ulong *)((long)param_1 + 0x18),
        *(ulong *)((long)param_1 + 0x18) == *(ulong *)((long)param_2 + -0x10))))) &&
      (uVar11 = -((int)*(uint *)((long)param_2 + -4) >> 0x1f), bVar9 = uVar11 <= uVar2 >> 0x1f,
      uVar2 >> 0x1f == uVar11)))) {
    if (*(float *)((long)param_2 + -8) <= fVar22) goto LAB_00a2e1d4;
    goto LAB_00a2e568;
  }
  if (bVar9) {
LAB_00a2e1d4:
    if (puVar20 != puVar19) {
      do {
        uVar11 = *(uint *)((long)puVar20 + 0x24) >> 0x1e & 1;
        bVar9 = uVar11 <= uVar4;
        if (((((uVar4 == uVar11) &&
              (bVar9 = puVar20[1] <= *(ulong *)((long)param_1 + 8),
              *(ulong *)((long)param_1 + 8) == puVar20[1])) &&
             (bVar9 = *puVar20 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar20)) &&
            ((bVar9 = puVar20[2] <= *(ulong *)((long)param_1 + 0x10),
             *(ulong *)((long)param_1 + 0x10) == puVar20[2] &&
             (bVar9 = puVar20[3] <= *(ulong *)((long)param_1 + 0x18),
             *(ulong *)((long)param_1 + 0x18) == puVar20[3])))) &&
           (uVar11 = -((int)*(uint *)((long)puVar20 + 0x24) >> 0x1f),
           bVar9 = uVar11 <= uVar2 >> 0x1f, uVar2 >> 0x1f == uVar11)) {
          if (fVar22 < *(float *)(puVar20 + 4)) goto LAB_00a2e534;
        }
        else if (!bVar9) goto LAB_00a2e534;
        puVar20 = puVar20 + 5;
        if (puVar20 == puVar19) break;
      } while( true );
    }
    goto switchD_00a2e70c_caseD_0;
  }
  goto LAB_00a2e568;
LAB_00a2e534:
  uVar27 = puVar20[1];
  uVar25 = *puVar20;
  uVar17 = puVar20[3];
  uVar23 = puVar20[2];
  uVar13 = puVar20[4];
  uVar26 = *puVar19;
  uVar18 = *(ulong *)((long)param_2 + -0x10);
  uVar24 = *(ulong *)((long)param_2 + -0x18);
  uVar16 = *(ulong *)((long)param_2 + -8);
  puVar20[1] = *(ulong *)((long)param_2 + -0x20);
  *puVar20 = uVar26;
  puVar20[3] = uVar18;
  puVar20[2] = uVar24;
  puVar20[4] = uVar16;
  puVar20 = puVar20 + 5;
  *(ulong *)((long)param_2 + -0x20) = uVar27;
  *puVar19 = uVar25;
  *(ulong *)((long)param_2 + -0x10) = uVar17;
  *(ulong *)((long)param_2 + -0x18) = uVar23;
  *(ulong *)((long)param_2 + -8) = uVar13;
LAB_00a2e568:
  puVar15 = puVar19;
  if (puVar20 != puVar19) {
LAB_00a2e574:
    uVar2 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
    uVar11 = *(uint *)((long)param_1 + 0x24) >> 0x1f;
    do {
      uVar4 = *(uint *)((long)puVar20 + 0x24) >> 0x1e & 1;
      bVar9 = uVar4 <= uVar2;
      if (((uVar2 == uVar4) &&
          (bVar9 = puVar20[1] <= *(ulong *)((long)param_1 + 8),
          *(ulong *)((long)param_1 + 8) == puVar20[1])) &&
         ((bVar9 = *puVar20 <= *(ulong *)param_1, *(ulong *)param_1 == *puVar20 &&
          (((bVar9 = puVar20[2] <= *(ulong *)((long)param_1 + 0x10),
            *(ulong *)((long)param_1 + 0x10) == puVar20[2] &&
            (bVar9 = puVar20[3] <= *(ulong *)((long)param_1 + 0x18),
            *(ulong *)((long)param_1 + 0x18) == puVar20[3])) &&
           (uVar4 = -((int)*(uint *)((long)puVar20 + 0x24) >> 0x1f), bVar9 = uVar4 <= uVar11,
           uVar11 == uVar4)))))) {
        if (*(float *)((long)param_1 + 0x20) < *(float *)(puVar20 + 4)) goto LAB_00a2e600;
      }
      else if (!bVar9) goto LAB_00a2e600;
      puVar20 = puVar20 + 5;
    } while( true );
  }
  goto switchD_00a2e70c_caseD_0;
  while (uVar2 < uVar4) {
LAB_00a2e600:
    puVar21 = puVar15;
    puVar15 = puVar21 + -5;
    uVar4 = *(uint *)((long)puVar21 - 4) >> 0x1e & 1;
    if (uVar2 == uVar4) {
      if (*(ulong *)((long)param_1 + 8) == puVar21[-4]) {
        if (*(ulong *)param_1 == *puVar15) {
          if (*(ulong *)((long)param_1 + 0x10) == puVar21[-3]) {
            if (*(ulong *)((long)param_1 + 0x18) == puVar21[-2]) {
              uVar4 = -((int)*(uint *)((long)puVar21 - 4) >> 0x1f);
              if (uVar11 == uVar4) {
                if (*(float *)(puVar21 + -1) <= *(float *)((long)param_1 + 0x20)) break;
              }
              else if (uVar4 <= uVar11) break;
            }
            else if (puVar21[-2] <= *(ulong *)((long)param_1 + 0x18)) break;
          }
          else if (puVar21[-3] <= *(ulong *)((long)param_1 + 0x10)) break;
        }
        else if (*puVar15 <= *(ulong *)param_1) break;
      }
      else if (puVar21[-4] <= *(ulong *)((long)param_1 + 8)) break;
      goto LAB_00a2e600;
    }
  }
  if (puVar15 <= puVar20) goto LAB_00a2dfb8;
  uVar27 = puVar20[1];
  uVar25 = *puVar20;
  uVar17 = puVar20[3];
  uVar23 = puVar20[2];
  uVar13 = puVar20[4];
  uVar26 = *puVar15;
  uVar18 = puVar21[-2];
  uVar24 = puVar21[-3];
  uVar16 = puVar21[-1];
  puVar20[1] = puVar21[-4];
  *puVar20 = uVar26;
  puVar20[3] = uVar18;
  puVar20[2] = uVar24;
  puVar20[4] = uVar16;
  puVar20 = puVar20 + 5;
  puVar21[-4] = uVar27;
  *puVar15 = uVar25;
  puVar21[-2] = uVar17;
  puVar21[-3] = uVar23;
  puVar21[-1] = uVar13;
  goto LAB_00a2e574;
  while (uVar4 <= uVar5) {
LAB_00a2e32c:
    puVar14 = puVar15;
    puVar15 = puVar14 + -5;
    uVar5 = *(uint *)((long)puVar14 - 4) >> 0x1e & 1;
    if (uVar5 == uVar4) {
      if (puVar14[-4] == puVar20[1]) {
        if (*puVar15 == *puVar20) {
          if (puVar14[-3] == puVar20[2]) {
            if (puVar14[-2] == puVar20[3]) {
              uVar5 = *(uint *)((long)puVar14 - 4) >> 0x1f;
              if (uVar5 == uVar2) {
                if (*(float *)(puVar14 + -1) < *(float *)(puVar20 + 4)) break;
              }
              else if (uVar5 < uVar2) break;
            }
            else if (puVar14[-2] < puVar20[3]) break;
          }
          else if (puVar14[-3] < puVar20[2]) break;
        }
        else if (*puVar15 < *puVar20) break;
      }
      else if (puVar14[-4] < puVar20[1]) break;
      goto LAB_00a2e32c;
    }
  }
  if (puVar15 < puVar21) goto LAB_00a2e40c;
  uVar24 = puVar21[1];
  uVar23 = *puVar21;
  uVar16 = puVar21[3];
  uVar13 = puVar21[2];
  uVar11 = uVar11 + 1;
  puVar1 = puVar15;
  if (puVar21 != puVar20) {
    puVar1 = puVar20;
  }
  uVar17 = puVar21[4];
  uVar27 = *puVar15;
  uVar26 = puVar14[-2];
  uVar25 = puVar14[-3];
  uVar18 = puVar14[-1];
  puVar21[1] = puVar14[-4];
  *puVar21 = uVar27;
  puVar21[3] = uVar26;
  puVar21[2] = uVar25;
  puVar21[4] = uVar18;
  puVar21 = puVar21 + 5;
  puVar14[-4] = uVar24;
  *puVar15 = uVar23;
  puVar14[-2] = uVar16;
  puVar14[-3] = uVar13;
  puVar14[-1] = uVar17;
  puVar20 = puVar1;
  goto LAB_00a2e2a0;
LAB_00a2e6ec:
  param_2 = (RenderQueueItemSortKey *)puVar21;
  if (bVar9) {
switchD_00a2e70c_caseD_0:
    if (*(long *)(lVar7 + 0x28) == lVar12) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00a2dfac;
}


