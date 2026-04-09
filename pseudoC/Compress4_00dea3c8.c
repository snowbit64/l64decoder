// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress4
// Entry Point: 00dea3c8
// Size: 2228 bytes
// Signature: undefined __thiscall Compress4(ClusterFit * this, void * param_1)


/* squish::ClusterFit::Compress4(void*) */

void __thiscall squish::ClusterFit::Compress4(ClusterFit *this,void *param_1)

{
  uint uVar1;
  ClusterFit CVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ClusterFit *pCVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_108;
  float fStack_104;
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
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  uVar1 = **(uint **)(this + 8);
  uVar19 = (ulong)uVar1;
  ConstructOrdering(this,(Vec3 *)(this + 0x18),0);
  local_f4 = *(float *)(this + 0x1c4);
  local_f8 = *(float *)(this + 0x1c8);
  local_fc = *(float *)(this + 0x1cc);
  local_100 = *(float *)(this + 0x1d0);
  uVar6 = 0;
  uVar8 = 0;
  uVar18 = 0;
  local_140 = 0.0;
  local_148 = 0.0;
  local_14c = 0.0;
  local_144 = 0.0;
  local_150 = 0.0;
  local_154 = 0.0;
  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar10 = iVar5;
    if (0 < (int)uVar1) {
      fVar41 = 0.0;
      local_108 = 0.0;
      fStack_104 = 0.0;
      fVar20 = 0.0;
      uVar4 = 0;
      do {
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
        fVar45 = 0.0;
        uVar14 = uVar4;
        while( true ) {
          uVar13 = (uint)uVar14;
          if (uVar13 < 2) {
            uVar13 = 1;
          }
          uVar15 = (ulong)uVar13;
          fVar46 = *(float *)(this + 0xa8);
          if (uVar14 != 0) {
            fVar46 = 0.0;
          }
          uVar48 = CONCAT44(*(undefined4 *)(this + 0xa4),(int)*(undefined8 *)(this + 0xac)) &
                   -(ulong)(uVar14 == 0);
          fVar50 = *(float *)(this + 0xb0);
          if (uVar14 != 0) {
            fVar50 = 0.0;
          }
          pfVar16 = (float *)(this + uVar15 * 0x10 + 0xb0);
          while( true ) {
            fVar47 = (float)uVar48;
            fVar49 = (float)(uVar48 >> 0x20);
            fVar32 = (fVar43 + fVar50) * 0.2222222;
            fVar38 = fVar41 + fVar42 * 0.6666667 + fVar46 * 0.3333333;
            fVar24 = fVar43 * 0.1111111 +
                     fVar50 * 0.4444444 + (((*(float *)(this + 0x1b0) - fVar50) - fVar43) - fVar20);
            fVar21 = fVar20 + fVar43 * 0.4444444 + fVar50 * 0.1111111;
            fVar31 = 1.0 / (fVar21 * fVar24 - fVar32 * fVar32);
            fVar36 = local_108 + fVar44 * 0.6666667 + fVar47 * 0.3333333;
            fVar37 = fStack_104 + fVar45 * 0.6666667 + fVar49 * 0.3333333;
            fVar34 = fVar44 * 0.3333333 +
                     fVar47 * 0.6666667 +
                     ((((float)*(undefined8 *)(this + 0x1ac) - fVar47) - fVar44) - local_108);
            fVar35 = fVar45 * 0.3333333 +
                     fVar49 * 0.6666667 +
                     (((*(float *)(this + 0x1a4) - fVar49) - fVar45) - fStack_104);
            fVar33 = fVar42 * 0.3333333 +
                     fVar46 * 0.6666667 + (((*(float *)(this + 0x1a8) - fVar46) - fVar42) - fVar41);
            uVar30 = NEON_fmov(0x3f800000,4);
            uVar40 = NEON_fmov(0x41f80000,4);
            fVar23 = (fVar38 * fVar24 - fVar32 * fVar33) * fVar31;
            fVar28 = (fVar21 * fVar33 - fVar38 * fVar32) * fVar31;
            if (fVar23 <= 0.0) {
              fVar23 = 0.0;
            }
            uVar22 = NEON_fmaxnm(CONCAT44((fVar37 * fVar24 - fVar35 * fVar32) * fVar31,
                                          (fVar36 * fVar24 - fVar34 * fVar32) * fVar31),0,4);
            uVar26 = NEON_fmaxnm(CONCAT44((fVar35 * fVar21 - fVar37 * fVar32) * fVar31,
                                          (fVar34 * fVar21 - fVar36 * fVar32) * fVar31),0,4);
            if (fVar28 <= 0.0) {
              fVar28 = 0.0;
            }
            fVar31 = (float)NEON_fminnm(fVar23,0x3f800000);
            uVar22 = NEON_fminnm(uVar22,uVar30,4);
            uVar30 = NEON_fminnm(uVar26,uVar30,4);
            fVar29 = (float)NEON_fminnm(fVar28,0x3f800000);
            fVar27 = (float)((ulong)uVar40 >> 0x20);
            fVar23 = (float)uVar22 * (float)uVar40 + 0.5;
            fVar28 = (float)((ulong)uVar22 >> 0x20) * fVar27 + 0.5;
            fVar25 = (float)uVar30 * (float)uVar40 + 0.5;
            fVar27 = (float)((ulong)uVar30 >> 0x20) * fVar27 + 0.5;
            uVar30 = NEON_fcmgt(CONCAT44(fVar28,fVar23),0,4);
            uVar40 = NEON_fcmgt(CONCAT44(fVar27,fVar25),0,4);
            uVar30 = NEON_bit(CONCAT44((int)fVar28,(int)fVar23),CONCAT44((int)fVar28,(int)fVar23),
                              uVar30,1);
            uVar40 = NEON_bsl(uVar40,CONCAT44((int)fVar27,(int)fVar25),
                              CONCAT44((int)fVar27,(int)fVar25),1);
            fVar25 = (float)uVar30 * 0.03225806;
            fVar27 = (float)((ulong)uVar30 >> 0x20) * 0.03225806;
            fVar23 = (float)uVar40 * 0.03225806;
            fVar28 = (float)((ulong)uVar40 >> 0x20) * 0.03225806;
            fVar39 = (float)(int)(fVar31 * 63.0 + 0.5) * 0.01587302;
            fVar31 = (float)(int)(fVar29 * 63.0 + 0.5) * 0.01587302;
            fVar34 = (fVar25 * fVar23 * fVar32 - fVar36 * fVar25) - fVar34 * fVar23;
            fVar35 = (fVar27 * fVar28 * fVar32 - fVar37 * fVar27) - fVar35 * fVar28;
            fVar32 = (fVar32 * fVar39 * fVar31 - fVar38 * fVar39) - fVar33 * fVar31;
            fVar21 = (float)*(undefined8 *)(this + 0x1bc) *
                     (fVar25 * fVar25 * fVar21 + fVar23 * fVar23 * fVar24 + fVar34 + fVar34) +
                     *(float *)(this + 0x1b4) *
                     (fVar27 * fVar27 * fVar21 + fVar28 * fVar28 * fVar24 + fVar35 + fVar35) +
                     *(float *)(this + 0x1b8) *
                     (fVar21 * fVar39 * fVar39 + fVar24 * fVar31 * fVar31 + fVar32 + fVar32);
            if (((fVar21 < local_f4 || fVar21 < local_f8) || fVar21 < local_fc) ||
                fVar21 < local_100) {
              uVar6 = uVar15 & 0xffffffff;
              uVar8 = uVar14 & 0xffffffff;
              uVar18 = uVar4 & 0xffffffff;
              iVar7 = iVar10;
              local_154 = fVar25;
              local_150 = fVar39;
              local_14c = fVar23;
              local_148 = fVar31;
              local_144 = fVar27;
              local_140 = fVar28;
              local_100 = fVar21;
              local_fc = fVar21;
              local_f8 = fVar21;
              local_f4 = fVar21;
            }
            if (uVar19 == uVar15) break;
            uVar15 = uVar15 + 1;
            fVar46 = fVar46 + pfVar16[-2];
            fVar50 = fVar50 + *pfVar16;
            uVar48 = CONCAT44(fVar49 + pfVar16[-3],fVar47 + pfVar16[-1]);
            pfVar16 = pfVar16 + 4;
          }
          if (uVar14 == uVar19) break;
          fVar42 = fVar42 + *(float *)(this + uVar14 * 0x10 + 0xa8);
          fVar43 = fVar43 + *(float *)(this + uVar14 * 0x10 + 0xb0);
          fVar44 = fVar44 + *(float *)(this + uVar14 * 0x10 + 0xac);
          fVar45 = fVar45 + *(float *)(this + uVar14 * 0x10 + 0xa4);
          uVar14 = uVar14 + 1;
        }
        uVar14 = uVar4 + 1;
        fVar41 = fVar41 + *(float *)(this + uVar4 * 0x10 + 0xa8);
        local_108 = local_108 + *(float *)(this + uVar4 * 0x10 + 0xac);
        fStack_104 = fStack_104 + *(float *)(this + uVar4 * 0x10 + 0xa4);
        fVar20 = fVar20 + *(float *)(this + uVar4 * 0x10 + 0xb0);
        uVar4 = uVar14;
      } while (uVar14 != uVar19);
    }
    if (iVar7 != iVar10) break;
    iVar5 = iVar10 + 1;
    if (iVar5 == *(int *)(this + 0x14)) {
      fVar20 = *(float *)(this + 0x1c4);
      iVar7 = iVar10;
      goto joined_r0x00dea974;
    }
    local_c0 = local_140 - local_144;
    fStack_bc = local_148 - local_150;
    local_b8 = local_14c - local_154;
    uVar4 = ConstructOrdering(this,(Vec3 *)&local_c0,iVar5);
    iVar7 = iVar10;
  } while ((uVar4 & 1) != 0);
  fVar20 = *(float *)(this + 0x1c4);
