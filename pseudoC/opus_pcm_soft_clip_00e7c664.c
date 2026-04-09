// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_pcm_soft_clip
// Entry Point: 00e7c664
// Size: 812 bytes
// Signature: undefined opus_pcm_soft_clip(void)


void opus_pcm_soft_clip(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_4 == 0) {
    return;
  }
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((int)param_2 < 1) {
    return;
  }
  if ((int)param_3 < 1) {
    return;
  }
  uVar14 = param_3 * param_2;
  uVar8 = (ulong)uVar14;
  if (0 < (int)uVar14) {
    if (uVar14 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfffffffe;
      uVar13 = uVar10;
      puVar12 = param_1;
      do {
        uVar20 = *puVar12;
        uVar13 = uVar13 - 2;
        uVar22 = NEON_fcmgt(uVar20,0x4000000040000000,4);
        uVar24 = NEON_bsl(uVar22,0x4000000040000000,uVar20,1);
        uVar24 = NEON_fcmgt(0xc0000000c0000000,uVar24,4);
        uVar25 = NEON_bsl(uVar24,0xc0000000c0000000,0x4000000040000000,1);
        uVar20 = NEON_bit(uVar20,uVar25,
                          CONCAT17((byte)((ulong)uVar22 >> 0x38) | (byte)((ulong)uVar24 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar22 >> 0x30) |
                                            (byte)((ulong)uVar24 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar22 >> 0x28) |
                                                     (byte)((ulong)uVar24 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar22 >> 0x20) |
                                                              (byte)((ulong)uVar24 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar22 >> 0x18)
                                                                       | (byte)((ulong)uVar24 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar22
                                                                                      >> 0x10) |
                                                                                (byte)((ulong)uVar24
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar22 >> 8) | (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar22 | (byte)uVar24))))))),1);
        *puVar12 = uVar20;
        puVar12 = puVar12 + 1;
      } while (uVar13 != 0);
      if (uVar10 == uVar8) goto LAB_00e7c71c;
    }
    lVar9 = uVar8 - uVar10;
    pfVar11 = (float *)((long)param_1 + uVar10 * 4);
    do {
      fVar18 = *pfVar11;
      fVar19 = 2.0;
      if (fVar18 <= 2.0) {
        fVar19 = fVar18;
      }
      bVar4 = -2.0 <= fVar19;
      fVar19 = -2.0;
      if (bVar4) {
        fVar19 = 2.0;
      }
      if (bVar4 && fVar18 == 2.0 || bVar4 && fVar18 < 2.0) {
        fVar19 = fVar18;
      }
      lVar9 = lVar9 + -1;
      *pfVar11 = fVar19;
      pfVar11 = pfVar11 + 1;
    } while (lVar9 != 0);
  }
