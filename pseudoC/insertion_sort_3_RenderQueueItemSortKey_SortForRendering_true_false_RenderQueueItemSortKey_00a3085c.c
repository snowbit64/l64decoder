// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a3085c
// Size: 480 bytes
// Signature: void __cdecl __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, SortForRendering * param_3)


/* void std::__ndk1::__insertion_sort_3<RenderQueueItemSortKey::SortForRendering<true, false>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey::SortForRendering<true, false>&) */

void std::__ndk1::
     __insertion_sort_3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               SortForRendering *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
            (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
  if (param_1 + 0x78 != param_2) {
    lVar7 = 0;
    puVar12 = (ulong *)(param_1 + 0x78);
    puVar10 = (ulong *)(param_1 + 0x50);
    do {
      puVar9 = puVar12;
      fVar15 = *(float *)(puVar9 + 4);
      if (fVar15 == *(float *)(puVar10 + 4)) {
        uVar8 = *(uint *)((long)puVar9 + 0x24);
        uVar11 = uVar8 >> 0x1e & 1;
        uVar5 = *(uint *)((long)puVar10 + 0x24) >> 0x1e & 1;
        bVar6 = uVar5 <= uVar11;
        if ((((uVar11 == uVar5) && (bVar6 = puVar10[1] <= puVar9[1], puVar9[1] == puVar10[1])) &&
            (bVar6 = *puVar10 <= *puVar9, *puVar9 == *puVar10)) &&
           ((bVar6 = puVar10[2] <= puVar9[2], puVar9[2] == puVar10[2] &&
            (bVar6 = puVar10[3] <= puVar9[3], puVar9[3] == puVar10[3])))) {
          if (uVar8 >> 0x1f < *(uint *)((long)puVar10 + 0x24) >> 0x1f) {
LAB_00a30954:
            uVar16 = *puVar10;
            uVar18 = puVar10[3];
            uVar17 = puVar10[2];
            uVar1 = *puVar9;
            uVar3 = puVar9[1];
            uVar2 = puVar9[2];
            uVar4 = puVar9[3];
            puVar9[1] = puVar10[1];
            *puVar9 = uVar16;
            puVar9[3] = uVar18;
            puVar9[2] = uVar17;
            puVar9[4] = puVar10[4];
            puVar12 = (ulong *)param_1;
            if (puVar10 != (ulong *)param_1) {
              lVar14 = lVar7;
              do {
                puVar12 = puVar10;
                if (fVar15 == *(float *)(param_1 + lVar14 + 0x48)) {
                  uVar5 = *(uint *)(param_1 + lVar14 + 0x4c) >> 0x1e & 1;
                  bVar6 = uVar5 <= uVar11;
                  if (uVar11 == uVar5) {
                    bVar6 = *(ulong *)(param_1 + lVar14 + 0x30) <= uVar3;
                    if ((uVar3 == *(ulong *)(param_1 + lVar14 + 0x30)) &&
                       (bVar6 = *(ulong *)(param_1 + lVar14 + 0x28) <= uVar1,
                       uVar1 == *(ulong *)(param_1 + lVar14 + 0x28))) {
                      bVar6 = *(ulong *)(param_1 + lVar14 + 0x38) <= uVar2;
                      if ((uVar2 == *(ulong *)(param_1 + lVar14 + 0x38)) &&
                         (bVar6 = *(ulong *)(param_1 + lVar14 + 0x40) <= uVar4,
                         uVar4 == *(ulong *)(param_1 + lVar14 + 0x40))) {
                        if (uVar8 >> 0x1f < *(uint *)(param_1 + lVar14 + 0x4c) >> 0x1f)
                        goto LAB_00a30988;
                        puVar12 = (ulong *)(param_1 + lVar14 + 0x50);
                        break;
                      }
                    }
                  }
                  if (bVar6) break;
                }
                else if (fVar15 <= *(float *)(param_1 + lVar14 + 0x48)) break;
LAB_00a30988:
                puVar10 = puVar10 + -5;
                lVar13 = lVar14 + -0x28;
                *(undefined8 *)(param_1 + lVar14 + 0x58) = *(undefined8 *)(param_1 + lVar14 + 0x30);
                *(undefined8 *)(param_1 + lVar14 + 0x50) = *(undefined8 *)(param_1 + lVar14 + 0x28);
                *(undefined8 *)(param_1 + lVar14 + 0x68) = *(undefined8 *)(param_1 + lVar14 + 0x40);
                *(undefined8 *)(param_1 + lVar14 + 0x60) = *(undefined8 *)(param_1 + lVar14 + 0x38);
                *(undefined8 *)(param_1 + lVar14 + 0x70) = *(undefined8 *)(param_1 + lVar14 + 0x48);
                puVar12 = (ulong *)param_1;
                lVar14 = lVar13;
              } while (lVar13 != -0x50);
            }
            *puVar12 = uVar1;
            puVar12[1] = uVar3;
            puVar12[2] = uVar2;
            puVar12[3] = uVar4;
            *(float *)(puVar12 + 4) = fVar15;
            *(uint *)((long)puVar12 + 0x24) = uVar8;
          }
        }
        else if (!bVar6) goto LAB_00a30954;
      }
      else if (*(float *)(puVar10 + 4) < fVar15) {
        uVar8 = *(uint *)((long)puVar9 + 0x24);
        uVar11 = uVar8 >> 0x1e & 1;
        goto LAB_00a30954;
      }
      lVar7 = lVar7 + 0x28;
      puVar12 = puVar9 + 5;
      puVar10 = puVar9;
    } while (puVar9 + 5 != (ulong *)param_2);
  }
  return;
}


