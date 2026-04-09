// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc13dc
// Entry Point: 00dc13dc
// Size: 244 bytes
// Signature: undefined FUN_00dc13dc(void)


void FUN_00dc13dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  uVar2 = uVar5 - uVar6;
  if (uVar5 < uVar6 || uVar2 == 0) {
    return;
  }
  pcVar4 = (char *)((long)param_2 + uVar6);
  uVar9 = uVar6;
  if ((7 < uVar2) &&
     (bVar3 = (char *)((long)param_2 + uVar2) <= pcVar4,
     (bVar3 || (undefined8 *)((long)param_2 + uVar5) < param_2) ||
     !bVar3 && (undefined8 *)((long)param_2 + uVar5) == param_2)) {
    if (uVar2 < 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      uVar9 = uVar7;
      puVar10 = param_2;
      do {
        puVar1 = (undefined8 *)((long)puVar10 + uVar6);
        uVar9 = uVar9 - 0x20;
        uVar14 = puVar10[1];
        uVar12 = *puVar10;
        uVar15 = puVar10[3];
        uVar13 = puVar10[2];
        uVar17 = puVar1[1];
        uVar16 = *puVar1;
        uVar19 = puVar1[3];
        uVar18 = puVar1[2];
        puVar1[1] = CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar17 >> 0x38),
                             CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar17 >> 0x30),
                                      CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                               (char)((ulong)uVar17 >> 0x28),
                                               CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                        (char)((ulong)uVar17 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                                 (char)((ulong)uVar17 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar14 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar17 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar14 >> 8) + (char)((ulong)uVar17 >> 8),
                                                  (char)uVar14 + (char)uVar17)))))));
        *puVar1 = CONCAT17((char)((ulong)uVar12 >> 0x38) + (char)((ulong)uVar16 >> 0x38),
                           CONCAT16((char)((ulong)uVar12 >> 0x30) + (char)((ulong)uVar16 >> 0x30),
                                    CONCAT15((char)((ulong)uVar12 >> 0x28) +
                                             (char)((ulong)uVar16 >> 0x28),
                                             CONCAT14((char)((ulong)uVar12 >> 0x20) +
                                                      (char)((ulong)uVar16 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar12 >> 0x18) +
                                                               (char)((ulong)uVar16 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar12 >> 0x10
                                                                              ) + (char)((ulong)
                                                  uVar16 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar12 >> 8) +
                                                           (char)((ulong)uVar16 >> 8),
                                                           (char)uVar12 + (char)uVar16)))))));
        puVar1[3] = CONCAT17((char)((ulong)uVar15 >> 0x38) + (char)((ulong)uVar19 >> 0x38),
                             CONCAT16((char)((ulong)uVar15 >> 0x30) + (char)((ulong)uVar19 >> 0x30),
                                      CONCAT15((char)((ulong)uVar15 >> 0x28) +
                                               (char)((ulong)uVar19 >> 0x28),
                                               CONCAT14((char)((ulong)uVar15 >> 0x20) +
                                                        (char)((ulong)uVar19 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar15 >> 0x18) +
                                                                 (char)((ulong)uVar19 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar15 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar19 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar15 >> 8) + (char)((ulong)uVar19 >> 8),
                                                  (char)uVar15 + (char)uVar19)))))));
        puVar1[2] = CONCAT17((char)((ulong)uVar13 >> 0x38) + (char)((ulong)uVar18 >> 0x38),
                             CONCAT16((char)((ulong)uVar13 >> 0x30) + (char)((ulong)uVar18 >> 0x30),
                                      CONCAT15((char)((ulong)uVar13 >> 0x28) +
                                               (char)((ulong)uVar18 >> 0x28),
                                               CONCAT14((char)((ulong)uVar13 >> 0x20) +
                                                        (char)((ulong)uVar18 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar13 >> 0x18) +
                                                                 (char)((ulong)uVar18 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar13 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar18 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar13 >> 8) + (char)((ulong)uVar18 >> 8),
                                                  (char)uVar13 + (char)uVar18)))))));
        puVar10 = puVar10 + 4;
      } while (uVar9 != 0);
      if (uVar2 == uVar7) {
        return;
      }
      if ((uVar2 & 0x18) == 0) {
        pcVar4 = pcVar4 + uVar7;
        uVar9 = uVar6 + uVar7;
        goto LAB_00dc1428;
      }
    }
    uVar11 = uVar2 & 0xfffffffffffffff8;
    param_2 = (undefined8 *)((long)param_2 + uVar7);
    pcVar4 = pcVar4 + uVar11;
    lVar8 = uVar7 - uVar11;
    do {
      uVar12 = *(undefined8 *)((long)param_2 + uVar6);
      lVar8 = lVar8 + 8;
      uVar14 = *param_2;
      *(ulong *)((long)param_2 + uVar6) =
           CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar12 >> 0x38),
                    CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar12 >> 0x30),
                             CONCAT15((char)((ulong)uVar14 >> 0x28) + (char)((ulong)uVar12 >> 0x28),
                                      CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                               (char)((ulong)uVar12 >> 0x20),
                                               CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                        (char)((ulong)uVar12 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar14 >> 0x10) +
                                                                 (char)((ulong)uVar12 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar14 >> 8)
                                                                          + (char)((ulong)uVar12 >>
                                                                                  8),
                                                                          (char)uVar14 +
                                                                          (char)uVar12)))))));
      param_2 = param_2 + 1;
    } while (lVar8 != 0);
    uVar9 = uVar6 + uVar11;
    if (uVar2 == uVar11) {
      return;
    }
  }
LAB_00dc1428:
  lVar8 = uVar5 - uVar9;
  do {
    lVar8 = lVar8 + -1;
    *pcVar4 = pcVar4[-uVar6] + *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (lVar8 != 0);
  return;
}