LAB_00e7c71c:
  uVar8 = 0;
  uVar13 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  puVar12 = param_1;
  do {
    pfVar11 = (float *)((long)param_1 + uVar8 * 4);
    fVar19 = *(float *)(param_4 + uVar8 * 4);
    uVar10 = (ulong)param_2;
    puVar16 = puVar12;
    do {
      fVar18 = *(float *)puVar16;
      fVar23 = fVar19 * fVar18;
      if (0.0 <= fVar23) break;
      uVar21 = NEON_fmadd(fVar23,fVar18,fVar18);
      uVar10 = uVar10 - 1;
      *(undefined4 *)puVar16 = uVar21;
      puVar16 = (undefined8 *)((long)puVar16 + uVar13);
    } while (uVar10 != 0);
    fVar19 = *pfVar11;
    uVar14 = 0;
    do {
      uVar15 = uVar14;
      if ((int)uVar14 < (int)param_2) {
        lVar7 = (long)(int)param_2 - (long)(int)uVar14;
        lVar9 = uVar13 * (long)(int)uVar14;
        while (*(float *)((long)puVar12 + lVar9) <= 1.0 && -1.0 <= *(float *)((long)puVar12 + lVar9)
              ) {
          uVar15 = uVar15 + 1;
          lVar9 = lVar9 + uVar13;
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_00e7c970;
        }
      }
      if (uVar15 == param_2) {
LAB_00e7c970:
        fVar18 = 0.0;
        break;
      }
      lVar9 = (long)(int)uVar15;
      lVar7 = 0;
      fVar23 = pfVar11[(int)(uVar15 * param_3)];
      lVar17 = uVar13 * (lVar9 + -1);
      fVar18 = -fVar23;
      if (0.0 <= fVar23) {
        fVar18 = fVar23;
      }
      uVar6 = uVar15;
      if (-1 < (int)uVar15) {
        uVar6 = 0;
      }
      do {
        if (lVar9 + lVar7 < 1) goto LAB_00e7c834;
        pfVar1 = (float *)((long)puVar12 + lVar17);
        lVar7 = lVar7 + -1;
        lVar17 = lVar17 - uVar13;
      } while (0.0 <= fVar23 * *pfVar1);
      uVar6 = uVar15 + (int)lVar7 + 1;
LAB_00e7c834:
      if ((int)uVar15 < (int)param_2) {
        lVar7 = uVar13 * lVar9;
        lVar9 = (int)param_2 - lVar9;
        uVar2 = uVar15;
        do {
          fVar26 = *(float *)((long)puVar12 + lVar7);
          uVar3 = uVar15;
          uVar5 = uVar2;
          if (fVar23 * fVar26 < 0.0) break;
          lVar7 = lVar7 + uVar13;
          fVar28 = -fVar26;
          if (0.0 <= fVar26) {
            fVar28 = fVar26;
          }
          uVar5 = uVar15;
          if (fVar28 <= fVar18) {
            uVar5 = uVar2;
            fVar28 = fVar18;
          }
          fVar18 = fVar28;
          uVar15 = uVar15 + 1;
          lVar9 = lVar9 + -1;
          uVar3 = param_2;
          uVar2 = uVar5;
        } while (lVar9 != 0);
        uVar15 = uVar3;
        if (uVar6 != 0) goto LAB_00e7c884;
LAB_00e7c894:
        bVar4 = 0.0 <= fVar23 * *pfVar11;
      }
      else {
        uVar5 = uVar15;
        if (uVar6 == 0) goto LAB_00e7c894;
LAB_00e7c884:
        bVar4 = false;
      }
      fVar18 = (fVar18 + -1.0) / (fVar18 * fVar18);
      fVar26 = (float)NEON_fmadd(fVar18,0x3480d959,fVar18);
      fVar18 = (float)NEON_fnmadd(fVar18,0x3480d959,-fVar18);
      if (fVar23 <= 0.0) {
        fVar18 = fVar26;
      }
      if ((int)uVar6 < (int)uVar15) {
        lVar9 = uVar13 * (long)(int)uVar6;
        lVar7 = (long)(int)uVar15 - (long)(int)uVar6;
        do {
          fVar23 = *(float *)((long)puVar12 + lVar9);
          lVar7 = lVar7 + -1;
          uVar21 = NEON_fmadd(fVar18 * fVar23,fVar23,fVar23);
          *(undefined4 *)((long)puVar12 + lVar9) = uVar21;
          lVar9 = lVar9 + uVar13;
        } while (lVar7 != 0);
      }
      if (((bool)(bVar4 & 1 < (int)uVar5)) && ((int)uVar14 < (int)uVar5)) {
        lVar7 = (ulong)uVar5 - (long)(int)uVar14;
        fVar23 = fVar19 - *pfVar11;
        lVar9 = uVar13 * (long)(int)uVar14;
        fVar26 = fVar23 / (float)uVar5;
        do {
          fVar23 = fVar23 - fVar26;
          fVar27 = fVar23 + *(float *)((long)puVar12 + lVar9);
          fVar28 = 1.0;
          if (fVar27 <= 1.0) {
            fVar28 = fVar27;
          }
          bVar4 = -1.0 <= fVar28;
          fVar28 = -1.0;
          if (bVar4) {
            fVar28 = 1.0;
          }
          if (bVar4 && fVar27 == 1.0 || bVar4 && fVar27 < 1.0) {
            fVar28 = fVar27;
          }
          lVar7 = lVar7 + -1;
          *(float *)((long)puVar12 + lVar9) = fVar28;
          lVar9 = lVar9 + uVar13;
        } while (lVar7 != 0);
      }
      uVar14 = uVar15;
    } while (uVar15 != param_2);
    *(float *)(param_4 + uVar8 * 4) = fVar18;
    uVar8 = uVar8 + 1;
    puVar12 = (undefined8 *)((long)puVar12 + 4);
    if (uVar8 == param_3) {
      return;
    }
  } while( true );
}


