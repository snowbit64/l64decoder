// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e20ce4
// Entry Point: 00e20ce4
// Size: 1192 bytes
// Signature: undefined FUN_00e20ce4(void)


void FUN_00e20ce4(long param_1,undefined8 param_2,code *param_3)

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
  uint uVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  float *pfVar28;
  undefined *puVar29;
  long lVar30;
  ulong uVar31;
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
  ulong local_80;
  uint local_74;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar9 = *(int *)(param_1 + 0x80);
  if (iVar9 < 2) {
    uVar11 = 0xffffff7d;
    goto LAB_00e20ebc;
  }
  while (iVar9 != 4) {
    uVar11 = FUN_00e1f850(param_1,0);
    if (((int)uVar11 < 0) && ((int)uVar11 != -3)) goto LAB_00e20ebc;
    iVar9 = *(int *)(param_1 + 0x80);
  }
  lVar12 = *(long *)(param_1 + 0x68);
  lVar30 = lVar12;
  if (*(int *)(param_1 + 8) != 0) {
    lVar30 = lVar12 + (long)*(int *)(param_1 + 0x90) * 0x38;
  }
  if (lVar12 == 0) {
    local_74 = 0xffffff7e;
  }
  else {
    iVar9 = vorbis_synthesis_halfrate_p();
    local_74 = iVar9 + 1;
  }
  uVar5 = *(uint *)(lVar30 + 4);
  uVar31 = (ulong)uVar5;
  iVar9 = vorbis_info_blocksize(lVar30,0);
  lVar12 = param_1 + 0x240;
  uVar2 = iVar9 >> (local_74 & 0x1f);
  local_80 = vorbis_window(lVar12,0);
  lVar19 = -((long)(int)uVar5 * 8 + 0xfU & 0xfffffffffffffff0);
  puVar29 = &stack0xffffffffffffff88 + lVar19 + -8;
  if (0 < (int)uVar5) {
    if (uVar5 == 1) {
      uVar20 = 0;
      puVar23 = puVar29;
    }
    else {
      uVar20 = uVar31 & 0xfffffffe;
      puVar14 = (undefined8 *)(&stack0xffffffffffffff88 + lVar19);
      uVar24 = (long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0;
      puVar23 = puVar29;
      uVar21 = uVar20;
      do {
        lVar19 = (long)puVar23 - uVar24;
        puVar23 = (undefined *)(lVar19 - uVar24);
        puVar14[-1] = lVar19;
        *puVar14 = puVar23;
        puVar14 = puVar14 + 2;
        uVar21 = uVar21 - 2;
      } while (uVar21 != 0);
      if (uVar20 == uVar31) goto LAB_00e20e60;
    }
    lVar19 = uVar31 - uVar20;
    puVar14 = (undefined8 *)(puVar29 + uVar20 * 8);
    do {
      puVar23 = puVar23 + -((long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0);
      lVar19 = lVar19 + -1;
      *puVar14 = puVar23;
      puVar14 = puVar14 + 1;
    } while (lVar19 != 0);
  }
LAB_00e20e60:
  FUN_00e20afc(param_1,lVar30,lVar12,puVar29,uVar2);
  uVar11 = (*param_3)(param_1,param_2);
  if ((int)uVar11 == 0) {
    do {
      if ((*(int *)(param_1 + 0x80) == 4) && (iVar9 = vorbis_synthesis_pcmout(lVar12,0), iVar9 != 0)
         ) {
        if (*(int *)(param_1 + 8) == 0) {
          lVar30 = *(long *)(param_1 + 0x68);
        }
        else {
          lVar30 = *(long *)(param_1 + 0x68);
          if (2 < *(int *)(param_1 + 0x80)) {
            lVar30 = lVar30 + (long)*(int *)(param_1 + 0x90) * 0x38;
          }
        }
        iVar9 = *(int *)(lVar30 + 4);
        iVar10 = vorbis_info_blocksize(lVar30,0);
        uVar3 = iVar10 >> (local_74 & 0x1f);
        uVar31 = vorbis_window(lVar12,0);
        vorbis_synthesis_lapout(lVar12,&local_70);
        uVar22 = 0;
        uVar4 = uVar3;
        if ((int)uVar2 <= (int)uVar3) {
          uVar4 = uVar2;
        }
        uVar21 = (ulong)uVar4;
        if ((int)uVar2 <= (int)uVar3) {
          uVar31 = local_80;
        }
        if (((int)uVar5 < 1) || (iVar9 < 1)) goto LAB_00e210ac;
        uVar22 = iVar9 - 1U;
        if (uVar5 - 1 <= iVar9 - 1U) {
          uVar22 = uVar5 - 1;
        }
        if (0 < (int)uVar4) {
          auVar32 = NEON_fmov(0x3f800000,4);
          uVar20 = 0;
          uVar22 = uVar22 + 1;
          uVar24 = uVar21 & 0xfffffff8;
          goto LAB_00e20fb0;
        }
        uVar11 = 0;
        break;
      }
      uVar11 = FUN_00e1f850(param_1,0);
    } while ((-1 < (int)uVar11) || ((int)uVar11 == -3));
  }
LAB_00e20ebc:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_00e20fb0:
  do {
    uVar27 = *(ulong *)(puVar29 + uVar20 * 8);
    uVar25 = *(ulong *)(local_70 + uVar20 * 8);
    if (uVar4 < 8) {
      uVar13 = 0;
LAB_00e20fc8:
      lVar12 = uVar13 * 4;
      lVar30 = uVar21 - uVar13;
      pfVar16 = (float *)(uVar31 + lVar12);
      puVar26 = (undefined4 *)(uVar25 + lVar12);
      pfVar28 = (float *)(uVar27 + lVar12);
      do {
        lVar30 = lVar30 + -1;
        fVar34 = *pfVar16 * *pfVar16;
        uVar35 = NEON_fmadd(*puVar26,fVar34,*pfVar28 * (1.0 - fVar34));
        *puVar26 = uVar35;
        pfVar16 = pfVar16 + 1;
        puVar26 = puVar26 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar30 != 0);
    }
    else {
      uVar17 = uVar25 + uVar21 * 4;
      uVar13 = 0;
      if ((uVar25 < uVar31 + uVar21 * 4 && uVar31 < uVar17) ||
         (uVar25 < uVar27 + uVar21 * 4 && uVar27 < uVar17)) goto LAB_00e20fc8;
      puVar14 = (undefined8 *)(uVar25 + 0x10);
      puVar15 = (undefined8 *)(uVar27 + 0x10);
      uVar17 = uVar24;
      puVar18 = (undefined8 *)(uVar31 + 0x10);
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
      uVar13 = uVar24;
      if (uVar24 != uVar21) goto LAB_00e20fc8;
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != uVar22);
LAB_00e210ac:
  uVar11 = 0;
  if ((0 < (int)uVar4) && ((int)uVar22 < iVar9)) {
    uVar20 = (ulong)uVar22;
    uVar24 = uVar21 & 0xfffffff8;
    do {
      uVar25 = *(ulong *)(local_70 + uVar20 * 8);
      if ((uVar4 < 8) || ((uVar25 < uVar31 + uVar21 * 4 && (uVar31 < uVar25 + uVar21 * 4)))) {
        uVar27 = 0;
LAB_00e21108:
        lVar30 = uVar21 - uVar27;
        pfVar16 = (float *)(uVar25 + uVar27 * 4);
        pfVar28 = (float *)(uVar31 + uVar27 * 4);
        do {
          lVar30 = lVar30 + -1;
          *pfVar16 = *pfVar16 * *pfVar28 * *pfVar28;
          pfVar16 = pfVar16 + 1;
          pfVar28 = pfVar28 + 1;
        } while (lVar30 != 0);
      }
      else {
        puVar14 = (undefined8 *)(uVar25 + 0x10);
        puVar15 = (undefined8 *)(uVar31 + 0x10);
        uVar27 = uVar24;
        do {
          auVar32 = *(undefined (*) [16])(puVar15 + -2);
          puVar18 = puVar15 + 1;
          uVar11 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar27 = uVar27 - 8;
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
        } while (uVar27 != 0);
        uVar27 = uVar24;
        if (uVar24 != uVar21) goto LAB_00e21108;
      }
      uVar11 = 0;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar9);
  }
  goto LAB_00e20ebc;
}


