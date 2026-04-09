// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e0f57c
// Entry Point: 00e0f57c
// Size: 1308 bytes
// Signature: undefined FUN_00e0f57c(void)


void FUN_00e0f57c(float param_1,uint param_2,ulong *param_3,float *param_4,float *param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar21;
  long lVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float afStack_30 [2];
  long local_28;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar3 = tpidr_el0;
  uVar9 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2) + 0xf &
          0xfffffffffffffff0;
  pfVar5 = (float *)((long)afStack_30 - uVar9);
  local_28 = *(long *)(lVar3 + 0x28);
  pfVar6 = (float *)((long)pfVar5 - uVar9);
  puVar7 = (undefined4 *)((long)pfVar6 - uVar9);
  puVar8 = (undefined4 *)((long)puVar7 - uVar9);
  puVar10 = (undefined4 *)((long)puVar8 - uVar9);
  fVar23 = *param_4;
  fVar25 = 1.0;
  *puVar7 = 0;
  fVar23 = fVar23 + param_1;
  *puVar10 = 0;
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  uVar24 = 0;
  fVar28 = fVar23 * fVar23 * 0.5;
  fVar26 = fVar28 + 0.0;
  uVar27 = NEON_fmadd(fVar28,fVar23,0);
  *pfVar5 = fVar26;
  *pfVar6 = fVar26;
  *puVar8 = uVar27;
  if (1 < (int)param_2) {
    uVar29 = 0;
    uVar30 = 0;
    lVar15 = 4;
    fVar28 = 1.0;
    fVar23 = fVar26;
    do {
      fVar32 = *(float *)((long)param_4 + lVar15) + param_1;
      if (fVar32 <= 1.0) {
        fVar32 = 1.0;
      }
      fVar33 = fVar32 * fVar32;
      fVar26 = fVar26 + fVar33;
      fVar23 = (float)NEON_fmadd(fVar33,fVar28,fVar23);
      uVar27 = NEON_fmadd(fVar33,fVar32,uVar27);
      *(float *)((long)pfVar5 + lVar15) = fVar26;
      uVar30 = NEON_fmadd(fVar28 * fVar33,fVar28,uVar30);
      uVar29 = NEON_fmadd(fVar28 * fVar33,fVar32,uVar29);
      fVar28 = fVar28 + 1.0;
      *(float *)((long)pfVar6 + lVar15) = fVar23;
      *(undefined4 *)((long)puVar8 + lVar15) = uVar27;
      *(undefined4 *)((long)puVar7 + lVar15) = uVar30;
      *(undefined4 *)((long)puVar10 + lVar15) = uVar29;
      lVar15 = lVar15 + 4;
    } while ((ulong)param_2 * 4 - lVar15 != 0);
  }
  uVar9 = *param_3;
  if ((uVar9 >> 0x2f & 1) == 0) {
    uVar27 = 0;
    fVar23 = 0.0;
    uVar12 = 0;
    uVar14 = (uint)uVar9;
  }
  else {
    fVar23 = 0.0;
    uVar13 = 0;
    do {
      uVar16 = (ulong)(uint)((int)uVar9 << 2) & 0x3fffc;
      lVar15 = (long)((uVar9 & 0xffffffff0000) * -0x10000) >> 0x1e;
      fVar26 = *(float *)((long)pfVar6 + uVar16) - *(float *)((long)pfVar6 + lVar15);
      uVar9 = param_3[uVar13 + 1];
      fVar32 = *(float *)((long)puVar10 + uVar16) - *(float *)((long)puVar10 + lVar15);
      fVar31 = -fVar26;
      fVar25 = *(float *)((long)puVar8 + uVar16) + *(float *)((long)puVar8 + lVar15);
      fVar33 = *(float *)((long)puVar7 + uVar16) + *(float *)((long)puVar7 + lVar15);
      uVar12 = uVar13 + 1;
      fVar28 = *(float *)((long)pfVar5 + uVar16) + *(float *)((long)pfVar5 + lVar15);
      uVar24 = NEON_fmadd(fVar25,fVar33,fVar32 * fVar31);
      uVar27 = NEON_fmadd(fVar28,fVar32,fVar25 * fVar31);
      fVar25 = (float)NEON_fmadd(fVar28,fVar33,fVar26 * fVar31);
      fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
      fVar23 = fVar23 + 1.0;
      fVar26 = fVar26 / fVar25;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      param_5[uVar13] = fVar26 - param_1;
      uVar13 = uVar12;
    } while ((uVar9 >> 0x2f & 1) != 0);
    uVar9 = param_3[uVar12 & 0xffffffff];
    uVar14 = (uint)uVar9;
  }
  uVar14 = uVar14 & 0xffff;
  if ((int)uVar14 < (int)param_2) {
    uVar13 = uVar12 & 0xffffffff;
    do {
      lVar15 = (long)(uVar9 << 0x10) >> 0x20;
      uVar16 = (ulong)uVar14;
      uVar17 = (ulong)uVar14;
      uVar18 = (ulong)uVar14;
      uVar19 = (ulong)uVar14;
      uVar20 = (ulong)uVar14;
      fVar25 = -(pfVar6[uVar16] - pfVar6[lVar15]);
      uVar9 = param_3[uVar13 + 1];
      uVar12 = uVar13 + 1;
      uVar14 = (uint)uVar9 & 0xffff;
      uVar24 = NEON_fmadd((float)puVar8[uVar17] - (float)puVar8[lVar15],
                          (float)puVar7[uVar20] - (float)puVar7[lVar15],
                          ((float)puVar10[uVar18] - (float)puVar10[lVar15]) * fVar25);
      uVar27 = NEON_fmadd(pfVar5[uVar19] - pfVar5[lVar15],
                          (float)puVar10[uVar18] - (float)puVar10[lVar15],
                          ((float)puVar8[uVar17] - (float)puVar8[lVar15]) * fVar25);
      fVar25 = (float)NEON_fmadd(pfVar5[uVar19] - pfVar5[lVar15],
                                 (float)puVar7[uVar20] - (float)puVar7[lVar15],
                                 (pfVar6[uVar16] - pfVar6[lVar15]) * fVar25);
      fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
      fVar23 = fVar23 + 1.0;
      fVar26 = fVar26 / fVar25;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      param_5[uVar13] = fVar26 - param_1;
      uVar13 = uVar12;
    } while ((int)uVar14 < (int)param_2);
    uVar12 = uVar12 & 0xffffffff;
  }
  if ((int)uVar12 < (int)param_2) {
    pfVar4 = param_5 + (uVar12 & 0xffffffff);
    do {
      fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
      fVar23 = fVar23 + 1.0;
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar14;
      fVar26 = fVar26 / fVar25;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      *pfVar4 = fVar26 - param_1;
      pfVar4 = pfVar4 + 1;
    } while ((int)uVar14 < (int)param_2);
  }
  if (0 < (int)param_6) {
    uVar14 = param_6 >> 1;
    iVar11 = uVar14 - param_6;
    if (iVar11 < 0) {
      uVar13 = (ulong)(param_6 - uVar14);
      fVar23 = 0.0;
      pfVar4 = param_5;
      uVar9 = uVar13;
      uVar1 = uVar14;
      do {
        uVar2 = -iVar11;
        uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        fVar26 = *(float *)((long)pfVar6 + uVar12) - pfVar6[uVar2];
        fVar32 = *(float *)((long)puVar10 + uVar12) - (float)puVar10[uVar2];
        fVar33 = -fVar26;
        fVar25 = *(float *)((long)puVar8 + uVar12) + (float)puVar8[uVar2];
        fVar31 = *(float *)((long)puVar7 + uVar12) + (float)puVar7[uVar2];
        fVar28 = *(float *)((long)pfVar5 + uVar12) + pfVar5[uVar2];
        uVar24 = NEON_fmadd(fVar25,fVar31,fVar32 * fVar33);
        uVar27 = NEON_fmadd(fVar28,fVar32,fVar25 * fVar33);
        fVar25 = (float)NEON_fmadd(fVar28,fVar31,fVar26 * fVar33);
        fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
        fVar26 = fVar26 / fVar25 - param_1;
        if (fVar26 < *pfVar4) {
          *pfVar4 = fVar26;
        }
        fVar23 = fVar23 + 1.0;
        iVar11 = (uVar1 + 1) - param_6;
        pfVar4 = pfVar4 + 1;
        uVar9 = uVar9 - 1;
        uVar1 = uVar1 + 1;
      } while (uVar9 != 0);
    }
    else {
      fVar23 = 0.0;
      uVar13 = 0;
    }
    iVar11 = (int)uVar13;
    uVar1 = iVar11 + uVar14;
    if ((int)uVar1 < (int)param_2) {
      lVar21 = (long)(int)uVar1 - (long)(int)param_6;
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      lVar15 = 0;
      do {
        lVar22 = lVar15 * 4;
        fVar26 = *(float *)((long)pfVar6 + lVar22 + uVar9) - pfVar6[lVar21 + lVar15];
        fVar32 = *(float *)((long)puVar10 + lVar22 + uVar9) - (float)puVar10[lVar21 + lVar15];
        fVar33 = -fVar26;
        fVar25 = *(float *)((long)puVar8 + lVar22 + uVar9) - (float)puVar8[lVar21 + lVar15];
        uVar1 = iVar11 + (int)lVar15;
        fVar31 = *(float *)((long)puVar7 + lVar22 + uVar9) - (float)puVar7[lVar21 + lVar15];
        fVar28 = *(float *)((long)pfVar5 + lVar22 + uVar9) - pfVar5[lVar21 + lVar15];
        uVar24 = NEON_fmadd(fVar25,fVar31,fVar32 * fVar33);
        uVar27 = NEON_fmadd(fVar28,fVar32,fVar25 * fVar33);
        fVar25 = (float)NEON_fmadd(fVar28,fVar31,fVar26 * fVar33);
        fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
        fVar26 = fVar26 / fVar25 - param_1;
        if (fVar26 < param_5[uVar1]) {
          param_5[uVar1] = fVar26;
        }
        fVar23 = fVar23 + 1.0;
        lVar15 = lVar15 + 1;
      } while ((long)((long)iVar11 + (ulong)uVar14 + lVar15) < (long)(int)param_2);
      uVar13 = (ulong)(uint)(iVar11 + (int)lVar15);
    }
    if ((int)uVar13 < (int)param_2) {
      param_5 = param_5 + uVar13;
      do {
        fVar26 = (float)NEON_fmadd(fVar23,uVar27,uVar24);
        fVar26 = fVar26 / fVar25 - param_1;
        if (fVar26 < *param_5) {
          *param_5 = fVar26;
        }
        fVar23 = fVar23 + 1.0;
        param_5 = param_5 + 1;
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar14;
      } while ((int)uVar14 < (int)param_2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


