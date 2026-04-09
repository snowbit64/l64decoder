// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAdjustInternalEdgeContacts
// Entry Point: 00f54ba8
// Size: 3888 bytes
// Signature: undefined __cdecl btAdjustInternalEdgeContacts(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, int param_4, int param_5, int param_6)


/* btAdjustInternalEdgeContacts(btManifoldPoint&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, int, int, int) */

void btAdjustInternalEdgeContacts
               (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,
               btCollisionObjectWrapper *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
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
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float fStack_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float fStack_138;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  plVar15 = *(long **)(param_2 + 8);
  if (*(int *)(plVar15 + 1) == 1) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x10) + 200);
    if (*(int *)(lVar8 + 8) == 0x16) {
      lVar8 = *(long *)(lVar8 + 0x30);
    }
    lVar8 = *(long *)(lVar8 + 0x50);
    if (lVar8 != 0) {
      uVar4 = param_5 | param_4 << 0x15;
      uVar1 = uVar4 + (param_5 << 0xf ^ 0xffffffffU);
      uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
      uVar1 = uVar1 ^ (int)uVar1 >> 6;
      uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
      uVar1 = *(int *)(lVar8 + 0x50) - 1U & (uVar1 ^ (int)uVar1 >> 0x10);
      if ((uVar1 < *(uint *)(lVar8 + 0xc)) &&
         (iVar11 = *(int *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar1 * 4), iVar11 != -1)) {
        do {
          lVar17 = (long)iVar11;
          if (uVar4 == *(uint *)(*(long *)(lVar8 + 0x78) + (long)iVar11 * 4)) {
            lVar18 = *(long *)(lVar8 + 0x58);
            if (lVar18 == 0) break;
            fVar21 = 1.0;
            if ((param_6 & 1U) != 0) {
              fVar21 = -1.0;
            }
            (**(code **)(*plVar15 + 0xd8))(plVar15,0,&local_c0);
            (**(code **)(*plVar15 + 0xd8))(plVar15,1,&local_d0);
            (**(code **)(*plVar15 + 0xd8))(plVar15,2,&local_e0);
            local_e4 = 0;
            fVar22 = *(float *)((long)plVar15 + 100) - *(float *)((long)plVar15 + 0x54);
            fVar19 = *(float *)(plVar15 + 0xc) - *(float *)(plVar15 + 10);
            fVar29 = *(float *)(plVar15 + 0xe) - *(float *)(plVar15 + 10);
            fVar26 = *(float *)((long)plVar15 + 0x74) - *(float *)((long)plVar15 + 0x54);
            fVar24 = *(float *)(plVar15 + 0xd) - *(float *)(plVar15 + 0xb);
            fVar30 = *(float *)(plVar15 + 0xf) - *(float *)(plVar15 + 0xb);
            fVar35 = (float)NEON_fnmsub(fVar26,fVar19,fVar29 * fVar22);
            fVar22 = (float)NEON_fnmsub(fVar30,fVar22,fVar26 * fVar24);
            fVar24 = (float)NEON_fnmsub(fVar29,fVar24,fVar30 * fVar19);
            uVar20 = NEON_fmadd(fVar22,fVar22,fVar35 * fVar35);
            fVar19 = (float)NEON_fmadd(fVar24,fVar24,uVar20);
            fVar29 = local_d0 - local_c0;
            fVar30 = fStack_cc - fStack_bc;
            uVar20 = NEON_fmadd(fVar30,fVar30,fVar29 * fVar29);
            fVar26 = 1.0 / SQRT(fVar19);
            fVar19 = *(float *)(param_1 + 0x10);
            fVar41 = local_c8 - local_b8;
            fVar42 = (float)NEON_fmadd(fVar41,fVar41,uVar20);
            fVar22 = fVar26 * fVar22;
            fVar24 = fVar26 * fVar24;
            fVar26 = fVar26 * fVar35;
            if (1.421085e-14 <= fVar42) {
              fVar33 = *(float *)(param_1 + 0x14);
              fVar34 = *(float *)(param_1 + 0x18);
              uVar20 = NEON_fmadd(fVar33 - fStack_bc,fVar30,(fVar19 - local_c0) * fVar29);
              fVar36 = (float)NEON_fmadd(fVar34 - local_b8,fVar41,uVar20);
              fVar36 = fVar36 / fVar42;
              fVar35 = 0.0;
              if ((0.0 <= fVar36) && (fVar35 = fVar36, 1.0 < fVar36)) {
                fVar35 = 1.0;
              }
              fVar36 = (float)NEON_fmadd(fVar35,fVar29,local_c0);
              fVar40 = (float)NEON_fmadd(fVar35,fVar30,fStack_bc);
              fVar35 = (float)NEON_fmadd(fVar35,fVar41,local_b8);
            }
            else {
              fVar33 = *(float *)(param_1 + 0x14);
              fVar34 = *(float *)(param_1 + 0x18);
              fVar36 = local_c0;
              fVar40 = fStack_bc;
              fVar35 = local_b8;
            }
            pfVar9 = *(float **)(param_2 + 0x18);
            lVar2 = lVar18 + lVar17 * 0x10;
            local_f4 = 0;
            pfVar12 = (float *)(param_1 + 0x40);
            fVar38 = *pfVar12;
            fVar37 = *(float *)(param_1 + 0x44);
            fVar48 = *(float *)(param_1 + 0x48);
            uVar20 = NEON_fmadd(fVar37,pfVar9[4],fVar38 * *pfVar9);
            fVar44 = (float)*(undefined8 *)(pfVar9 + 1) * fVar38 +
                     (float)*(undefined8 *)(pfVar9 + 5) * fVar37 +
                     (float)*(undefined8 *)(pfVar9 + 9) * fVar48;
            fVar47 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20) * fVar38 +
                     (float)((ulong)*(undefined8 *)(pfVar9 + 5) >> 0x20) * fVar37 +
                     (float)((ulong)*(undefined8 *)(pfVar9 + 9) >> 0x20) * fVar48;
            fVar39 = *(float *)(lVar8 + 0x98);
            fVar37 = (float)NEON_fmadd(fVar48,pfVar9[8],uVar20);
            fVar38 = (float)NEON_fmadd(fVar37,fVar37,fVar44 * fVar44);
            fVar48 = 1.0 / SQRT(fVar38 + fVar47 * fVar47);
            pfVar9 = (float *)(lVar2 + 4);
            fVar38 = *pfVar9;
            fVar37 = fVar48 * fVar37;
            fVar44 = fVar44 * fVar48;
            fVar47 = fVar47 * fVar48;
            local_fc = CONCAT44(fVar47,fVar44);
            if (fVar39 <= ABS(fVar38)) {
              iVar11 = -1;
              fVar29 = 1e+18;
            }
            else {
              fVar48 = fStack_bc;
              fVar45 = local_b8;
              fVar43 = local_c0;
              if (1.421085e-14 <= fVar42) {
                uVar20 = NEON_fmadd(fVar33 - fStack_bc,fVar30,(fVar19 - local_c0) * fVar29);
                fVar48 = (float)NEON_fmadd(fVar34 - local_b8,fVar41,uVar20);
                fVar48 = fVar48 / fVar42;
                fVar42 = 0.0;
                if ((0.0 <= fVar48) && (fVar42 = fVar48, 1.0 < fVar48)) {
                  fVar42 = 1.0;
                }
                fVar43 = (float)NEON_fmadd(fVar42,fVar29,local_c0);
                fVar48 = (float)NEON_fmadd(fVar42,fVar30,fStack_bc);
                fVar45 = (float)NEON_fmadd(fVar42,fVar41,local_b8);
              }
              uVar20 = NEON_fmadd(fVar33 - fVar48,fVar33 - fVar48,
                                  (fVar19 - fVar43) * (fVar19 - fVar43));
              fVar30 = (float)NEON_fmadd(fVar34 - fVar45,fVar34 - fVar45,uVar20);
              fVar29 = (float)NEON_fminnm(SQRT(fVar30),0x5d5e0b6b);
              iVar11 = -(uint)(1e+18 <= SQRT(fVar30));
            }
            pfVar16 = (float *)(lVar2 + 8);
            fVar30 = fVar29;
            if (ABS(*pfVar16) < fVar39) {
              fVar45 = local_e0 - local_d0;
              fVar48 = fStack_dc - fStack_cc;
              fVar43 = local_d8 - local_c8;
              uVar20 = NEON_fmadd(fVar48,fVar48,fVar45 * fVar45);
              fVar46 = (float)NEON_fmadd(fVar43,fVar43,uVar20);
              fVar30 = local_c8;
              fVar41 = fStack_cc;
              fVar42 = local_d0;
              if (1.421085e-14 <= fVar46) {
                uVar20 = NEON_fmadd(fVar33 - fStack_cc,fVar48,(fVar19 - local_d0) * fVar45);
                fVar41 = (float)NEON_fmadd(fVar34 - local_c8,fVar43,uVar20);
                fVar41 = fVar41 / fVar46;
                fVar30 = 0.0;
                if ((0.0 <= fVar41) && (fVar30 = fVar41, 1.0 < fVar41)) {
                  fVar30 = 1.0;
                }
                fVar42 = (float)NEON_fmadd(fVar30,fVar45,local_d0);
                fVar41 = (float)NEON_fmadd(fVar30,fVar48,fStack_cc);
                fVar30 = (float)NEON_fmadd(fVar30,fVar43,local_c8);
              }
              uVar20 = NEON_fmadd(fVar33 - fVar41,fVar33 - fVar41,
                                  (fVar19 - fVar42) * (fVar19 - fVar42));
              fVar41 = (float)NEON_fmadd(fVar34 - fVar30,fVar34 - fVar30,uVar20);
              fVar30 = (float)NEON_fminnm(SQRT(fVar41),fVar29);
              if (SQRT(fVar41) < fVar29) {
                iVar11 = 1;
              }
            }
            puVar3 = (uint *)(lVar18 + lVar17 * 0x10);
            pfVar13 = (float *)(lVar18 + lVar17 * 0x10 + 0xc);
            iVar14 = iVar11;
            if (ABS(*pfVar13) < fVar39) {
              fVar45 = local_c0 - local_e0;
              fVar48 = fStack_bc - fStack_dc;
              fVar43 = local_b8 - local_d8;
              uVar20 = NEON_fmadd(fVar48,fVar48,fVar45 * fVar45);
              fVar46 = (float)NEON_fmadd(fVar43,fVar43,uVar20);
              fVar29 = local_e0;
              fVar41 = fStack_dc;
              fVar42 = local_d8;
              if (1.421085e-14 <= fVar46) {
                uVar20 = NEON_fmadd(fVar33 - fStack_dc,fVar48,(fVar19 - local_e0) * fVar45);
                fVar29 = (float)NEON_fmadd(fVar34 - local_d8,fVar43,uVar20);
                fVar29 = fVar29 / fVar46;
                fVar42 = 0.0;
                if ((0.0 <= fVar29) && (fVar42 = fVar29, 1.0 < fVar29)) {
                  fVar42 = 1.0;
                }
                fVar29 = (float)NEON_fmadd(fVar42,fVar45,local_e0);
                fVar41 = (float)NEON_fmadd(fVar42,fVar48,fStack_dc);
                fVar42 = (float)NEON_fmadd(fVar42,fVar43,local_d8);
              }
              uVar20 = NEON_fmadd(fVar33 - fVar41,fVar33 - fVar41,
                                  (fVar19 - fVar29) * (fVar19 - fVar29));
              fVar29 = (float)NEON_fmadd(fVar34 - fVar42,fVar34 - fVar42,uVar20);
              iVar14 = 2;
              if (fVar30 <= SQRT(fVar29)) {
                iVar14 = iVar11;
              }
            }
            iVar11 = 0;
            local_100 = fVar37;
            local_f0 = fVar22;
            fStack_ec = fVar24;
            fStack_e8 = fVar26;
            if (fVar39 <= ABS(fVar38)) {
              bVar6 = false;
            }
            else {
              if (iVar14 == 0) {
                uVar20 = NEON_fmadd(fVar33 - fVar40,fVar33 - fVar40,
                                    (fVar19 - fVar36) * (fVar19 - fVar36));
                fVar29 = (float)NEON_fmadd(fVar34 - fVar35,fVar34 - fVar35,uVar20);
                if (SQRT(fVar29) < *(float *)(lVar8 + 0x94)) {
                  fVar29 = local_c0 - local_d0;
                  fVar30 = fStack_bc - fStack_cc;
                  fVar35 = local_b8 - local_c8;
                  local_154 = 0;
                  local_160 = fVar29;
                  local_15c = fVar30;
                  fStack_158 = fVar35;
                  if (fVar38 == 0.0) {
                    iVar11 = 1;
                  }
                  else {
                    uVar20 = NEON_fmadd(fVar30,fVar30,fVar29 * fVar29);
                    fVar42 = (float)NEON_fmadd(fVar35,fVar35,uVar20);
                    fVar41 = -1.0;
                    if ((*puVar3 & 1) != 0) {
                      fVar41 = 1.0;
                    }
                    sincosf(fVar38 * 0.5,&fStack_174,&local_178);
                    fStack_174 = fStack_174 / SQRT(fVar42);
                    fVar29 = fStack_174 * fVar29;
                    fVar30 = fStack_174 * fVar30;
                    local_108 = fStack_174 * fVar35;
                    local_104 = local_178;
                    local_110 = fVar29;
                    fStack_10c = fVar30;
                    fVar35 = (float)quatRotate((btQuaternion *)&local_110,(btVector3 *)&local_f0);
                    bVar6 = (*puVar3 & 8) != 0;
                    if (bVar6) {
                      fVar29 = -fVar29;
                      fVar30 = -fVar30;
                    }
                    if (bVar6) {
                      fVar35 = -fVar35;
                    }
                    uVar23 = NEON_rev64(CONCAT44(fVar30 * fVar47,fVar24 * fVar44),4);
                    uVar23 = NEON_fcmgt(CONCAT44(*(undefined4 *)(lVar8 + 0x88),
                                                 *(undefined4 *)(lVar8 + 0x88)),
                                        CONCAT44(((float)((ulong)uVar23 >> 0x20) + fVar47 * fVar26 +
                                                 fVar22 * fVar37) * fVar41,
                                                 ((float)uVar23 + fVar44 * fVar29 + fVar35 * fVar37)
                                                 * fVar41),4);
                    if (((uint)((ulong)uVar23 >> 0x20) & (uint)uVar23 & 1) == 0) {
                      uVar23 = CONCAT44(fStack_ec * fVar41,local_f0 * fVar41);
                      fVar22 = fStack_e8 * fVar41;
                      local_124 = 0.0;
                      local_130 = uVar23;
                      local_128 = fVar22;
                      uVar7 = btClampNormal((btVector3 *)&local_160,(btVector3 *)&local_130,
                                            (btVector3 *)&local_100,*pfVar9,(btVector3 *)&local_120)
                      ;
                      if (((uVar7 & 1) != 0) &&
                         ((fVar24 = (float)uVar23, ((uint)param_6 >> 2 & 1) != 0 ||
                          (fVar26 = (float)NEON_fmadd(local_120,local_f0,local_11c * fStack_ec),
                          fVar22 = fVar21, fVar24 = local_f0,
                          0.0 < (fVar26 + fStack_118 * fStack_e8) * fVar21)))) {
                        uVar20 = operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_120
                                          );
                        fVar26 = *(float *)(param_1 + 0x50);
                        uVar25 = NEON_fmsub(fVar26,uVar20,*(undefined4 *)(param_1 + 0x30));
                        *(undefined4 *)(param_1 + 0x20) = uVar25;
                        *(undefined4 *)(param_1 + 0x40) = uVar20;
                        *(float *)(param_1 + 0x44) = fVar22;
                        *(float *)(param_1 + 0x48) = fVar24;
                        *(float *)(param_1 + 0x4c) = fVar41;
                        *(undefined4 *)(param_1 + 0x2c) = 0;
                        *(ulong *)(param_1 + 0x24) =
                             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                                      fVar24 * fVar26,
                                      (float)*(undefined8 *)(param_1 + 0x34) - fVar22 * fVar26);
                        uVar20 = btTransform::invXform
                                           (*(btTransform **)(param_2 + 0x18),
                                            (btVector3 *)(param_1 + 0x20));
                        *(undefined4 *)(param_1 + 0x10) = uVar20;
                        *(float *)(param_1 + 0x14) = fVar22;
                        *(float *)(param_1 + 0x18) = fVar24;
                        *(float *)(param_1 + 0x1c) = fVar41;
                      }
                      iVar11 = 0;
                    }
                    else {
                      iVar11 = 1;
                    }
                  }
                  bVar6 = true;
                  goto LAB_00f55304;
                }
              }
              bVar6 = false;
            }
LAB_00f55304:
            fVar35 = fStack_e8;
            fVar30 = fStack_ec;
            fVar29 = local_f0;
            fVar42 = local_e0 - local_d0;
            fVar41 = fStack_dc - fStack_cc;
            fVar36 = local_d8 - local_c8;
            uVar20 = NEON_fmadd(fVar41,fVar41,fVar42 * fVar42);
            fVar40 = (float)NEON_fmadd(fVar36,fVar36,uVar20);
            fVar22 = local_d0;
            fVar24 = local_c8;
            fVar26 = fStack_cc;
            if (1.421085e-14 <= fVar40) {
              uVar20 = NEON_fmadd(fVar33 - fStack_cc,fVar41,(fVar19 - local_d0) * fVar42);
              fVar22 = (float)NEON_fmadd(fVar34 - local_c8,fVar36,uVar20);
              fVar22 = fVar22 / fVar40;
              fVar24 = 0.0;
              if ((0.0 <= fVar22) && (fVar24 = fVar22, 1.0 < fVar22)) {
                fVar24 = 1.0;
              }
              fVar22 = (float)NEON_fmadd(fVar24,fVar42,local_d0);
              fVar26 = (float)NEON_fmadd(fVar24,fVar41,fStack_cc);
              fVar24 = (float)NEON_fmadd(fVar24,fVar36,local_c8);
            }
            fVar41 = *pfVar16;
            if ((ABS(fVar41) < *(float *)(lVar8 + 0x98)) && (iVar14 == 1)) {
              uVar20 = NEON_fmadd(fVar33 - fVar26,fVar33 - fVar26,
                                  (fVar19 - fVar22) * (fVar19 - fVar22));
              fVar22 = (float)NEON_fmadd(fVar34 - fVar24,fVar34 - fVar24,uVar20);
              if (SQRT(fVar22) < *(float *)(lVar8 + 0x94)) {
                fVar24 = local_d0 - local_e0;
                fVar22 = fStack_cc - fStack_dc;
                fVar26 = local_c8 - local_d8;
                local_104 = 0.0;
                local_110 = fVar24;
                fStack_10c = fVar22;
                local_108 = fVar26;
                if (fVar41 == 0.0) {
                  iVar11 = iVar11 + 1;
                }
                else {
                  uVar20 = NEON_fmadd(fVar22,fVar22,fVar24 * fVar24);
                  fVar36 = (float)NEON_fmadd(fVar26,fVar26,uVar20);
                  fVar42 = -1.0;
                  if ((*puVar3 & 2) != 0) {
                    fVar42 = 1.0;
                  }
                  sincosf(fVar41 * 0.5,&fStack_17c,&local_180);
                  fStack_17c = fStack_17c / SQRT(fVar36);
                  fVar24 = fStack_17c * fVar24;
                  fVar22 = fStack_17c * fVar22;
                  fStack_118 = fStack_17c * fVar26;
                  fStack_114 = local_180;
                  local_120 = fVar24;
                  local_11c = fVar22;
                  fVar26 = (float)quatRotate((btQuaternion *)&local_120,(btVector3 *)&local_f0);
                  fVar29 = (float)NEON_fmadd(fVar37,fVar29,fVar44 * fVar30 + fVar47 * fVar35);
                  if ((*puVar3 & 0x10) != 0) {
                    fVar22 = -fVar22;
                    fVar26 = -fVar26;
                    fVar24 = -fVar24;
                  }
                  if ((*(float *)(lVar8 + 0x88) <= fVar29 * fVar42) ||
                     (fVar22 = (float)NEON_fmadd(fVar26,fVar37,fVar24 * fVar44 + fVar22 * fVar47),
                     *(float *)(lVar8 + 0x88) <= fVar22 * fVar42)) {
                    pfVar9 = *(float **)(param_2 + 0x18);
                    local_15c = pfVar9[4];
                    fVar26 = pfVar9[5];
                    fStack_158 = pfVar9[8];
                    fStack_148 = pfVar9[9];
                    local_160 = *pfVar9;
                    local_154 = 0;
                    local_150 = pfVar9[1];
                    local_144 = 0;
                    fVar22 = pfVar9[10];
                    local_140 = pfVar9[2];
                    fVar24 = pfVar9[6];
                    local_134 = 0;
                    local_14c = fVar26;
                    local_13c = fVar24;
                    fStack_138 = fVar22;
                    uVar20 = operator*((btMatrix3x3 *)&local_160,(btVector3 *)pfVar12);
                    local_130 = CONCAT44(fVar24,uVar20);
                    local_170 = CONCAT44(fStack_ec * fVar42,local_f0 * fVar42);
                    fVar42 = fStack_e8 * fVar42;
                    local_164 = 0;
                    local_168 = fVar42;
                    local_128 = fVar22;
                    local_124 = fVar26;
                    uVar7 = btClampNormal((btVector3 *)&local_110,(btVector3 *)&local_170,
                                          (btVector3 *)&local_130,*pfVar16,(btVector3 *)&local_160);
                    if (((uVar7 & 1) != 0) &&
                       ((((uint)param_6 >> 2 & 1) != 0 ||
                        (fVar24 = (float)NEON_fmadd(local_160,local_f0,local_15c * fStack_ec),
                        fVar42 = fVar21, fVar22 = local_f0,
                        0.0 < (fVar24 + fStack_158 * fStack_e8) * fVar21)))) {
                      uVar20 = operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_160);
                      fVar24 = *(float *)(param_1 + 0x50);
                      uVar25 = NEON_fmsub(fVar24,uVar20,*(undefined4 *)(param_1 + 0x30));
                      *(undefined4 *)(param_1 + 0x20) = uVar25;
                      *(float *)(param_1 + 0x44) = fVar42;
                      *(undefined4 *)(param_1 + 0x40) = uVar20;
                      *(float *)(param_1 + 0x48) = fVar22;
                      *(float *)(param_1 + 0x4c) = fVar26;
                      *(undefined4 *)(param_1 + 0x2c) = 0;
                      *(ulong *)(param_1 + 0x24) =
                           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                                    fVar22 * fVar24,
                                    (float)*(undefined8 *)(param_1 + 0x34) - fVar42 * fVar24);
                      uVar20 = btTransform::invXform
                                         (*(btTransform **)(param_2 + 0x18),
                                          (btVector3 *)(param_1 + 0x20));
                      *(undefined4 *)(param_1 + 0x10) = uVar20;
                      *(float *)(param_1 + 0x14) = fVar42;
                      *(float *)(param_1 + 0x18) = fVar22;
                      *(float *)(param_1 + 0x1c) = fVar26;
                    }
                  }
                  else {
                    iVar11 = iVar11 + 1;
                  }
                }
                bVar6 = true;
              }
            }
            fVar35 = fStack_e8;
            fVar30 = fStack_ec;
            fVar29 = local_f0;
            fVar42 = local_c0 - local_e0;
            fVar41 = fStack_bc - fStack_dc;
            fVar36 = local_b8 - local_d8;
            uVar20 = NEON_fmadd(fVar41,fVar41,fVar42 * fVar42);
            fVar40 = (float)NEON_fmadd(fVar36,fVar36,uVar20);
            fVar22 = local_e0;
            fVar24 = local_d8;
            fVar26 = fStack_dc;
            if (1.421085e-14 <= fVar40) {
              uVar20 = NEON_fmadd(fVar33 - fStack_dc,fVar41,(fVar19 - local_e0) * fVar42);
              fVar22 = (float)NEON_fmadd(fVar34 - local_d8,fVar36,uVar20);
              fVar22 = fVar22 / fVar40;
              fVar24 = 0.0;
              if ((0.0 <= fVar22) && (fVar24 = fVar22, 1.0 < fVar22)) {
                fVar24 = 1.0;
              }
              fVar22 = (float)NEON_fmadd(fVar24,fVar42,local_e0);
              fVar26 = (float)NEON_fmadd(fVar24,fVar41,fStack_dc);
              fVar24 = (float)NEON_fmadd(fVar24,fVar36,local_d8);
            }
            fVar41 = *pfVar13;
            if ((ABS(fVar41) < *(float *)(lVar8 + 0x98)) && (iVar14 == 2)) {
              uVar20 = NEON_fmadd(fVar33 - fVar26,fVar33 - fVar26,
                                  (fVar19 - fVar22) * (fVar19 - fVar22));
              fVar19 = (float)NEON_fmadd(fVar34 - fVar24,fVar34 - fVar24,uVar20);
              if (SQRT(fVar19) < *(float *)(lVar8 + 0x94)) {
                fVar22 = local_e0 - local_c0;
                fVar19 = fStack_dc - fStack_bc;
                fVar24 = local_d8 - local_b8;
                local_104 = 0.0;
                local_110 = fVar22;
                fStack_10c = fVar19;
                local_108 = fVar24;
                if (fVar41 == 0.0) {
                  iVar11 = iVar11 + 1;
                }
                else {
                  uVar20 = NEON_fmadd(fVar19,fVar19,fVar22 * fVar22);
                  fVar42 = (float)NEON_fmadd(fVar24,fVar24,uVar20);
                  fVar26 = -1.0;
                  if ((*puVar3 & 4) != 0) {
                    fVar26 = 1.0;
                  }
                  sincosf(fVar41 * 0.5,&fStack_184,&local_188);
                  fStack_184 = fStack_184 / SQRT(fVar42);
                  fVar22 = fStack_184 * fVar22;
                  fVar19 = fStack_184 * fVar19;
                  fStack_118 = fStack_184 * fVar24;
                  fStack_114 = local_188;
                  local_120 = fVar22;
                  local_11c = fVar19;
                  fVar24 = (float)quatRotate((btQuaternion *)&local_120,(btVector3 *)&local_f0);
                  fVar29 = (float)NEON_fmadd(fVar37,fVar29,fVar44 * fVar30 + fVar47 * fVar35);
                  if ((*puVar3 & 0x20) != 0) {
                    fVar24 = -fVar24;
                    fVar19 = -fVar19;
                    fVar22 = -fVar22;
                  }
                  if ((*(float *)(lVar8 + 0x88) <= fVar29 * fVar26) ||
                     (fVar19 = (float)NEON_fmadd(fVar24,fVar37,fVar22 * fVar44 + fVar19 * fVar47),
                     *(float *)(lVar8 + 0x88) <= fVar19 * fVar26)) {
                    pfVar9 = *(float **)(param_2 + 0x18);
                    local_15c = pfVar9[4];
                    fVar24 = pfVar9[5];
                    fStack_158 = pfVar9[8];
                    fStack_148 = pfVar9[9];
                    local_160 = *pfVar9;
                    local_154 = 0;
                    local_150 = pfVar9[1];
                    local_144 = 0;
                    fVar19 = pfVar9[10];
                    local_140 = pfVar9[2];
                    fVar22 = pfVar9[6];
                    local_134 = 0;
                    local_14c = fVar24;
                    local_13c = fVar22;
                    fStack_138 = fVar19;
                    uVar20 = operator*((btMatrix3x3 *)&local_160,(btVector3 *)pfVar12);
                    local_130 = CONCAT44(fVar22,uVar20);
                    local_170 = CONCAT44(fStack_ec * fVar26,local_f0 * fVar26);
                    fVar26 = fStack_e8 * fVar26;
                    local_164 = 0;
                    local_168 = fVar26;
                    local_128 = fVar19;
                    local_124 = fVar24;
                    uVar7 = btClampNormal((btVector3 *)&local_110,(btVector3 *)&local_170,
                                          (btVector3 *)&local_130,*pfVar13,(btVector3 *)&local_160);
                    if (((uVar7 & 1) != 0) &&
                       ((((uint)param_6 >> 2 & 1) != 0 ||
                        (fVar22 = (float)NEON_fmadd(local_160,local_f0,local_15c * fStack_ec),
                        fVar26 = fVar21, fVar19 = local_f0,
                        0.0 < (fVar22 + fStack_158 * fStack_e8) * fVar21)))) {
                      uVar20 = operator*(*(btMatrix3x3 **)(param_2 + 0x18),(btVector3 *)&local_160);
                      fVar22 = *(float *)(param_1 + 0x50);
                      uVar25 = NEON_fmsub(fVar22,uVar20,*(undefined4 *)(param_1 + 0x30));
                      *(undefined4 *)(param_1 + 0x20) = uVar25;
                      *(undefined4 *)(param_1 + 0x40) = uVar20;
                      *(float *)(param_1 + 0x44) = fVar26;
                      *(float *)(param_1 + 0x48) = fVar19;
                      *(float *)(param_1 + 0x4c) = fVar24;
                      *(undefined4 *)(param_1 + 0x2c) = 0;
                      *(ulong *)(param_1 + 0x24) =
                           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) -
                                    fVar19 * fVar22,
                                    (float)*(undefined8 *)(param_1 + 0x34) - fVar26 * fVar22);
                      uVar20 = btTransform::invXform
                                         (*(btTransform **)(param_2 + 0x18),
                                          (btVector3 *)(param_1 + 0x20));
                      *(undefined4 *)(param_1 + 0x10) = uVar20;
                      *(float *)(param_1 + 0x14) = fVar26;
                      *(float *)(param_1 + 0x18) = fVar19;
                      *(float *)(param_1 + 0x1c) = fVar24;
                    }
                  }
                  else {
                    iVar11 = iVar11 + 1;
                  }
                }
                bVar6 = true;
              }
            }
            if ((!bVar6) || (iVar11 == 0)) break;
            if (((uint)param_6 >> 1 & 1) == 0) {
              fVar24 = fStack_ec * fVar21;
              fVar26 = fStack_e8 * fVar21;
              fVar21 = local_f0 * fVar21;
              fVar19 = (float)NEON_fmadd(fVar37,fVar21,fVar44 * fVar24);
              if (fVar19 + fVar47 * fVar26 < 0.0) break;
              pfVar9 = *(float **)(param_2 + 0x18);
              fVar29 = *pfVar9 * fVar21 + pfVar9[1] * fVar24;
              fVar19 = pfVar9[2];
              fVar22 = fVar26;
            }
            else {
              if (fVar37 * local_f0 + fStack_ec * fVar44 + fStack_e8 * fVar47 < 0.0) {
                local_f0 = -local_f0;
                fStack_ec = -fStack_ec;
                fStack_e8 = -fStack_e8;
              }
              pfVar9 = *(float **)(param_2 + 0x18);
              fVar29 = (float)NEON_fmadd(fStack_ec,pfVar9[1],local_f0 * *pfVar9);
              fVar26 = pfVar9[2];
              fVar21 = local_f0;
              fVar19 = fStack_e8;
              fVar22 = fStack_e8;
              fVar24 = fStack_ec;
            }
            fVar30 = pfVar9[4];
            fVar41 = pfVar9[5];
            fVar35 = pfVar9[8];
            fVar42 = pfVar9[9];
            uVar25 = NEON_fmadd(fVar19,fVar26,fVar29);
            fVar19 = pfVar9[6];
            fVar26 = pfVar9[10];
            *(undefined4 *)(param_1 + 0x4c) = 0;
            *(undefined4 *)(param_1 + 0x2c) = 0;
            uVar32 = *(undefined4 *)(param_1 + 0x50);
            *(undefined4 *)(param_1 + 0x40) = uVar25;
            uVar31 = NEON_fmadd(fVar41,fVar24,fVar30 * fVar21);
            uVar20 = NEON_fmadd(fVar42,fVar24,fVar35 * fVar21);
            uVar31 = NEON_fmadd(fVar19,fVar22,uVar31);
            uVar20 = NEON_fmadd(fVar26,fVar22,uVar20);
            fVar21 = (float)NEON_fmsub(uVar32,uVar25,*(undefined4 *)(param_1 + 0x30));
            fVar19 = (float)NEON_fmsub(uVar31,uVar32,*(undefined4 *)(param_1 + 0x34));
            *(undefined4 *)(param_1 + 0x44) = uVar31;
            fVar22 = (float)NEON_fmsub(uVar20,uVar32,*(undefined4 *)(param_1 + 0x38));
            *(undefined4 *)(param_1 + 0x48) = uVar20;
            *(float *)(param_1 + 0x20) = fVar21;
            *(float *)(param_1 + 0x24) = fVar19;
            *(float *)(param_1 + 0x28) = fVar22;
            puVar10 = *(undefined8 **)(param_2 + 0x18);
            fVar21 = fVar21 - *(float *)(puVar10 + 6);
            uVar23 = *puVar10;
            fVar19 = fVar19 - *(float *)((long)puVar10 + 0x34);
            uVar27 = puVar10[2];
            fVar22 = fVar22 - *(float *)(puVar10 + 7);
            uVar20 = NEON_fmadd(*(undefined4 *)(puVar10 + 3),fVar19,*(float *)(puVar10 + 1) * fVar21
                               );
            uVar28 = puVar10[4];
            uVar25 = *(undefined4 *)(puVar10 + 5);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            uVar20 = NEON_fmadd(uVar25,fVar22,uVar20);
            *(ulong *)(param_1 + 0x10) =
                 CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar21 +
                          (float)((ulong)uVar27 >> 0x20) * fVar19 +
                          (float)((ulong)uVar28 >> 0x20) * fVar22,
                          (float)uVar23 * fVar21 + (float)uVar27 * fVar19 + (float)uVar28 * fVar22);
            *(undefined4 *)(param_1 + 0x18) = uVar20;
            break;
          }
          iVar11 = *(int *)(*(long *)(lVar8 + 0x38) + lVar17 * 4);
        } while (iVar11 != -1);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


