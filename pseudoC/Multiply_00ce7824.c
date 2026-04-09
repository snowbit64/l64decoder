// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Multiply
// Entry Point: 00ce7824
// Size: 996 bytes
// Signature: undefined __thiscall Multiply(GF2NT * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::GF2NT::Multiply(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&) const
    */

GF2NT * __thiscall
CryptoPP::GF2NT::Multiply(GF2NT *this,PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  uint *__src;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar3 = *(uint *)(this + 0x90);
  uVar20 = (ulong)uVar3 + 0x1f >> 5;
  uVar6 = *(ulong *)(this + 0xb0);
  if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(this + 0xb0)) {
    uVar6 = *(ulong *)(param_1 + 0x10);
  }
  AllocatorBase<unsigned_int>::CheckSize(uVar20);
  if (uVar3 == 0) {
    __src = (uint *)0x0;
    bVar7 = true;
    iVar4 = *(int *)(this + 0x90);
  }
  else {
    __src = (uint *)UnalignedAllocate(uVar20 * 4);
    *__src = 0;
    if (uVar20 != 1) {
      memset(__src + 1,0,uVar20 * 4 - 4);
    }
    bVar7 = false;
    iVar4 = *(int *)(this + 0x90);
  }
  uVar13 = iVar4 - 1;
  if (-1 < (int)uVar13) {
    puVar14 = *(uint **)(param_1 + 0x18);
    uVar1 = *(ulong *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    if (!bVar7) {
      puVar16 = *(uint **)(this + 0x88);
      uVar17 = uVar20 & 0xffffff8;
      uVar18 = uVar6 & 0xfffffffffffffff8;
      uVar9 = iVar4 - 1;
      uVar15 = (ulong)(uVar9 >> 5);
      if (uVar20 <= uVar15) goto LAB_00ce7a48;
LAB_00ce7a00:
      if ((__src[uVar15] >> (ulong)(uVar9 & 0x1f) & 1) == 0) goto LAB_00ce7a48;
      uVar9 = 0;
      puVar10 = __src;
      uVar15 = uVar20;
      do {
        uVar15 = uVar15 - 1;
        uVar5 = uVar9 | *puVar10 << 1;
        uVar9 = *puVar10 >> 0x1f;
        *puVar10 = uVar5;
        puVar10 = puVar10 + 1;
      } while (uVar15 != 0);
      uVar15 = uVar17;
      puVar8 = (undefined8 *)(__src + 4);
      puVar11 = (undefined8 *)(puVar16 + 4);
      if (uVar3 < 0xe1 || __src < puVar16 + uVar20 && puVar16 < __src + uVar20) {
        uVar15 = 0;
      }
      else {
        do {
          uVar22 = puVar11[-1];
          uVar21 = puVar11[-2];
          uVar24 = puVar11[1];
          uVar23 = *puVar11;
          uVar15 = uVar15 - 8;
          uVar26 = puVar8[-1];
          uVar25 = puVar8[-2];
          uVar28 = puVar8[1];
          uVar27 = *puVar8;
          puVar8[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar26 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
          puVar8[-2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                         (byte)((ulong)uVar21 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                  (byte)((ulong)uVar21 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                           (byte)((ulong)uVar21 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                    (byte)((ulong)uVar21 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar25 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar21 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar21)))))));
          puVar8[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                               CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                        (byte)((ulong)uVar24 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                 (byte)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                          (byte)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                   (byte)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar28 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          *puVar8 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                             CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                               (byte)((ulong)uVar23 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                        (byte)((ulong)uVar23 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                 (byte)((ulong)uVar23 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar27 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar23 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
          puVar8 = puVar8 + 4;
          puVar11 = puVar11 + 4;
        } while (uVar15 != 0);
        uVar15 = uVar17;
        if (uVar20 == uVar17) goto LAB_00ce7ad4;
      }
      lVar19 = uVar20 - uVar15;
      puVar10 = __src + uVar15;
      puVar12 = puVar16 + uVar15;
      do {
        lVar19 = lVar19 + -1;
        *puVar10 = *puVar10 ^ *puVar12;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar19 != 0);
LAB_00ce7ad4:
      do {
        if (((uVar13 >> 5 < uVar1) &&
            ((*(uint *)(lVar2 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)) &&
           (uVar6 != 0)) {
          uVar15 = uVar18;
          puVar8 = (undefined8 *)(__src + 4);
          puVar11 = (undefined8 *)(puVar14 + 4);
          if (uVar6 < 8 || __src < puVar14 + uVar6 && puVar14 < __src + uVar6) {
            uVar15 = 0;
          }
          else {
            do {
              uVar22 = puVar11[-1];
              uVar21 = puVar11[-2];
              uVar24 = puVar11[1];
              uVar23 = *puVar11;
              uVar15 = uVar15 - 8;
              uVar26 = puVar8[-1];
              uVar25 = puVar8[-2];
              uVar28 = puVar8[1];
              uVar27 = *puVar8;
              puVar8[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                             (byte)((ulong)uVar22 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                      (byte)((ulong)uVar22 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                               (byte)((ulong)uVar22 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar26 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar22 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                           (byte)((ulong)uVar22 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar26 >> 8) ^
                                                                    (byte)((ulong)uVar22 >> 8),
                                                                    (byte)uVar26 ^ (byte)uVar22)))))
                                            ));
              puVar8[-2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                             (byte)((ulong)uVar21 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                      (byte)((ulong)uVar21 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                               (byte)((ulong)uVar21 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar25 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar21 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                           (byte)((ulong)uVar21 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                                    (byte)((ulong)uVar21 >> 8),
                                                                    (byte)uVar25 ^ (byte)uVar21)))))
                                            ));
              puVar8[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                            (byte)((ulong)uVar24 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                     (byte)((ulong)uVar24 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                              (byte)((ulong)uVar24 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar28 >> 0x18)
                                                                       ^ (byte)((ulong)uVar24 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar28
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar24
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
              *puVar8 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                          (byte)((ulong)uVar23 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                   (byte)((ulong)uVar23 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                            (byte)((ulong)uVar23 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                     (byte)((ulong)uVar23 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar27
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar23
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
              puVar8 = puVar8 + 4;
              puVar11 = puVar11 + 4;
            } while (uVar15 != 0);
            uVar15 = uVar18;
            if (uVar6 == uVar18) goto LAB_00ce7b6c;
          }
          lVar19 = uVar6 - uVar15;
          puVar10 = __src + uVar15;
          puVar12 = puVar14 + uVar15;
          do {
            lVar19 = lVar19 + -1;
            *puVar10 = *puVar10 ^ *puVar12;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (lVar19 != 0);
        }
LAB_00ce7b6c:
        uVar13 = uVar13 - 1;
        if ((int)uVar13 < 0) goto LAB_00ce7b8c;
        uVar9 = *(int *)(this + 0x90) - 1;
        uVar15 = (ulong)(uVar9 >> 5);
        if (uVar15 < uVar20) goto LAB_00ce7a00;
LAB_00ce7a48:
        uVar9 = 0;
        puVar10 = __src;
        uVar15 = uVar20;
        do {
          uVar15 = uVar15 - 1;
          uVar5 = uVar9 | *puVar10 << 1;
          uVar9 = *puVar10 >> 0x1f;
          *puVar10 = uVar5;
          puVar10 = puVar10 + 1;
        } while (uVar15 != 0);
      } while( true );
    }
    uVar15 = uVar6 & 0xfffffffffffffff8;
    do {
      if (((uVar13 >> 5 < uVar1) &&
          ((*(uint *)(lVar2 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)) &&
         (uVar6 != 0)) {
        puVar8 = (undefined8 *)(puVar14 + 4);
        uVar17 = uVar15;
        puVar11 = (undefined8 *)(__src + 4);
        if (uVar6 < 8 || __src < puVar14 + uVar6 && puVar14 < __src + uVar6) {
          uVar17 = 0;
        }
        else {
          do {
            uVar22 = puVar8[-1];
            uVar21 = puVar8[-2];
            uVar24 = puVar8[1];
            uVar23 = *puVar8;
            uVar17 = uVar17 - 8;
            uVar26 = puVar11[-1];
            uVar25 = puVar11[-2];
            uVar28 = puVar11[1];
            uVar27 = *puVar11;
            puVar11[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                            (byte)((ulong)uVar22 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                     (byte)((ulong)uVar22 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                              (byte)((ulong)uVar22 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                       ^ (byte)((ulong)uVar22 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar26
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar22
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
            puVar11[-2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                            (byte)((ulong)uVar21 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                     (byte)((ulong)uVar21 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                              (byte)((ulong)uVar21 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar25 >> 0x18)
                                                                       ^ (byte)((ulong)uVar21 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar25
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar21
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar25 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar21)))))));
            puVar11[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                           (byte)((ulong)uVar24 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                    (byte)((ulong)uVar24 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                             (byte)((ulong)uVar24 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar28 >> 0x18)
                                                                      ^ (byte)((ulong)uVar24 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar28
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar24
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
            *puVar11 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                         (byte)((ulong)uVar23 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                  (byte)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                           (byte)((ulong)uVar23 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                    (byte)((ulong)uVar23 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar27 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
            puVar8 = puVar8 + 4;
            puVar11 = puVar11 + 4;
          } while (uVar17 != 0);
          uVar17 = uVar15;
          if (uVar6 == uVar15) goto LAB_00ce7900;
        }
        lVar19 = uVar6 - uVar17;
        puVar16 = puVar14 + uVar17;
        puVar10 = __src + uVar17;
        do {
          lVar19 = lVar19 + -1;
          *puVar10 = *puVar10 ^ *puVar16;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar19 != 0);
      }
LAB_00ce7900:
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
LAB_00ce7b8c:
  if ((*(uint *)(this + 0x90) & 0x1f) != 0) {
    __src[uVar20 - 1] =
         __src[uVar20 - 1] & (-1 << (ulong)(*(uint *)(this + 0x90) & 0x1f) ^ 0xffffffffU);
  }
  if (*(uint **)(this + 0xb8) != __src) {
    memcpy(*(uint **)(this + 0xb8),__src,*(long *)(this + 0xb0) << 2);
  }
  if (!bVar7) {
    do {
      uVar6 = uVar20 - 1;
      __src[uVar20 - 1] = 0;
      uVar20 = uVar6;
    } while (uVar6 != 0);
  }
                    /* try { // try from 00ce7be4 to 00ce7beb has its CatchHandler @ 00ce7c08 */
  UnalignedDeallocate(__src);
  return this + 0xa0;
}


