// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a32128
// Size: 868 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,
   false>&, RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<false, false>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar5 = tpidr_el0;
  uVar7 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  lVar12 = *(long *)(lVar5 + 0x28);
  if (uVar7 < 6) {
    bVar6 = true;
    switch(uVar7) {
    default:
      goto switchD_00a32188_caseD_0;
    case 2:
      puVar8 = (ulong *)(param_2 + -0x28);
      uVar2 = *(uint *)(param_2 + -4) >> 0x1e & 1;
      uVar3 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
      bVar6 = uVar3 <= uVar2;
      if ((((uVar2 == uVar3) &&
           (bVar6 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + -0x20),
           *(ulong *)(param_2 + -0x20) == *(ulong *)(param_1 + 8))) &&
          ((bVar6 = *(ulong *)param_1 <= *puVar8, *puVar8 == *(ulong *)param_1 &&
           ((bVar6 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + -0x18),
            *(ulong *)(param_2 + -0x18) == *(ulong *)(param_1 + 0x10) &&
            (bVar6 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + -0x10),
            *(ulong *)(param_2 + -0x10) == *(ulong *)(param_1 + 0x18))))))) &&
         (uVar2 = *(uint *)(param_2 + -4) >> 0x1f, uVar3 = -((int)*(uint *)(param_1 + 0x24) >> 0x1f)
         , bVar6 = uVar3 <= uVar2, uVar2 == uVar3)) {
        if (*(float *)(param_2 + -8) < *(float *)(param_1 + 0x20)) {
LAB_00a32428:
          uVar7 = *puVar8;
          uVar20 = *(undefined8 *)(param_2 + -0x10);
          uVar14 = *(undefined8 *)(param_2 + -0x18);
          bVar6 = true;
          uVar25 = *(undefined8 *)(param_1 + 8);
          uVar23 = *(ulong *)param_1;
          uVar27 = *(undefined8 *)(param_1 + 0x18);
          uVar26 = *(undefined8 *)(param_1 + 0x10);
          uVar11 = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
          *(ulong *)param_1 = uVar7;
          *(undefined8 *)(param_1 + 0x18) = uVar20;
          *(undefined8 *)(param_1 + 0x10) = uVar14;
          uVar14 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = uVar11;
          *(undefined8 *)(param_2 + -8) = uVar14;
          *(undefined8 *)(param_2 + -0x20) = uVar25;
          *puVar8 = uVar23;
          *(undefined8 *)(param_2 + -0x10) = uVar27;
          *(undefined8 *)(param_2 + -0x18) = uVar26;
          goto switchD_00a32188_caseD_0;
        }
      }
      else if (!bVar6) goto LAB_00a32428;
      break;
    case 3:
      __sort3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
                (param_1,param_1 + 0x28,param_2 + -0x28,param_3);
      break;
    case 4:
      __sort4<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
                (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
      break;
    case 5:
      FUN_00a31c48(param_1,param_1 + 0x28,param_1 + 0x50,param_1 + 0x78,param_2 + -0x28);
    }
  }
  else {
    __sort3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
              (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
    if (param_1 + 0x78 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar8 = (ulong *)(param_1 + 0x78);
      puVar15 = (ulong *)(param_1 + 0x50);
      do {
        puVar13 = puVar8;
        uVar2 = *(uint *)((long)puVar13 + 0x24);
        fVar19 = *(float *)(puVar13 + 4);
        uVar3 = uVar2 >> 0x1e & 1;
        uVar4 = *(uint *)((long)puVar15 + 0x24) >> 0x1e & 1;
        if (uVar3 == uVar4) {
          uVar7 = puVar13[1];
          bVar6 = puVar15[1] <= uVar7;
          if ((((uVar7 == puVar15[1]) && (bVar6 = *puVar15 <= *puVar13, *puVar13 == *puVar15)) &&
              (bVar6 = puVar15[2] <= puVar13[2], puVar13[2] == puVar15[2])) &&
             ((bVar6 = puVar15[3] <= puVar13[3], puVar13[3] == puVar15[3] &&
              (uVar4 = -((int)*(uint *)((long)puVar15 + 0x24) >> 0x1f),
              bVar6 = uVar4 <= uVar2 >> 0x1f, uVar2 >> 0x1f == uVar4)))) {
            if (fVar19 < *(float *)(puVar15 + 4)) {
LAB_00a32318:
              uVar21 = *puVar15;
              uVar24 = puVar15[3];
              uVar22 = puVar15[2];
              uVar23 = puVar13[2];
              uVar1 = puVar13[3];
              uVar16 = *puVar13;
              puVar13[1] = puVar15[1];
              *puVar13 = uVar21;
              puVar13[3] = uVar24;
              puVar13[2] = uVar22;
              puVar13[4] = puVar15[4];
              puVar8 = (ulong *)param_1;
              if (puVar15 != (ulong *)param_1) {
                lVar17 = lVar9;
                do {
                  uVar4 = *(uint *)(param_1 + lVar17 + 0x4c) >> 0x1e & 1;
                  bVar6 = uVar4 <= uVar3;
                  if ((uVar3 == uVar4) &&
                     (bVar6 = *(ulong *)(param_1 + lVar17 + 0x30) <= uVar7,
                     uVar7 == *(ulong *)(param_1 + lVar17 + 0x30))) {
                    bVar6 = *(ulong *)(param_1 + lVar17 + 0x28) <= uVar16;
                    if ((uVar16 != *(ulong *)(param_1 + lVar17 + 0x28)) ||
                       (((bVar6 = *(ulong *)(param_1 + lVar17 + 0x38) <= uVar23,
                         uVar23 != *(ulong *)(param_1 + lVar17 + 0x38) ||
                         (bVar6 = *(ulong *)(param_1 + lVar17 + 0x40) <= uVar1,
                         uVar1 != *(ulong *)(param_1 + lVar17 + 0x40))) ||
                        (uVar4 = -((int)*(uint *)(param_1 + lVar17 + 0x4c) >> 0x1f),
                        bVar6 = uVar4 <= uVar2 >> 0x1f, uVar2 >> 0x1f != uVar4))))
                    goto LAB_00a323ac;
                    if (*(float *)(param_1 + lVar17 + 0x48) <= fVar19) {
                      puVar8 = (ulong *)(param_1 + lVar17 + 0x50);
                      break;
                    }
                  }
                  else {
LAB_00a323ac:
                    puVar8 = puVar15;
                    if (bVar6) break;
                  }
                  puVar15 = puVar15 + -5;
                  lVar18 = lVar17 + -0x28;
                  *(undefined8 *)(param_1 + lVar17 + 0x58) =
                       *(undefined8 *)(param_1 + lVar17 + 0x30);
                  *(undefined8 *)(param_1 + lVar17 + 0x50) =
                       *(undefined8 *)(param_1 + lVar17 + 0x28);
                  *(undefined8 *)(param_1 + lVar17 + 0x68) =
                       *(undefined8 *)(param_1 + lVar17 + 0x40);
                  *(undefined8 *)(param_1 + lVar17 + 0x60) =
                       *(undefined8 *)(param_1 + lVar17 + 0x38);
                  *(undefined8 *)(param_1 + lVar17 + 0x70) =
                       *(undefined8 *)(param_1 + lVar17 + 0x48);
                  puVar8 = (ulong *)param_1;
                  lVar17 = lVar18;
                } while (lVar18 != -0x50);
              }
              iVar10 = iVar10 + 1;
              *puVar8 = uVar16;
              puVar8[1] = uVar7;
              puVar8[2] = uVar23;
              puVar8[3] = uVar1;
              *(float *)(puVar8 + 4) = fVar19;
              *(uint *)((long)puVar8 + 0x24) = uVar2;
              if (iVar10 == 8) {
                bVar6 = puVar13 + 5 == (ulong *)param_2;
                goto switchD_00a32188_caseD_0;
              }
            }
          }
          else if (!bVar6) goto LAB_00a32318;
        }
        else if (uVar3 < uVar4) {
          uVar7 = puVar13[1];
          goto LAB_00a32318;
        }
        lVar9 = lVar9 + 0x28;
        puVar8 = puVar13 + 5;
        puVar15 = puVar13;
      } while (puVar13 + 5 != (ulong *)param_2);
    }
  }
  bVar6 = true;
switchD_00a32188_caseD_0:
  if (*(long *)(lVar5 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


