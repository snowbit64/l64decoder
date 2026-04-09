// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update3dVoices
// Entry Point: 00e3ae58
// Size: 1912 bytes
// Signature: undefined __thiscall update3dVoices(Soloud * this, uint * param_1, uint param_2)


/* SoLoud::Soloud::update3dVoices(unsigned int*, unsigned int) */

void __thiscall SoLoud::Soloud::update3dVoices(Soloud *this,uint *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float local_120;
  float local_118;
  undefined local_110 [8];
  float local_108 [22];
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  uVar4 = *(uint *)(this + 0x20a4);
  uVar5 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    uVar4 = 0;
  }
  else {
    pfVar6 = (float *)(this + 0x3484);
    pfVar7 = local_108;
    do {
      while( true ) {
        fVar25 = pfVar6[-2];
        fVar10 = pfVar6[-1];
        uVar21 = NEON_fmadd(fVar25,fVar25,fVar10 * fVar10);
        fVar17 = *pfVar6;
        fVar22 = (float)NEON_fmadd(fVar17,fVar17,uVar21);
        fVar22 = SQRT(fVar22);
        if (fVar22 != 0.0) break;
        *pfVar7 = 0.0;
        *(undefined8 *)(pfVar7 + -2) = 0;
        pfVar6 = pfVar6 + 3;
        uVar5 = uVar5 - 1;
        pfVar7 = pfVar7 + 3;
        if (uVar5 == 0) goto LAB_00e3af20;
      }
      pfVar7[-2] = fVar25 / fVar22;
      pfVar7[-1] = fVar10 / fVar22;
      *pfVar7 = fVar17 / fVar22;
      pfVar6 = pfVar6 + 3;
      uVar5 = uVar5 - 1;
      pfVar7 = pfVar7 + 3;
    } while (uVar5 != 0);
LAB_00e3af20:
    if (7 < uVar4) goto LAB_00e3af54;
  }
  memset(local_110 + (ulong)uVar4 * 0xc,0,(ulong)(7 - uVar4) * 0xc + 0xc);
