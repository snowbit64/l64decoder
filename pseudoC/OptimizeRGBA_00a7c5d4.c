// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimizeRGBA
// Entry Point: 00a7c5d4
// Size: 1612 bytes
// Signature: undefined __cdecl OptimizeRGBA(HDRColorA * param_1, HDRColorA * param_2, HDRColorA * param_3, uint param_4, ulong param_5, ulong * param_6)


/* WARNING: Removing unreachable block (ram,0x00a7cbbc) */
/* WARNING: Type propagation algorithm not settling */
/* BC6BC7Util::OptimizeRGBA(BC6BC7Util::HDRColorA const*, BC6BC7Util::HDRColorA*,
   BC6BC7Util::HDRColorA*, unsigned int, unsigned long, unsigned long const*) */

void BC6BC7Util::OptimizeRGBA
               (HDRColorA *param_1,HDRColorA *param_2,HDRColorA *param_3,uint param_4,ulong param_5,
               ulong *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  float fVar57;
  undefined8 local_178 [32];
  long local_78;
  
  uVar10 = (ulong)param_4;
  lVar8 = tpidr_el0;
  uVar22 = 0;
  puVar7 = (undefined8 *)pD3;
  puVar9 = (undefined8 *)pC3;
  if (param_4 != 3) {
    puVar7 = (undefined8 *)&pD4;
    puVar9 = (undefined8 *)&pC4;
  }
  local_78 = *(long *)(lVar8 + 0x28);
  if (param_5 == 0) {
    fVar24 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar42 = 0.0;
    fVar26 = 1.0;
    fVar27 = 1.0;
    fVar25 = 1.0;
    fVar23 = 1.0;
  }
  else {
    fVar42 = 0.0;
    fVar32 = 0.0;
    fVar31 = 0.0;
    fVar24 = 0.0;
    puVar13 = param_6;
    uVar15 = param_5;
    fVar33 = 1.0;
    fVar34 = 1.0;
    fVar44 = 1.0;
    fVar57 = 1.0;
    do {
      pfVar16 = (float *)(param_1 + *puVar13 * 0x10);
      fVar28 = *pfVar16;
      fVar43 = pfVar16[1];
      fVar46 = pfVar16[2];
      fVar47 = pfVar16[3];
      fVar26 = fVar28;
      if (fVar44 <= fVar28) {
        fVar26 = fVar44;
      }
      fVar27 = fVar43;
      if (fVar57 <= fVar43) {
        fVar27 = fVar57;
      }
      fVar25 = fVar46;
      if (fVar34 <= fVar46) {
        fVar25 = fVar34;
      }
      fVar23 = fVar47;
      if (fVar33 <= fVar47) {
        fVar23 = fVar33;
      }
      if (fVar28 <= fVar24) {
        fVar28 = fVar24;
      }
      fVar24 = fVar28;
      if (fVar43 <= fVar31) {
        fVar43 = fVar31;
      }
      fVar31 = fVar43;
      if (fVar46 <= fVar32) {
        fVar46 = fVar32;
      }
      fVar32 = fVar46;
      if (fVar47 <= fVar42) {
        fVar47 = fVar42;
      }
      fVar42 = fVar47;
      uVar15 = uVar15 - 1;
      puVar13 = puVar13 + 1;
      fVar33 = fVar23;
      fVar34 = fVar25;
      fVar44 = fVar26;
      fVar57 = fVar27;
    } while (uVar15 != 0);
  }
  fVar43 = fVar31 - fVar27;
  fVar57 = fVar24 - fVar26;
  fVar33 = fVar32 - fVar25;
  fVar34 = fVar42 - fVar23;
  uVar29 = NEON_fmadd(fVar57,fVar57,fVar43 * fVar43);
  uVar29 = NEON_fmadd(fVar33,fVar33,uVar29);
  fVar44 = (float)NEON_fmadd(fVar34,fVar34,uVar29);
  if (1.175494e-38 <= fVar44) {
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar28 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar53 = 0.0;
    fVar52 = 0.0;
    if (param_5 != 0) {
      fVar30 = 1.0 / fVar44;
      fVar52 = 0.0;
      fVar53 = 0.0;
      fVar50 = 0.0;
      fVar49 = 0.0;
      fVar48 = 0.0;
      fVar28 = 0.0;
      fVar47 = 0.0;
      fVar46 = 0.0;
      puVar13 = param_6;
      uVar15 = param_5;
      do {
        uVar15 = uVar15 - 1;
        pfVar16 = (float *)(param_1 + *puVar13 * 0x10);
        fVar35 = fVar57 * fVar30 * (*pfVar16 - (fVar24 + fVar26) * 0.5);
        fVar36 = fVar43 * fVar30 * (pfVar16[1] - (fVar31 + fVar27) * 0.5);
        fVar38 = fVar33 * fVar30 * (pfVar16[2] - (fVar32 + fVar25) * 0.5);
        fVar40 = fVar35 + fVar36;
        fVar35 = fVar35 - fVar36;
        fVar37 = fVar34 * fVar30 * (pfVar16[3] - (fVar42 + fVar23) * 0.5);
        fVar39 = fVar40 + fVar38;
        fVar40 = fVar40 - fVar38;
        fVar41 = fVar35 + fVar38;
        fVar35 = fVar35 - fVar38;
        fVar38 = fVar39 + fVar37;
        fVar39 = fVar39 - fVar37;
        fVar45 = fVar40 + fVar37;
        fVar40 = fVar40 - fVar37;
        fVar36 = fVar41 + fVar37;
        fVar41 = fVar41 - fVar37;
        fVar54 = fVar35 + fVar37;
        fVar35 = fVar35 - fVar37;
        fVar52 = (float)NEON_fmadd(fVar38,fVar38,fVar52);
        fVar53 = (float)NEON_fmadd(fVar39,fVar39,fVar53);
        fVar50 = (float)NEON_fmadd(fVar45,fVar45,fVar50);
        fVar49 = (float)NEON_fmadd(fVar40,fVar40,fVar49);
        fVar48 = (float)NEON_fmadd(fVar36,fVar36,fVar48);
        fVar28 = (float)NEON_fmadd(fVar41,fVar41,fVar28);
        fVar47 = (float)NEON_fmadd(fVar54,fVar54,fVar47);
        fVar46 = (float)NEON_fmadd(fVar35,fVar35,fVar46);
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
    }
    fVar33 = fVar53;
    if (fVar53 <= fVar52) {
      fVar33 = fVar52;
    }
    fVar34 = fVar50;
    if (fVar50 <= fVar33) {
      fVar34 = fVar33;
    }
    bVar1 = fVar33 < fVar50;
    fVar33 = fVar49;
    if (fVar49 <= fVar34) {
      fVar33 = fVar34;
    }
    bVar2 = fVar34 < fVar49;
    fVar34 = fVar48;
    if (fVar48 <= fVar33) {
      fVar34 = fVar33;
    }
    bVar3 = fVar33 < fVar48;
    fVar33 = fVar28;
    if (fVar28 <= fVar34) {
      fVar33 = fVar34;
    }
    bVar4 = fVar34 < fVar28;
    fVar34 = fVar47;
    if (fVar47 <= fVar33) {
      fVar34 = fVar33;
    }
    bVar5 = fVar33 < fVar47;
    bVar6 = fVar34 < fVar46;
    fVar33 = fVar31;
    if (bVar6 || (bVar5 || (bVar4 || bVar3))) {
      fVar33 = fVar27;
    }
    if (bVar6 || (bVar5 || (bVar4 || bVar3))) {
      fVar27 = fVar31;
    }
    fVar34 = fVar32;
    if (bVar6 || (bVar5 || !bVar4 && (!bVar3 && (bVar2 || bVar1)))) {
      fVar34 = fVar25;
    }
    if (bVar6 || (bVar5 || !bVar4 && (!bVar3 && (bVar2 || bVar1)))) {
      fVar25 = fVar32;
    }
    fVar31 = fVar42;
    if (bVar6 || !bVar5 && (bVar4 || !bVar3 && (bVar2 || !bVar1 && fVar52 < fVar53))) {
      fVar31 = fVar23;
    }
    if (bVar6 || !bVar5 && (bVar4 || !bVar3 && (bVar2 || !bVar1 && fVar52 < fVar53))) {
      fVar23 = fVar42;
    }
    fVar42 = fVar31;
    fVar31 = fVar33;
    fVar32 = fVar34;
    if (0.0002441406 <= fVar44) {
      lVar14 = 0;
      fVar33 = (float)(ulong)(param_4 - 1);
      uVar15 = uVar10 & 0xfffffffc;
      do {
        if (param_4 != 0) {
          if (param_4 < 4) {
            uVar17 = 0;
          }
          else {
            puVar11 = local_178;
            uVar17 = uVar15;
            puVar19 = puVar7;
            puVar21 = puVar9;
            do {
              uVar17 = uVar17 - 4;
              fVar34 = (float)*puVar21;
              fVar44 = (float)((ulong)*puVar21 >> 0x20);
              fVar57 = (float)puVar21[1];
              fVar43 = (float)((ulong)puVar21[1] >> 0x20);
              fVar46 = (float)*puVar19;
              fVar47 = (float)((ulong)*puVar19 >> 0x20);
              fVar28 = (float)puVar19[1];
              fVar48 = (float)((ulong)puVar19[1] >> 0x20);
              *(float *)puVar11 = fVar34 * fVar26 + fVar46 * fVar24;
              *(float *)((long)puVar11 + 4) = fVar34 * fVar27 + fVar46 * fVar31;
              *(float *)(puVar11 + 1) = fVar34 * fVar25 + fVar46 * fVar32;
              *(float *)((long)puVar11 + 0xc) = fVar34 * fVar23 + fVar46 * fVar42;
              *(float *)(puVar11 + 2) = fVar44 * fVar26 + fVar47 * fVar24;
              *(float *)((long)puVar11 + 0x14) = fVar44 * fVar27 + fVar47 * fVar31;
              *(float *)(puVar11 + 3) = fVar44 * fVar25 + fVar47 * fVar32;
              *(float *)((long)puVar11 + 0x1c) = fVar44 * fVar23 + fVar47 * fVar42;
              *(float *)(puVar11 + 4) = fVar57 * fVar26 + fVar28 * fVar24;
              *(float *)((long)puVar11 + 0x24) = fVar57 * fVar27 + fVar28 * fVar31;
              *(float *)(puVar11 + 5) = fVar57 * fVar25 + fVar28 * fVar32;
              *(float *)((long)puVar11 + 0x2c) = fVar57 * fVar23 + fVar28 * fVar42;
              *(float *)(puVar11 + 6) = fVar43 * fVar26 + fVar48 * fVar24;
              *(float *)((long)puVar11 + 0x34) = fVar43 * fVar27 + fVar48 * fVar31;
              *(float *)(puVar11 + 7) = fVar43 * fVar25 + fVar48 * fVar32;
              *(float *)((long)puVar11 + 0x3c) = fVar43 * fVar23 + fVar48 * fVar42;
              puVar11 = puVar11 + 8;
              puVar19 = puVar19 + 2;
              puVar21 = puVar21 + 2;
            } while (uVar17 != 0);
            uVar17 = uVar15;
            if (uVar15 == uVar10) goto LAB_00a7c9f8;
          }
          lVar12 = uVar10 - uVar17;
          puVar11 = local_178 + uVar17 * 2 + 1;
          pfVar16 = (float *)((long)puVar7 + uVar17 * 4);
          pfVar20 = (float *)((long)puVar9 + uVar17 * 4);
          do {
            fVar34 = *pfVar20;
            fVar44 = *pfVar16;
            lVar12 = lVar12 + -1;
            *(float *)(puVar11 + -1) = fVar26 * fVar34 + fVar24 * fVar44;
            *(float *)((long)puVar11 + -4) = fVar27 * fVar34 + fVar31 * fVar44;
            *(float *)puVar11 = fVar25 * fVar34 + fVar32 * fVar44;
            *(float *)((long)puVar11 + 4) = fVar23 * fVar34 + fVar42 * fVar44;
            puVar11 = puVar11 + 2;
            pfVar16 = pfVar16 + 1;
            pfVar20 = pfVar20 + 1;
          } while (lVar12 != 0);
        }
LAB_00a7c9f8:
        fVar44 = fVar31 - fVar27;
        fVar57 = fVar24 - fVar26;
        fVar43 = fVar32 - fVar25;
        fVar46 = fVar42 - fVar23;
        uVar29 = NEON_fmadd(fVar57,fVar57,fVar44 * fVar44);
        uVar29 = NEON_fmadd(fVar43,fVar43,uVar29);
        fVar34 = (float)NEON_fmadd(fVar46,fVar46,uVar29);
        if (fVar34 < 0.0002441406) break;
        if (param_5 == 0) {
          fVar30 = 0.0;
          fVar53 = 0.0;
          fVar52 = 0.0;
          fVar50 = 0.0;
          fVar49 = 0.0;
          fVar48 = 0.0;
          fVar28 = 0.0;
          fVar47 = 0.0;
        }
        else {
          fVar34 = fVar33 / fVar34;
          fVar36 = 0.0;
          fVar47 = 0.0;
          fVar28 = 0.0;
          fVar48 = 0.0;
          fVar49 = 0.0;
          fVar35 = 0.0;
          fVar50 = 0.0;
          fVar52 = 0.0;
          fVar53 = 0.0;
          fVar30 = 0.0;
          puVar13 = param_6;
          uVar17 = param_5;
          do {
            auVar56 = *(undefined (*) [16])(param_1 + *puVar13 * 0x10);
            uVar29 = NEON_fmadd(auVar56._0_4_ - fVar26,fVar57 * fVar34,
                                fVar44 * fVar34 * (auVar56._4_4_ - fVar27));
            uVar29 = NEON_fmadd(auVar56._8_4_ - fVar25,fVar43 * fVar34,uVar29);
            fVar37 = (float)NEON_fmadd(auVar56._12_4_ - fVar23,fVar46 * fVar34,uVar29);
            if (fVar37 <= 0.0) {
              uVar18 = 0;
            }
            else {
              uVar18 = param_4 - 1;
              if (fVar37 < fVar33) {
                uVar18 = (uint)(fVar37 + 0.5);
              }
            }
            uVar17 = uVar17 - 1;
            puVar13 = puVar13 + 1;
            fVar38 = *(float *)((long)puVar9 + (ulong)uVar18 * 4);
            auVar55._0_4_ = (float)local_178[(ulong)uVar18 * 2] - auVar56._0_4_;
            auVar55._4_4_ = (float)((ulong)local_178[(ulong)uVar18 * 2] >> 0x20) - auVar56._4_4_;
            auVar55._8_4_ = (float)local_178[(ulong)uVar18 * 2 + 1] - auVar56._8_4_;
            auVar55._12_4_ =
                 (float)((ulong)local_178[(ulong)uVar18 * 2 + 1] >> 0x20) - auVar56._12_4_;
            fVar37 = *(float *)((long)puVar7 + (ulong)uVar18 * 4);
            auVar56 = NEON_rev64(auVar55,4);
            auVar56 = NEON_ext(auVar56,auVar56,8,1);
            fVar39 = fVar38 * 0.125;
            fVar40 = fVar37 * 0.125;
            fVar35 = fVar35 + fVar38 * fVar39;
            fVar36 = fVar36 + fVar37 * fVar40;
            fVar50 = fVar50 + auVar56._0_4_ * fVar40;
            fVar52 = fVar52 + auVar56._4_4_ * fVar40;
            fVar53 = fVar53 + auVar56._8_4_ * fVar40;
            fVar30 = fVar30 + auVar56._12_4_ * fVar40;
            fVar47 = fVar47 + auVar56._0_4_ * fVar39;
            fVar28 = fVar28 + auVar56._4_4_ * fVar39;
            fVar48 = fVar48 + auVar56._8_4_ * fVar39;
            fVar49 = fVar49 + auVar56._12_4_ * fVar39;
          } while (uVar17 != 0);
          if (0.0 < fVar35) {
            fVar35 = -1.0 / fVar35;
            fVar26 = fVar26 + fVar35 * fVar49;
            fVar27 = fVar27 + fVar35 * fVar48;
            fVar25 = fVar25 + fVar35 * fVar28;
            fVar23 = fVar23 + fVar35 * fVar47;
          }
          if (0.0 < fVar36) {
            fVar36 = -1.0 / fVar36;
            fVar24 = fVar24 + fVar30 * fVar36;
            fVar31 = fVar31 + fVar53 * fVar36;
            fVar32 = fVar32 + fVar52 * fVar36;
            fVar42 = fVar42 + fVar50 * fVar36;
          }
        }
        uVar29 = NEON_fmadd(fVar49,fVar49,fVar48 * fVar48);
        uVar51 = NEON_fmadd(fVar30,fVar30,fVar53 * fVar53);
        uVar29 = NEON_fmadd(fVar28,fVar28,uVar29);
        uVar51 = NEON_fmadd(fVar52,fVar52,uVar51);
        NEON_fmadd(fVar47,fVar47,uVar29);
        NEON_fmadd(fVar50,fVar50,uVar51);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 8);
      uVar22 = 0x7f7fffff;
    }
    else {
      uVar22 = 0;
    }
  }
  *(float *)param_2 = fVar26;
  *(float *)(param_2 + 4) = fVar27;
  *(float *)(param_2 + 8) = fVar25;
  *(float *)(param_2 + 0xc) = fVar23;
  *(float *)param_3 = fVar24;
  *(float *)(param_3 + 4) = fVar31;
  *(float *)(param_3 + 8) = fVar32;
  *(float *)(param_3 + 0xc) = fVar42;
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar22);
}


