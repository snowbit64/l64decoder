// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_interpolate
// Entry Point: 00e942d8
// Size: 288 bytes
// Signature: undefined silk_interpolate(void)


void silk_interpolate(ulong param_1,ulong param_2,ulong param_3,short param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  short *psVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  long lVar10;
  short *psVar11;
  ulong uVar12;
  short sVar14;
  short sVar15;
  undefined8 uVar13;
  short sVar16;
  short sVar18;
  short sVar19;
  undefined8 uVar17;
  short sVar20;
  short sVar22;
  short sVar23;
  undefined8 uVar21;
  short sVar24;
  short sVar26;
  short sVar27;
  undefined8 uVar25;
  short sVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  if (0 < (int)param_5) {
    iVar1 = (int)param_4;
    uVar2 = (ulong)param_5;
    if (param_5 < 0x10) {
      uVar4 = 0;
    }
    else {
      lVar3 = uVar2 * 2;
      uVar4 = 0;
      if ((param_2 + lVar3 <= param_1 || param_1 + lVar3 <= param_2) &&
         (param_3 + lVar3 <= param_1 || param_1 + lVar3 <= param_3)) {
        uVar4 = uVar2 & 0xfffffff0;
        puVar5 = (undefined8 *)(param_2 + 0x10);
        puVar7 = (undefined8 *)(param_3 + 0x10);
        puVar9 = (undefined8 *)(param_1 + 0x10);
        uVar12 = uVar4;
        do {
          uVar17 = puVar5[-1];
          uVar13 = puVar5[-2];
          uVar25 = puVar5[1];
          uVar21 = *puVar5;
          puVar5 = puVar5 + 4;
          uVar12 = uVar12 - 0x10;
          uVar30 = puVar7[-1];
          uVar29 = puVar7[-2];
          uVar32 = puVar7[1];
          uVar31 = *puVar7;
          puVar7 = puVar7 + 4;
          sVar14 = (short)((ulong)uVar13 >> 0x10);
          sVar15 = (short)((ulong)uVar13 >> 0x20);
          sVar16 = (short)((ulong)uVar13 >> 0x30);
          sVar18 = (short)((ulong)uVar17 >> 0x10);
          sVar19 = (short)((ulong)uVar17 >> 0x20);
          sVar20 = (short)((ulong)uVar17 >> 0x30);
          sVar22 = (short)((ulong)uVar21 >> 0x10);
          sVar23 = (short)((ulong)uVar21 >> 0x20);
          sVar24 = (short)((ulong)uVar21 >> 0x30);
          sVar26 = (short)((ulong)uVar25 >> 0x10);
          sVar27 = (short)((ulong)uVar25 >> 0x20);
          sVar28 = (short)((ulong)uVar25 >> 0x30);
          puVar9[-1] = CONCAT26(sVar20 + (short)((uint)(iVar1 * (short)((short)((ulong)uVar30 >>
                                                                               0x30) - sVar20)) >> 2
                                                ),
                                CONCAT24(sVar19 + (short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar30 >> 0x20) - sVar19)) >> 2),
                                         CONCAT22(sVar18 + (short)((uint)(iVar1 * (short)((short)((
                                                  ulong)uVar30 >> 0x10) - sVar18)) >> 2),
                                                  (short)uVar17 +
                                                  (short)((uint)(iVar1 * (short)((short)uVar30 -
                                                                                (short)uVar17)) >> 2
                                                         ))));
          puVar9[-2] = CONCAT26(sVar16 + (short)((uint)(iVar1 * (short)((short)((ulong)uVar29 >>
                                                                               0x30) - sVar16)) >> 2
                                                ),
                                CONCAT24(sVar15 + (short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar29 >> 0x20) - sVar15)) >> 2),
                                         CONCAT22(sVar14 + (short)((uint)(iVar1 * (short)((short)((
                                                  ulong)uVar29 >> 0x10) - sVar14)) >> 2),
                                                  (short)uVar13 +
                                                  (short)((uint)(iVar1 * (short)((short)uVar29 -
                                                                                (short)uVar13)) >> 2
                                                         ))));
          puVar9[1] = CONCAT26(sVar28 + (short)((uint)(iVar1 * (short)((short)((ulong)uVar32 >> 0x30
                                                                              ) - sVar28)) >> 2),
                               CONCAT24(sVar27 + (short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar32 >> 0x20) - sVar27)) >> 2),
                                        CONCAT22(sVar26 + (short)((uint)(iVar1 * (short)((short)((
                                                  ulong)uVar32 >> 0x10) - sVar26)) >> 2),
                                                 (short)uVar25 +
                                                 (short)((uint)(iVar1 * (short)((short)uVar32 -
                                                                               (short)uVar25)) >> 2)
                                                )));
          *puVar9 = CONCAT26(sVar24 + (short)((uint)(iVar1 * (short)((short)((ulong)uVar31 >> 0x30)
                                                                    - sVar24)) >> 2),
                             CONCAT24(sVar23 + (short)((uint)(iVar1 * (short)((short)((ulong)uVar31
                                                                                     >> 0x20) -
                                                                             sVar23)) >> 2),
                                      CONCAT22(sVar22 + (short)((uint)(iVar1 * (short)((short)((
                                                  ulong)uVar31 >> 0x10) - sVar22)) >> 2),
                                               (short)uVar21 +
                                               (short)((uint)(iVar1 * (short)((short)uVar31 -
                                                                             (short)uVar21)) >> 2)))
                            );
          puVar9 = puVar9 + 4;
        } while (uVar12 != 0);
        if (uVar4 == uVar2) {
          return;
        }
      }
    }
    lVar10 = uVar4 * 2;
    lVar3 = uVar2 - uVar4;
    psVar6 = (short *)(param_1 + lVar10);
    psVar8 = (short *)(param_3 + lVar10);
    psVar11 = (short *)(param_2 + lVar10);
    do {
      lVar3 = lVar3 + -1;
      *psVar6 = *psVar11 + (short)((uint)(iVar1 * (short)(*psVar8 - *psVar11)) >> 2);
      psVar6 = psVar6 + 1;
      psVar8 = psVar8 + 1;
      psVar11 = psVar11 + 1;
    } while (lVar3 != 0);
  }
  return;
}


