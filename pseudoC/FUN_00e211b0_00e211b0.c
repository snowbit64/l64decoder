// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e211b0
// Entry Point: 00e211b0
// Size: 1188 bytes
// Signature: undefined FUN_00e211b0(void)


void FUN_00e211b0(ulong param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  float *pfVar27;
  undefined *puVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong auStack_90 [4];
  
  lVar6 = tpidr_el0;
  auStack_90[3] = *(long *)(lVar6 + 0x28);
  iVar9 = *(int *)(param_2 + 0x80);
  if (iVar9 < 2) {
    uVar11 = 0xffffff7d;
    goto LAB_00e21388;
  }
  while (iVar9 != 4) {
    uVar11 = FUN_00e1f850(param_2,0);
    if (((int)uVar11 < 0) && ((int)uVar11 != -3)) goto LAB_00e21388;
    iVar9 = *(int *)(param_2 + 0x80);
  }
  lVar12 = *(long *)(param_2 + 0x68);
  lVar29 = lVar12;
  if (*(int *)(param_2 + 8) != 0) {
    lVar29 = lVar12 + (long)*(int *)(param_2 + 0x90) * 0x38;
  }
  if (lVar12 == 0) {
    uVar31 = 0xffffff7e;
  }
  else {
    iVar9 = vorbis_synthesis_halfrate_p();
    uVar31 = iVar9 + 1;
  }
  uVar5 = *(uint *)(lVar29 + 4);
  uVar30 = (ulong)uVar5;
  iVar9 = vorbis_info_blocksize(lVar29,0);
  lVar12 = param_2 + 0x240;
  uVar2 = iVar9 >> (uVar31 & 0x1f);
  auStack_90[1] = vorbis_window(lVar12,0);
  lVar19 = -((long)(int)uVar5 * 8 + 0xfU & 0xfffffffffffffff0);
  puVar28 = (undefined *)((long)auStack_90 + lVar19);
  if (0 < (int)uVar5) {
    if (uVar5 == 1) {
      uVar20 = 0;
      puVar22 = puVar28;
    }
    else {
      uVar20 = uVar30 & 0xfffffffe;
      puVar14 = (undefined8 *)((long)auStack_90 + lVar19 + 8);
      uVar23 = (long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0;
      puVar22 = puVar28;
      uVar21 = uVar20;
      do {
        lVar19 = (long)puVar22 - uVar23;
        puVar22 = (undefined *)(lVar19 - uVar23);
        puVar14[-1] = lVar19;
        *puVar14 = puVar22;
        puVar14 = puVar14 + 2;
        uVar21 = uVar21 - 2;
      } while (uVar21 != 0);
      if (uVar20 == uVar30) goto LAB_00e2132c;
    }
    lVar19 = uVar30 - uVar20;
    puVar14 = (undefined8 *)(puVar28 + uVar20 * 8);
    do {
      puVar22 = puVar22 + -((long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0);
      lVar19 = lVar19 + -1;
      *puVar14 = puVar22;
      puVar14 = puVar14 + 1;
    } while (lVar19 != 0);
  }
LAB_00e2132c:
  FUN_00e20afc(param_2,lVar29,lVar12,puVar28,uVar2);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_1;
  uVar11 = (*param_3)(auVar32,param_2);
  if ((int)uVar11 == 0) {
    do {
      if ((*(int *)(param_2 + 0x80) == 4) && (iVar9 = vorbis_synthesis_pcmout(lVar12,0), iVar9 != 0)
         ) {
        if (*(int *)(param_2 + 8) == 0) {
          lVar29 = *(long *)(param_2 + 0x68);
        }
        else {
          lVar29 = *(long *)(param_2 + 0x68);
          if (2 < *(int *)(param_2 + 0x80)) {
            lVar29 = lVar29 + (long)*(int *)(param_2 + 0x90) * 0x38;
          }
        }
        iVar9 = *(int *)(lVar29 + 4);
        iVar10 = vorbis_info_blocksize(lVar29,0);
        uVar3 = iVar10 >> (uVar31 & 0x1f);
        uVar30 = vorbis_window(lVar12,0);
        vorbis_synthesis_lapout(lVar12,auStack_90 + 2);
        uVar31 = 0;
        uVar4 = uVar3;
        if ((int)uVar2 <= (int)uVar3) {
          uVar4 = uVar2;
        }
        uVar21 = (ulong)uVar4;
        if ((int)uVar2 <= (int)uVar3) {
          uVar30 = auStack_90[1];
        }
        if (((int)uVar5 < 1) || (iVar9 < 1)) goto LAB_00e21574;
        uVar31 = iVar9 - 1U;
        if (uVar5 - 1 <= iVar9 - 1U) {
          uVar31 = uVar5 - 1;
        }
        if (0 < (int)uVar4) {
          auVar32 = NEON_fmov(0x3f800000,4);
          uVar20 = 0;
          uVar31 = uVar31 + 1;
          uVar23 = uVar21 & 0xfffffff8;
          goto LAB_00e21478;
        }
        uVar11 = 0;
        break;
      }
      uVar11 = FUN_00e1f850(param_2,0);
    } while ((-1 < (int)uVar11) || ((int)uVar11 == -3));
  }
LAB_00e21388:
  if (*(long *)(lVar6 + 0x28) != auStack_90[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_00e21478:
  do {
    uVar26 = *(ulong *)(puVar28 + uVar20 * 8);
    uVar24 = *(ulong *)(auStack_90[2] + uVar20 * 8);
    if (uVar4 < 8) {
      uVar13 = 0;
LAB_00e21490:
      lVar12 = uVar13 * 4;
      lVar29 = uVar21 - uVar13;
      pfVar16 = (float *)(uVar30 + lVar12);
      puVar25 = (undefined4 *)(uVar24 + lVar12);
      pfVar27 = (float *)(uVar26 + lVar12);
      do {
        lVar29 = lVar29 + -1;
        fVar34 = *pfVar16 * *pfVar16;
        uVar35 = NEON_fmadd(*puVar25,fVar34,*pfVar27 * (1.0 - fVar34));
        *puVar25 = uVar35;
        pfVar16 = pfVar16 + 1;
        puVar25 = puVar25 + 1;
        pfVar27 = pfVar27 + 1;
      } while (lVar29 != 0);
    }
    else {
      uVar17 = uVar24 + uVar21 * 4;
      uVar13 = 0;
      if ((uVar24 < uVar30 + uVar21 * 4 && uVar30 < uVar17) ||
         (uVar24 < uVar26 + uVar21 * 4 && uVar26 < uVar17)) goto LAB_00e21490;
      puVar14 = (undefined8 *)(uVar24 + 0x10);
      puVar15 = (undefined8 *)(uVar26 + 0x10);
      uVar17 = uVar23;
      puVar18 = (undefined8 *)(uVar30 + 0x10);
      do {
        puVar1 = puVar18 + -2;
        puVar7 = puVar18 + -1;
        puVar8 = puVar18 + 1;
        uVar11 = *puVar18;
        puVar18 = puVar18 + 4;
        uVar17 = uVar17 - 8;
        fVar34 = (float)*puVar1;
        fVar36 = (float)((ulong)*puVar1 >> 0x20);
        fVar34 = fVar34 * fVar34;
        fVar36 = fVar36 * fVar36;
        fVar37 = (float)*puVar7;
        fVar38 = (float)((ulong)*puVar7 >> 0x20);
        fVar37 = fVar37 * fVar37;
        fVar38 = fVar38 * fVar38;
        fVar39 = (float)uVar11;
        fVar40 = (float)((ulong)uVar11 >> 0x20);
        fVar39 = fVar39 * fVar39;
        fVar40 = fVar40 * fVar40;
        fVar41 = (float)*puVar8;
        fVar42 = (float)((ulong)*puVar8 >> 0x20);
        fVar41 = fVar41 * fVar41;
        fVar42 = fVar42 * fVar42;
        puVar1 = puVar15 + -1;
        uVar11 = puVar15[-2];
        uVar44 = puVar15[1];
        uVar43 = *puVar15;
        puVar15 = puVar15 + 4;
        puVar14[-1] = CONCAT44((float)((ulong)*puVar1 >> 0x20) * (auVar32._12_4_ - fVar38) +
                               fVar38 * (float)((ulong)puVar14[-1] >> 0x20),
                               (float)*puVar1 * (auVar32._8_4_ - fVar37) +
                               fVar37 * (float)puVar14[-1]);
        puVar14[-2] = CONCAT44((float)((ulong)uVar11 >> 0x20) * (auVar32._4_4_ - fVar36) +
                               fVar36 * (float)((ulong)puVar14[-2] >> 0x20),
                               (float)uVar11 * (auVar32._0_4_ - fVar34) +
                               fVar34 * (float)puVar14[-2]);
        puVar14[1] = CONCAT44((float)((ulong)uVar44 >> 0x20) * (auVar32._12_4_ - fVar42) +
                              fVar42 * (float)((ulong)puVar14[1] >> 0x20),
                              (float)uVar44 * (auVar32._8_4_ - fVar41) + fVar41 * (float)puVar14[1])
        ;
        *puVar14 = CONCAT44((float)((ulong)uVar43 >> 0x20) * (auVar32._4_4_ - fVar40) +
                            fVar40 * (float)((ulong)*puVar14 >> 0x20),
                            (float)uVar43 * (auVar32._0_4_ - fVar39) + fVar39 * (float)*puVar14);
        puVar14 = puVar14 + 4;
      } while (uVar17 != 0);
      uVar13 = uVar23;
      if (uVar23 != uVar21) goto LAB_00e21490;
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != uVar31);
LAB_00e21574:
  uVar11 = 0;
  if ((0 < (int)uVar4) && ((int)uVar31 < iVar9)) {
    uVar20 = (ulong)uVar31;
    uVar23 = uVar21 & 0xfffffff8;
    do {
      uVar24 = *(ulong *)(auStack_90[2] + uVar20 * 8);
      if ((uVar4 < 8) || ((uVar24 < uVar30 + uVar21 * 4 && (uVar30 < uVar24 + uVar21 * 4)))) {
        uVar26 = 0;
LAB_00e215d0:
        lVar29 = uVar21 - uVar26;
        pfVar16 = (float *)(uVar24 + uVar26 * 4);
        pfVar27 = (float *)(uVar30 + uVar26 * 4);
        do {
          lVar29 = lVar29 + -1;
          *pfVar16 = *pfVar16 * *pfVar27 * *pfVar27;
          pfVar16 = pfVar16 + 1;
          pfVar27 = pfVar27 + 1;
        } while (lVar29 != 0);
      }
      else {
        puVar14 = (undefined8 *)(uVar24 + 0x10);
        puVar15 = (undefined8 *)(uVar30 + 0x10);
        uVar26 = uVar23;
        do {
          auVar32 = *(undefined (*) [16])(puVar15 + -2);
          puVar18 = puVar15 + 1;
          uVar11 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar26 = uVar26 - 8;
          fVar34 = (float)uVar11;
          fVar36 = (float)((ulong)uVar11 >> 0x20);
          fVar37 = (float)*puVar18;
          fVar38 = (float)((ulong)*puVar18 >> 0x20);
          auVar33._0_8_ =
               CONCAT44((float)((ulong)puVar14[-2] >> 0x20) * auVar32._4_4_ * auVar32._4_4_,
                        (float)puVar14[-2] * auVar32._0_4_ * auVar32._0_4_);
          auVar33._8_4_ = (float)puVar14[-1] * auVar32._8_4_ * auVar32._8_4_;
          auVar33._12_4_ = (float)((ulong)puVar14[-1] >> 0x20) * auVar32._12_4_ * auVar32._12_4_;
          puVar14[-1] = auVar33._8_8_;
          puVar14[-2] = auVar33._0_8_;
          puVar14[1] = CONCAT44((float)((ulong)puVar14[1] >> 0x20) * fVar38 * fVar38,
                                (float)puVar14[1] * fVar37 * fVar37);
          *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) * fVar36 * fVar36,
                              (float)*puVar14 * fVar34 * fVar34);
          puVar14 = puVar14 + 4;
        } while (uVar26 != 0);
        uVar26 = uVar23;
        if (uVar23 != uVar21) goto LAB_00e215d0;
      }
      uVar11 = 0;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar9);
  }
  goto LAB_00e21388;
}


