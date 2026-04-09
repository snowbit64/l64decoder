// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>
// Entry Point: 00a34738
// Size: 892 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>(TextureSetBucket * param_1, TextureSetBucket * param_2, SortByDepth * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,
   RenderQueueItemAllocator::TextureSetBucket*>(RenderQueueItemAllocator::TextureSetBucket*,
   RenderQueueItemAllocator::TextureSetBucket*,
   RenderQueueItemAllocator::TextureSetBucket::SortByDepth&) */

bool std::__ndk1::
     __insertion_sort_incomplete<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>
               (TextureSetBucket *param_1,TextureSetBucket *param_2,SortByDepth *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  uVar5 = (long)param_2 - (long)param_1 >> 5;
  if (uVar5 < 6) {
    bVar4 = true;
    switch(uVar5) {
    default:
      goto switchD_00a34794_caseD_0;
    case 2:
      if (*(double *)(param_2 + -8) < *(double *)(param_1 + 0x18)) {
        uVar12 = *(undefined8 *)(param_2 + -0x20);
        uVar15 = *(undefined8 *)(param_2 + -8);
        uVar13 = *(undefined8 *)(param_2 + -0x10);
        bVar4 = true;
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)param_1;
        uVar20 = *(undefined8 *)(param_1 + 0x18);
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)param_1 = uVar12;
        *(undefined8 *)(param_1 + 0x18) = uVar15;
        *(undefined8 *)(param_1 + 0x10) = uVar13;
        *(undefined8 *)(param_2 + -0x18) = uVar18;
        *(undefined8 *)(param_2 + -0x20) = uVar16;
        *(undefined8 *)(param_2 + -8) = uVar20;
        *(undefined8 *)(param_2 + -0x10) = uVar19;
        goto switchD_00a34794_caseD_0;
      }
      break;
    case 3:
      dVar14 = *(double *)(param_1 + 0x38);
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar8 = (undefined8 *)(param_2 + -0x20);
      if (dVar14 < *(double *)(param_1 + 0x18)) {
        if (dVar14 <= *(double *)(param_2 + -8)) {
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar15 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)param_1 = *puVar6;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x28) = uVar13;
          *puVar6 = uVar12;
          *(undefined8 *)(param_1 + 0x38) = uVar16;
          *(undefined8 *)(param_1 + 0x30) = uVar15;
          if (*(double *)(param_1 + 0x38) <= *(double *)(param_2 + -8)) break;
          uVar12 = *puVar8;
          uVar15 = *(undefined8 *)(param_2 + -8);
          uVar13 = *(undefined8 *)(param_2 + -0x10);
          uVar18 = *(undefined8 *)(param_1 + 0x28);
          uVar16 = *puVar6;
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar19 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -0x18);
          *puVar6 = uVar12;
          *(undefined8 *)(param_1 + 0x38) = uVar15;
          *(undefined8 *)(param_1 + 0x30) = uVar13;
        }
        else {
          uVar12 = *puVar8;
          uVar15 = *(undefined8 *)(param_2 + -8);
          uVar13 = *(undefined8 *)(param_2 + -0x10);
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar16 = *(undefined8 *)param_1;
          uVar20 = *(undefined8 *)(param_1 + 0x18);
          uVar19 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x18);
          *(undefined8 *)param_1 = uVar12;
          *(undefined8 *)(param_1 + 0x18) = uVar15;
          *(undefined8 *)(param_1 + 0x10) = uVar13;
        }
        bVar4 = true;
        *(undefined8 *)(param_2 + -0x18) = uVar18;
        *puVar8 = uVar16;
        *(undefined8 *)(param_2 + -8) = uVar20;
        *(undefined8 *)(param_2 + -0x10) = uVar19;
        goto switchD_00a34794_caseD_0;
      }
      if (*(double *)(param_2 + -8) < dVar14) {
        uVar12 = *puVar8;
        uVar15 = *(undefined8 *)(param_2 + -8);
        uVar13 = *(undefined8 *)(param_2 + -0x10);
        uVar18 = *(undefined8 *)(param_1 + 0x28);
        uVar16 = *puVar6;
        uVar20 = *(undefined8 *)(param_1 + 0x38);
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -0x18);
        *puVar6 = uVar12;
        *(undefined8 *)(param_1 + 0x38) = uVar15;
        *(undefined8 *)(param_1 + 0x30) = uVar13;
        *(undefined8 *)(param_2 + -0x18) = uVar18;
        *puVar8 = uVar16;
        *(undefined8 *)(param_2 + -8) = uVar20;
        *(undefined8 *)(param_2 + -0x10) = uVar19;
        if (*(double *)(param_1 + 0x38) < *(double *)(param_1 + 0x18)) {
          bVar4 = true;
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar15 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)param_1 = *puVar6;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x28) = uVar13;
          *puVar6 = uVar12;
          *(undefined8 *)(param_1 + 0x38) = uVar16;
          *(undefined8 *)(param_1 + 0x30) = uVar15;
          goto switchD_00a34794_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>
                (param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
      break;
    case 5:
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar8 = (undefined8 *)(param_1 + 0x40);
      puVar1 = (undefined8 *)(param_1 + 0x60);
      __sort4<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>
                (param_1,(TextureSetBucket *)puVar6,(TextureSetBucket *)puVar8,
                 (TextureSetBucket *)puVar1,param_3);
      if (*(double *)(param_2 + -8) < *(double *)(param_1 + 0x78)) {
        uVar12 = *(undefined8 *)(param_2 + -0x20);
        uVar15 = *(undefined8 *)(param_2 + -8);
        uVar13 = *(undefined8 *)(param_2 + -0x10);
        uVar18 = *(undefined8 *)(param_1 + 0x68);
        uVar16 = *puVar1;
        uVar20 = *(undefined8 *)(param_1 + 0x78);
        uVar19 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + -0x18);
        *puVar1 = uVar12;
        *(undefined8 *)(param_1 + 0x78) = uVar15;
        *(undefined8 *)(param_1 + 0x70) = uVar13;
        *(undefined8 *)(param_2 + -0x18) = uVar18;
        *(undefined8 *)(param_2 + -0x20) = uVar16;
        *(undefined8 *)(param_2 + -8) = uVar20;
        *(undefined8 *)(param_2 + -0x10) = uVar19;
        if (*(double *)(param_1 + 0x78) < *(double *)(param_1 + 0x58)) {
          uVar16 = *(undefined8 *)(param_1 + 0x48);
          uVar15 = *puVar8;
          uVar13 = *(undefined8 *)(param_1 + 0x58);
          uVar12 = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x68);
          *puVar8 = *puVar1;
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 *)(param_1 + 0x68) = uVar16;
          *puVar1 = uVar15;
          *(undefined8 *)(param_1 + 0x78) = uVar13;
          *(undefined8 *)(param_1 + 0x70) = uVar12;
          if (*(double *)(param_1 + 0x58) < *(double *)(param_1 + 0x38)) {
            uVar16 = *(undefined8 *)(param_1 + 0x28);
            uVar15 = *puVar6;
            uVar13 = *(undefined8 *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
            *puVar6 = *puVar8;
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x50);
            *(undefined8 *)(param_1 + 0x48) = uVar16;
            *puVar8 = uVar15;
            *(undefined8 *)(param_1 + 0x58) = uVar13;
            *(undefined8 *)(param_1 + 0x50) = uVar12;
            if (*(double *)(param_1 + 0x38) < *(double *)(param_1 + 0x18)) {
              bVar4 = true;
              uVar13 = *(undefined8 *)(param_1 + 8);
              uVar12 = *(undefined8 *)param_1;
              uVar16 = *(undefined8 *)(param_1 + 0x18);
              uVar15 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)param_1 = *puVar6;
              *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)(param_1 + 0x28) = uVar13;
              *puVar6 = uVar12;
              *(undefined8 *)(param_1 + 0x38) = uVar16;
              *(undefined8 *)(param_1 + 0x30) = uVar15;
              goto switchD_00a34794_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    dVar17 = *(double *)(param_1 + 0x38);
    puVar6 = (undefined8 *)(param_1 + 0x40);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    dVar14 = *(double *)(param_1 + 0x58);
    if (*(double *)(param_1 + 0x18) <= dVar17) {
      if (dVar14 < dVar17) {
        uVar16 = *(undefined8 *)(param_1 + 0x28);
        uVar15 = *puVar8;
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
        *puVar8 = *puVar6;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x48) = uVar16;
        *puVar6 = uVar15;
        *(undefined8 *)(param_1 + 0x58) = uVar13;
        *(undefined8 *)(param_1 + 0x50) = uVar12;
        if (*(double *)(param_1 + 0x38) < *(double *)(param_1 + 0x18)) {
          uVar13 = *(undefined8 *)(param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar15 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)param_1 = *puVar8;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x28) = uVar13;
          *puVar8 = uVar12;
          *(undefined8 *)(param_1 + 0x38) = uVar16;
          *(undefined8 *)(param_1 + 0x30) = uVar15;
        }
      }
    }
    else {
      if (dVar17 <= dVar14) {
        uVar16 = *(undefined8 *)(param_1 + 0x28);
        uVar15 = *puVar8;
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 8);
        *puVar8 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar16;
        *(undefined8 *)param_1 = uVar15;
        *(undefined8 *)(param_1 + 0x18) = uVar13;
        *(undefined8 *)(param_1 + 0x10) = uVar12;
        if (*(double *)(param_1 + 0x38) <= dVar14) goto LAB_00a349c8;
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uVar12 = *puVar8;
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
        *puVar8 = *puVar6;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x50);
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 8);
        uVar12 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        uVar15 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)param_1 = *puVar6;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x50);
      }
      *(undefined8 *)(param_1 + 0x48) = uVar13;
      *puVar6 = uVar12;
      *(undefined8 *)(param_1 + 0x58) = uVar16;
      *(undefined8 *)(param_1 + 0x50) = uVar15;
    }
