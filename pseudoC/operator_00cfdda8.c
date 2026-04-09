// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator&=
// Entry Point: 00cfdda8
// Size: 364 bytes
// Signature: undefined __thiscall operator&=(Integer * this, Integer * param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::Integer const&) */

Integer * __thiscall CryptoPP::Integer::operator&=(Integer *this,Integer *param_1)

{
  void *__dest;
  void *pvVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (this != param_1) {
    uVar3 = *(ulong *)(this + 0x18);
    pvVar1 = *(void **)(this + 0x20);
    uVar9 = *(ulong *)(param_1 + 0x18);
    if (uVar9 < uVar3) {
      AllocatorBase<unsigned_int>::CheckSize(uVar9);
      if (uVar9 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)UnalignedAllocate(uVar9 << 2);
        if ((pvVar1 != (void *)0x0) && (__dest != (void *)0x0)) {
          memcpy(__dest,pvVar1,uVar9 << 2);
        }
      }
      do {
        uVar8 = uVar3 - 1;
        *(undefined4 *)((long)pvVar1 + uVar3 * 4 + -4) = 0;
        uVar3 = uVar8;
      } while (uVar8 != 0);
      UnalignedDeallocate(pvVar1);
      *(ulong *)(this + 0x18) = uVar9;
      *(void **)(this + 0x20) = __dest;
      *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    }
    else {
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 0x20) = pvVar1;
      *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
      uVar9 = uVar3;
      __dest = pvVar1;
    }
    if (uVar9 != 0) {
      pvVar1 = *(void **)(param_1 + 0x20);
      if ((uVar9 < 8) ||
         ((__dest < (void *)((long)pvVar1 + uVar9 * 4) &&
          (pvVar1 < (void *)((long)__dest + uVar9 * 4))))) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar9 & 0xfffffffffffffff8;
        puVar6 = (undefined8 *)((long)pvVar1 + 0x10);
        puVar7 = (undefined8 *)((long)__dest + 0x10);
        uVar8 = uVar3;
        do {
          uVar11 = puVar6[-1];
          uVar10 = puVar6[-2];
          uVar13 = puVar6[1];
          uVar12 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar8 = uVar8 - 8;
          uVar15 = puVar7[-1];
          uVar14 = puVar7[-2];
          uVar17 = puVar7[1];
          uVar16 = *puVar7;
          puVar7[-1] = CONCAT17((byte)((ulong)uVar15 >> 0x38) & (byte)((ulong)uVar11 >> 0x38),
                                CONCAT16((byte)((ulong)uVar15 >> 0x30) &
                                         (byte)((ulong)uVar11 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar15 >> 0x28) &
                                                  (byte)((ulong)uVar11 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) &
                                                           (byte)((ulong)uVar11 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) &
                                                                    (byte)((ulong)uVar11 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar15 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar11 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) & (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 & (byte)uVar11)))))));
          puVar7[-2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & (byte)((ulong)uVar10 >> 0x38),
                                CONCAT16((byte)((ulong)uVar14 >> 0x30) &
                                         (byte)((ulong)uVar10 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar14 >> 0x28) &
                                                  (byte)((ulong)uVar10 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar14 >> 0x20) &
                                                           (byte)((ulong)uVar10 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar14 >> 0x18) &
                                                                    (byte)((ulong)uVar10 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar14 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar10 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) & (byte)((ulong)uVar10 >> 8),
                                                  (byte)uVar14 & (byte)uVar10)))))));
          puVar7[1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar13 >> 0x38),
                               CONCAT16((byte)((ulong)uVar17 >> 0x30) &
                                        (byte)((ulong)uVar13 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                                 (byte)((ulong)uVar13 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                          (byte)((ulong)uVar13 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                                   (byte)((ulong)uVar13 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar13 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) & (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 & (byte)uVar13)))))));
          *puVar7 = CONCAT17((byte)((ulong)uVar16 >> 0x38) & (byte)((ulong)uVar12 >> 0x38),
                             CONCAT16((byte)((ulong)uVar16 >> 0x30) & (byte)((ulong)uVar12 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar16 >> 0x28) &
                                               (byte)((ulong)uVar12 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar16 >> 0x20) &
                                                        (byte)((ulong)uVar12 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar16 >> 0x18) &
                                                                 (byte)((ulong)uVar12 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar16 >>
                                                                                0x10) &
                                                                          (byte)((ulong)uVar12 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) & (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 & (byte)uVar12)))))));
          puVar7 = puVar7 + 4;
        } while (uVar8 != 0);
        if (uVar9 == uVar3) goto LAB_00cfdeb4;
      }
      lVar5 = uVar9 - uVar3;
      puVar2 = (uint *)((long)pvVar1 + uVar3 * 4);
      puVar4 = (uint *)((long)__dest + uVar3 * 4);
      do {
        lVar5 = lVar5 + -1;
        *puVar4 = *puVar4 & *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_00cfdeb4:
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}


