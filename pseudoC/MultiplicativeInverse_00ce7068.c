// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00ce7068
// Size: 1976 bytes
// Signature: undefined __thiscall MultiplicativeInverse(GF2NT * this, PolynomialMod2 * param_1)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::GF2NT::MultiplicativeInverse(CryptoPP::PolynomialMod2 const&) const */

GF2NT * __thiscall CryptoPP::GF2NT::MultiplicativeInverse(GF2NT *this,PolynomialMod2 *param_1)

{
  uint uVar1;
  uint uVar2;
  GF2NT *pGVar3;
  uint *__s;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *__src;
  uint *puVar19;
  ulong uVar20;
  uint *__dest;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if ((uint)(*(int *)(this + 0x94) - *(int *)(this + 0x98)) < 0x20) {
    pGVar3 = (GF2NT *)QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::
                      MultiplicativeInverse
                                ((QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>
                                  *)this,param_1);
    return pGVar3;
  }
  lVar17 = *(long *)(this + 0x80);
  puVar19 = (uint *)(lVar17 << 2);
  AllocatorBase<unsigned_int>::CheckSize((ulong)puVar19);
  __s = puVar19;
  if (puVar19 != (uint *)0x0) {
    __s = (uint *)UnalignedAllocate(lVar17 << 4);
  }
  uVar22 = *(ulong *)(this + 0x80);
  puVar10 = __s + uVar22 * 2;
  if (uVar22 * 3 != 0) {
    memset(__s,0,uVar22 * 0xc);
  }
  puVar4 = *(uint **)(param_1 + 0x18);
  __dest = __s + uVar22 * 3;
  *__s = 1;
  if (puVar10 != puVar4) {
    memcpy(puVar10,puVar4,*(long *)(param_1 + 0x10) << 2);
  }
  puVar4 = __s + uVar22;
  if (__dest != *(uint **)(this + 0x88)) {
    memcpy(__dest,*(uint **)(this + 0x88),*(long *)(this + 0x80) << 2);
  }
  uVar21 = 0;
  uVar20 = 1;
  __src = __s;
LAB_00ce7170:
  do {
    uVar8 = *puVar10;
    uVar18 = (ulong)(uVar22 != 0);
    lVar17 = -4;
    if (uVar22 == 0) {
      lVar17 = 0;
    }
    if (uVar8 == 0) {
      do {
        if (uVar22 != 0) {
          if (uVar22 != 1) {
            lVar6 = 0;
            lVar16 = 1;
            puVar7 = puVar10;
            lVar12 = uVar22 - uVar18;
            do {
              puVar13 = puVar10 + lVar16;
              lVar6 = lVar6 + 1;
              lVar16 = lVar6 + uVar18;
              lVar12 = lVar12 + -1;
              *puVar7 = *puVar13;
              puVar7 = puVar7 + 1;
            } while (lVar12 != 0);
          }
          memset((void *)((long)puVar10 + lVar17 + uVar22 * 4),0,uVar18 << 2);
        }
        if (puVar4[uVar20 - 1] != 0) {
          uVar20 = uVar20 + 1;
        }
        uVar15 = uVar20;
        if (uVar20 != 0) {
          while (uVar15 = uVar15 - 1, (uVar20 != 0) <= uVar15) {
            puVar4[uVar15] = puVar4[uVar15 - (uVar20 != 0)];
          }
          *puVar4 = 0;
        }
        uVar8 = *puVar10;
        uVar21 = uVar21 + 0x20;
      } while (uVar8 == 0);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1) {
      uVar5 = uVar5 + 1;
    }
    uVar21 = uVar5 + uVar21;
    uVar18 = uVar22;
    if (uVar8 == 1) {
      do {
        if (uVar18 == 0) goto LAB_00ce71c8;
        uVar15 = uVar18 - 1;
        lVar17 = uVar18 - 1;
        uVar18 = uVar15;
      } while (puVar10[lVar17] == 0);
      if (uVar15 == 0) break;
    }
LAB_00ce71c8:
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        if (uVar22 != 0) {
          uVar8 = 0;
          uVar18 = uVar22;
          do {
            uVar15 = uVar18 - 1;
            uVar5 = uVar8 | puVar10[uVar18 - 1] >> 1;
            uVar8 = puVar10[uVar18 - 1] << 0x1f;
            puVar10[uVar18 - 1] = uVar5;
            uVar18 = uVar15;
          } while (uVar15 != 0);
        }
        if (uVar20 != 0) {
          uVar8 = 0;
          puVar7 = puVar4;
          uVar18 = uVar20;
          do {
            uVar18 = uVar18 - 1;
            uVar5 = uVar8 | *puVar7 << 1;
            uVar8 = *puVar7 >> 0x1f;
            *puVar7 = uVar5;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
LAB_00ce7358:
          if (uVar8 != 0) {
            puVar4[uVar20] = uVar8;
            uVar20 = uVar20 + 1;
          }
        }
      }
      else {
        if (uVar22 != 0) {
          uVar8 = 0;
          uVar18 = uVar22;
          do {
            uVar15 = uVar18 - 1;
            uVar11 = puVar10[uVar18 - 1] >> (ulong)(uVar5 & 0x1f) | uVar8;
            uVar8 = puVar10[uVar18 - 1] << (ulong)(0x20 - uVar5 & 0x1f);
            puVar10[uVar18 - 1] = uVar11;
            uVar18 = uVar15;
          } while (uVar15 != 0);
        }
        if (uVar20 != 0) {
          uVar8 = 0;
          puVar7 = puVar4;
          uVar18 = uVar20;
          do {
            uVar18 = uVar18 - 1;
            uVar11 = *puVar7 << (ulong)(uVar5 & 0x1f) | uVar8;
            uVar8 = *puVar7 >> (ulong)(0x20 - uVar5 & 0x1f);
            *puVar7 = uVar11;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
          goto LAB_00ce7358;
        }
      }
    }
    uVar18 = uVar22 - 1;
    puVar7 = puVar4;
    puVar13 = __dest;
    if (puVar10[uVar18] == 0) {
      uVar15 = uVar18;
      if (__dest[uVar18] != 0) {
        uVar15 = uVar22;
      }
      uVar22 = uVar15;
      if (puVar10[uVar15 - 1] < __dest[uVar15 - 1]) goto LAB_00ce737c;
    }
    else {
      uVar15 = uVar22;
      if (puVar10[uVar18] < __dest[uVar18]) {
LAB_00ce737c:
        puVar7 = __src;
        __src = puVar4;
        puVar13 = puVar10;
        puVar10 = __dest;
        uVar22 = uVar15;
      }
    }
    __dest = puVar13;
    puVar4 = puVar7;
    if (uVar22 != 0) {
      if ((uVar22 < 8) || ((puVar10 < __dest + uVar22 && (__dest < puVar10 + uVar22)))) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar22 & 0xfffffffffffffff8;
        puVar9 = (undefined8 *)(__dest + 4);
        puVar14 = (undefined8 *)(puVar10 + 4);
        uVar15 = uVar18;
        do {
          uVar24 = puVar9[-1];
          uVar23 = puVar9[-2];
          uVar26 = puVar9[1];
          uVar25 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar15 = uVar15 - 8;
          uVar28 = puVar14[-1];
          uVar27 = puVar14[-2];
          uVar30 = puVar14[1];
          uVar29 = *puVar14;
          puVar14[-1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                          (byte)((ulong)uVar24 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                   (byte)((ulong)uVar24 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                            (byte)((ulong)uVar24 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                     (byte)((ulong)uVar24 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar28
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar24
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          puVar14[-2] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
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
          puVar14[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar26 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
          *puVar14 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar29 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        if (uVar22 == uVar18) goto LAB_00ce7410;
      }
      lVar17 = uVar22 - uVar18;
      puVar7 = puVar10 + uVar18;
      puVar13 = __dest + uVar18;
      do {
        lVar17 = lVar17 + -1;
        *puVar7 = *puVar7 ^ *puVar13;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar17 != 0);
    }
LAB_00ce7410:
    if (uVar20 != 0) {
      if ((uVar20 < 8) || ((__src < puVar4 + uVar20 && (puVar4 < __src + uVar20)))) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar20 & 0xfffffffffffffff8;
        puVar9 = (undefined8 *)(puVar4 + 4);
        puVar14 = (undefined8 *)(__src + 4);
        uVar15 = uVar18;
        do {
          uVar24 = puVar9[-1];
          uVar23 = puVar9[-2];
          uVar26 = puVar9[1];
          uVar25 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar15 = uVar15 - 8;
          uVar28 = puVar14[-1];
          uVar27 = puVar14[-2];
          uVar30 = puVar14[1];
          uVar29 = *puVar14;
          puVar14[-1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                          (byte)((ulong)uVar24 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                   (byte)((ulong)uVar24 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                            (byte)((ulong)uVar24 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                     (byte)((ulong)uVar24 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar28
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar24
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          puVar14[-2] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
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
          puVar14[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar26 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
          *puVar14 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar29 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        if (uVar20 == uVar18) goto LAB_00ce7170;
      }
      lVar17 = uVar20 - uVar18;
      puVar7 = __src + uVar18;
      puVar13 = puVar4 + uVar18;
      do {
        lVar17 = lVar17 + -1;
        *puVar7 = *puVar7 ^ *puVar13;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar17 != 0);
    }
  } while( true );
joined_r0x00ce74ec:
  if (uVar21 < 0x20) {
    if (uVar21 != 0) {
      uVar8 = *__src << (ulong)(-uVar21 & 0x1f);
      if (*(uint *)(this + 0x90) != 0) {
        uVar5 = 0;
        uVar22 = (ulong)*(uint *)(this + 0x90) + 0x1f >> 3 & 0x3ffffffc;
        do {
          uVar11 = *(uint *)((long)__src + (uVar22 - 4));
          uVar1 = uVar11 >> (ulong)(uVar21 & 0x1f) | uVar5;
          uVar5 = uVar11 << (ulong)(0x20 - uVar21 & 0x1f);
          *(uint *)((long)__src + (uVar22 - 4)) = uVar1;
          uVar22 = uVar22 - 4;
        } while (uVar22 != 0);
      }
      uVar21 = *(uint *)(this + 0x98);
      if (uVar21 < 0x20) {
        uVar5 = 0;
        do {
          uVar11 = uVar21 + uVar5;
          uVar1 = uVar5 & 0x1f;
          uVar5 = uVar5 + 1;
          uVar1 = (uVar8 >> (ulong)uVar1 & 1) << (ulong)(uVar11 & 0x1f);
          if (0x1f < uVar11) {
            uVar1 = 0;
          }
          uVar8 = uVar1 ^ uVar8;
        } while (uVar21 + uVar5 != 0x20);
      }
      else {
        uVar5 = (uVar21 >> 5) - 1;
        __src[uVar5] = __src[uVar5] ^ uVar8 << (ulong)(uVar21 & 0x1f);
        uVar21 = *(uint *)(this + 0x98);
      }
      if ((uVar21 & 0x1f) != 0) {
        __src[uVar21 >> 5] = __src[uVar21 >> 5] ^ uVar8 >> (ulong)(-(uVar21 & 0x1f) & 0x1f);
      }
      uVar21 = *(uint *)(this + 0x94);
      if ((uVar21 & 0x1f) == 0) {
        puVar10 = __src + ((uVar21 >> 5) - 1);
        uVar21 = *puVar10;
      }
      else {
        uVar5 = (uVar21 >> 5) - 1;
        __src[uVar5] = __src[uVar5] ^ uVar8 << (ulong)(uVar21 & 0x1f);
        puVar10 = (uint *)((long)__src + ((ulong)(*(uint *)(this + 0x94) >> 3) & 0x1ffffffc));
        uVar21 = uVar8 >> (ulong)(-(*(uint *)(this + 0x94) & 0x1f) & 0x1f);
        uVar8 = *puVar10;
      }
      *puVar10 = uVar21 ^ uVar8;
    }
    if (*(uint **)(this + 0xb8) != __src) {
      memcpy(*(uint **)(this + 0xb8),__src,*(long *)(this + 0xb0) << 2);
    }
    if ((uint *)0x3ffffffffffffffe < puVar19) {
      puVar19 = (uint *)0x3fffffffffffffff;
    }
    for (; puVar19 != (uint *)0x0; puVar19 = (uint *)((long)puVar19 + -1)) {
      __s[(long)puVar19 + -1] = 0;
    }
                    /* try { // try from 00ce77f4 to 00ce77fb has its CatchHandler @ 00ce7820 */
    UnalignedDeallocate(__s);
    return this + 0xa0;
  }
  uVar8 = *__src;
  if (*(uint *)(this + 0x90) < 0x21) {
    __src[((ulong)*(uint *)(this + 0x90) + 0x1f >> 5) - 1] = 0;
    uVar5 = *(uint *)(this + 0x98);
    if (0x1f < uVar5) goto LAB_00ce7640;
LAB_00ce7570:
    uVar11 = 0;
    do {
      uVar1 = uVar5 + uVar11;
      uVar2 = uVar11 & 0x1f;
      uVar11 = uVar11 + 1;
      uVar2 = (uVar8 >> (ulong)uVar2 & 1) << (ulong)(uVar1 & 0x1f);
      if (0x1f < uVar1) {
        uVar2 = 0;
      }
      uVar8 = uVar2 ^ uVar8;
    } while (uVar5 + uVar11 != 0x20);
  }
  else {
    uVar22 = 0;
    uVar20 = 1;
    do {
      uVar18 = (ulong)((int)uVar20 + 1);
      __src[uVar22] = __src[uVar20];
      uVar15 = (ulong)*(uint *)(this + 0x90) + 0x1f >> 5;
      uVar22 = uVar20;
      uVar20 = uVar18;
    } while (uVar18 < uVar15);
    __src[uVar15 - 1] = 0;
    uVar5 = *(uint *)(this + 0x98);
    if (uVar5 < 0x20) goto LAB_00ce7570;
LAB_00ce7640:
    uVar11 = (uVar5 >> 5) - 1;
    __src[uVar11] = __src[uVar11] ^ uVar8 << (ulong)(uVar5 & 0x1f);
    uVar5 = *(uint *)(this + 0x98);
  }
  if ((uVar5 & 0x1f) != 0) {
    __src[uVar5 >> 5] = __src[uVar5 >> 5] ^ uVar8 >> (ulong)(-(uVar5 & 0x1f) & 0x1f);
  }
  uVar5 = *(uint *)(this + 0x94);
  if ((uVar5 & 0x1f) == 0) {
    uVar21 = uVar21 - 0x20;
    __src[(uVar5 >> 5) - 1] = __src[(uVar5 >> 5) - 1] ^ uVar8;
  }
  else {
    uVar11 = (uVar5 >> 5) - 1;
    __src[uVar11] = __src[uVar11] ^ uVar8 << (ulong)(uVar5 & 0x1f);
    puVar10 = (uint *)((long)__src + ((ulong)(*(uint *)(this + 0x94) >> 3) & 0x1ffffffc));
    uVar21 = uVar21 - 0x20;
    *puVar10 = uVar8 >> (ulong)(-(*(uint *)(this + 0x94) & 0x1f) & 0x1f) ^ *puVar10;
  }
  goto joined_r0x00ce74ec;
}


