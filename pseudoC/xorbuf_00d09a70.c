// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: xorbuf
// Entry Point: 00d09a70
// Size: 436 bytes
// Signature: undefined __cdecl xorbuf(uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::xorbuf(unsigned char*, unsigned char const*, unsigned long) */

void CryptoPP::xorbuf(uchar *param_1,uchar *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  byte *pbVar8;
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
  
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    if (param_3 < 4) {
      uVar1 = 0;
      if (param_3 == 0) {
        return;
      }
    }
    else {
      uVar1 = param_3 >> 2;
      if ((param_3 < 0x20) ||
         ((param_1 < param_2 + (param_3 & 0xfffffffffffffffc) &&
          (param_2 < param_1 + (param_3 & 0xfffffffffffffffc))))) {
        uVar2 = 0;
LAB_00d09ad0:
        lVar5 = uVar1 - uVar2;
        puVar4 = (uint *)(param_1 + uVar2 * 4);
        puVar7 = (uint *)(param_2 + uVar2 * 4);
        do {
          lVar5 = lVar5 + -1;
          *puVar4 = *puVar4 ^ *puVar7;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar5 != 0);
      }
      else {
        uVar2 = uVar1 & 0x3ffffffffffffff8;
        puVar6 = (undefined8 *)(param_2 + 0x10);
        puVar9 = (undefined8 *)(param_1 + 0x10);
        uVar10 = uVar2;
        do {
          uVar13 = puVar6[-1];
          uVar11 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar12 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar10 = uVar10 - 8;
          uVar16 = puVar9[-1];
          uVar15 = puVar9[-2];
          uVar18 = puVar9[1];
          uVar17 = *puVar9;
          puVar9[-1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                         (byte)((ulong)uVar13 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                  (byte)((ulong)uVar13 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)((ulong)uVar13 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)((ulong)uVar13 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar13 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar13)))))));
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
          *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar12 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar12 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar12 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar12 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar17 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar12 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar12)))))));
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar1 != uVar2) goto LAB_00d09ad0;
      }
      uVar1 = param_3 & 0xfffffffffffffffc;
      param_3 = param_3 - uVar1;
      if (param_3 == 0) {
        return;
      }
    }
    param_1 = param_1 + uVar1;
    param_2 = param_2 + uVar1;
    if (7 < param_3) goto LAB_00d09b14;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    if (7 < param_3) {
LAB_00d09b14:
      if ((param_2 + param_3 <= param_1) || (param_1 + param_3 <= param_2)) {
        if (param_3 < 0x20) {
          uVar1 = 0;
        }
        else {
          uVar2 = param_3 & 0xffffffffffffffe0;
          puVar6 = (undefined8 *)(param_2 + 0x10);
          puVar9 = (undefined8 *)(param_1 + 0x10);
          uVar1 = uVar2;
          do {
            uVar13 = puVar6[-1];
            uVar11 = puVar6[-2];
            uVar14 = puVar6[1];
            uVar12 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar1 = uVar1 - 0x20;
            uVar16 = puVar9[-1];
            uVar15 = puVar9[-2];
            uVar18 = puVar9[1];
            uVar17 = *puVar9;
            puVar9[-1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                           (byte)((ulong)uVar13 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                    (byte)((ulong)uVar13 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                             (byte)((ulong)uVar13 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar16 >> 0x18)
                                                                      ^ (byte)((ulong)uVar13 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar16
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar13
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar16 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar13)))))));
            puVar9[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                           (byte)((ulong)uVar11 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                    (byte)((ulong)uVar11 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                             (byte)((ulong)uVar11 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar15 >> 0x18)
                                                                      ^ (byte)((ulong)uVar11 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar15
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar11
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
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
                                                                     CONCAT12((byte)((ulong)uVar18
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar14
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
            *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                               CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                        (byte)((ulong)uVar12 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar12 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar12 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar12 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar12 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar12)))))));
            puVar9 = puVar9 + 4;
          } while (uVar1 != 0);
          if (param_3 == uVar2) {
            return;
          }
          uVar1 = uVar2;
          if ((param_3 & 0x18) == 0) goto LAB_00d09b30;
        }
        uVar2 = param_3 & 0xfffffffffffffff8;
        lVar5 = uVar1 - uVar2;
        puVar6 = (undefined8 *)(param_2 + uVar1);
        puVar9 = (undefined8 *)(param_1 + uVar1);
        do {
          uVar11 = *puVar6;
          uVar13 = *puVar9;
          lVar5 = lVar5 + 8;
          *puVar9 = CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                             CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                               (byte)((ulong)uVar11 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                        (byte)((ulong)uVar11 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                                 (byte)((ulong)uVar11 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar13 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar11 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar13 ^ (byte)uVar11)))))));
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar5 != 0);
        if (param_3 == uVar2) {
          return;
        }
        goto LAB_00d09b30;
      }
    }
  }
  uVar2 = 0;
LAB_00d09b30:
  lVar5 = param_3 - uVar2;
  pbVar3 = param_2 + uVar2;
  pbVar8 = param_1 + uVar2;
  do {
    lVar5 = lVar5 + -1;
    *pbVar8 = *pbVar8 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar8 = pbVar8 + 1;
  } while (lVar5 != 0);
  return;
}


