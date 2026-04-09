// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00ce4c54
// Size: 1512 bytes
// Signature: undefined __cdecl Divide(PolynomialMod2 * param_1, PolynomialMod2 * param_2, PolynomialMod2 * param_3, PolynomialMod2 * param_4)


/* CryptoPP::PolynomialMod2::Divide(CryptoPP::PolynomialMod2&, CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&) */

void CryptoPP::PolynomialMod2::Divide
               (PolynomialMod2 *param_1,PolynomialMod2 *param_2,PolynomialMod2 *param_3,
               PolynomialMod2 *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  DivideByZero *this;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar13 = *(ulong *)(param_4 + 0x10);
  if (uVar13 != 0) {
    lVar9 = *(long *)(param_4 + 0x18);
    uVar7 = 0;
    do {
      if (*(int *)(lVar9 + uVar7 * 4) != 0) {
        iVar6 = (int)uVar13 * -0x20 + 1;
        goto LAB_00ce4cd8;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < uVar13);
  }
  this = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ce4cb0 to 00ce4cb3 has its CatchHandler @ 00ce523c */
  DivideByZero::DivideByZero(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&DivideByZero::typeinfo,Exception::~Exception);
  while( true ) {
    uVar7 = uVar13 - 1;
    lVar2 = uVar13 * 4;
    iVar6 = iVar6 + 0x20;
    uVar13 = uVar7;
    if (*(int *)(lVar9 + -4 + lVar2) != 0) break;
LAB_00ce4cd8:
    if (uVar13 == 0) goto LAB_00ce4d30;
  }
  if ((int)uVar7 == -1) {
LAB_00ce4d30:
    uVar11 = 0xffffffff;
  }
  else {
    uVar20 = *(uint *)(lVar9 + (uVar7 & 0xffffffff) * 4);
    if (uVar20 == 0) {
      uVar11 = 0;
    }
    else {
      uVar15 = 0;
      uVar10 = 0x20;
      do {
        uVar19 = uVar15 + uVar10 >> 1;
        uVar11 = uVar19;
        if (uVar20 >> (ulong)(uVar19 & 0x1f) != 0) {
          uVar11 = uVar10;
          uVar15 = uVar19;
        }
        uVar10 = uVar11;
      } while (1 < uVar11 - uVar15);
    }
    uVar11 = uVar11 - iVar6;
  }
  uVar7 = (long)(int)uVar11 + 0x20U >> 5;
  uVar13 = *(ulong *)(param_1 + 0x10);
  pvVar5 = *(void **)(param_1 + 0x18);
  if (uVar13 == uVar7) {
LAB_00ce4d98:
    *(ulong *)(param_1 + 0x10) = uVar7;
    *(void **)(param_1 + 0x18) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      memset(pvVar5,0,uVar7 << 2);
    }
  }
  else {
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)((long)pvVar5 + uVar13 * 4 + -4) = 0;
    }
    UnalignedDeallocate(pvVar5);
    AllocatorBase<unsigned_int>::CheckSize(uVar7);
    if (uVar11 < 0xffffffe0) {
      pvVar5 = (void *)UnalignedAllocate(uVar7 << 2);
      goto LAB_00ce4d98;
    }
    *(ulong *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar13 = *(ulong *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  iVar6 = (int)uVar13 * -0x20;
  *(undefined8 *)(param_1 + 8) = 0x3fffffffffffffff;
  uVar7 = uVar13;
  do {
    if (uVar7 == 0) goto LAB_00ce4e1c;
    uVar17 = uVar7 - 1;
    lVar2 = uVar7 * 4;
    iVar6 = iVar6 + 0x20;
    uVar7 = uVar17;
  } while (*(int *)(lVar9 + -4 + lVar2) == 0);
  if ((int)uVar17 == -1) {
LAB_00ce4e1c:
    uVar20 = 0;
  }
  else {
    uVar15 = *(uint *)(lVar9 + (uVar17 & 0xffffffff) * 4);
    if (uVar15 == 0) {
      uVar20 = 0;
    }
    else {
      uVar10 = 0;
      uVar19 = 0x20;
      do {
        uVar24 = uVar10 + uVar19 >> 1;
        uVar20 = uVar24;
        if (uVar15 >> (ulong)(uVar24 & 0x1f) != 0) {
          uVar20 = uVar19;
          uVar10 = uVar24;
        }
        uVar19 = uVar20;
      } while (1 < uVar20 - uVar10);
    }
    uVar20 = uVar20 - iVar6;
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  lVar2 = *(long *)(param_4 + 0x18);
  iVar6 = (int)uVar7 * -0x20;
  uVar17 = uVar7;
  do {
    if (uVar17 == 0) goto LAB_00ce4e9c;
    uVar23 = uVar17 - 1;
    lVar3 = uVar17 * 4;
    iVar6 = iVar6 + 0x20;
    uVar17 = uVar23;
  } while (*(int *)(lVar2 + -4 + lVar3) == 0);
  if ((int)uVar23 != -1) {
    uVar15 = *(uint *)(lVar2 + (uVar23 & 0xffffffff) * 4);
    if (uVar15 == 0) {
      uVar10 = -iVar6;
    }
    else {
      uVar19 = 0;
      uVar24 = 0x20;
      do {
        uVar4 = uVar19 + uVar24 >> 1;
        uVar10 = uVar4;
        if (uVar15 >> (ulong)(uVar4 & 0x1f) != 0) {
          uVar10 = uVar24;
          uVar19 = uVar4;
        }
        uVar24 = uVar10;
      } while (1 < uVar10 - uVar19);
      uVar10 = uVar10 - iVar6;
    }
    if (uVar20 < uVar10) {
      lVar9 = *(long *)(param_2 + 0x10);
      if (lVar9 != 0) {
        pvVar5 = *(void **)(param_2 + 0x18);
        do {
          lVar2 = lVar9 + -1;
          *(undefined4 *)((long)pvVar5 + lVar9 * 4 + -4) = 0;
          lVar9 = lVar2;
        } while (lVar2 != 0);
        UnalignedDeallocate(pvVar5);
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      *(long *)(param_2 + 0x10) = 0;
      goto LAB_00ce5034;
    }
  }
LAB_00ce4e9c:
  iVar6 = (int)uVar13 * -0x20;
  do {
    if (uVar13 == 0) goto LAB_00ce4f38;
    uVar17 = uVar13 - 1;
    lVar3 = uVar13 * 4;
    iVar6 = iVar6 + 0x20;
    uVar13 = uVar17;
  } while (*(int *)(lVar9 + -4 + lVar3) == 0);
  if ((int)uVar17 == -1) {
LAB_00ce4f38:
    iVar6 = 0;
  }
  else {
    uVar20 = *(uint *)(lVar9 + (uVar17 & 0xffffffff) * 4);
    if (uVar20 == 0) {
      uVar15 = 0;
    }
    else {
      uVar10 = 0;
      uVar19 = 0x20;
      do {
        uVar24 = uVar10 + uVar19 >> 1;
        uVar15 = uVar24;
        if (uVar20 >> (ulong)(uVar24 & 0x1f) != 0) {
          uVar15 = uVar19;
          uVar10 = uVar24;
        }
        uVar19 = uVar15;
      } while (1 < uVar15 - uVar10);
    }
    iVar6 = uVar15 - iVar6;
  }
  iVar12 = (int)uVar7 * -0x20;
  do {
    if (uVar7 == 0) goto LAB_00ce4fb8;
    uVar13 = uVar7 - 1;
    lVar9 = uVar7 * 4;
    iVar12 = iVar12 + 0x20;
    uVar7 = uVar13;
  } while (*(int *)(lVar2 + -4 + lVar9) == 0);
  if ((int)uVar13 == -1) {
LAB_00ce4fb8:
    iVar12 = 0;
  }
  else {
    uVar20 = *(uint *)(lVar2 + (uVar13 & 0xffffffff) * 4);
    if (uVar20 == 0) {
      uVar15 = 0;
    }
    else {
      uVar10 = 0;
      uVar19 = 0x20;
      do {
        uVar24 = uVar10 + uVar19 >> 1;
        uVar15 = uVar24;
        if (uVar20 >> (ulong)(uVar24 & 0x1f) != 0) {
          uVar15 = uVar19;
          uVar10 = uVar24;
        }
        uVar19 = uVar15;
      } while (1 < uVar15 - uVar10);
    }
    iVar12 = uVar15 - iVar12;
  }
  uVar20 = (iVar6 - iVar12) + 1;
  uVar13 = *(ulong *)(param_2 + 0x10);
  pvVar5 = *(void **)(param_2 + 0x18);
  uVar7 = (ulong)uVar20 + 0x1f >> 5;
  if (uVar13 != uVar7) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)((long)pvVar5 + uVar13 * 4 + -4) = 0;
    }
    UnalignedDeallocate(pvVar5);
    AllocatorBase<unsigned_int>::CheckSize(uVar7);
    if (uVar20 == 0) {
      *(ulong *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      goto LAB_00ce5034;
    }
    pvVar5 = (void *)UnalignedAllocate(uVar7 << 2);
  }
  *(ulong *)(param_2 + 0x10) = uVar7;
  *(void **)(param_2 + 0x18) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    memset(pvVar5,0,uVar7 << 2);
  }
LAB_00ce5034:
  uVar13 = *(ulong *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  iVar6 = (int)uVar13 * -0x20 + 1;
  *(undefined8 *)(param_2 + 8) = 0x3fffffffffffffff;
  do {
    if (uVar13 == 0) {
      return;
    }
    uVar7 = uVar13 - 1;
    lVar2 = uVar13 * 4;
    iVar6 = iVar6 + 0x20;
    uVar13 = uVar7;
  } while (*(int *)(lVar9 + -4 + lVar2) == 0);
  if ((int)uVar7 != -1) {
    uVar20 = *(uint *)(lVar9 + (uVar7 & 0xffffffff) * 4);
    if (uVar20 == 0) {
      uVar15 = -iVar6;
      if (0 < iVar6) {
        return;
      }
    }
    else {
      uVar10 = 0;
      uVar19 = 0x20;
      do {
        uVar24 = uVar10 + uVar19 >> 1;
        uVar15 = uVar24;
        if (uVar20 >> (ulong)(uVar24 & 0x1f) != 0) {
          uVar15 = uVar19;
          uVar10 = uVar24;
        }
        uVar19 = uVar15;
      } while (1 < uVar15 - uVar10);
      uVar15 = uVar15 - iVar6;
      if ((int)uVar15 < 0) {
        return;
      }
    }
    uVar13 = (ulong)uVar15;
    do {
      operator<<=(param_1,1);
      uVar7 = uVar13 >> 5 & 0x7ffffff;
      if (uVar7 < *(ulong *)(param_3 + 0x10)) {
        uVar17 = *(ulong *)(param_1 + 0x10);
        puVar8 = *(uint **)(param_1 + 0x18);
        *puVar8 = *puVar8 | *(uint *)(*(long *)(param_3 + 0x18) + uVar7 * 4) >>
                            (ulong)((uint)uVar13 & 0x1f) & 1;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0x10);
        puVar8 = *(uint **)(param_1 + 0x18);
        *puVar8 = *puVar8;
      }
      if ((uVar11 >> 5 < uVar17) && ((puVar8[uVar11 >> 5] & 1 << (ulong)(uVar11 & 0x1f)) != 0)) {
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
                  ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)
                   param_1,*(ulong *)(param_4 + 0x10));
        uVar7 = *(ulong *)(param_4 + 0x10);
        if (uVar7 != 0) {
          uVar23 = *(ulong *)(param_1 + 0x18);
          uVar17 = *(ulong *)(param_4 + 0x18);
          if ((uVar7 < 8) || ((uVar23 < uVar17 + uVar7 * 4 && (uVar17 < uVar23 + uVar7 * 4)))) {
            uVar16 = 0;
          }
          else {
            uVar16 = uVar7 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(uVar17 + 0x10);
            puVar21 = (undefined8 *)(uVar23 + 0x10);
            uVar22 = uVar16;
            do {
              uVar26 = puVar18[-1];
              uVar25 = puVar18[-2];
              uVar28 = puVar18[1];
              uVar27 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar22 = uVar22 - 8;
              uVar30 = puVar21[-1];
              uVar29 = puVar21[-2];
              uVar32 = puVar21[1];
              uVar31 = *puVar21;
              puVar21[-1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                              (byte)((ulong)uVar26 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                       (byte)((ulong)uVar26 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                (byte)((ulong)uVar26 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar30 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar26 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar26)))))));
              puVar21[-2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                              (byte)((ulong)uVar25 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                       (byte)((ulong)uVar25 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                (byte)((ulong)uVar25 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar29 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar25 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar25)))))));
              puVar21[1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                             (byte)((ulong)uVar28 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                      (byte)((ulong)uVar28 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                               (byte)((ulong)uVar28 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar32 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar28 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                           (byte)((ulong)uVar28 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                    (byte)((ulong)uVar28 >> 8),
                                                                    (byte)uVar32 ^ (byte)uVar28)))))
                                            ));
              *puVar21 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                           (byte)((ulong)uVar27 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                    (byte)((ulong)uVar27 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                             (byte)((ulong)uVar27 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar31 >> 0x18)
                                                                      ^ (byte)((ulong)uVar27 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar31
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar27
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar31 >> 8) ^ (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar27)))))));
              puVar21 = puVar21 + 4;
            } while (uVar22 != 0);
            if (uVar7 == uVar16) goto LAB_00ce50c8;
          }
          lVar9 = uVar7 - uVar16;
          puVar8 = (uint *)(uVar17 + uVar16 * 4);
          puVar14 = (uint *)(uVar23 + uVar16 * 4);
          do {
            lVar9 = lVar9 + -1;
            *puVar14 = *puVar14 ^ *puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar9 != 0);
        }
LAB_00ce50c8:
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
                  ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)
                   param_2,(uVar13 >> 5) + 1);
        lVar9 = (uVar13 >> 5) * 4;
        *(uint *)(*(long *)(param_2 + 0x18) + lVar9) =
             *(uint *)(*(long *)(param_2 + 0x18) + lVar9) | 1 << (ulong)((uint)uVar13 & 0x1f);
      }
      bVar1 = 0 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
  return;
}


