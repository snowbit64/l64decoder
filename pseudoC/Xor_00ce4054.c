// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Xor
// Entry Point: 00ce4054
// Size: 772 bytes
// Signature: undefined __cdecl Xor(PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::Xor(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::PolynomialMod2::Xor(PolynomialMod2 *param_1)

{
  undefined4 *puVar1;
  long in_x1;
  long in_x8;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar2 = *(ulong *)(in_x1 + 0x10);
  puVar14 = (ulong *)(param_1 + 0x10);
  if (*puVar14 <= uVar2) {
    uVar2 = uVar2 & 0x7ffffffffffffff;
    *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
    *(ulong *)(in_x8 + 0x10) = uVar2;
    AllocatorBase<unsigned_int>::CheckSize(uVar2);
    if (uVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
      *(undefined8 *)(in_x8 + 0x18) = 0;
      uVar2 = *(ulong *)(param_1 + 0x10);
      puVar3 = *(undefined4 **)(in_x1 + 0x18);
    }
    else {
      puVar1 = (undefined4 *)UnalignedAllocate(uVar2 * 4);
      *(undefined4 **)(in_x8 + 0x18) = puVar1;
      *puVar1 = 0;
      if (uVar2 != 1) {
        memset(puVar1 + 1,0,uVar2 * 4 - 4);
      }
      uVar2 = *(ulong *)(param_1 + 0x10);
      puVar3 = *(undefined4 **)(in_x1 + 0x18);
    }
    if (uVar2 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x18);
      if (uVar2 < 8) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((puVar4 + uVar2 <= puVar1 || puVar1 + uVar2 <= puVar4) &&
           (puVar3 + uVar2 <= puVar1 || puVar1 + uVar2 <= puVar3)) {
          uVar6 = uVar2 & 0xfffffffffffffff8;
          puVar8 = (undefined8 *)(puVar4 + 4);
          puVar10 = (undefined8 *)(puVar3 + 4);
          puVar12 = (undefined8 *)(puVar1 + 4);
          uVar13 = uVar6;
          do {
            uVar16 = puVar8[-1];
            uVar15 = puVar8[-2];
            uVar18 = puVar8[1];
            uVar17 = *puVar8;
            puVar8 = puVar8 + 4;
            uVar13 = uVar13 - 8;
            uVar20 = puVar10[-1];
            uVar19 = puVar10[-2];
            uVar22 = puVar10[1];
            uVar21 = *puVar10;
            puVar10 = puVar10 + 4;
            puVar12[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                            (byte)((ulong)uVar16 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                     (byte)((ulong)uVar16 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                              (byte)((ulong)uVar16 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar20 >> 0x18)
                                                                       ^ (byte)((ulong)uVar16 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar20
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar16
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
            puVar12[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                            (byte)((ulong)uVar15 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                     (byte)((ulong)uVar15 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                              (byte)((ulong)uVar15 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar19 >> 0x18)
                                                                       ^ (byte)((ulong)uVar15 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar19
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar15
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar19 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar15)))))));
            puVar12[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                           (byte)((ulong)uVar18 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                    (byte)((ulong)uVar18 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                             (byte)((ulong)uVar18 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar22 >> 0x18)
                                                                      ^ (byte)((ulong)uVar18 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar22
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar18
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
            *puVar12 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                         (byte)((ulong)uVar17 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                  (byte)((ulong)uVar17 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                           (byte)((ulong)uVar17 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                    (byte)((ulong)uVar17 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar21 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar17 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          if (uVar2 == uVar6) goto LAB_00ce4308;
        }
      }
      lVar7 = uVar2 - uVar6;
      puVar5 = puVar4 + uVar6;
      puVar9 = puVar1 + uVar6;
      puVar11 = puVar3 + uVar6;
      do {
        lVar7 = lVar7 + -1;
        *puVar9 = *puVar11 ^ *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar7 != 0);
    }
LAB_00ce4308:
    puVar14 = (ulong *)(in_x1 + 0x10);
    if (puVar1 == puVar3) {
      return;
    }
    goto LAB_00ce4314;
  }
  uVar2 = *puVar14 & 0x7ffffffffffffff;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar2;
  AllocatorBase<unsigned_int>::CheckSize(uVar2);
  if (uVar2 == 0) {
    puVar1 = (undefined4 *)0x0;
    *(undefined8 *)(in_x8 + 0x18) = 0;
    uVar2 = *(ulong *)(in_x1 + 0x10);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
  }
  else {
    puVar1 = (undefined4 *)UnalignedAllocate(uVar2 * 4);
    *(undefined4 **)(in_x8 + 0x18) = puVar1;
    *puVar1 = 0;
    if (uVar2 != 1) {
      memset(puVar1 + 1,0,uVar2 * 4 - 4);
    }
    uVar2 = *(ulong *)(in_x1 + 0x10);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
  }
  if (uVar2 != 0) {
    puVar4 = *(undefined4 **)(in_x1 + 0x18);
    if (uVar2 < 8) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if ((puVar3 + uVar2 <= puVar1 || puVar1 + uVar2 <= puVar3) &&
         (puVar4 + uVar2 <= puVar1 || puVar1 + uVar2 <= puVar4)) {
        uVar6 = uVar2 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(puVar3 + 4);
        puVar10 = (undefined8 *)(puVar4 + 4);
        puVar12 = (undefined8 *)(puVar1 + 4);
        uVar13 = uVar6;
        do {
          uVar16 = puVar8[-1];
          uVar15 = puVar8[-2];
          uVar18 = puVar8[1];
          uVar17 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar13 = uVar13 - 8;
          uVar20 = puVar10[-1];
          uVar19 = puVar10[-2];
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          puVar10 = puVar10 + 4;
          puVar12[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar20
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
          puVar12[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                          (byte)((ulong)uVar15 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                   (byte)((ulong)uVar15 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                            (byte)((ulong)uVar15 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                     (byte)((ulong)uVar15 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar19
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar15
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar19 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar15)))))));
          puVar12[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                         (byte)((ulong)uVar18 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                  (byte)((ulong)uVar18 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                           (byte)((ulong)uVar18 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                    (byte)((ulong)uVar18 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar22 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar18 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
          *puVar12 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar2 == uVar6) goto LAB_00ce4240;
      }
    }
    lVar7 = uVar2 - uVar6;
    puVar5 = puVar4 + uVar6;
    puVar9 = puVar1 + uVar6;
    puVar11 = puVar3 + uVar6;
    do {
      lVar7 = lVar7 + -1;
      *puVar9 = *puVar5 ^ *puVar11;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
  }
LAB_00ce4240:
  if (puVar1 == puVar3) {
    return;
  }
LAB_00ce4314:
  memcpy(puVar1 + uVar2,puVar3 + uVar2,(*puVar14 - uVar2) * 4);
  return;
}


