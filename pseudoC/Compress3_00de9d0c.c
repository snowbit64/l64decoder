// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress3
// Entry Point: 00de9d0c
// Size: 1724 bytes
// Signature: undefined __thiscall Compress3(ClusterFit * this, void * param_1)


/* squish::ClusterFit::Compress3(void*) */

void __thiscall squish::ClusterFit::Compress3(ClusterFit *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ClusterFit CVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ClusterFit *pCVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar31;
  undefined auVar28 [16];
  undefined auVar29 [16];
  float fVar32;
  undefined auVar30 [16];
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
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  uchar auStack_d0 [16];
  float local_c0;
  float fStack_bc;
  float local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  uVar3 = **(uint **)(this + 8);
  ConstructOrdering(this,(Vec3 *)(this + 0x18),0);
  local_f4 = *(float *)(this + 0x1c4);
  local_f8 = *(float *)(this + 0x1c8);
  iVar12 = 0;
  uVar16 = 0;
  fVar25 = *(float *)(this + 0x1cc);
  fVar26 = *(float *)(this + 0x1d0);
  local_fc = 0.0;
  local_104 = 0.0;
  local_108 = 0.0;
  local_100 = 0.0;
  local_10c = 0.0;
  local_110 = 0.0;
  iVar1 = 0;
  iVar7 = 0;
  do {
    iVar17 = iVar1;
    if (0 < (int)uVar3) {
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      uVar20 = *(undefined8 *)(this + 0xac);
      uVar19 = *(undefined8 *)(this + 0xa4);
      uVar6 = 0;
      do {
        uVar9 = (uint)uVar6;
        uVar2 = uVar9;
        if (uVar9 < 2) {
          uVar2 = 1;
        }
        uVar13 = (ulong)uVar2;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar6;
        auVar28 = NEON_cmeq(auVar28,ZEXT816(0),8);
        auVar29[0] = (byte)uVar19 & auVar28[0];
        auVar29[1] = (byte)((ulong)uVar19 >> 8) & auVar28[1];
        auVar29[2] = (byte)((ulong)uVar19 >> 0x10) & auVar28[2];
        auVar29[3] = (byte)((ulong)uVar19 >> 0x18) & auVar28[3];
        auVar29[4] = (byte)((ulong)uVar19 >> 0x20) & auVar28[4];
        auVar29[5] = (byte)((ulong)uVar19 >> 0x28) & auVar28[5];
        auVar29[6] = (byte)((ulong)uVar19 >> 0x30) & auVar28[6];
        auVar29[7] = (byte)((ulong)uVar19 >> 0x38) & auVar28[7];
        auVar29[8] = (byte)uVar20 & auVar28[0];
        auVar29[9] = (byte)((ulong)uVar20 >> 8) & auVar28[1];
        auVar29[10] = (byte)((ulong)uVar20 >> 0x10) & auVar28[2];
        auVar29[11] = (byte)((ulong)uVar20 >> 0x18) & auVar28[3];
        auVar29[12] = (byte)((ulong)uVar20 >> 0x20) & auVar28[4];
        auVar29[13] = (byte)((ulong)uVar20 >> 0x28) & auVar28[5];
        auVar29[14] = (byte)((ulong)uVar20 >> 0x30) & auVar28[6];
        auVar29[15] = (byte)((ulong)uVar20 >> 0x38) & auVar28[7];
        while( true ) {
          fVar32 = auVar29._12_4_;
          auVar28 = NEON_ext(auVar29,auVar29,8,1);
          fVar31 = auVar29._4_4_;
          fVar35 = fVar32 * 0.25;
          fVar27 = auVar29._0_4_;
          fVar33 = fVar23 + fVar35;
          fVar36 = auVar28._0_4_ * 0.5;
          fVar41 = fVar24 + fVar31 * 0.5;
          fVar34 = fVar35 + ((*(float *)(this + 0x1b0) - fVar32) - fVar23);
          fVar39 = fVar21 + fVar36;
          fVar40 = fVar22 + fVar27 * 0.5;
          fVar36 = fVar36 + (((float)*(undefined8 *)(this + 0x1ac) - auVar28._0_4_) - fVar21);
          fVar37 = fVar27 * 0.5 + ((*(float *)(this + 0x1a4) - fVar27) - fVar22);
          fVar42 = 1.0 / (fVar33 * fVar34 - fVar35 * fVar35);
          fVar38 = fVar31 * 0.5 + ((*(float *)(this + 0x1a8) - fVar31) - fVar24);
          fVar18 = (fVar41 * fVar34 - fVar35 * fVar38) * fVar42;
          fVar51 = (fVar33 * fVar38 - fVar41 * fVar35) * fVar42;
          uVar49 = NEON_fmov(0x3f800000,4);
          uVar52 = NEON_fmov(0x41f80000,4);
          uVar45 = NEON_fmaxnm(CONCAT44((fVar40 * fVar34 - fVar37 * fVar35) * fVar42,
                                        (fVar34 * fVar39 - fVar35 * fVar36) * fVar42),0,4);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          uVar43 = NEON_fmaxnm(CONCAT44((fVar33 * fVar37 - fVar35 * fVar40) * fVar42,
                                        (fVar33 * fVar36 - fVar35 * fVar39) * fVar42),0,4);
          if (fVar51 <= 0.0) {
            fVar51 = 0.0;
          }
          uVar46 = NEON_fminnm(uVar45,uVar49,4);
          fVar18 = (float)NEON_fminnm(fVar18,0x3f800000);
          uVar45 = NEON_fminnm(uVar43,uVar49,4);
          fVar48 = (float)NEON_fminnm(fVar51,0x3f800000);
          fVar51 = (float)((ulong)uVar52 >> 0x20);
          fVar44 = (float)uVar46 * (float)uVar52 + 0.5;
          fVar47 = (float)((ulong)uVar46 >> 0x20) * fVar51 + 0.5;
          fVar42 = (float)uVar45 * (float)uVar52 + 0.5;
          fVar51 = (float)((ulong)uVar45 >> 0x20) * fVar51 + 0.5;
          uVar49 = NEON_fcmgt(CONCAT44(fVar47,fVar44),0,4);
          uVar45 = NEON_fcmgt(CONCAT44(fVar51,fVar42),0,4);
          uVar49 = NEON_bit(CONCAT44((int)fVar47,(int)fVar44),CONCAT44((int)fVar47,(int)fVar44),
                            uVar49,1);
          uVar45 = NEON_bsl(uVar45,CONCAT44((int)fVar51,(int)fVar42),
                            CONCAT44((int)fVar51,(int)fVar42),1);
          fVar42 = (float)uVar49 * 0.03225806;
          fVar51 = (float)((ulong)uVar49 >> 0x20) * 0.03225806;
          fVar47 = (float)uVar45 * 0.03225806;
          fVar50 = (float)((ulong)uVar45 >> 0x20) * 0.03225806;
          fVar44 = (float)(int)(fVar18 * 63.0 + 0.5) * 0.01587302;
          fVar48 = (float)(int)(fVar48 * 63.0 + 0.5) * 0.01587302;
          fVar18 = (fVar42 * fVar47 * fVar35 - fVar39 * fVar42) - fVar36 * fVar47;
          fVar36 = (fVar51 * fVar50 * fVar35 - fVar40 * fVar51) - fVar37 * fVar50;
          fVar35 = (fVar35 * fVar44 * fVar48 - fVar41 * fVar44) - fVar38 * fVar48;
          fVar18 = (float)*(undefined8 *)(this + 0x1bc) *
                   (fVar42 * fVar42 * fVar33 + fVar47 * fVar47 * fVar34 + fVar18 + fVar18) +
                   *(float *)(this + 0x1b4) *
                   (fVar51 * fVar51 * fVar33 + fVar50 * fVar50 * fVar34 + fVar36 + fVar36) +
                   *(float *)(this + 0x1b8) *
                   (fVar33 * fVar44 * fVar44 + fVar34 * fVar48 * fVar48 + fVar35 + fVar35);
          if (((fVar18 < local_f4 || fVar18 < local_f8) || fVar18 < fVar25) || fVar18 < fVar26) {
            iVar12 = (int)uVar13;
            uVar16 = uVar9;
            iVar7 = iVar17;
            fVar25 = fVar18;
            fVar26 = fVar18;
            local_110 = fVar42;
            local_10c = fVar44;
            local_108 = fVar47;
            local_104 = fVar48;
            local_100 = fVar51;
            local_fc = fVar50;
            local_f8 = fVar18;
            local_f4 = fVar18;
          }
          if (uVar3 == uVar13) break;
          uVar49 = *(undefined8 *)((long)(this + uVar13 * 0x10 + 0xa4) + 8);
          uVar45 = *(undefined8 *)(this + uVar13 * 0x10 + 0xa4);
          uVar13 = uVar13 + 1;
          auVar30._0_4_ = fVar27 + (float)uVar45;
          auVar30._4_4_ = fVar31 + (float)((ulong)uVar45 >> 0x20);
          auVar30._8_4_ = auVar29._8_4_ + (float)uVar49;
          auVar30._12_4_ = fVar32 + (float)((ulong)uVar49 >> 0x20);
          auVar29 = auVar30;
        }
        uVar13 = uVar6 + 1;
        fVar24 = fVar24 + *(float *)(this + uVar6 * 0x10 + 0xa8);
        fVar23 = fVar23 + *(float *)(this + uVar6 * 0x10 + 0xb0);
        fVar21 = fVar21 + *(float *)(this + uVar6 * 0x10 + 0xac);
        fVar22 = fVar22 + *(float *)(this + uVar6 * 0x10 + 0xa4);
        uVar6 = uVar13;
      } while (uVar13 != uVar3);
    }
    if (iVar7 != iVar17) break;
    iVar1 = iVar17 + 1;
    if (iVar1 == *(int *)(this + 0x14)) {
      fVar21 = *(float *)(this + 0x1c4);
      iVar7 = iVar17;
      goto joined_r0x00dea164;
    }
    local_c0 = local_fc - local_100;
    fStack_bc = local_104 - local_10c;
    local_b8 = local_108 - local_110;
    uVar6 = ConstructOrdering(this,(Vec3 *)&local_c0,iVar1);
    iVar7 = iVar17;
  } while ((uVar6 & 1) != 0);
  fVar21 = *(float *)(this + 0x1c4);
joined_r0x00dea164:
  if ((((fVar21 <= local_f4) && (*(float *)(this + 0x1c8) <= local_f8)) &&
      (*(float *)(this + 0x1cc) <= fVar25)) && (*(float *)(this + 0x1d0) <= fVar26))
  goto LAB_00dea380;
  lVar8 = (long)(iVar7 << 4);
  if (0 < (int)uVar16) {
    uVar6 = (ulong)uVar16;
    if (uVar16 == 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar6 & 0xfffffffe;
      pCVar11 = this + lVar8 + 0x25;
      uVar13 = uVar14;
      do {
        uVar13 = uVar13 - 2;
        CVar4 = *pCVar11;
        auStack_d0[(byte)pCVar11[-1]] = '\0';
        auStack_d0[(byte)CVar4] = '\0';
        pCVar11 = pCVar11 + 2;
      } while (uVar13 != 0);
      if (uVar14 == uVar6) goto LAB_00dea210;
    }
    lVar10 = uVar6 - uVar14;
    pCVar11 = this + uVar14 + lVar8 + 0x24;
    do {
      lVar10 = lVar10 + -1;
      auStack_d0[(byte)*pCVar11] = '\0';
      pCVar11 = pCVar11 + 1;
    } while (lVar10 != 0);
  }
LAB_00dea210:
  if ((int)uVar16 < iVar12) {
    lVar15 = (long)(int)uVar16;
    uVar6 = iVar12 - lVar15;
    lVar10 = lVar15;
    if (1 < uVar6) {
      uVar14 = uVar6 & 0xfffffffffffffffe;
      lVar10 = uVar14 + lVar15;
      pCVar11 = this + lVar15 + lVar8 + 0x25;
      uVar13 = uVar14;
      do {
        uVar13 = uVar13 - 2;
        CVar4 = *pCVar11;
        auStack_d0[(byte)pCVar11[-1]] = '\x02';
        auStack_d0[(byte)CVar4] = '\x02';
        pCVar11 = pCVar11 + 2;
      } while (uVar13 != 0);
      if (uVar6 == uVar14) goto LAB_00dea298;
    }
    lVar15 = iVar12 - lVar10;
    pCVar11 = this + lVar10 + lVar8 + 0x24;
    do {
      lVar15 = lVar15 + -1;
      auStack_d0[(byte)*pCVar11] = '\x02';
      pCVar11 = pCVar11 + 1;
    } while (lVar15 != 0);
  }
LAB_00dea298:
  if (iVar12 < (int)uVar3) {
    lVar15 = (long)iVar12;
    uVar6 = (int)uVar3 - lVar15;
    lVar10 = lVar15;
    if (1 < uVar6) {
      uVar14 = uVar6 & 0xfffffffffffffffe;
      lVar10 = uVar14 + lVar15;
      pCVar11 = this + lVar15 + lVar8 + 0x25;
      uVar13 = uVar14;
      do {
        uVar13 = uVar13 - 2;
        CVar4 = *pCVar11;
        auStack_d0[(byte)pCVar11[-1]] = '\x01';
        auStack_d0[(byte)CVar4] = '\x01';
        pCVar11 = pCVar11 + 2;
      } while (uVar13 != 0);
      if (uVar6 == uVar14) goto LAB_00dea31c;
    }
    lVar15 = (int)uVar3 - lVar10;
    pCVar11 = this + lVar10 + lVar8 + 0x24;
    do {
      lVar15 = lVar15 + -1;
      auStack_d0[(byte)*pCVar11] = '\x01';
      pCVar11 = pCVar11 + 1;
    } while (lVar15 != 0);
  }
LAB_00dea31c:
  ColourSet::RemapIndices(*(ColourSet **)(this + 8),auStack_d0,(uchar *)&local_c0);
  local_e0 = local_100;
  fStack_dc = local_10c;
  local_d8 = local_110;
  local_f0 = local_fc;
  fStack_ec = local_104;
  local_e8 = local_108;
  WriteColourBlock3((Vec3 *)&local_e0,(Vec3 *)&local_f0,(uchar *)&local_c0,param_1);
  *(float *)(this + 0x1cc) = fVar25;
  *(float *)(this + 0x1d0) = fVar26;
  *(float *)(this + 0x1c4) = local_f4;
  *(float *)(this + 0x1c8) = local_f8;
LAB_00dea380:
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


