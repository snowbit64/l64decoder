// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PartitionMedian
// Entry Point: 00ec6410
// Size: 2588 bytes
// Signature: undefined __thiscall PartitionMedian(AABBTreeImpl * this, Node * param_1, uint * param_2, uint param_3)


/* aabbtree::AABBTreeImpl::PartitionMedian(aabbtree::AABBTreeImpl::Node&, unsigned int*, unsigned
   int) */

uint __thiscall
aabbtree::AABBTreeImpl::PartitionMedian(AABBTreeImpl *this,Node *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long local_80;
  long lStack_78;
  int local_70;
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar4 = param_3 >> 1;
  local_68 = *(long *)(lVar5 + 0x28);
  dVar19 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
  dVar20 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  lStack_78 = *(long *)(this + 0x20);
  local_70 = *(int *)(this + 0x28) * 3;
  dVar21 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
  uVar9 = 2;
  if (dVar20 < dVar19) {
    uVar9 = 1;
  }
  local_80 = *(long *)(this + 0x10);
  local_6c = 0;
  if ((dVar21 <= dVar20 || dVar21 == dVar19) || dVar20 < dVar21 && dVar21 < dVar19) {
    local_6c = uVar9;
  }
  if (uVar4 != param_3) {
    puVar15 = param_2 + uVar4;
    puVar18 = param_2 + param_3;
LAB_00ec64dc:
    puVar12 = puVar18 + -1;
    while( true ) {
      uVar10 = (long)puVar18 - (long)param_2 >> 2;
      if (uVar10 < 2) break;
      if (uVar10 == 3) {
        FUN_00ec7f8c(param_2,param_2 + 1,puVar12,&local_80);
        break;
      }
      if (uVar10 == 2) {
        uVar9 = *puVar12;
        uVar3 = uVar9 * 3;
        lVar16 = (ulong)local_6c * 8;
        uVar2 = *param_2;
        uVar7 = uVar2 * 3;
        dVar19 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = uVar9 < uVar2;
        if (dVar19 != dVar20) {
          bVar6 = dVar19 < dVar20;
        }
        if (bVar6) {
          *param_2 = uVar9;
          *puVar12 = uVar2;
        }
        break;
      }
      if ((long)puVar18 - (long)param_2 < 0x20) goto joined_r0x00ec6d18;
      if ((long)uVar10 < 0) {
        uVar10 = uVar10 + 1;
      }
      puVar11 = (uint *)((long)param_2 + (uVar10 & 0x7ffffffffffffffe) * 2);
      iVar8 = FUN_00ec7f8c(param_2,puVar11,puVar12,&local_80);
      uVar9 = *param_2;
      uVar3 = uVar9 * 3;
      lVar16 = (ulong)local_6c * 8;
      uVar2 = *puVar11;
      uVar7 = uVar2 * 3;
      dVar19 = (*(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16)) /
               3.0;
      dVar20 = (*(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16)) /
               3.0;
      bVar6 = uVar9 < uVar2;
      if (dVar19 != dVar20) {
        bVar6 = dVar19 < dVar20;
      }
      puVar13 = puVar12;
      if (bVar6) goto LAB_00ec6894;
      while (puVar13 = puVar13 + -1, puVar13 != param_2) {
        uVar3 = *puVar13;
        uVar7 = uVar3 * 3;
        dVar21 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = uVar3 < uVar2;
        if (dVar21 != dVar20) {
          bVar6 = dVar21 < dVar20;
        }
        if (bVar6) {
          iVar8 = iVar8 + 1;
          *param_2 = uVar3;
          *puVar13 = uVar9;
          goto LAB_00ec6894;
        }
      }
      uVar2 = *puVar12;
      uVar3 = uVar2 * 3;
      dVar20 = (*(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16)) /
               3.0;
      bVar6 = uVar9 < uVar2;
      if (dVar19 != dVar20) {
        bVar6 = dVar19 < dVar20;
      }
      puVar11 = param_2 + 1;
      puVar13 = puVar11;
      if (!bVar6) {
        while( true ) {
          if (puVar13 == puVar12) goto LAB_00ec6494;
          uVar3 = *puVar13;
          uVar7 = uVar3 * 3;
          dVar20 = (*(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                    *(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 +
                     lVar16) +
                   *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
          bVar6 = uVar9 < uVar3;
          if (dVar19 != dVar20) {
            bVar6 = dVar19 < dVar20;
          }
          if (bVar6) break;
          puVar13 = puVar13 + 1;
        }
        puVar11 = puVar13 + 1;
        *puVar13 = uVar2;
        *puVar12 = uVar3;
      }
      puVar13 = puVar12;
      if (puVar11 == puVar12) break;
      while( true ) {
        uVar9 = *param_2;
        uVar2 = uVar9 * 3;
        lVar16 = (ulong)local_6c * 8;
        dVar19 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar2 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        do {
          puVar14 = puVar11;
          puVar11 = puVar14 + 1;
          uVar2 = *puVar14;
          uVar3 = uVar2 * 3;
          dVar20 = (*(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                    *(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 +
                     lVar16) +
                   *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
          bVar6 = uVar9 < uVar2;
          if (dVar19 != dVar20) {
            bVar6 = dVar19 < dVar20;
          }
        } while (!bVar6);
        do {
          puVar13 = puVar13 + -1;
          uVar3 = *puVar13;
          uVar7 = uVar3 * 3;
          dVar20 = (*(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                    *(double *)
                     (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 +
                     lVar16) +
                   *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
          bVar6 = uVar9 < uVar3;
          if (dVar19 != dVar20) {
            bVar6 = dVar19 < dVar20;
          }
        } while (bVar6);
        if (puVar13 <= puVar14) break;
        *puVar14 = uVar3;
        *puVar13 = uVar2;
      }
      param_2 = puVar14;
      if (puVar15 < puVar14) break;
    }
  }
LAB_00ec6494:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
joined_r0x00ec6d18:
  for (; puVar12 != param_2; param_2 = param_2 + 1) {
    if ((param_2 != puVar18) && (param_2 + 1 != puVar18)) {
      puVar15 = param_2;
      puVar11 = param_2 + 1;
      do {
        puVar13 = puVar11 + 1;
        lVar16 = (ulong)local_6c * 8;
        uVar9 = *puVar11 * 3;
        uVar2 = *puVar15 * 3;
        dVar19 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar9 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar9 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar9 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar2 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = *puVar11 < *puVar15;
        if (dVar19 != dVar20) {
          bVar6 = dVar19 < dVar20;
        }
        puVar14 = puVar11;
        if (!bVar6) {
          puVar14 = puVar15;
        }
        puVar15 = puVar14;
        puVar11 = puVar13;
      } while (puVar13 != puVar18);
      if (puVar14 != param_2) {
        uVar9 = *param_2;
        *param_2 = *puVar14;
        *puVar14 = uVar9;
      }
    }
  }
  goto LAB_00ec6494;
LAB_00ec6894:
  puVar12 = param_2 + 1;
  puVar14 = puVar12;
  puVar17 = puVar12;
  if (puVar12 < puVar13) {
    while( true ) {
      uVar9 = *puVar11;
      uVar2 = uVar9 * 3;
      lVar16 = (ulong)local_6c * 8;
      dVar19 = (*(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar2 * 4) * 0x18 + lVar16) +
                *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 1) * 4) * 0x18 + lVar16) +
               *(double *)
                (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 2) * 4) * 0x18 + lVar16)) /
               3.0;
      do {
        puVar14 = puVar17;
        uVar2 = *puVar14;
        uVar3 = uVar2 * 3;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = uVar2 < uVar9;
        if (dVar20 != dVar19) {
          bVar6 = dVar20 < dVar19;
        }
        puVar17 = puVar14 + 1;
      } while (bVar6);
      do {
        puVar13 = puVar13 + -1;
        uVar3 = *puVar13;
        uVar7 = uVar3 * 3;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = uVar3 < uVar9;
        if (dVar20 != dVar19) {
          bVar6 = dVar20 < dVar19;
        }
      } while (!bVar6);
      if (puVar13 <= puVar14) break;
      iVar8 = iVar8 + 1;
      puVar1 = puVar13;
      if (puVar14 != puVar11) {
        puVar1 = puVar11;
      }
      *puVar14 = uVar3;
      *puVar13 = uVar2;
      puVar11 = puVar1;
    }
  }
  if (puVar14 != puVar11) {
    uVar9 = *puVar11;
    uVar3 = uVar9 * 3;
    lVar16 = (ulong)local_6c * 8;
    uVar2 = *puVar14;
    uVar7 = uVar2 * 3;
    dVar19 = (*(double *)(local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16)
              + *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16) +
             *(double *)
              (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16)) /
             3.0;
    dVar20 = (*(double *)(local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar7 * 4) * 0x18 + lVar16)
              + *(double *)
                 (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 1) * 4) * 0x18 + lVar16) +
             *(double *)
              (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar7 + 2) * 4) * 0x18 + lVar16)) /
             3.0;
    bVar6 = uVar9 < uVar2;
    if (dVar19 != dVar20) {
      bVar6 = dVar19 < dVar20;
    }
    if (bVar6) {
      iVar8 = iVar8 + 1;
      *puVar14 = uVar9;
      *puVar11 = uVar2;
    }
  }
  if (puVar14 == puVar15) goto LAB_00ec6494;
  if (iVar8 == 0) {
    lVar16 = (ulong)local_6c * 8;
    puVar11 = puVar14;
    if (puVar15 < puVar14) {
      do {
        if (puVar12 == puVar14) goto LAB_00ec6494;
        uVar9 = *puVar12;
        uVar2 = uVar9 * 3;
        puVar11 = puVar12 + -1;
        puVar12 = puVar12 + 1;
        uVar3 = *puVar11 * 3;
        dVar19 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar2 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar3 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar3 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = uVar9 < *puVar11;
        if (dVar19 != dVar20) {
          bVar6 = dVar19 < dVar20;
        }
      } while (!bVar6);
    }
    else {
      do {
        puVar12 = puVar11 + 1;
        if (puVar12 == puVar18) goto LAB_00ec6494;
        uVar9 = *puVar12 * 3;
        uVar2 = *puVar11 * 3;
        dVar19 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar9 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar9 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar9 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        dVar20 = (*(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)uVar2 * 4) * 0x18 + lVar16) +
                  *(double *)
                   (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 1) * 4) * 0x18 + lVar16)
                 + *(double *)
                    (local_80 + (ulong)*(uint *)(lStack_78 + (ulong)(uVar2 + 2) * 4) * 0x18 + lVar16
                    )) / 3.0;
        bVar6 = *puVar12 < *puVar11;
        if (dVar19 != dVar20) {
          bVar6 = dVar19 < dVar20;
        }
        puVar11 = puVar12;
      } while (!bVar6);
    }
  }
  if (puVar14 <= puVar15) {
    param_2 = puVar14 + 1;
    puVar14 = puVar18;
  }
  puVar18 = puVar14;
  if (puVar18 == puVar15) goto LAB_00ec6494;
  goto LAB_00ec64dc;
}


