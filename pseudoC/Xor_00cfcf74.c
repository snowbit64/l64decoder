// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Xor
// Entry Point: 00cfcf74
// Size: 444 bytes
// Signature: undefined __cdecl Xor(Integer * param_1)


/* CryptoPP::Integer::Xor(CryptoPP::Integer const&) const */

void CryptoPP::Integer::Xor(Integer *param_1)

{
  Integer *in_x1;
  Integer *in_x8;
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_1 == in_x1) {
    Integer(in_x8,(Integer *)&DAT_02120810);
    return;
  }
  if (*(ulong *)(param_1 + 0x18) < *(ulong *)(in_x1 + 0x18)) {
    Integer(in_x8,in_x1);
    uVar3 = *(ulong *)(param_1 + 0x18);
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(in_x8 + 0x20);
      uVar1 = *(ulong *)(param_1 + 0x20);
      if ((uVar3 < 8) || ((uVar5 < uVar1 + uVar3 * 4 && (uVar1 < uVar5 + uVar3 * 4)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar3 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(uVar1 + 0x10);
        puVar9 = (undefined8 *)(uVar5 + 0x10);
        uVar10 = uVar7;
        do {
          uVar12 = puVar8[-1];
          uVar11 = puVar8[-2];
          uVar14 = puVar8[1];
          uVar13 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar10 = uVar10 - 8;
          uVar16 = puVar9[-1];
          uVar15 = puVar9[-2];
          uVar18 = puVar9[1];
          uVar17 = *puVar9;
          puVar9[-1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                         (byte)((ulong)uVar12 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                  (byte)((ulong)uVar12 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)((ulong)uVar12 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)((ulong)uVar12 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar12 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
          puVar9[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                         (byte)((ulong)uVar11 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                  (byte)((ulong)uVar11 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                           (byte)((ulong)uVar11 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                    (byte)((ulong)uVar11 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar15 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
          puVar9[1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                               CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                        (byte)((ulong)uVar14 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
          *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar13 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar13 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar13 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar17 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar13 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar3 == uVar7) goto LAB_00cfd09c;
      }
      lVar4 = uVar3 - uVar7;
      puVar2 = (uint *)(uVar1 + uVar7 * 4);
      puVar6 = (uint *)(uVar5 + uVar7 * 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar6 = *puVar6 ^ *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0);
    }
  }
  else {
    Integer(in_x8,param_1);
    uVar3 = *(ulong *)(in_x1 + 0x18);
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(in_x8 + 0x20);
      uVar1 = *(ulong *)(in_x1 + 0x20);
      if ((uVar3 < 8) || ((uVar5 < uVar1 + uVar3 * 4 && (uVar1 < uVar5 + uVar3 * 4)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar3 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(uVar1 + 0x10);
        puVar9 = (undefined8 *)(uVar5 + 0x10);
        uVar10 = uVar7;
        do {
          uVar12 = puVar8[-1];
          uVar11 = puVar8[-2];
          uVar14 = puVar8[1];
          uVar13 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar10 = uVar10 - 8;
          uVar16 = puVar9[-1];
          uVar15 = puVar9[-2];
          uVar18 = puVar9[1];
          uVar17 = *puVar9;
          puVar9[-1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                         (byte)((ulong)uVar12 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                  (byte)((ulong)uVar12 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)((ulong)uVar12 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)((ulong)uVar12 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar12 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
          puVar9[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                         (byte)((ulong)uVar11 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                  (byte)((ulong)uVar11 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                           (byte)((ulong)uVar11 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                    (byte)((ulong)uVar11 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar15 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
          puVar9[1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                               CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                        (byte)((ulong)uVar14 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
          *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar13 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar13 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar13 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar17 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar13 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar3 == uVar7) goto LAB_00cfd09c;
      }
      lVar4 = uVar3 - uVar7;
      puVar2 = (uint *)(uVar1 + uVar7 * 4);
      puVar6 = (uint *)(uVar5 + uVar7 * 4);
      do {
        lVar4 = lVar4 + -1;
        *puVar6 = *puVar6 ^ *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_00cfd09c:
  *(undefined4 *)(in_x8 + 0x28) = 0;
  return;
}


