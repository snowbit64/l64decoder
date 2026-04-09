// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
// Entry Point: 00a2ff6c
// Size: 884 bytes
// Signature: uint __cdecl __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>(RenderQueueItemSortKey * param_1, RenderQueueItemSortKey * param_2, RenderQueueItemSortKey * param_3, SortForRendering * param_4)


/* unsigned int std::__ndk1::__sort3<RenderQueueItemSortKey::SortForRendering<true, false>&,
   RenderQueueItemSortKey*>(RenderQueueItemSortKey*, RenderQueueItemSortKey*,
   RenderQueueItemSortKey*, RenderQueueItemSortKey::SortForRendering<true, false>&) */

uint std::__ndk1::
     __sort3<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
               (RenderQueueItemSortKey *param_1,RenderQueueItemSortKey *param_2,
               RenderQueueItemSortKey *param_3,SortForRendering *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x20);
  if (fVar8 == *(float *)(param_1 + 0x20)) {
    uVar4 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
    uVar1 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
    bVar3 = uVar1 <= uVar4;
    if ((((uVar4 != uVar1) ||
         (bVar3 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + 8),
         *(ulong *)(param_2 + 8) != *(ulong *)(param_1 + 8))) ||
        (bVar3 = *(ulong *)param_1 <= *(ulong *)param_2, *(ulong *)param_2 != *(ulong *)param_1)) ||
       ((bVar3 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10),
        *(ulong *)(param_2 + 0x10) != *(ulong *)(param_1 + 0x10) ||
        (bVar3 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18),
        *(ulong *)(param_2 + 0x18) != *(ulong *)(param_1 + 0x18))))) {
      if (bVar3) goto LAB_00a30034;
      goto LAB_00a2ff98;
    }
    if (*(uint *)(param_2 + 0x24) >> 0x1f < *(uint *)(param_1 + 0x24) >> 0x1f) goto LAB_00a2ff98;
LAB_00a30034:
    if (*(float *)(param_3 + 0x20) == fVar8) {
      uVar4 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
      uVar1 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
      bVar3 = uVar1 <= uVar4;
      if (((uVar4 == uVar1) &&
          (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
          *(ulong *)(param_3 + 8) == *(ulong *)(param_2 + 8))) &&
         ((bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 == *(ulong *)param_2 &&
          ((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
           *(ulong *)(param_3 + 0x10) == *(ulong *)(param_2 + 0x10) &&
           (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
           *(ulong *)(param_3 + 0x18) == *(ulong *)(param_2 + 0x18))))))) {
        if (*(uint *)(param_2 + 0x24) >> 0x1f <= *(uint *)(param_3 + 0x24) >> 0x1f) {
LAB_00a3018c:
          uVar4 = 0;
          goto LAB_00a302c0;
        }
      }
      else if (bVar3) goto LAB_00a3018c;
    }
    else if (*(float *)(param_3 + 0x20) <= fVar8) goto LAB_00a3018c;
    uVar11 = *(undefined8 *)param_3;
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar11;
    *(undefined8 *)(param_2 + 0x18) = uVar9;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar6;
    *(undefined8 *)(param_3 + 0x20) = uVar7;
    *(undefined8 *)(param_3 + 8) = uVar13;
    *(undefined8 *)param_3 = uVar12;
    *(undefined8 *)(param_3 + 0x18) = uVar15;
    *(undefined8 *)(param_3 + 0x10) = uVar14;
    fVar8 = *(float *)(param_2 + 0x20);
    fVar10 = *(float *)(param_1 + 0x20);
    if (fVar8 == fVar10) {
      uVar4 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
      uVar1 = *(uint *)(param_1 + 0x24) >> 0x1e & 1;
      bVar3 = uVar1 <= uVar4;
      if ((((uVar4 == uVar1) &&
           (bVar3 = *(ulong *)(param_1 + 8) <= *(ulong *)(param_2 + 8),
           *(ulong *)(param_2 + 8) == *(ulong *)(param_1 + 8))) &&
          (bVar3 = *(ulong *)param_1 <= *(ulong *)param_2, *(ulong *)param_2 == *(ulong *)param_1))
         && ((bVar3 = *(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10),
             *(ulong *)(param_2 + 0x10) == *(ulong *)(param_1 + 0x10) &&
             (bVar3 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_2 + 0x18),
             *(ulong *)(param_2 + 0x18) == *(ulong *)(param_1 + 0x18))))) {
        if (*(uint *)(param_2 + 0x24) >> 0x1f < *(uint *)(param_1 + 0x24) >> 0x1f) {
LAB_00a30268:
          uVar11 = *(undefined8 *)param_2;
          uVar9 = *(undefined8 *)(param_2 + 0x18);
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)param_1 = uVar11;
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          *(undefined8 *)(param_1 + 0x10) = uVar7;
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          uVar4 = 2;
          *(undefined8 *)(param_2 + 0x20) = uVar7;
          *(undefined8 *)(param_2 + 8) = uVar13;
          *(undefined8 *)param_2 = uVar12;
          *(undefined8 *)(param_2 + 0x18) = uVar15;
          *(undefined8 *)(param_2 + 0x10) = uVar14;
          goto LAB_00a302c0;
        }
      }
      else if (!bVar3) goto LAB_00a30268;
    }
    else if (fVar8 != fVar10 && fVar10 <= fVar8) goto LAB_00a30268;
    goto LAB_00a302bc;
  }
  if (fVar8 <= *(float *)(param_1 + 0x20)) goto LAB_00a30034;
