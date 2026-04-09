// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator|=
// Entry Point: 00cfdf14
// Size: 532 bytes
// Signature: undefined __thiscall operator|=(Integer * this, Integer * param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::Integer const&) */

Integer * __thiscall CryptoPP::Integer::operator|=(Integer *this,Integer *param_1)

{
  void *__dest;
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (this == param_1) goto LAB_00cfe088;
  uVar11 = *(ulong *)(this + 0x18);
  uVar9 = *(ulong *)(param_1 + 0x18);
  if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
    if (uVar9 != 0) {
      uVar2 = *(ulong *)(this + 0x20);
      uVar11 = *(ulong *)(param_1 + 0x20);
      if ((uVar9 < 8) || ((uVar2 < uVar11 + uVar9 * 4 && (uVar11 < uVar2 + uVar9 * 4)))) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar9 & 0xfffffffffffffff8;
        puVar6 = (undefined8 *)(uVar11 + 0x10);
        puVar7 = (undefined8 *)(uVar2 + 0x10);
        uVar8 = uVar5;
        do {
          uVar13 = puVar6[-1];
          uVar12 = puVar6[-2];
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar8 = uVar8 - 8;
          uVar17 = puVar7[-1];
          uVar16 = puVar7[-2];
          uVar19 = puVar7[1];
          uVar18 = *puVar7;
          puVar7[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) | (byte)((ulong)uVar13 >> 0x38),
                                CONCAT16((byte)((ulong)uVar17 >> 0x30) |
                                         (byte)((ulong)uVar13 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar17 >> 0x28) |
                                                  (byte)((ulong)uVar13 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar17 >> 0x20) |
                                                           (byte)((ulong)uVar13 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar17 >> 0x18) |
                                                                    (byte)((ulong)uVar13 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar17 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar13 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) | (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 | (byte)uVar13)))))));
          puVar7[-2] = CONCAT17((byte)((ulong)uVar16 >> 0x38) | (byte)((ulong)uVar12 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) |
                                         (byte)((ulong)uVar12 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) |
                                                  (byte)((ulong)uVar12 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) |
                                                           (byte)((ulong)uVar12 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) |
                                                                    (byte)((ulong)uVar12 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar12 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) | (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 | (byte)uVar12)))))));
          puVar7[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) | (byte)((ulong)uVar15 >> 0x38),
                               CONCAT16((byte)((ulong)uVar19 >> 0x30) |
                                        (byte)((ulong)uVar15 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar19 >> 0x28) |
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) |
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) |
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) | (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 | (byte)uVar15)))))));
          *puVar7 = CONCAT17((byte)((ulong)uVar18 >> 0x38) | (byte)((ulong)uVar14 >> 0x38),
                             CONCAT16((byte)((ulong)uVar18 >> 0x30) | (byte)((ulong)uVar14 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar18 >> 0x28) |
                                               (byte)((ulong)uVar14 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar18 >> 0x20) |
                                                        (byte)((ulong)uVar14 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar18 >> 0x18) |
                                                                 (byte)((ulong)uVar14 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar18 >>
                                                                                0x10) |
                                                                          (byte)((ulong)uVar14 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) | (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 | (byte)uVar14)))))));
          puVar7 = puVar7 + 4;
        } while (uVar8 != 0);
        if (uVar9 == uVar5) goto LAB_00cfe088;
      }
      lVar4 = uVar9 - uVar5;
      puVar1 = (uint *)(uVar11 + uVar5 * 4);
      puVar3 = (uint *)(uVar2 + uVar5 * 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar3 = *puVar3 | *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    goto LAB_00cfe088;
  }
  pvVar10 = *(void **)(this + 0x20);
  AllocatorBase<unsigned_int>::CheckSize(uVar9);
  __dest = (void *)UnalignedAllocate(uVar9 << 2);
  uVar2 = uVar11;
  if ((pvVar10 != (void *)0x0) && (__dest != (void *)0x0)) {
    uVar5 = uVar9;
    if (uVar11 <= uVar9) {
      uVar5 = uVar11;
    }
    memcpy(__dest,pvVar10,uVar5 << 2);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)pvVar10 + uVar2 * 4 + -4) = 0;
  }
  UnalignedDeallocate(pvVar10);
  *(void **)(this + 0x20) = __dest;
  pvVar10 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x18) = uVar9;
  if (uVar11 != 0) {
    if ((uVar11 < 8) ||
       ((__dest < (void *)((long)pvVar10 + uVar11 * 4) &&
        (pvVar10 < (void *)((long)__dest + uVar11 * 4))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar11 & 0xfffffffffffffff8;
      puVar6 = (undefined8 *)((long)pvVar10 + 0x10);
      puVar7 = (undefined8 *)((long)__dest + 0x10);
      uVar5 = uVar2;
      do {
        uVar13 = puVar6[-1];
        uVar12 = puVar6[-2];
        uVar15 = puVar6[1];
        uVar14 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar5 = uVar5 - 8;
        uVar17 = puVar7[-1];
        uVar16 = puVar7[-2];
        uVar19 = puVar7[1];
        uVar18 = *puVar7;
        puVar7[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) | (byte)((ulong)uVar13 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) | (byte)((ulong)uVar13 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar17 >> 0x28) |
                                                 (byte)((ulong)uVar13 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) |
                                                          (byte)((ulong)uVar13 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) |
                                                                   (byte)((ulong)uVar13 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar13 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) | (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 | (byte)uVar13)))))));
        puVar7[-2] = CONCAT17((byte)((ulong)uVar16 >> 0x38) | (byte)((ulong)uVar12 >> 0x38),
                              CONCAT16((byte)((ulong)uVar16 >> 0x30) | (byte)((ulong)uVar12 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar16 >> 0x28) |
                                                 (byte)((ulong)uVar12 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar16 >> 0x20) |
                                                          (byte)((ulong)uVar12 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar16 >> 0x18) |
                                                                   (byte)((ulong)uVar12 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar16 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar12 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) | (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 | (byte)uVar12)))))));
        puVar7[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) | (byte)((ulong)uVar15 >> 0x38),
                             CONCAT16((byte)((ulong)uVar19 >> 0x30) | (byte)((ulong)uVar15 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar19 >> 0x28) |
                                               (byte)((ulong)uVar15 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar19 >> 0x20) |
                                                        (byte)((ulong)uVar15 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar19 >> 0x18) |
                                                                 (byte)((ulong)uVar15 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar19 >>
                                                                                0x10) |
                                                                          (byte)((ulong)uVar15 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) | (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 | (byte)uVar15)))))));
        *puVar7 = CONCAT17((byte)((ulong)uVar18 >> 0x38) | (byte)((ulong)uVar14 >> 0x38),
                           CONCAT16((byte)((ulong)uVar18 >> 0x30) | (byte)((ulong)uVar14 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar18 >> 0x28) |
                                             (byte)((ulong)uVar14 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar18 >> 0x20) |
                                                      (byte)((ulong)uVar14 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar18 >> 0x18) |
                                                               (byte)((ulong)uVar14 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar18 >> 0x10
                                                                              ) | (byte)((ulong)
                                                  uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) |
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar18 | (byte)uVar14)))))));
        puVar7 = puVar7 + 4;
      } while (uVar5 != 0);
      if (uVar11 == uVar2) goto LAB_00cfe00c;
    }
    lVar4 = uVar11 - uVar2;
    puVar1 = (uint *)((long)__dest + uVar2 * 4);
    puVar3 = (uint *)((long)pvVar10 + uVar2 * 4);
    do {
      lVar4 = lVar4 + -1;
      *puVar1 = *puVar1 | *puVar3;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
LAB_00cfe00c:
  if (pvVar10 != __dest) {
    memcpy((void *)((long)__dest + uVar11 * 4),(void *)((long)pvVar10 + uVar11 * 4),
           (uVar9 - uVar11) * 4);
  }
LAB_00cfe088:
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}