joined_r0x00dea974:
  if ((((fVar20 <= local_f4) && (*(float *)(this + 0x1c8) <= local_f8)) &&
      (*(float *)(this + 0x1cc) <= local_fc)) && (*(float *)(this + 0x1d0) <= local_100))
  goto LAB_00deac34;
  lVar9 = (long)(iVar7 << 4);
  iVar5 = (int)uVar18;
  if (0 < iVar5) {
    if (iVar5 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar18 & 0xfffffffe;
      pCVar12 = this + lVar9 + 0x25;
      uVar19 = uVar4;
      do {
        uVar19 = uVar19 - 2;
        CVar2 = *pCVar12;
        auStack_d0[(byte)pCVar12[-1]] = '\0';
        auStack_d0[(byte)CVar2] = '\0';
        pCVar12 = pCVar12 + 2;
      } while (uVar19 != 0);
      if (uVar4 == uVar18) goto LAB_00deaa28;
    }
    lVar11 = uVar18 - uVar4;
    pCVar12 = this + uVar4 + lVar9 + 0x24;
    do {
      lVar11 = lVar11 + -1;
      auStack_d0[(byte)*pCVar12] = '\0';
      pCVar12 = pCVar12 + 1;
    } while (lVar11 != 0);
  }
LAB_00deaa28:
  iVar7 = (int)uVar8;
  if (iVar5 < iVar7) {
    lVar17 = (long)iVar5;
    uVar8 = iVar7 - lVar17;
    lVar11 = lVar17;
    if (1 < uVar8) {
      uVar19 = uVar8 & 0xfffffffffffffffe;
      lVar11 = uVar19 + lVar17;
      pCVar12 = this + lVar17 + lVar9 + 0x25;
      uVar18 = uVar19;
      do {
        uVar18 = uVar18 - 2;
        CVar2 = *pCVar12;
        auStack_d0[(byte)pCVar12[-1]] = '\x02';
        auStack_d0[(byte)CVar2] = '\x02';
        pCVar12 = pCVar12 + 2;
      } while (uVar18 != 0);
      if (uVar8 == uVar19) goto LAB_00deaab0;
    }
    lVar17 = iVar7 - lVar11;
    pCVar12 = this + lVar11 + lVar9 + 0x24;
    do {
      lVar17 = lVar17 + -1;
      auStack_d0[(byte)*pCVar12] = '\x02';
      pCVar12 = pCVar12 + 1;
    } while (lVar17 != 0);
  }
