// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc14d0
// Entry Point: 00dc14d0
// Size: 244 bytes
// Signature: undefined FUN_00dc14d0(void)


void FUN_00dc14d0(long param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    return;
  }
  if ((uVar1 < 8) || ((param_2 < param_3 + uVar1 && (param_3 < param_2 + uVar1)))) {
    uVar3 = 0;
    pcVar5 = param_3;
    pcVar7 = param_2;
  }
  else {
    if (uVar1 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar3 = uVar1 & 0xffffffffffffffe0;
      puVar6 = (undefined8 *)(param_2 + 0x10);
      puVar8 = (undefined8 *)(param_3 + 0x10);
      uVar4 = uVar3;
      do {
        uVar11 = puVar6[-1];
        uVar9 = puVar6[-2];
        uVar12 = puVar6[1];
        uVar10 = *puVar6;
        uVar4 = uVar4 - 0x20;
        uVar14 = puVar8[-1];
        uVar13 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        puVar8 = puVar8 + 4;
        puVar6[-1] = CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar11 >> 0x38),
                              CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar11 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                                 (char)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                          (char)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                                   (char)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar14 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar14 >> 8) + (char)((ulong)uVar11 >> 8),
                                                  (char)uVar14 + (char)uVar11)))))));
        puVar6[-2] = CONCAT17((char)((ulong)uVar13 >> 0x38) + (char)((ulong)uVar9 >> 0x38),
                              CONCAT16((char)((ulong)uVar13 >> 0x30) + (char)((ulong)uVar9 >> 0x30),
                                       CONCAT15((char)((ulong)uVar13 >> 0x28) +
                                                (char)((ulong)uVar9 >> 0x28),
                                                CONCAT14((char)((ulong)uVar13 >> 0x20) +
                                                         (char)((ulong)uVar9 >> 0x20),
                                                         CONCAT13((char)((ulong)uVar13 >> 0x18) +
                                                                  (char)((ulong)uVar9 >> 0x18),
                                                                  CONCAT12((char)((ulong)uVar13 >>
                                                                                 0x10) +
                                                                           (char)((ulong)uVar9 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((ulong)
                                                  uVar13 >> 8) + (char)((ulong)uVar9 >> 8),
                                                  (char)uVar13 + (char)uVar9)))))));
        puVar6[1] = CONCAT17((char)((ulong)uVar16 >> 0x38) + (char)((ulong)uVar12 >> 0x38),
                             CONCAT16((char)((ulong)uVar16 >> 0x30) + (char)((ulong)uVar12 >> 0x30),
                                      CONCAT15((char)((ulong)uVar16 >> 0x28) +
                                               (char)((ulong)uVar12 >> 0x28),
                                               CONCAT14((char)((ulong)uVar16 >> 0x20) +
                                                        (char)((ulong)uVar12 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar16 >> 0x18) +
                                                                 (char)((ulong)uVar12 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar16 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar12 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar16 >> 8) + (char)((ulong)uVar12 >> 8),
                                                  (char)uVar16 + (char)uVar12)))))));
        *puVar6 = CONCAT17((char)((ulong)uVar15 >> 0x38) + (char)((ulong)uVar10 >> 0x38),
                           CONCAT16((char)((ulong)uVar15 >> 0x30) + (char)((ulong)uVar10 >> 0x30),
                                    CONCAT15((char)((ulong)uVar15 >> 0x28) +
                                             (char)((ulong)uVar10 >> 0x28),
                                             CONCAT14((char)((ulong)uVar15 >> 0x20) +
                                                      (char)((ulong)uVar10 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar15 >> 0x18) +
                                                               (char)((ulong)uVar10 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar15 >> 0x10
                                                                              ) + (char)((ulong)
                                                  uVar10 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar15 >> 8) +
                                                           (char)((ulong)uVar10 >> 8),
                                                           (char)uVar15 + (char)uVar10)))))));
        puVar6 = puVar6 + 4;
      } while (uVar4 != 0);
      if (uVar1 == uVar3) {
        return;
      }
      uVar4 = uVar3;
      if ((uVar1 & 0x18) == 0) {
        pcVar7 = param_2 + uVar3;
        pcVar5 = param_3 + uVar3;
        goto LAB_00dc1504;
      }
    }
    uVar3 = uVar1 & 0xfffffffffffffff8;
    pcVar5 = param_3 + uVar3;
    pcVar7 = param_2 + uVar3;
    lVar2 = uVar4 - uVar3;
    puVar6 = (undefined8 *)(param_2 + uVar4);
    puVar8 = (undefined8 *)(param_3 + uVar4);
    do {
      uVar9 = *puVar6;
      lVar2 = lVar2 + 8;
      uVar11 = *puVar8;
      *puVar6 = CONCAT17((char)((ulong)uVar11 >> 0x38) + (char)((ulong)uVar9 >> 0x38),
                         CONCAT16((char)((ulong)uVar11 >> 0x30) + (char)((ulong)uVar9 >> 0x30),
                                  CONCAT15((char)((ulong)uVar11 >> 0x28) +
                                           (char)((ulong)uVar9 >> 0x28),
                                           CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                    (char)((ulong)uVar9 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar11 >> 0x18) +
                                                             (char)((ulong)uVar9 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar11 >> 0x10)
                                                                      + (char)((ulong)uVar9 >> 0x10)
                                                                      ,CONCAT11((char)((ulong)uVar11
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar9
                                                                                      >> 8),
                                                                                (char)uVar11 +
                                                                                (char)uVar9)))))));
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar2 != 0);
    if (uVar1 == uVar3) {
      return;
    }
  }
LAB_00dc1504:
  lVar2 = uVar1 - uVar3;
  do {
    lVar2 = lVar2 + -1;
    *pcVar7 = *pcVar5 + *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (lVar2 != 0);
  return;
}


