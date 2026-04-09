// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeFromBitVector
// Entry Point: 00b8803c
// Size: 1128 bytes
// Signature: undefined __thiscall initializeFromBitVector(ChunkedBitSquare * this, uint param_1, BitVector * param_2)


/* ChunkedBitSquare::initializeFromBitVector(unsigned int, BitVector const*) */

void __thiscall
ChunkedBitSquare::initializeFromBitVector(ChunkedBitSquare *this,uint param_1,BitVector *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  void *pvVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint local_a8;
  int local_94;
  ushort local_70 [4];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  pvVar10 = *(void **)(this + 0x28);
  if (pvVar10 == (void *)0x0) goto LAB_00b880c4;
  if (*(int *)(this + 0x34) * *(int *)(this + 0xc) == 0) {
LAB_00b880bc:
    operator_delete__(pvVar10);
  }
  else {
    uVar24 = 0;
    do {
      operator_delete(*(void **)((long)pvVar10 + uVar24 * 8));
      uVar24 = uVar24 + 1;
      pvVar10 = *(void **)(this + 0x28);
    } while (uVar24 < (uint)(*(int *)(this + 0x34) * *(int *)(this + 0xc)));
    if (pvVar10 != (void *)0x0) goto LAB_00b880bc;
  }
  *(undefined8 *)(this + 0x28) = 0;
LAB_00b880c4:
  iVar14 = 0;
  *(uint *)(this + 0x18) = param_1;
  uVar16 = param_1;
  if (1 < param_1) {
    do {
      iVar14 = iVar14 + 1;
      bVar1 = 3 < uVar16;
      uVar16 = uVar16 >> 1;
    } while (bVar1);
  }
  uVar7 = iVar14 - 5;
  uVar16 = *(uint *)(this + 0x34);
  uVar26 = 1 << (ulong)(uVar7 & 0x1f);
  uVar13 = 1 << (ulong)(uVar7 * 2 & 0x1f);
  *(uint *)(this + 0x1c) = param_1 - 1;
  *(uint *)this = uVar7;
  *(uint *)(this + 4) = uVar26;
  *(uint *)(this + 0x10) = uVar13 - 1;
  *(int *)(this + 0x14) = iVar14;
  *(uint *)(this + 8) = uVar26 - 1;
  *(uint *)(this + 0xc) = uVar13;
  pvVar10 = operator_new__((ulong)(uVar16 << (ulong)(uVar7 * 2 & 0x1f)) << 3);
  *(void **)(this + 0x28) = pvVar10;
  memset(pvVar10,0,(ulong)uVar13 * (ulong)uVar16 * 8);
  uVar24 = (ulong)uVar16;
  local_94 = 0;
  local_a8 = 0;
  *(undefined4 *)(this + 0x30) = 0;
  do {
    if (uVar26 == 0) break;
    iVar14 = 0;
    uVar16 = 0;
    do {
      iVar17 = (int)uVar24;
      if (iVar17 != 0) {
        uVar26 = *(uint *)this;
        uVar25 = 0;
        do {
          uVar3 = uVar25 + 1;
          piVar4 = (int *)(this + uVar3 * 8 + 0x38);
          if (uVar24 <= uVar3) {
            piVar4 = (int *)(this + 0x20);
          }
          iVar15 = 0;
          iVar5 = *(int *)(this + uVar25 * 8 + 0x38);
          iVar6 = *(int *)((long)(this + uVar25 * 8 + 0x38) + 4);
          uVar13 = 0;
          iVar27 = *(int *)(this + 0x20);
          lVar20 = *(long *)param_2;
          uVar18 = *piVar4 - iVar5;
          iVar28 = *(int *)(this + 0x18);
          uVar7 = -1 << (ulong)(uVar18 & 0x1f);
          do {
            iVar21 = 0;
            do {
              uVar9 = iVar5 + (iVar21 + uVar16 * 0x20 + iVar28 * (iVar15 + local_a8 * 0x20)) *
                              iVar27;
              uVar24 = (ulong)(uVar9 >> 3) & 0xffff;
              lVar23 = *(long *)(lVar20 + (ulong)(uVar9 >> 0x13) * 8);
              if ((uint)uVar24 < 0xfffd) {
                uVar22 = *(uint *)(lVar23 + uVar24);
              }
              else {
                uVar22 = (uVar9 >> 3) + 1;
                uVar2 = (uVar9 >> 3) + 2;
                uVar22 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar20 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar20 + (ulong)(uVar22 >> 0x10) * 8) +
                                                  ((ulong)uVar22 & 0xffff)),
                                                 *(undefined *)(lVar23 + uVar24)));
              }
              uVar9 = uVar22 >> (ulong)(uVar9 & 7) & ~uVar7;
              if (uVar13 == 0) {
                uVar24 = 0;
              }
              else {
                uVar24 = (ulong)uVar13;
                puVar12 = local_70;
                uVar11 = uVar24;
                do {
                  if ((uint)*puVar12 == (uVar9 & 0xffff)) goto LAB_00b88284;
                  puVar12 = puVar12 + 1;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                if (3 < uVar13) break;
              }
              uVar13 = uVar13 + 1;
              local_70[uVar24] = (ushort)uVar9;
LAB_00b88284:
              iVar21 = iVar21 + 1;
            } while (iVar21 != 0x20);
            if (uVar13 == 4) {
              puVar12 = (ushort *)0x0;
              uVar13 = 0;
              uVar9 = uVar18;
              goto LAB_00b8838c;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x20);
          puVar12 = local_70;
          if (uVar13 == 1) {
            uVar9 = 0;
          }
          else if (uVar13 == 2) {
            uVar9 = 1;
          }
          else if (uVar13 < 5) {
            uVar9 = 2;
          }
          else {
            uVar9 = 3;
          }
LAB_00b8838c:
          lVar20 = ChunkedBitSquareChunk::createChunk(uVar9,uVar18,puVar12,uVar13);
          iVar27 = 0;
          iVar15 = 0;
          iVar28 = local_94;
          do {
            iVar21 = 0;
            do {
              lVar19 = *(long *)param_2;
              uVar13 = iVar5 + (iVar14 + iVar21 + iVar28 * *(int *)(this + 0x18)) *
                               *(int *)(this + 0x20);
              uVar24 = (ulong)(uVar13 >> 3) & 0xffff;
              lVar23 = *(long *)(lVar19 + (ulong)(uVar13 >> 0x13) * 8);
              if ((uint)uVar24 < 0xfffd) {
                uVar18 = *(uint *)(lVar23 + uVar24);
              }
              else {
                uVar18 = (uVar13 >> 3) + 1;
                uVar9 = (uVar13 >> 3) + 2;
                uVar18 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar19 + (ulong)(uVar9 >> 0x10) * 8) +
                                         ((ulong)uVar9 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar19 + (ulong)(uVar18 >> 0x10) * 8) +
                                                  ((ulong)uVar18 & 0xffff)),
                                                 *(undefined *)(lVar23 + uVar24)));
              }
              (**(code **)(lVar20 + 8))
                        (lVar20,iVar27 + iVar21,0,iVar6,
                         ~uVar7 & 0xffff & uVar18 >> (ulong)(uVar13 & 7));
              iVar21 = iVar21 + 1;
            } while (iVar21 != 0x20);
            iVar15 = iVar15 + 1;
            iVar27 = iVar27 + 0x20;
            iVar28 = iVar28 + 1;
          } while (iVar15 != 0x20);
          *(long *)(*(long *)(this + 0x28) +
                   (ulong)(((local_a8 << (ulong)(uVar26 & 0x1f)) + uVar16) * iVar17 + (int)uVar25) *
                   8) = lVar20;
          uVar24 = (ulong)*(uint *)(this + 0x34);
          uVar25 = uVar3;
        } while (uVar3 < uVar24);
        uVar26 = *(uint *)(this + 4);
      }
      uVar16 = uVar16 + 1;
      iVar14 = iVar14 + 0x20;
    } while (uVar16 < uVar26);
    local_a8 = local_a8 + 1;
    local_94 = local_94 + 0x20;
  } while (local_a8 < uVar26);
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