LAB_00deaab0:
  iVar5 = (int)uVar6;
  if (iVar7 < iVar5) {
    lVar17 = (long)iVar7;
    uVar6 = iVar5 - lVar17;
    lVar11 = lVar17;
    if (1 < uVar6) {
      uVar18 = uVar6 & 0xfffffffffffffffe;
      lVar11 = uVar18 + lVar17;
      pCVar12 = this + lVar17 + lVar9 + 0x25;
      uVar8 = uVar18;
      do {
        uVar8 = uVar8 - 2;
        CVar2 = *pCVar12;
        auStack_d0[(byte)pCVar12[-1]] = '\x03';
        auStack_d0[(byte)CVar2] = '\x03';
        pCVar12 = pCVar12 + 2;
      } while (uVar8 != 0);
      if (uVar6 == uVar18) goto LAB_00deab3c;
    }
    lVar17 = iVar5 - lVar11;
    pCVar12 = this + lVar11 + lVar9 + 0x24;
    do {
      lVar17 = lVar17 + -1;
      auStack_d0[(byte)*pCVar12] = '\x03';
      pCVar12 = pCVar12 + 1;
    } while (lVar17 != 0);
  }
LAB_00deab3c:
  if (iVar5 < (int)uVar1) {
    lVar17 = (long)iVar5;
    uVar6 = (int)uVar1 - lVar17;
    lVar11 = lVar17;
    if (1 < uVar6) {
      uVar18 = uVar6 & 0xfffffffffffffffe;
      lVar11 = uVar18 + lVar17;
      pCVar12 = this + lVar17 + lVar9 + 0x25;
      uVar8 = uVar18;
      do {
        uVar8 = uVar8 - 2;
        CVar2 = *pCVar12;
        auStack_d0[(byte)pCVar12[-1]] = '\x01';
        auStack_d0[(byte)CVar2] = '\x01';
        pCVar12 = pCVar12 + 2;
      } while (uVar8 != 0);
      if (uVar6 == uVar18) goto LAB_00deabc4;
    }
    lVar17 = (int)uVar1 - lVar11;
    pCVar12 = this + lVar11 + lVar9 + 0x24;
    do {
      lVar17 = lVar17 + -1;
      auStack_d0[(byte)*pCVar12] = '\x01';
      pCVar12 = pCVar12 + 1;
    } while (lVar17 != 0);
  }
LAB_00deabc4:
  ColourSet::RemapIndices(*(ColourSet **)(this + 8),auStack_d0,(uchar *)&local_c0);
  local_e0 = local_144;
  fStack_dc = local_150;
  local_d8 = local_154;
  local_f0 = local_140;
  fStack_ec = local_148;
  local_e8 = local_14c;
  WriteColourBlock4((Vec3 *)&local_e0,(Vec3 *)&local_f0,(uchar *)&local_c0,param_1);
  *(float *)(this + 0x1c4) = local_f4;
  *(float *)(this + 0x1c8) = local_f8;
  *(float *)(this + 0x1cc) = local_fc;
  *(float *)(this + 0x1d0) = local_100;
LAB_00deac34:
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


