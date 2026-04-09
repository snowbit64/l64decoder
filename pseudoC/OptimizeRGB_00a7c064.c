// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimizeRGB
// Entry Point: 00a7c064
// Size: 1392 bytes
// Signature: undefined __cdecl OptimizeRGB(HDRColorA * param_1, HDRColorA * param_2, HDRColorA * param_3, uint param_4, ulong param_5, ulong * param_6)


/* BC6BC7Util::OptimizeRGB(BC6BC7Util::HDRColorA const*, BC6BC7Util::HDRColorA*,
   BC6BC7Util::HDRColorA*, unsigned int, unsigned long, unsigned long const*) */

void BC6BC7Util::OptimizeRGB
               (HDRColorA *param_1,HDRColorA *param_2,HDRColorA *param_3,uint param_4,ulong param_5,
               ulong *param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined (*pauVar6) [16];
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined (*pauVar11) [16];
  long lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  float fVar40;
  float fVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 local_c0;
  undefined8 auStack_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  
  uVar7 = (ulong)param_4;
  lVar3 = tpidr_el0;
  uVar19 = 0;
  puVar2 = (undefined8 *)pD3;
  pauVar6 = (undefined (*) [16])pC3;
  if (param_4 != 3) {
    puVar2 = (undefined8 *)&pD4;
    pauVar6 = (undefined (*) [16])&pC4;
  }
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_5 == 0) {
    fVar28 = 0.0;
    fVar27 = 0.0;
    fVar20 = 0.0;
    fVar22 = 1.0;
    fVar23 = 1.0;
    fVar21 = 1.0;
  }
  else {
    fVar20 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    puVar8 = param_6;
    uVar10 = param_5;
    fVar31 = 1.0;
    fVar37 = 1.0;
    fVar40 = 1.0;
    do {
      pfVar14 = (float *)(param_1 + *puVar8 * 0x10);
      fVar24 = *pfVar14;
      fVar30 = pfVar14[1];
      fVar32 = pfVar14[2];
      fVar22 = fVar24;
      if (fVar37 <= fVar24) {
        fVar22 = fVar37;
      }
      fVar23 = fVar30;
      if (fVar40 <= fVar30) {
        fVar23 = fVar40;
      }
      fVar21 = fVar32;
      if (fVar31 <= fVar32) {
        fVar21 = fVar31;
      }
      if (fVar24 <= fVar20) {
        fVar24 = fVar20;
      }
      fVar20 = fVar24;
      if (fVar30 <= fVar27) {
        fVar30 = fVar27;
      }
      fVar27 = fVar30;
      if (fVar32 <= fVar28) {
        fVar32 = fVar28;
      }
      fVar28 = fVar32;
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 1;
      fVar31 = fVar21;
      fVar37 = fVar22;
      fVar40 = fVar23;
    } while (uVar10 != 0);
  }
  fVar40 = fVar27 - fVar23;
  fVar37 = fVar20 - fVar22;
  fVar30 = fVar28 - fVar21;
  uVar25 = NEON_fmadd(fVar37,fVar37,fVar40 * fVar40);
  fVar31 = (float)NEON_fmadd(fVar30,fVar30,uVar25);
  if (1.175494e-38 <= fVar31) {
    uVar19 = 0;
    fVar24 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar32 = 0.0;
    if (param_5 != 0) {
      fVar32 = 0.0;
      fVar26 = 1.0 / fVar31;
      fVar34 = 0.0;
      fVar33 = 0.0;
      fVar24 = 0.0;
      puVar8 = param_6;
      uVar10 = param_5;
      do {
        uVar10 = uVar10 - 1;
        pfVar14 = (float *)(param_1 + *puVar8 * 0x10);
        fVar41 = fVar37 * fVar26 * (*pfVar14 - (fVar22 + fVar20) * 0.5);
        fVar44 = fVar40 * fVar26 * (pfVar14[1] - (fVar27 + fVar23) * 0.5);
        fVar45 = fVar30 * fVar26 * (pfVar14[2] - (fVar28 + fVar21) * 0.5);
        fVar46 = fVar41 + fVar44;
        fVar41 = fVar41 - fVar44;
        fVar44 = fVar46 + fVar45;
        fVar46 = fVar46 - fVar45;
        fVar47 = fVar41 + fVar45;
        fVar41 = fVar41 - fVar45;
        fVar32 = (float)NEON_fmadd(fVar44,fVar44,fVar32);
        fVar34 = (float)NEON_fmadd(fVar46,fVar46,fVar34);
        fVar33 = (float)NEON_fmadd(fVar47,fVar47,fVar33);
        fVar24 = (float)NEON_fmadd(fVar41,fVar41,fVar24);
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
    }
    fVar37 = fVar34;
    if (fVar34 <= fVar32) {
      fVar37 = fVar32;
    }
    fVar40 = fVar33;
    if (fVar33 <= fVar37) {
      fVar40 = fVar37;
    }
    fVar30 = fVar23;
    if (fVar40 < fVar24 || fVar37 < fVar33) {
      fVar30 = fVar27;
      fVar27 = fVar23;
    }
    fVar23 = fVar30;
    fVar30 = fVar21;
    if (fVar40 < fVar24 || fVar37 >= fVar33 && fVar32 < fVar34) {
      fVar30 = fVar28;
      fVar28 = fVar21;
    }
    fVar21 = fVar30;
    if (0.0002441406 <= fVar31) {
      lVar9 = 0;
      uVar10 = uVar7 & 0xfffffffc;
      fVar31 = (float)(ulong)(param_4 - 1);
      do {
        uStack_98 = 0;
        auStack_b8[3] = 0;
        local_88 = 0;
        local_90 = 0;
        auStack_b8[0] = 0;
        local_c0 = 0;
        auStack_b8[2] = 0;
        auStack_b8[1] = 0;
        if (param_4 != 0) {
          pauVar11 = pauVar6;
          puVar13 = puVar2;
          puVar17 = auStack_b8 + 3;
          uVar15 = uVar10;
          if (param_4 < 4) {
            uVar15 = 0;
          }
          else {
            do {
              auVar38 = *pauVar11;
              fVar37 = (float)*puVar13;
              fVar40 = (float)((ulong)*puVar13 >> 0x20);
              fVar30 = (float)puVar13[1];
              fVar24 = (float)((ulong)puVar13[1] >> 0x20);
              uVar15 = uVar15 - 4;
              fVar32 = auVar38._0_4_;
              fVar33 = auVar38._4_4_;
              fVar34 = auVar38._8_4_;
              fVar26 = auVar38._12_4_;
              fVar41 = fVar37 * fVar27 + fVar32 * fVar23;
              fVar44 = fVar40 * fVar27 + fVar33 * fVar23;
              fVar45 = fVar30 * fVar27 + fVar34 * fVar23;
              fVar46 = fVar24 * fVar27 + fVar26 * fVar23;
              fVar47 = fVar37 * fVar20 + fVar32 * fVar22;
              fVar29 = fVar40 * fVar20 + fVar33 * fVar22;
              fVar48 = fVar30 * fVar20 + fVar34 * fVar22;
              fVar49 = fVar24 * fVar20 + fVar26 * fVar22;
              auVar38._4_4_ = fVar44;
              auVar38._0_4_ = fVar41;
              auVar38._8_4_ = fVar45;
              auVar38._12_4_ = fVar46;
              auVar42._4_4_ = fVar44;
              auVar42._0_4_ = fVar41;
              auVar42._8_4_ = fVar45;
              auVar42._12_4_ = fVar46;
              auVar38 = NEON_ext(auVar38,auVar42,8,1);
              auVar4._4_4_ = fVar29;
              auVar4._0_4_ = fVar47;
              auVar4._8_4_ = fVar48;
              auVar4._12_4_ = fVar49;
              auVar5._4_4_ = fVar29;
              auVar5._0_4_ = fVar47;
              auVar5._8_4_ = fVar48;
              auVar5._12_4_ = fVar49;
              auVar42 = NEON_ext(auVar4,auVar5,8,1);
              *(float *)(puVar17 + -3) = fVar37 * fVar28 + fVar32 * fVar21;
              *(float *)(puVar17 + -1) = fVar40 * fVar28 + fVar33 * fVar21;
              *(float *)(puVar17 + 3) = fVar24 * fVar28 + fVar26 * fVar21;
              puVar17[-4] = CONCAT44(fVar41,fVar47);
              puVar17[-2] = CONCAT44(fVar44,fVar29);
              *(float *)(puVar17 + 1) = fVar30 * fVar28 + fVar34 * fVar21;
              *puVar17 = CONCAT44(auVar38._0_4_,auVar42._0_4_);
              puVar17[2] = CONCAT44(auVar38._4_4_,auVar42._4_4_);
              pauVar11 = pauVar11 + 1;
              puVar13 = puVar13 + 2;
              puVar17 = puVar17 + 8;
            } while (uVar15 != 0);
            uVar15 = uVar10;
            if (uVar10 == uVar7) goto LAB_00a7c3cc;
          }
          lVar12 = uVar7 - uVar15;
          pfVar14 = (float *)((long)puVar2 + uVar15 * 4);
          puVar18 = (undefined4 *)((long)*pauVar6 + uVar15 * 4);
          puVar13 = auStack_b8 + uVar15 * 2;
          do {
            fVar37 = *pfVar14;
            uVar25 = *puVar18;
            lVar12 = lVar12 + -1;
            uVar35 = NEON_fmadd(fVar22,uVar25,fVar20 * fVar37);
            uVar36 = NEON_fmadd(fVar23,uVar25,fVar27 * fVar37);
            uVar25 = NEON_fmadd(fVar21,uVar25,fVar28 * fVar37);
            *(undefined4 *)(puVar13 + -1) = uVar35;
            *(undefined4 *)((long)puVar13 + -4) = uVar36;
            *(undefined4 *)puVar13 = uVar25;
            pfVar14 = pfVar14 + 1;
            puVar18 = puVar18 + 1;
            puVar13 = puVar13 + 2;
          } while (lVar12 != 0);
        }
LAB_00a7c3cc:
        fVar40 = fVar27 - fVar23;
        fVar30 = fVar20 - fVar22;
        fVar24 = fVar28 - fVar21;
        uVar25 = NEON_fmadd(fVar30,fVar30,fVar40 * fVar40);
        fVar37 = (float)NEON_fmadd(fVar24,fVar24,uVar25);
        if (fVar37 < 0.0002441406) goto LAB_00a7c584;
        if (param_5 == 0) {
          fVar26 = 0.0;
          auVar39 = ZEXT816(0);
          fVar41 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
        }
        else {
          fVar37 = fVar31 / fVar37;
          fVar44 = 0.0;
          auVar43 = ZEXT816(0);
          fVar34 = 0.0;
          fVar33 = 0.0;
          fVar32 = 0.0;
          fVar41 = 0.0;
          auVar39 = ZEXT816(0);
          fVar26 = 0.0;
          puVar8 = param_6;
          uVar15 = param_5;
          do {
            pfVar14 = (float *)(param_1 + *puVar8 * 0x10);
            uVar25 = NEON_fmadd(*pfVar14 - fVar22,fVar30 * fVar37,
                                fVar40 * fVar37 * (pfVar14[1] - fVar23));
            fVar45 = (float)NEON_fmadd(pfVar14[2] - fVar21,fVar24 * fVar37,uVar25);
            if (fVar45 <= 0.0) {
              uVar16 = 0;
            }
            else {
              uVar16 = param_4 - 1;
              if (fVar45 < fVar31) {
                uVar16 = (uint)(fVar45 + 0.5);
              }
            }
            uVar1 = (ulong)uVar16;
            uVar15 = uVar15 - 1;
            puVar8 = puVar8 + 1;
            fVar29 = *(float *)((long)puVar2 + (ulong)uVar16 * 4);
            fVar49 = *(float *)(&local_c0 + uVar1 * 2) - *pfVar14;
            fVar48 = *(float *)((long)&local_c0 + uVar1 * 0x10 + 4) - pfVar14[1];
            fVar46 = *(float *)((long)*pauVar6 + (ulong)uVar16 * 4) * 0.125;
            fVar45 = *(float *)(auStack_b8 + uVar1 * 2) - pfVar14[2];
            fVar47 = fVar29 * 0.125;
            auVar43._0_4_ =
                 (float)NEON_fmadd(fVar46,*(float *)((long)*pauVar6 + (ulong)uVar16 * 4),
                                   auVar43._0_4_);
            fVar41 = (float)NEON_fmadd(fVar46,fVar49,fVar41);
            auVar39._0_4_ = NEON_fmadd(fVar46,fVar48,auVar39._0_4_);
            fVar26 = (float)NEON_fmadd(fVar46,fVar45,fVar26);
            fVar44 = (float)NEON_fmadd(fVar47,fVar29,fVar44);
            fVar34 = (float)NEON_fmadd(fVar47,fVar49,fVar34);
            fVar33 = (float)NEON_fmadd(fVar47,fVar48,fVar33);
            fVar32 = (float)NEON_fmadd(fVar47,fVar45,fVar32);
          } while (uVar15 != 0);
          if (0.0 < auVar43._0_4_) {
            fVar37 = -1.0 / auVar43._0_4_;
            fVar22 = (float)NEON_fmadd(fVar41,fVar37,fVar22);
            fVar23 = (float)NEON_fmadd(auVar39._0_4_,fVar37,fVar23);
            fVar21 = (float)NEON_fmadd(fVar26,fVar37,fVar21);
          }
          if (0.0 < fVar44) {
            fVar44 = -1.0 / fVar44;
            fVar20 = (float)NEON_fmadd(fVar34,fVar44,fVar20);
            fVar27 = (float)NEON_fmadd(fVar33,fVar44,fVar27);
            fVar28 = (float)NEON_fmadd(fVar32,fVar44,fVar28);
          }
        }
        if (((((fVar41 * fVar41 < 1.525879e-05) && (auVar39._0_4_ * auVar39._0_4_ < 1.525879e-05))
             && (fVar26 * fVar26 < 1.525879e-05)) &&
            (((fVar34 * fVar34 < 1.525879e-05 && (fVar33 * fVar33 < 1.525879e-05)) &&
             (fVar32 * fVar32 < 1.525879e-05)))) || (lVar9 = lVar9 + 1, lVar9 == 8))
        goto LAB_00a7c584;
      } while( true );
    }
  }
LAB_00a7c58c:
  *(float *)param_2 = fVar22;
  *(float *)(param_2 + 4) = fVar23;
  *(float *)(param_2 + 8) = fVar21;
  *(float *)param_3 = fVar20;
  *(float *)(param_3 + 4) = fVar27;
  *(float *)(param_3 + 8) = fVar28;
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
LAB_00a7c584:
  uVar19 = 0x7f7fffff;
  goto LAB_00a7c58c;
}