LAB_00e3af54:
  fVar27 = *(float *)(this + 0x3458);
  fVar30 = *(float *)(this + 0x3454);
  fVar18 = 0.0;
  fVar29 = *(float *)(this + 0x345c);
  fVar22 = *(float *)(this + 0x3464);
  fVar25 = *(float *)(this + 0x3468);
  uVar21 = NEON_fmadd(fVar30,fVar30,fVar27 * fVar27);
  fVar10 = (float)NEON_fmadd(fVar29,fVar29,uVar21);
  fVar10 = SQRT(fVar10);
  fVar17 = *(float *)(this + 0x3460);
  if (((byte)this[0x20bc] >> 2 & 1) == 0) {
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    local_120 = 0.0;
    if (fVar10 != 0.0) {
      fVar37 = fVar30 / fVar10;
      fVar36 = fVar27 / fVar10;
      fVar34 = fVar29 / fVar10;
    }
    fVar10 = 0.0;
    fVar27 = (float)NEON_fmadd(fVar25,fVar37,fVar17 * -fVar34);
    fVar18 = (float)NEON_fmadd(fVar22,fVar34,fVar25 * -fVar36);
    fVar17 = (float)NEON_fmadd(fVar17,fVar36,fVar22 * -fVar37);
    uVar21 = NEON_fmadd(fVar18,fVar18,fVar27 * fVar27);
    fVar25 = 0.0;
    fVar22 = (float)NEON_fmadd(fVar17,fVar17,uVar21);
    fVar22 = SQRT(fVar22);
    if (fVar22 != 0.0) {
      fVar25 = fVar18 / fVar22;
      fVar10 = fVar27 / fVar22;
      local_120 = fVar17 / fVar22;
    }
    uVar21 = NEON_fmadd(fVar36,local_120,fVar34 * -fVar10);
    fVar22 = (float)NEON_fmadd(fVar34,fVar25,fVar37 * -local_120);
    uVar11 = NEON_fmadd(fVar37,fVar10,fVar36 * -fVar25);
  }
  else {
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    if (fVar10 != 0.0) {
      fVar37 = fVar30 / fVar10;
      fVar36 = fVar27 / fVar10;
      fVar34 = fVar29 / fVar10;
    }
    fVar27 = (float)NEON_fmadd(fVar25,fVar37,fVar17 * -fVar34);
    fVar25 = (float)NEON_fmadd(fVar22,fVar34,fVar25 * -fVar36);
    fVar29 = (float)NEON_fmadd(fVar17,fVar36,fVar22 * -fVar37);
    uVar21 = NEON_fmadd(fVar25,fVar25,fVar27 * fVar27);
    fVar22 = 0.0;
    fVar10 = (float)NEON_fmadd(fVar29,fVar29,uVar21);
    fVar10 = SQRT(fVar10);
    fVar17 = 0.0;
    if (fVar10 != 0.0) {
      fVar22 = fVar25 / fVar10;
      fVar17 = fVar27 / fVar10;
      fVar18 = fVar29 / fVar10;
    }
    fVar10 = -fVar17;
    local_120 = -fVar18;
    fVar25 = -fVar22;
    uVar21 = NEON_fmadd(fVar36,fVar18,fVar34 * fVar10);
    fVar22 = (float)NEON_fmadd(fVar34,fVar22,fVar37 * local_120);
    uVar11 = NEON_fmadd(fVar37,fVar17,fVar36 * fVar25);
  }
  if (0 < (int)param_2) {
    fVar29 = *(float *)(this + 0x3448);
    fVar17 = *(float *)(this + 0x344c);
    uVar5 = 0;
    fVar18 = *(float *)(this + 0x3450);
    uVar19 = *(undefined4 *)(this + 0x346c);
    fVar27 = *(float *)(this + 0x3470);
    uVar12 = *(undefined4 *)(this + 0x3474);
    do {
      local_118 = 1.0;
      uVar8 = (ulong)param_1[uVar5];
      puVar3 = *(undefined8 **)(this + uVar8 * 0x78 + 0x3510);
      if (puVar3 != (undefined8 *)0x0) {
        local_118 = (float)(**(code **)*puVar3)
                                     (puVar3,this,this + uVar8 * 0x78 + 0x34e0,
                                      *(undefined4 *)(this + uVar8 * 0x78 + 0x3520));
      }
      uVar31 = *(undefined4 *)(this + uVar8 * 0x78 + 0x34ec);
      bVar2 = (*(uint *)(this + uVar8 * 0x78 + 0x354c) & 8) != 0;
      fVar33 = *(float *)(this + uVar8 * 0x78 + 0x34f0);
      fVar23 = fVar18;
      fVar30 = fVar17;
      if (bVar2) {
        fVar30 = 0.0;
        fVar23 = 0.0;
      }
      uVar35 = *(undefined4 *)(this + uVar8 * 0x78 + 0x34f4);
      fVar30 = *(float *)(this + uVar8 * 0x78 + 0x34e4) - fVar30;
      fVar32 = fVar29;
      if (bVar2) {
        fVar32 = 0.0;
      }
      fVar32 = *(float *)(this + uVar8 * 0x78 + 0x34e0) - fVar32;
      fVar23 = *(float *)(this + uVar8 * 0x78 + 0x34e8) - fVar23;
      uVar13 = NEON_fmadd(fVar32,fVar32,fVar30 * fVar30);
      fVar14 = (float)NEON_fmadd(fVar23,fVar23,uVar13);
      fVar14 = SQRT(fVar14);
      if (*(undefined8 **)(this + uVar8 * 0x78 + 0x3518) != (undefined8 *)0x0) {
        fVar15 = (float)(**(code **)**(undefined8 **)(this + uVar8 * 0x78 + 0x3518))
                                  (fVar14,*(undefined4 *)(this + uVar8 * 0x78 + 0x34f8),
                                   *(undefined4 *)(this + uVar8 * 0x78 + 0x34fc),
                                   *(undefined4 *)(this + uVar8 * 0x78 + 0x3500));
        goto LAB_00e3b278;
      }
      switch(*(undefined4 *)(this + uVar8 * 0x78 + 0x3504)) {
      case 1:
        fVar15 = *(float *)(this + uVar8 * 0x78 + 0x34f8);
        fVar20 = fVar14;
        if (fVar14 <= fVar15) {
          fVar20 = fVar15;
        }
        if (*(float *)(this + uVar8 * 0x78 + 0x34fc) <= fVar20) {
          fVar20 = *(float *)(this + uVar8 * 0x78 + 0x34fc);
        }
        fVar20 = (float)NEON_fmadd(*(undefined4 *)(this + uVar8 * 0x78 + 0x3500),fVar20 - fVar15,
                                   fVar15);
        fVar15 = fVar15 / fVar20;
        break;
      case 2:
        fVar20 = *(float *)(this + uVar8 * 0x78 + 0x34f8);
        fVar24 = *(float *)(this + uVar8 * 0x78 + 0x34fc);
        fVar15 = fVar14;
        if (fVar14 <= fVar20) {
          fVar15 = fVar20;
        }
        if (fVar24 <= fVar15) {
          fVar15 = fVar24;
        }
        fVar15 = 1.0 - (*(float *)(this + uVar8 * 0x78 + 0x3500) * (fVar15 - fVar20)) /
                       (fVar24 - fVar20);
        break;
      case 3:
        fVar20 = *(float *)(this + uVar8 * 0x78 + 0x34f8);
        fVar15 = fVar14;
        if (fVar14 <= fVar20) {
          fVar15 = fVar20;
        }
        if (*(float *)(this + uVar8 * 0x78 + 0x34fc) <= fVar15) {
          fVar15 = *(float *)(this + uVar8 * 0x78 + 0x34fc);
        }
        fVar15 = powf(fVar15 / fVar20,-*(float *)(this + uVar8 * 0x78 + 0x3500));
        break;
      case 4:
        fVar20 = *(float *)(this + uVar8 * 0x78 + 0x34f8);
        fVar24 = *(float *)(this + uVar8 * 0x78 + 0x34fc);
        fVar15 = fVar14;
        if (fVar14 <= fVar20) {
          fVar15 = fVar20;
        }
        if (fVar24 <= fVar15) {
          fVar15 = fVar24;
        }
        fVar24 = (fVar15 - fVar20) / (fVar24 - fVar20);
        fVar15 = powf(10.0,fVar24 * -*(float *)(this + uVar8 * 0x78 + 0x3500));
        fVar20 = (float)NEON_fmadd(fVar24,0xc1480000,0x41480000);
        if (fVar24 <= 0.92) {
          fVar20 = 1.0;
        }
        fVar15 = fVar15 * fVar20;
        break;
      default:
        goto switchD_00e3b478_caseD_4;
      }
LAB_00e3b278:
      local_118 = local_118 * fVar15;
switchD_00e3b478_caseD_4:
      fVar15 = 1.0;
      if (fVar14 != 0.0) {
        fVar20 = *(float *)(this + 0x3478);
        uVar31 = NEON_fmadd(fVar32,uVar31,fVar33 * fVar30);
        fVar24 = *(float *)(this + uVar8 * 0x78 + 0x3508);
        uVar13 = NEON_fmadd(fVar32,uVar19,fVar27 * fVar30);
        fVar15 = (float)NEON_fmadd(fVar23,uVar35,uVar31);
        fVar26 = (float)NEON_fmadd(fVar23,uVar12,uVar13);
        fVar28 = (fVar20 / fVar24) * 0.99;
        fVar33 = fVar15 / fVar14;
        if (fVar28 <= fVar15 / fVar14) {
          fVar33 = fVar28;
        }
        fVar16 = (float)NEON_fmsub(fVar24,fVar33,fVar20);
        fVar33 = fVar26 / fVar14;
        if (fVar28 <= fVar26 / fVar14) {
          fVar33 = fVar28;
        }
        fVar15 = (float)NEON_fmsub(fVar24,fVar33,fVar20);
        fVar15 = fVar15 / fVar16;
      }
      fVar20 = 0.0;
      uVar35 = NEON_fmadd(fVar25,fVar32,fVar10 * fVar30);
      *(float *)(this + uVar8 * 0x78 + 0x3524) = fVar15;
      uVar31 = NEON_fmadd(uVar21,fVar32,fVar22 * fVar30);
      fVar33 = (float)NEON_fmadd(uVar11,fVar23,uVar31);
      uVar31 = NEON_fmadd(fVar37,fVar32,fVar36 * fVar30);
      fVar15 = 0.0;
      fVar30 = (float)NEON_fmadd(local_120,fVar23,uVar35);
      fVar23 = (float)NEON_fmadd(fVar34,fVar23,uVar31);
      fVar24 = 0.0;
      uVar31 = NEON_fmadd(fVar30,fVar30,fVar33 * fVar33);
      fVar32 = (float)NEON_fmadd(fVar23,fVar23,uVar31);
      fVar32 = SQRT(fVar32);
      if (fVar32 != 0.0) {
        fVar24 = fVar30 / fVar32;
        fVar20 = fVar33 / fVar32;
        fVar15 = fVar23 / fVar32;
      }
      fVar30 = 0.65;
      uVar4 = *(uint *)(this + 0x20a4);
      uVar9 = (ulong)uVar4;
      if (*(int *)(this + 0x20a8) != 3) {
        fVar30 = 1.0;
      }
      if ((int)uVar4 < 1) {
        uVar4 = 0;
LAB_00e3b158:
        memset(this + (uVar8 * 0x1e + (ulong)uVar4) * 4 + 0x352c,0,(ulong)(7 - uVar4) * 4 + 4);
      }
      else {
        pfVar6 = (float *)((ulong)local_110 | 4);
        pfVar7 = (float *)(this + uVar8 * 0x78 + 0x352c);
        do {
          fVar32 = pfVar6[-1];
          fVar23 = *pfVar6;
          fVar33 = pfVar6[1];
          if (((fVar32 != 0.0) || (fVar23 != 0.0)) || (fVar26 = 1.0, fVar33 != 0.0)) {
            fVar26 = fVar30;
            if (0.001 < *(float *)(this + uVar8 * 0x78 + 0x34f8)) {
              fVar26 = expf((fVar14 / *(float *)(this + uVar8 * 0x78 + 0x34f8)) * -1.7);
              fVar26 = (float)NEON_fmadd(-(fVar30 + -0.5),fVar26,fVar30);
            }
            uVar31 = NEON_fmadd(fVar32,fVar24,fVar20 * fVar23);
            uVar31 = NEON_fmadd(fVar33,fVar15,uVar31);
            fVar26 = (float)NEON_fmadd(fVar26,uVar31,0x3f800000);
            fVar26 = fVar26 * 0.5;
          }
          pfVar6 = pfVar6 + 3;
          uVar9 = uVar9 - 1;
          *pfVar7 = fVar26;
          pfVar7 = pfVar7 + 1;
        } while (uVar9 != 0);
        if (uVar4 < 8) goto LAB_00e3b158;
      }
      uVar5 = uVar5 + 1;
      *(float *)(this + uVar8 * 0x78 + 0x3528) = local_118;
    } while (uVar5 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


