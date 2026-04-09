// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: And
// Entry Point: 00ce4358
// Size: 356 bytes
// Signature: undefined __cdecl And(PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::And(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::PolynomialMod2::And(PolynomialMod2 *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long in_x1;
  long in_x8;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar1 = *(ulong *)(in_x1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(in_x1 + 0x10)) {
    uVar1 = *(ulong *)(param_1 + 0x10);
  }
  uVar13 = uVar1 & 0x7ffffffffffffff;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar13;
  AllocatorBase<unsigned_int>::CheckSize(uVar13);
  if (uVar13 == 0) {
    *(undefined8 *)(in_x8 + 0x18) = 0;
  }
  else {
    puVar2 = (undefined4 *)UnalignedAllocate(uVar13 * 4);
    *(undefined4 **)(in_x8 + 0x18) = puVar2;
    *puVar2 = 0;
    if (uVar13 != 1) {
      memset(puVar2 + 1,0,uVar13 * 4 - 4);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    puVar5 = *(undefined4 **)(in_x1 + 0x18);
    if (uVar13 < 8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if ((puVar3 + uVar13 <= puVar2 || puVar2 + uVar13 <= puVar3) &&
         (puVar5 + uVar13 <= puVar2 || puVar2 + uVar13 <= puVar5)) {
        puVar10 = (undefined8 *)(puVar3 + 4);
        lVar7 = uVar13 - (uVar1 & 7);
        puVar11 = (undefined8 *)(puVar5 + 4);
        puVar12 = (undefined8 *)(puVar2 + 4);
        lVar8 = lVar7;
        do {
          uVar15 = puVar10[-1];
          uVar14 = puVar10[-2];
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          puVar10 = puVar10 + 4;
          lVar8 = lVar8 + -8;
          uVar19 = puVar11[-1];
          uVar18 = puVar11[-2];
          uVar21 = puVar11[1];
          uVar20 = *puVar11;
          puVar11 = puVar11 + 4;
          puVar12[-1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar15 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar19 >> 0x30) &
                                          (byte)((ulong)uVar15 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar19 >> 0x28) &
                                                   (byte)((ulong)uVar15 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar19 >> 0x20) &
                                                            (byte)((ulong)uVar15 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                                     (byte)((ulong)uVar15 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar19
                                                                                    >> 0x10) &
                                                                              (byte)((ulong)uVar15
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar19 >> 8) & (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 & (byte)uVar15)))))));
          puVar12[-2] = CONCAT17((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar14 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar18 >> 0x30) &
                                          (byte)((ulong)uVar14 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar18 >> 0x28) &
                                                   (byte)((ulong)uVar14 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                                            (byte)((ulong)uVar14 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                                     (byte)((ulong)uVar14 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar18
                                                                                    >> 0x10) &
                                                                              (byte)((ulong)uVar14
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar18 >> 8) & (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 & (byte)uVar14)))))));
          puVar12[1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) & (byte)((ulong)uVar17 >> 0x38),
                                CONCAT16((byte)((ulong)uVar21 >> 0x30) &
                                         (byte)((ulong)uVar17 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar21 >> 0x28) &
                                                  (byte)((ulong)uVar17 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                                           (byte)((ulong)uVar17 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                                    (byte)((ulong)uVar17 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar21 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar17 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) & (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 & (byte)uVar17)))))));
          *puVar12 = CONCAT17((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar16 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar20 >> 0x28) &
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar20 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) & (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 & (byte)uVar16)))))));
          puVar12 = puVar12 + 4;
        } while (lVar8 != 0);
        if ((uVar1 & 7) == 0) {
          return;
        }
      }
    }
    lVar8 = uVar13 - lVar7;
    puVar4 = puVar3 + lVar7;
    puVar6 = puVar5 + lVar7;
    puVar9 = puVar2 + lVar7;
    do {
      lVar8 = lVar8 + -1;
      *puVar9 = *puVar6 & *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar8 != 0);
  }
  return;
}