LAB_00a349c8:
    if (param_1 + 0x60 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar8 = (undefined8 *)(param_1 + 0x60);
      do {
        dVar14 = (double)puVar8[3];
        if (dVar14 < (double)puVar6[3]) {
          uVar15 = puVar8[1];
          uVar13 = *puVar8;
          uVar12 = puVar8[2];
          lVar3 = lVar9;
          do {
            lVar11 = lVar3;
            *(undefined8 *)(param_1 + lVar11 + 0x68) = *(undefined8 *)(param_1 + lVar11 + 0x48);
            *(undefined8 *)(param_1 + lVar11 + 0x60) = *(undefined8 *)(param_1 + lVar11 + 0x40);
            *(undefined8 *)(param_1 + lVar11 + 0x78) = *(undefined8 *)(param_1 + lVar11 + 0x58);
            *(undefined8 *)(param_1 + lVar11 + 0x70) = *(undefined8 *)(param_1 + lVar11 + 0x50);
            puVar6 = (undefined8 *)param_1;
            if (lVar11 == -0x40) goto LAB_00a349e4;
            lVar3 = lVar11 + -0x20;
          } while (dVar14 < *(double *)(param_1 + lVar11 + 0x38));
          puVar6 = (undefined8 *)(param_1 + lVar11 + 0x40);
LAB_00a349e4:
          iVar10 = iVar10 + 1;
          puVar6[3] = dVar14;
          puVar6[1] = uVar15;
          *puVar6 = uVar13;
          puVar6[2] = uVar12;
          if (iVar10 == 8) {
            bVar4 = puVar8 + 4 == (undefined8 *)param_2;
            goto switchD_00a34794_caseD_0;
          }
        }
        puVar1 = puVar8 + 4;
        lVar9 = lVar9 + 0x20;
        puVar6 = puVar8;
        puVar8 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar4 = true;
switchD_00a34794_caseD_0:
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