LAB_00a2ff98:
  if (*(float *)(param_3 + 0x20) == fVar8) {
    uVar4 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
    uVar1 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
    bVar3 = uVar1 <= uVar4;
    if (((uVar4 != uVar1) ||
        (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
        *(ulong *)(param_3 + 8) != *(ulong *)(param_2 + 8))) ||
       ((bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 != *(ulong *)param_2 ||
        ((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
         *(ulong *)(param_3 + 0x10) != *(ulong *)(param_2 + 0x10) ||
         (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
         *(ulong *)(param_3 + 0x18) != *(ulong *)(param_2 + 0x18))))))) {
      if (bVar3) goto LAB_00a30150;
      goto LAB_00a2ffa8;
    }
    if (*(uint *)(param_3 + 0x24) >> 0x1f < *(uint *)(param_2 + 0x24) >> 0x1f) goto LAB_00a2ffa8;
LAB_00a30150:
    uVar11 = *(undefined8 *)param_2;
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar11;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_2 + 0x20) = uVar7;
    *(undefined8 *)(param_2 + 8) = uVar13;
    *(undefined8 *)param_2 = uVar12;
    *(undefined8 *)(param_2 + 0x18) = uVar15;
    *(undefined8 *)(param_2 + 0x10) = uVar14;
    if (*(float *)(param_3 + 0x20) == *(float *)(param_2 + 0x20)) {
      uVar4 = *(uint *)(param_3 + 0x24) >> 0x1e & 1;
      uVar1 = *(uint *)(param_2 + 0x24) >> 0x1e & 1;
      bVar3 = uVar1 <= uVar4;
      if ((((uVar4 == uVar1) &&
           (bVar3 = *(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8),
           *(ulong *)(param_3 + 8) == *(ulong *)(param_2 + 8))) &&
          (bVar3 = *(ulong *)param_2 <= *(ulong *)param_3, *(ulong *)param_3 == *(ulong *)param_2))
         && ((bVar3 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_3 + 0x10),
             *(ulong *)(param_3 + 0x10) == *(ulong *)(param_2 + 0x10) &&
             (bVar3 = *(ulong *)(param_2 + 0x18) <= *(ulong *)(param_3 + 0x18),
             *(ulong *)(param_3 + 0x18) == *(ulong *)(param_2 + 0x18))))) {
        if (*(uint *)(param_2 + 0x24) >> 0x1f <= *(uint *)(param_3 + 0x24) >> 0x1f) {
LAB_00a302bc:
          uVar4 = 1;
          goto LAB_00a302c0;
        }
      }
      else if (bVar3) goto LAB_00a302bc;
    }
    else if (*(float *)(param_3 + 0x20) <= *(float *)(param_2 + 0x20)) goto LAB_00a302bc;
    uVar11 = *(undefined8 *)param_3;
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar4 = 2;
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar11;
    *(undefined8 *)(param_2 + 0x18) = uVar9;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar6;
  }
  else {
    if (*(float *)(param_3 + 0x20) <= fVar8) goto LAB_00a30150;
LAB_00a2ffa8:
    uVar11 = *(undefined8 *)param_3;
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_1 = uVar11;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    uVar4 = 1;
  }
  *(undefined8 *)(param_3 + 0x20) = uVar7;
  *(undefined8 *)(param_3 + 8) = uVar13;
  *(undefined8 *)param_3 = uVar12;
  *(undefined8 *)(param_3 + 0x18) = uVar15;
  *(undefined8 *)(param_3 + 0x10) = uVar14;
LAB_00a302c0:
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


