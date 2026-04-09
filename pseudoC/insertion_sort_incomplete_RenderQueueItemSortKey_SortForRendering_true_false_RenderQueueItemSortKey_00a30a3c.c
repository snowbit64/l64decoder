// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a30a3c
// Size: 880 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,
   false>&, RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<true, false>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar4 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  lVar12 = *(long *)(lVar4 + 0x28);
  if (5 < uVar6) {
    __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
    if (param_1 + 0x78 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar7 = (ulong *)(param_1 + 0x78);
      puVar15 = (ulong *)(param_1 + 0x50);
      do {
        puVar13 = puVar7;
        fVar19 = *(float *)(puVar13 + 4);
        if (fVar19 == *(float *)(puVar15 + 4)) {
          uVar11 = *(uint *)((long)puVar13 + 0x24);
          uVar16 = uVar11 >> 0x1e & 1;
          uVar3 = *(uint *)((long)puVar15 + 0x24) >> 0x1e & 1;
          bVar5 = uVar3 <= uVar16;
          if ((((uVar16 == uVar3) && (bVar5 = puVar15[1] <= puVar13[1], puVar13[1] == puVar15[1]))
              && (bVar5 = *puVar15 <= *puVar13, *puVar13 == *puVar15)) &&
             ((bVar5 = puVar15[2] <= puVar13[2], puVar13[2] == puVar15[2] &&
              (bVar5 = puVar15[3] <= puVar13[3], puVar13[3] == puVar15[3])))) {
            if (uVar11 >> 0x1f < *(uint *)((long)puVar15 + 0x24) >> 0x1f) {
LAB_00a30bcc:
              uVar22 = *puVar15;
              uVar25 = puVar15[3];
              uVar23 = puVar15[2];
              uVar6 = *puVar13;
              uVar1 = puVar13[1];
              uVar24 = puVar13[2];
              uVar2 = puVar13[3];
              puVar13[1] = puVar15[1];
              *puVar13 = uVar22;
              puVar13[3] = uVar25;
              puVar13[2] = uVar23;
              puVar13[4] = puVar15[4];
              puVar7 = (ulong *)param_1;
              if (puVar15 != (ulong *)param_1) {
                lVar18 = lVar8;
                do {
                  puVar7 = puVar15;
                  if (fVar19 == *(float *)(param_1 + lVar18 + 0x48)) {
                    uVar3 = *(uint *)(param_1 + lVar18 + 0x4c) >> 0x1e & 1;
                    bVar5 = uVar3 <= uVar16;
                    if (uVar16 == uVar3) {
                      bVar5 = *(ulong *)(param_1 + lVar18 + 0x30) <= uVar1;
                      if ((uVar1 == *(ulong *)(param_1 + lVar18 + 0x30)) &&
                         (bVar5 = *(ulong *)(param_1 + lVar18 + 0x28) <= uVar6,
                         uVar6 == *(ulong *)(param_1 + lVar18 + 0x28))) {
                        bVar5 = *(ulong *)(param_1 + lVar18 + 0x38) <= uVar24;
                        if ((uVar24 == *(ulong *)(param_1 + lVar18 + 0x38)) &&
                           (bVar5 = *(ulong *)(param_1 + lVar18 + 0x40) <= uVar2,
                           uVar2 == *(ulong *)(param_1 + lVar18 + 0x40))) {
                          if (uVar11 >> 0x1f < *(uint *)(param_1 + lVar18 + 0x4c) >> 0x1f)
                          goto LAB_00a30c00;
                          puVar7 = (ulong *)(param_1 + lVar18 + 0x50);
                          break;
                        }
                      }
                    }
                    if (bVar5) break;
                  }
                  else if (fVar19 <= *(float *)(param_1 + lVar18 + 0x48)) break;
LAB_00a30c00:
                  puVar15 = puVar15 + -5;
                  lVar17 = lVar18 + -0x28;
                  *(undefined8 *)(param_1 + lVar18 + 0x58) =
                       *(undefined8 *)(param_1 + lVar18 + 0x30);
                  *(undefined8 *)(param_1 + lVar18 + 0x50) =
                       *(undefined8 *)(param_1 + lVar18 + 0x28);
                  *(undefined8 *)(param_1 + lVar18 + 0x68) =
                       *(undefined8 *)(param_1 + lVar18 + 0x40);
                  *(undefined8 *)(param_1 + lVar18 + 0x60) =
                       *(undefined8 *)(param_1 + lVar18 + 0x38);
                  *(undefined8 *)(param_1 + lVar18 + 0x70) =
                       *(undefined8 *)(param_1 + lVar18 + 0x48);
                  puVar7 = (ulong *)param_1;
                  lVar18 = lVar17;
                } while (lVar17 != -0x50);
              }
              iVar9 = iVar9 + 1;
              *puVar7 = uVar6;
              puVar7[1] = uVar1;
              puVar7[2] = uVar24;
              puVar7[3] = uVar2;
              *(float *)(puVar7 + 4) = fVar19;
              *(uint *)((long)puVar7 + 0x24) = uVar11;
              if (iVar9 == 8) {
                bVar5 = puVar13 + 5 == (ulong *)param_2;
                goto switchD_00a30a9c_caseD_0;
              }
            }
          }
          else if (!bVar5) goto LAB_00a30bcc;
        }
        else if (*(float *)(puVar15 + 4) < fVar19) {
          uVar11 = *(uint *)((long)puVar13 + 0x24);
          uVar16 = uVar11 >> 0x1e & 1;
          goto LAB_00a30bcc;
        }
        lVar8 = lVar8 + 0x28;
        puVar7 = puVar13 + 5;
        puVar15 = puVar13;
      } while (puVar13 + 5 != (ulong *)param_2);
    }
    goto LAB_00a30cdc;
  }
  bVar5 = true;
  switch(uVar6) {
  case 2:
    fVar19 = *(float *)(param_2 + -8);
    puVar7 = (ulong *)(param_2 + -0x28);
    fVar21 = *(float *)(param_1 + 0x20);
    if (fVar19 == fVar21) {
      uVar11 = *(uint *)(param_2 + -4) >> 0x1e & 1;
      uVar16 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
      bVar5 = uVar16 <= uVar11;
      if ((((uVar11 == uVar16) &&
           (bVar5 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + -0x20),
           *(ulong *)(param_2 + -0x20) == *(ulong *)(param_1 + 8))) &&
          (bVar5 = *(ulong *)param_1 <= *puVar7, *puVar7 == *(ulong *)param_1)) &&
         ((bVar5 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + -0x18),
          *(ulong *)(param_2 + -0x18) == *(ulong *)(param_1 + 0x10) &&
          (bVar5 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + -0x10),
          *(ulong *)(param_2 + -0x10) == *(ulong *)(param_1 + 0x18))))) {
        if (*(uint *)(param_2 + -4) >> 0x1f < *(uint *)(param_1 + 0x24) >> 0x1f) {
LAB_00a30d70:
          uVar6 = *puVar7;
          uVar20 = *(undefined8 *)(param_2 + -0x10);
          uVar14 = *(undefined8 *)(param_2 + -0x18);
          bVar5 = true;
          uVar26 = *(undefined8 *)(param_1 + 8);
          uVar24 = *(ulong *)param_1;
          uVar28 = *(undefined8 *)(param_1 + 0x18);
          uVar27 = *(undefined8 *)(param_1 + 0x10);
          uVar10 = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
          *(ulong *)param_1 = uVar6;
          *(undefined8 *)(param_1 + 0x18) = uVar20;
          *(undefined8 *)(param_1 + 0x10) = uVar14;
          uVar14 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = uVar10;
          *(undefined8 *)(param_2 + -8) = uVar14;
          *(undefined8 *)(param_2 + -0x20) = uVar26;
          *puVar7 = uVar24;
          *(undefined8 *)(param_2 + -0x10) = uVar28;
          *(undefined8 *)(param_2 + -0x18) = uVar27;
          break;
        }
      }
      else if (!bVar5) goto LAB_00a30d70;
    }
    else if (fVar19 != fVar21 && fVar21 <= fVar19) goto LAB_00a30d70;
    goto LAB_00a30cdc;
  case 3:
    __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,param_1 + 0x28,param_2 + -0x28,param_3);
    bVar5 = true;
    break;
  case 4:
    __sort4<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
LAB_00a30cdc:
    bVar5 = true;
    break;
  case 5:
    FUN_00a30548(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
    bVar5 = true;
  }
switchD_00a30a9c_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


