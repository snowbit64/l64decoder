// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a31f4c
// Size: 476 bytes
// Signature: void __cdecl __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* void std::__ndk1::__insertion_sort_3<RenderQueueItemSortKey::SortForRendering<false, false>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<false, false>&) */

void std::__ndk1::
     __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  __sort3<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
            (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
  if (param_1 + 0x78 != param_2) {
    lVar7 = 0;
    puVar12 = (ulong *)(param_1 + 0x78);
    puVar10 = (ulong *)(param_1 + 0x50);
    do {
      puVar8 = puVar12;
      uVar3 = *(uint *)((long)puVar8 + 0x24);
      fVar15 = *(float *)(puVar8 + 4);
      uVar4 = uVar3 >> 0x1e & 1;
      uVar5 = *(uint *)((long)puVar10 + 0x24) >> 0x1e & 1;
      if (uVar4 == uVar5) {
        uVar9 = puVar8[1];
        bVar6 = puVar10[1] <= uVar9;
        if ((((uVar9 == puVar10[1]) && (bVar6 = *puVar10 <= *puVar8, *puVar8 == *puVar10)) &&
            (bVar6 = puVar10[2] <= puVar8[2], puVar8[2] == puVar10[2])) &&
           ((bVar6 = puVar10[3] <= puVar8[3], puVar8[3] == puVar10[3] &&
            (uVar5 = -((int)*(uint *)((long)puVar10 + 0x24) >> 0x1f), bVar6 = uVar5 <= uVar3 >> 0x1f
            , uVar3 >> 0x1f == uVar5)))) {
          if (fVar15 < *(float *)(puVar10 + 4)) {
LAB_00a32044:
            uVar16 = *puVar10;
            uVar18 = puVar10[3];
            uVar17 = puVar10[2];
            uVar1 = puVar8[2];
            uVar2 = puVar8[3];
            uVar11 = *puVar8;
            puVar8[1] = puVar10[1];
            *puVar8 = uVar16;
            puVar8[3] = uVar18;
            puVar8[2] = uVar17;
            puVar8[4] = puVar10[4];
            puVar12 = (ulong *)param_1;
            if (puVar10 != (ulong *)param_1) {
              lVar13 = lVar7;
              do {
                uVar5 = *(uint *)(param_1 + lVar13 + 0x4c) >> 0x1e & 1;
                bVar6 = uVar5 <= uVar4;
                if ((uVar4 == uVar5) &&
                   (bVar6 = *(ulong *)(param_1 + lVar13 + 0x30) <= uVar9,
                   uVar9 == *(ulong *)(param_1 + lVar13 + 0x30))) {
                  bVar6 = *(ulong *)(param_1 + lVar13 + 0x28) <= uVar11;
                  if ((uVar11 != *(ulong *)(param_1 + lVar13 + 0x28)) ||
                     (((bVar6 = *(ulong *)(param_1 + lVar13 + 0x38) <= uVar1,
                       uVar1 != *(ulong *)(param_1 + lVar13 + 0x38) ||
                       (bVar6 = *(ulong *)(param_1 + lVar13 + 0x40) <= uVar2,
                       uVar2 != *(ulong *)(param_1 + lVar13 + 0x40))) ||
                      (uVar5 = -((int)*(uint *)(param_1 + lVar13 + 0x4c) >> 0x1f),
                      bVar6 = uVar5 <= uVar3 >> 0x1f, uVar3 >> 0x1f != uVar5)))) goto LAB_00a320d8;
                  if (*(float *)(param_1 + lVar13 + 0x48) <= fVar15) {
                    puVar12 = (ulong *)(param_1 + lVar13 + 0x50);
                    break;
                  }
                }
                else {
LAB_00a320d8:
                  puVar12 = puVar10;
                  if (bVar6) break;
                }
                puVar10 = puVar10 + -5;
                lVar14 = lVar13 + -0x28;
                *(undefined8 *)(param_1 + lVar13 + 0x58) = *(undefined8 *)(param_1 + lVar13 + 0x30);
                *(undefined8 *)(param_1 + lVar13 + 0x50) = *(undefined8 *)(param_1 + lVar13 + 0x28);
                *(undefined8 *)(param_1 + lVar13 + 0x68) = *(undefined8 *)(param_1 + lVar13 + 0x40);
                *(undefined8 *)(param_1 + lVar13 + 0x60) = *(undefined8 *)(param_1 + lVar13 + 0x38);
                *(undefined8 *)(param_1 + lVar13 + 0x70) = *(undefined8 *)(param_1 + lVar13 + 0x48);
                puVar12 = (ulong *)param_1;
                lVar13 = lVar14;
              } while (lVar14 != -0x50);
            }
            *puVar12 = uVar11;
            puVar12[1] = uVar9;
            puVar12[2] = uVar1;
            puVar12[3] = uVar2;
            *(float *)(puVar12 + 4) = fVar15;
            *(uint *)((long)puVar12 + 0x24) = uVar3;
          }
        }
        else if (!bVar6) goto LAB_00a32044;
      }
      else if (uVar4 < uVar5) {
        uVar9 = puVar8[1];
        goto LAB_00a32044;
      }
      lVar7 = lVar7 + 0x28;
      puVar12 = puVar8 + 5;
      puVar10 = puVar8;
    } while (puVar8 + 5 != (ulong *)param_2);
  }
  return;
}


