// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: xorbuf
// Entry Point: 00d09c24
// Size: 548 bytes
// Signature: undefined __cdecl xorbuf(uchar * param_1, uchar * param_2, uchar * param_3, ulong param_4)


/* CryptoPP::xorbuf(unsigned char*, unsigned char const*, unsigned char const*, unsigned long) */

void CryptoPP::xorbuf(uchar *param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((((uint)param_2 | (uint)param_1 | (uint)param_3) & 3) == 0) {
    if (param_4 < 4) {
      uVar1 = 0;
      if (param_4 == 0) {
        return;
      }
    }
    else {
      uVar1 = param_4 >> 2;
      if (param_4 < 0x20) {
        uVar3 = 0;
LAB_00d09cfc:
        lVar11 = uVar3 * 4;
        lVar6 = uVar1 - uVar3;
        puVar4 = (uint *)(param_1 + lVar11);
        puVar8 = (uint *)(param_3 + lVar11);
        puVar12 = (uint *)(param_2 + lVar11);
        do {
          lVar6 = lVar6 + -1;
          *puVar4 = *puVar8 ^ *puVar12;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar6 != 0);
      }
      else {
        uVar7 = param_4 & 0xfffffffffffffffc;
        uVar3 = 0;
        if ((param_1 < param_2 + uVar7 && param_2 < param_1 + uVar7) ||
           (param_1 < param_3 + uVar7 && param_3 < param_1 + uVar7)) goto LAB_00d09cfc;
        uVar3 = uVar1 & 0x3ffffffffffffff8;
        puVar5 = (undefined8 *)(param_2 + 0x10);
        puVar9 = (undefined8 *)(param_3 + 0x10);
        puVar13 = (undefined8 *)(param_1 + 0x10);
        uVar7 = uVar3;
        do {
          uVar17 = puVar5[-1];
          uVar15 = puVar5[-2];
          uVar18 = puVar5[1];
          uVar16 = *puVar5;
          puVar5 = puVar5 + 4;
          uVar7 = uVar7 - 8;
          uVar20 = puVar9[-1];
          uVar19 = puVar9[-2];
          uVar22 = puVar9[1];
          uVar21 = *puVar9;
          puVar9 = puVar9 + 4;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar20
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar20 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar17)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
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
          puVar13[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
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
          *puVar13 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar16)))))));
          puVar13 = puVar13 + 4;
        } while (uVar7 != 0);
        if (uVar1 != uVar3) goto LAB_00d09cfc;
      }
      uVar1 = param_4 & 0xfffffffffffffffc;
      param_4 = param_4 - uVar1;
      if (param_4 == 0) {
        return;
      }
    }
    param_1 = param_1 + uVar1;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
    if (7 < param_4) goto LAB_00d09d48;
  }
  else {
    if (param_4 == 0) {
      return;
    }
    if (7 < param_4) {
LAB_00d09d48:
      uVar1 = 0;
      if ((param_2 + param_4 <= param_1 || param_1 + param_4 <= param_2) &&
         (param_3 + param_4 <= param_1 || param_1 + param_4 <= param_3)) {
        if (param_4 < 0x20) {
          uVar3 = 0;
        }
        else {
          uVar1 = param_4 & 0xffffffffffffffe0;
          puVar5 = (undefined8 *)(param_2 + 0x10);
          puVar9 = (undefined8 *)(param_3 + 0x10);
          puVar13 = (undefined8 *)(param_1 + 0x10);
          uVar3 = uVar1;
          do {
            uVar17 = puVar5[-1];
            uVar15 = puVar5[-2];
            uVar18 = puVar5[1];
            uVar16 = *puVar5;
            puVar5 = puVar5 + 4;
            uVar3 = uVar3 - 0x20;
            uVar20 = puVar9[-1];
            uVar19 = puVar9[-2];
            uVar22 = puVar9[1];
            uVar21 = *puVar9;
            puVar9 = puVar9 + 4;
            puVar13[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                            (byte)((ulong)uVar17 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                     (byte)((ulong)uVar17 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                              (byte)((ulong)uVar17 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar20 >> 0x18)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar20
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar20 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar17)))))));
            puVar13[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
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
            puVar13[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
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
            *puVar13 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                         (byte)((ulong)uVar16 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                  (byte)((ulong)uVar16 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                           (byte)((ulong)uVar16 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                    (byte)((ulong)uVar16 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar21 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar16 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar16)))))));
            puVar13 = puVar13 + 4;
          } while (uVar3 != 0);
          if (param_4 == uVar1) {
            return;
          }
          uVar3 = uVar1;
          if ((param_4 & 0x18) == 0) goto LAB_00d09e1c;
        }
        uVar1 = param_4 & 0xfffffffffffffff8;
        lVar6 = uVar3 - uVar1;
        puVar5 = (undefined8 *)(param_2 + uVar3);
        puVar9 = (undefined8 *)(param_3 + uVar3);
        puVar13 = (undefined8 *)(param_1 + uVar3);
        do {
          uVar15 = *puVar5;
          uVar17 = *puVar9;
          lVar6 = lVar6 + 8;
          *puVar13 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar15)))))));
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
        if (param_4 == uVar1) {
          return;
        }
      }
      goto LAB_00d09e1c;
    }
  }
  uVar1 = 0;
LAB_00d09e1c:
  lVar6 = param_4 - uVar1;
  pbVar2 = param_2 + uVar1;
  pbVar10 = param_1 + uVar1;
  pbVar14 = param_3 + uVar1;
  do {
    lVar6 = lVar6 + -1;
    *pbVar10 = *pbVar14 ^ *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar10 = pbVar10 + 1;
    pbVar14 = pbVar14 + 1;
  } while (lVar6 != 0);
  return;
}


