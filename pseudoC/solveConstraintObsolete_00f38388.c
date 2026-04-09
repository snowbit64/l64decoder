// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConstraintObsolete
// Entry Point: 00f38388
// Size: 4844 bytes
// Signature: undefined __thiscall solveConstraintObsolete(btConeTwistConstraint * this, btSolverBody * param_1, btSolverBody * param_2, float param_3)


/* btConeTwistConstraint::solveConstraintObsolete(btSolverBody&, btSolverBody&, float) */

void __thiscall
btConeTwistConstraint::solveConstraintObsolete
          (btConeTwistConstraint *this,btSolverBody *param_1,btSolverBody *param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  ulong uVar10;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float extraout_s18;
  float fVar34;
  float extraout_s19;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  float local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 local_1d4;
  float fStack_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined4 local_1b4;
  float fStack_1b0;
  float local_1ac;
  float fStack_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  ulong local_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined4 local_184;
  float fStack_180;
  float local_17c;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  undefined4 local_164;
  float fStack_160;
  float local_15c;
  float fStack_158;
  undefined4 local_154;
  undefined8 local_150;
  float local_148;
  undefined4 local_144;
  undefined8 local_140;
  float local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  if (this[0x227] == (btConeTwistConstraint)0x0) goto LAB_00f39634;
  lVar3 = *(long *)(this + 0x28);
  lVar1 = *(long *)(this + 0x30);
  if (this[0x224] == (btConeTwistConstraint)0x0) {
    fVar8 = *(float *)(this + 0x1b4);
    fVar7 = *(float *)(this + 0x174);
    uVar38 = *(undefined4 *)(this + 0x1b8);
    uVar48 = *(undefined4 *)(this + 0x178);
    uVar32 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),uVar38,
                        *(float *)(undefined8 *)(lVar1 + 8) * fVar8);
    uVar40 = *(undefined4 *)(this + 0x1bc);
    lVar4 = 0;
    uVar37 = *(undefined4 *)(this + 0x17c);
    uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0xc),uVar48,
                        *(float *)(undefined8 *)(lVar3 + 8) * fVar7);
    uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x1c),uVar48,*(float *)(lVar3 + 0x18) * fVar7);
    uVar48 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x2c),uVar48,*(float *)(lVar3 + 0x28) * fVar7);
    uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x1c),uVar38,*(float *)(lVar1 + 0x18) * fVar8);
    uVar38 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x2c),uVar38,*(float *)(lVar1 + 0x28) * fVar8);
    fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x10),uVar40,uVar32);
    fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x10),uVar37,uVar12);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x20),uVar37,uVar24);
    fVar17 = *(float *)(lVar1 + 0x38);
    fVar14 = *(float *)(lVar1 + 0x3c);
    fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x30),uVar37,uVar48);
    fVar16 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x20),uVar40,uVar19);
    fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x30),uVar40,uVar38);
    lVar5 = *(long *)(param_1 + 0xf0);
    uVar12 = NEON_fmadd(*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0xc4),fVar13,
                        *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0xb0));
    uVar24 = NEON_fmadd(*(float *)(param_1 + 0x58) + *(float *)(param_1 + 200),fVar7,
                        *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0xb4));
    lVar6 = *(long *)(param_2 + 0xf0);
    fVar27 = *(float *)(lVar3 + 0x38);
    fVar26 = *(float *)(lVar3 + 0x3c);
    uVar48 = NEON_fmadd(*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0xc0),fVar13,
                        *(float *)(param_2 + 0xb4) + *(float *)(param_2 + 0x44));
    uVar37 = NEON_fmadd(*(float *)(param_1 + 0x58) + *(float *)(param_1 + 200),fVar8,
                        *(float *)(param_2 + 0xb0) + *(float *)(param_2 + 0x40));
    uVar32 = NEON_fmadd(*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0xc0),fVar8,
                        *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0xb8));
    fVar15 = (float)NEON_fmadd(*(float *)(param_2 + 0x58) + *(float *)(param_2 + 200),fVar16,uVar12)
    ;
    uVar12 = NEON_fmadd(*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0xc4),fVar7,
                        *(float *)(param_2 + 0xb8) + *(float *)(param_2 + 0x48));
    fVar21 = *(float *)(lVar1 + 0x40);
    fVar39 = (float)NEON_fmadd(*(float *)(param_2 + 0x50) + *(float *)(param_2 + 0xc0),fVar11,uVar24
                              );
    fVar18 = (float)NEON_fmadd(*(float *)(param_2 + 0x58) + *(float *)(param_2 + 200),fVar9,uVar48);
    fVar25 = *(float *)(lVar3 + 0x40);
    fVar22 = (float)NEON_fmadd(*(float *)(param_2 + 0x54) + *(float *)(param_2 + 0xc4),fVar11,uVar37
                              );
    fVar20 = (float)NEON_fmadd(*(float *)(param_2 + 0x54) + *(float *)(param_2 + 0xc4),fVar9,uVar32)
    ;
    fVar33 = (float)NEON_fmadd(*(float *)(param_2 + 0x50) + *(float *)(param_2 + 0xc0),fVar16,uVar12
                              );
    do {
      fVar28 = (float)*(undefined8 *)(this + lVar4 + 0x48);
      fVar30 = *(float *)(this + lVar4 + 0x50);
      fVar29 = (float)((ulong)*(undefined8 *)(this + lVar4 + 0x48) >> 0x20);
      fVar31 = (float)NEON_fmadd(fVar30,(fVar13 + fVar25) - (fVar11 + fVar21),
                                 ((fVar7 + fVar27) - (fVar9 + fVar17)) * fVar28 +
                                 ((fVar8 + fVar26) - (fVar16 + fVar14)) * fVar29);
      uVar12 = NEON_fmadd(fVar30,fVar20 - fVar33,
                          (fVar15 - fVar22) * fVar28 + (fVar39 - fVar18) * fVar29);
      fVar31 = (float)NEON_fmsub(uVar12,1.0 / *(float *)(this + lVar4 + 0x98),
                                 ((1.0 / *(float *)(this + lVar4 + 0x98)) * fVar31 * -0.3) / param_3
                                );
      *(float *)(this + 0x38) = fVar31 + *(float *)(this + 0x38);
      if (lVar5 != 0) {
        fVar36 = *(float *)(lVar3 + 0x150);
        fVar51 = *(float *)(lVar3 + 0x14c);
        fVar42 = *(float *)(lVar3 + 0x160);
        fVar34 = -(fVar30 * fVar7) + fVar13 * fVar28;
        fVar44 = *(float *)(lVar3 + 0x15c);
        fVar41 = (float)NEON_fnmsub(fVar30,fVar8,fVar13 * fVar29);
        fVar46 = *(float *)(lVar3 + 0x154);
        fVar45 = -(fVar28 * fVar8) + fVar7 * fVar29;
        fVar50 = *(float *)(lVar3 + 0x164);
        uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),fVar41,*(float *)(lVar3 + 0x170) * fVar34
                           );
        fVar47 = fVar31 * *(float *)(lVar3 + 0x19c);
        fVar35 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar45,uVar12);
        uVar24 = NEON_fmadd(fVar47 * fVar30,*(undefined4 *)(param_1 + 0x78),
                            *(undefined4 *)(param_1 + 0x48));
        uVar12 = NEON_fmadd(fVar35 * fVar31,*(undefined4 *)(param_1 + 0x68),
                            *(undefined4 *)(param_1 + 0x58));
        *(ulong *)(param_1 + 0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar29 * fVar47,
                      (float)*(undefined8 *)(param_1 + 0x40) +
                      (float)*(undefined8 *)(param_1 + 0x70) * fVar28 * fVar47);
        *(undefined4 *)(param_1 + 0x48) = uVar24;
        *(ulong *)(param_1 + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) *
                      (fVar42 * fVar34 + fVar44 * fVar41 + fVar50 * fVar45) * fVar31,
                      (float)*(undefined8 *)(param_1 + 0x50) +
                      (float)*(undefined8 *)(param_1 + 0x60) *
                      (fVar36 * fVar34 + fVar51 * fVar41 + fVar46 * fVar45) * fVar31);
        *(undefined4 *)(param_1 + 0x58) = uVar12;
      }
      if (lVar6 != 0) {
        fVar35 = *(float *)(lVar1 + 0x150);
        fVar42 = *(float *)(lVar1 + 0x14c);
        fVar36 = *(float *)(lVar1 + 0x160);
        fVar34 = -(fVar30 * fVar9) + fVar11 * fVar28;
        fVar41 = *(float *)(lVar1 + 0x15c);
        fVar30 = (float)NEON_fnmsub(fVar30,fVar16,fVar11 * fVar29);
        fVar47 = *(float *)(lVar1 + 0x154);
        fVar31 = -fVar31;
        fVar51 = -(fVar28 * fVar16) + fVar9 * fVar29;
        fVar44 = *(float *)(lVar1 + 0x164);
        uVar12 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x16c),fVar30,*(float *)(lVar1 + 0x170) * fVar34
                           );
        fVar29 = *(float *)(lVar1 + 0x19c) * fVar31;
        fVar28 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar51,uVar12);
        uVar12 = NEON_fmadd(fVar29 * *(float *)(this + lVar4 + 0x50),*(undefined4 *)(param_2 + 0x78)
                            ,*(undefined4 *)(param_2 + 0x48));
        *(ulong *)(param_2 + 0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(this + lVar4 + 0x48) >> 0x20) * fVar29,
                      (float)*(undefined8 *)(param_2 + 0x40) +
                      (float)*(undefined8 *)(param_2 + 0x70) *
                      (float)*(undefined8 *)(this + lVar4 + 0x48) * fVar29);
        *(undefined4 *)(param_2 + 0x48) = uVar12;
        uVar12 = NEON_fmadd(fVar28 * fVar31,*(undefined4 *)(param_2 + 0x68),
                            *(undefined4 *)(param_2 + 0x58));
        *(ulong *)(param_2 + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) *
                      (fVar36 * fVar34 + fVar41 * fVar30 + fVar44 * fVar51) * fVar31,
                      (float)*(undefined8 *)(param_2 + 0x50) +
                      (float)*(undefined8 *)(param_2 + 0x60) *
                      (fVar35 * fVar34 + fVar42 * fVar30 + fVar47 * fVar51) * fVar31);
        *(undefined4 *)(param_2 + 0x58) = uVar12;
      }
      lVar4 = lVar4 + 0x54;
    } while (lVar4 != 0xfc);
  }
  if (this[0x240] == (btConeTwistConstraint)0x0) {
    if (1.192093e-07 < *(float *)(this + 0x1d0)) {
      fVar7 = (float)*(undefined8 *)(param_1 + 0x54);
      fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20);
      fVar13 = ((float)*(undefined8 *)(param_2 + 0xc4) -
               ((float)*(undefined8 *)(param_1 + 0xc4) + fVar7)) +
               (float)*(undefined8 *)(param_2 + 0x54);
      fVar16 = ((float)((ulong)*(undefined8 *)(param_2 + 0xc4) >> 0x20) -
               ((float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20) + fVar8)) +
               (float)((ulong)*(undefined8 *)(param_2 + 0x54) >> 0x20);
      fVar11 = (*(float *)(param_2 + 0xc0) -
               (*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0x50))) +
               *(float *)(param_2 + 0x50);
      fVar9 = (float)NEON_fmadd(fVar11,fVar11,fVar13 * fVar13);
      fVar9 = fVar9 + fVar16 * fVar16;
      if (1.192093e-07 < fVar9) {
        fVar39 = *(float *)(lVar3 + 0x16c);
        fVar15 = *(float *)(lVar3 + 0x15c);
        fVar33 = *(float *)(lVar3 + 0x170);
        fVar20 = *(float *)(lVar3 + 0x160);
        fVar18 = *(float *)(lVar3 + 0x174);
        fVar17 = *(float *)(lVar3 + 0x164);
        fVar9 = 1.0 / SQRT(fVar9);
        fVar22 = fVar9 * fVar16;
        fVar21 = fVar9 * fVar13;
        fVar9 = fVar9 * fVar11;
        uVar12 = NEON_fmadd(*(float *)(lVar1 + 0x15c) + fVar15,fVar21,
                            (*(float *)(lVar1 + 0x16c) + fVar39) * fVar22);
        uVar24 = NEON_fmadd(*(float *)(lVar1 + 0x160) + fVar20,fVar21,
                            (*(float *)(lVar1 + 0x170) + fVar33) * fVar22);
        fVar14 = (float)NEON_fmadd(*(float *)(lVar1 + 0x14c) + *(float *)(lVar3 + 0x14c),fVar9,
                                   uVar12);
        uVar12 = NEON_fmadd(*(float *)(lVar1 + 0x164) + fVar17,fVar21,
                            (*(float *)(lVar1 + 0x174) + fVar18) * fVar22);
        uVar32 = NEON_fmadd(*(float *)(lVar1 + 0x150) + *(float *)(lVar3 + 0x150),fVar9,uVar24);
        uVar24 = NEON_fmadd(*(float *)(lVar1 + 0x154) + *(float *)(lVar3 + 0x154),fVar9,uVar12);
        uVar12 = NEON_fmadd(uVar32,fVar21,fVar14 * fVar9);
        fVar14 = (float)NEON_fmadd(uVar24,fVar22,uVar12);
        fVar14 = *(float *)(this + 0x1d0) / fVar14;
        fVar11 = fVar14 * fVar11;
        fVar13 = fVar14 * fVar13;
        fVar14 = fVar14 * fVar16;
        uVar12 = NEON_fmadd(fVar13,fVar13,fVar11 * fVar11);
        fVar9 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
        fVar9 = SQRT(fVar9);
        fVar16 = 1.0 / fVar9;
        fVar11 = fVar16 * fVar11;
        fVar13 = fVar16 * fVar13;
        fVar16 = fVar16 * fVar14;
        if (*(long *)(param_1 + 0xf0) != 0) {
          uVar12 = NEON_fmadd(*(float *)(lVar3 + 0x14c),fVar11,*(float *)(lVar3 + 0x150) * fVar13);
          uVar12 = NEON_fmadd(*(float *)(lVar3 + 0x154),fVar16,uVar12);
          uVar12 = NEON_fmadd(*(float *)(param_1 + 0x60) * fVar9,uVar12,*(float *)(param_1 + 0x50));
          *(undefined4 *)(param_1 + 0x50) = uVar12;
          *(ulong *)(param_1 + 0x54) =
               CONCAT44(fVar8 + (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20) *
                                (fVar33 * fVar13 + fVar39 * fVar11 + fVar18 * fVar16) * fVar9,
                        fVar7 + (float)*(undefined8 *)(param_1 + 100) *
                                (fVar20 * fVar13 + fVar15 * fVar11 + fVar17 * fVar16) * fVar9);
        }
        if (*(long *)(param_2 + 0xf0) != 0) {
          uVar12 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x15c),fVar11,
                              *(float *)(lVar1 + 0x160) * fVar13);
          uVar24 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x14c),fVar11,
                              *(float *)(lVar1 + 0x150) * fVar13);
          uVar32 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x16c),fVar11,
                              *(float *)(lVar1 + 0x170) * fVar13);
          fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x164),fVar16,uVar12);
          fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x154),fVar16,uVar24);
          fVar9 = -fVar9;
          fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar16,uVar32);
          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar7 * fVar9,
                            (float)*(undefined8 *)(param_2 + 0x50) +
                            fVar8 * (float)*(undefined8 *)(param_2 + 0x60) * fVar9);
          uVar12 = NEON_fmadd(fVar13 * fVar9,*(undefined4 *)(param_2 + 0x68),
                              *(undefined4 *)(param_2 + 0x58));
          goto LAB_00f39288;
        }
      }
    }
  }
  else {
    uStack_e8 = *(undefined8 *)(lVar3 + 0x10);
    local_f0 = *(undefined8 *)(lVar3 + 8);
    uStack_d8 = *(undefined8 *)(lVar3 + 0x20);
    uStack_e0 = *(undefined8 *)(lVar3 + 0x18);
    uStack_c8 = *(undefined8 *)(lVar3 + 0x30);
    local_d0 = *(undefined8 *)(lVar3 + 0x28);
    local_b8 = *(undefined8 *)(lVar3 + 0x40);
    local_c0 = *(undefined8 *)(lVar3 + 0x38);
    uStack_128 = *(undefined8 *)(lVar1 + 0x10);
    local_130 = *(undefined8 *)(lVar1 + 8);
    uStack_118 = *(undefined8 *)(lVar1 + 0x20);
    uStack_120 = *(undefined8 *)(lVar1 + 0x18);
    local_134 = 0;
    local_144 = 0;
    local_184 = 0;
    fStack_180 = 0.0;
    local_140 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),
                         (float)*(undefined8 *)(param_1 + 0x50) +
                         (float)*(undefined8 *)(param_1 + 0xc0));
    local_138 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 200);
    local_150 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20),
                         (float)*(undefined8 *)(param_2 + 0x50) +
                         (float)*(undefined8 *)(param_2 + 0xc0));
    uStack_108 = *(undefined8 *)(lVar1 + 0x30);
    local_110 = *(undefined8 *)(lVar1 + 0x28);
    local_f8 = *(undefined8 *)(lVar1 + 0x40);
    local_100 = *(undefined8 *)(lVar1 + 0x38);
    fStack_18c = 0.0;
    fStack_188 = 0.0;
    local_148 = *(float *)(param_2 + 0x58) + *(float *)(param_2 + 200);
    local_190 = 1.0;
    local_17c = 1.0;
    local_178 = 0;
    local_170 = 0;
    local_15c = 0.0;
    fStack_158 = 0.0;
    local_164 = 0;
    fStack_160 = 0.0;
    local_168 = 1.0;
    local_154 = 0;
    local_1a0 = 0;
    local_198 = 0;
    btTransformUtil::integrateTransform
              ((btTransform *)&local_f0,(btVector3 *)&local_1a0,(btVector3 *)&local_140,param_3,
               (btTransform *)&local_190);
    local_1d4 = 0;
    fStack_1d0 = 0.0;
    fStack_1dc = 0.0;
    fStack_1d8 = 0.0;
    local_1e0 = 1.0;
    local_1cc = 1.0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1ac = 0.0;
    fStack_1a8 = 0.0;
    local_1b4 = 0;
    fStack_1b0 = 0.0;
    local_1b8 = 1.0;
    local_1a4 = 0;
    btTransformUtil::integrateTransform
              ((btTransform *)&local_130,(btVector3 *)&local_1a0,(btVector3 *)&local_150,param_3,
               (btTransform *)&local_1e0);
    fVar8 = *(float *)(this + 0x244);
    fVar7 = *(float *)(this + 0x248);
    fVar16 = *(float *)(this + 0x250);
    fVar36 = *(float *)(this + 0x164);
    fVar33 = (float)*(undefined8 *)(this + 0x188);
    fVar21 = *(float *)(this + 0x198);
    uVar12 = NEON_fmadd(fVar7,fVar7,fVar8 * fVar8);
    fVar9 = *(float *)(this + 0x24c);
    fVar35 = *(float *)(this + 0x168);
    fVar47 = *(float *)(this + 0x17c);
    fVar30 = *(float *)(this + 0x1a4);
    uVar12 = NEON_fmadd(fVar9,fVar9,uVar12);
    fVar41 = *(float *)(this + 0x154);
    fVar45 = *(float *)(this + 0x158);
    fVar46 = *(float *)(this + 0x15c);
    local_214 = 0;
    uVar37 = *(undefined4 *)(this + 0x1a8);
    local_204 = 0;
    fVar13 = (float)NEON_fmadd(fVar16,fVar16,uVar12);
    fVar29 = *(float *)(this + 0x144);
    fVar34 = *(float *)(this + 0x148);
    local_1f4 = 0;
    local_1e4 = 0;
    local_254 = 0;
    fVar13 = 2.0 / fVar13;
    local_244 = 0;
    local_234 = 0;
    local_224 = 0;
    fVar11 = (float)*(undefined8 *)(this + 0x18c);
    fVar15 = *(float *)(this + 0x19c);
    fVar18 = (float)*(undefined8 *)(this + 0x184);
    fVar20 = *(float *)(this + 0x194);
    fVar31 = fVar13 * fVar7;
    fVar39 = fVar13 * fVar9;
    fVar14 = *(float *)(this + 0x16c);
    fVar22 = (float)NEON_fmsub(fVar39,fVar9,0x3f800000);
    fVar17 = fVar13 * fVar8 * fVar16;
    fVar51 = fVar13 * fVar8 * -fVar8;
    fVar25 = fVar31 * fVar8 + fVar39 * fVar16;
    fVar44 = fVar39 * fVar8 - fVar31 * fVar16;
    fVar42 = fVar31 * fVar8 - fVar39 * fVar16;
    fVar8 = fVar39 * fVar8 + fVar31 * fVar16;
    fVar13 = fVar22 + fVar31 * -fVar7;
    uVar12 = *(undefined4 *)(this + 0x178);
    fVar28 = fVar39 * fVar7 + fVar17;
    fVar22 = fVar22 + fVar51;
    fVar26 = (float)NEON_fmadd(uVar12,fVar41,fVar47 * fVar36);
    fVar27 = (float)NEON_fmadd(uVar12,fVar45,fVar47 * fVar35);
    fVar47 = (float)NEON_fmadd(uVar12,fVar46,fVar47 * fVar14);
    fVar17 = fVar39 * fVar7 - fVar17;
    fVar9 = fVar33 * fVar25 + fVar11 * fVar44 + fVar18 * fVar13;
    fVar16 = fVar21 * fVar25 + fVar15 * fVar44 + fVar20 * fVar13;
    fVar39 = *(float *)(this + 0x14c);
    uVar24 = NEON_fmadd(uVar37,fVar25,fVar30 * fVar13);
    uVar12 = *(undefined4 *)(this + 0x174);
    uVar32 = NEON_fmadd(uVar37,fVar17,fVar30 * fVar8);
    uVar48 = NEON_fmadd(uVar37,fVar22,fVar30 * fVar42);
    fVar30 = fVar18 * fVar42 + fVar11 * fVar28 + fVar33 * fVar22;
    fVar42 = fVar20 * fVar42 + fVar15 * fVar28 + fVar21 * fVar22;
    fVar26 = (float)NEON_fnmadd(uVar12,fVar29,-fVar26);
    fVar22 = (float)NEON_fnmadd(uVar12,fVar39,-fVar47);
    fVar51 = fVar31 * -fVar7 + 1.0 + fVar51;
    uVar37 = *(undefined4 *)(this + 0x1ac);
    fVar25 = (float)NEON_fnmadd(uVar12,fVar34,-fVar27);
    uVar23 = NEON_rev64(CONCAT44(fVar16,fVar9),4);
    fVar31 = (float)NEON_fmadd(uVar37,fVar44,uVar24);
    fVar18 = fVar18 * fVar8 + fVar33 * fVar17 + fVar11 * fVar51;
    fVar8 = fVar20 * fVar8 + fVar21 * fVar17 + fVar15 * fVar51;
    fVar20 = (float)NEON_fmadd(uVar37,fVar28,uVar48);
    fVar27 = (float)NEON_fmadd(uVar37,fVar51,uVar32);
    uVar43 = NEON_rev64(CONCAT44(fVar42,fVar30),4);
    uVar24 = NEON_fmadd(fVar26,fVar31,*(undefined4 *)(this + 0x1bc));
    uVar12 = NEON_fmadd(fVar35,fVar20,fVar36 * fVar31);
    uVar49 = NEON_rev64(CONCAT44(fVar8,fVar18),4);
    uVar24 = NEON_fmadd(fVar25,fVar20,uVar24);
    fVar13 = fVar9 * fVar36 + fVar30 * fVar35 + fVar18 * fVar14;
    fVar11 = fVar16 * fVar36 + fVar42 * fVar35 + fVar8 * fVar14;
    fVar7 = *(float *)(this + 0x1b4) + fVar26 * fVar9 + fVar25 * fVar30 + fVar22 * fVar18;
    fVar33 = fVar29 * (float)uVar23 + (float)uVar43 * fVar34 + (float)uVar49 * fVar39;
    fVar21 = fVar41 * (float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar43 >> 0x20) * fVar45 +
             (float)((ulong)uVar49 >> 0x20) * fVar46;
    fVar15 = fVar29 * fVar9 + fVar30 * fVar34 + fVar18 * fVar39;
    fVar17 = fVar41 * fVar16 + fVar42 * fVar45 + fVar8 * fVar46;
    fVar39 = fVar29 * fVar31 + fVar34 * fVar20 + fVar39 * fVar27;
    fVar20 = fVar41 * fVar31 + fVar45 * fVar20 + fVar46 * fVar27;
    uVar12 = NEON_fmadd(fVar14,fVar27,uVar12);
    fVar14 = (float)local_1c0;
    fVar9 = *(float *)(this + 0x1b8) + fVar26 * fVar16 + fVar25 * fVar42 + fVar22 * fVar8;
    uVar43 = NEON_rev64(local_1c0,4);
    fVar18 = (float)NEON_fmadd(fVar22,fVar27,uVar24);
    fVar8 = (float)((ulong)local_1c0 >> 0x20);
    uVar23 = NEON_rev64(CONCAT44(local_1cc,fStack_1d0),4);
    local_218 = NEON_fmadd(fStack_1d8,uVar12,local_1e0 * fVar13 + fStack_1dc * fVar11);
    local_208 = NEON_fmadd((float)local_1c8,uVar12,fStack_1d0 * fVar13 + local_1cc * fVar11);
    local_1e8 = (float)NEON_fmadd(local_1b8,fVar18,fVar7 * fVar14 + fVar9 * fVar8);
    local_1f8 = NEON_fmadd(local_1b8,uVar12,fVar14 * fVar13 + fVar11 * fVar8);
    local_200 = CONCAT44((float)((ulong)uVar43 >> 0x20) * fVar21 + fVar17 * fVar8 +
                         fVar20 * local_1b8,
                         (float)uVar43 * fVar33 + fVar15 * fVar14 + fVar39 * local_1b8);
    fVar26 = (float)NEON_fnmadd(fVar9,fVar33,-(fVar7 * fVar15));
    local_210 = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar21 + fVar17 * local_1cc +
                         fVar20 * (float)local_1c8,
                         (float)uVar23 * fVar33 + fVar15 * fStack_1d0 + fVar39 * (float)local_1c8);
    fVar16 = local_1e0 * fVar7 + fStack_1dc * fVar9 + fStack_1d8 * fVar18 + fStack_1b0;
    fVar14 = fStack_1d0 * fVar7 + local_1cc * fVar9 + (float)local_1c8 * fVar18 + local_1ac;
    local_1f0 = CONCAT44(fVar14,fVar16);
    fVar8 = (float)NEON_fnmadd(fVar9,fVar17,-(fVar7 * fVar21));
    uVar23 = NEON_rev64(CONCAT44(fStack_18c * fVar21,local_190 * fVar33),4);
    fVar26 = fVar26 - fVar18 * fVar39;
    fVar22 = (float)local_170;
    fVar25 = (float)((ulong)local_170 >> 0x20);
    uVar49 = NEON_rev64(CONCAT44(local_17c * fVar21,fStack_180 * fVar33),4);
    fVar8 = fVar8 - fVar18 * fVar20;
    local_1e8 = local_1e8 + fStack_1a8;
    fVar9 = (float)NEON_fnmadd(uVar12,fVar18,-(fVar7 * fVar13 + fVar9 * fVar11));
    uVar43 = NEON_rev64(CONCAT44(fVar25 * fVar21,fVar22 * fVar33),4);
    fVar18 = 1.0 / param_3;
    local_260 = CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar17 * fStack_18c + fVar11 * fStack_188,
                         (float)uVar23 + fVar15 * local_190 + fVar13 * fStack_188);
    local_258 = NEON_fmadd(fStack_188,uVar12,local_190 * fVar39 + fStack_18c * fVar20);
    local_250 = CONCAT44((float)((ulong)uVar49 >> 0x20) + fVar17 * local_17c +
                         fVar11 * (float)local_178,
                         (float)uVar49 + fVar15 * fStack_180 + fVar13 * (float)local_178);
    local_248 = NEON_fmadd((float)local_178,uVar12,fStack_180 * fVar39 + local_17c * fVar20);
    local_240 = CONCAT44((float)((ulong)uVar43 >> 0x20) + fVar17 * fVar25 + fVar11 * local_168,
                         (float)uVar43 + fVar15 * fVar22 + fVar13 * local_168);
    local_238 = NEON_fmadd(local_168,uVar12,fVar22 * fVar39 + fVar20 * fVar25);
    fVar7 = (float)NEON_fmadd(local_168,fVar9,fVar26 * fVar22 + fVar8 * fVar25);
    local_220 = CONCAT44(local_1e0 * fVar21 + fVar17 * fStack_1dc + fVar20 * fStack_1d8,
                         fStack_1dc * fVar33 + fVar15 * local_1e0 + fVar39 * fStack_1d8);
    fVar13 = local_190 * fVar26 + fStack_18c * fVar8 + fStack_188 * fVar9 + fStack_160;
    fVar9 = fStack_180 * fVar26 + local_17c * fVar8 + (float)local_178 * fVar9 + local_15c;
    local_230 = CONCAT44(fVar9,fVar13);
    fVar7 = fVar7 + fStack_158;
    local_1a0 = CONCAT44((fVar14 - (float)((ulong)local_c0 >> 0x20)) * fVar18,
                         (fVar16 - (float)local_c0) * fVar18);
    local_198 = (ulong)(uint)((local_1e8 - (float)local_b8) * fVar18);
    local_228 = fVar7;
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)&local_f0,(btTransform *)&local_220,(btVector3 *)&local_a8,&local_264)
    ;
    uVar12 = local_a0;
    uVar10 = local_a8;
    fVar8 = local_264 * fVar18;
    local_1a0 = CONCAT44((fVar9 - (float)((ulong)local_100 >> 0x20)) * fVar18,
                         (fVar13 - (float)local_100) * fVar18);
    local_198 = (ulong)(uint)((fVar7 - (float)local_f8) * fVar18);
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)&local_130,(btTransform *)&local_260,(btVector3 *)&local_a8,&local_264
              );
    fVar17 = 1.192093e-07;
    fVar9 = -(float)local_140 + (float)uVar10 * fVar8;
    fVar13 = -(float)((ulong)local_140 >> 0x20) + (float)(uVar10 >> 0x20) * fVar8;
    fVar16 = (float)NEON_fnmsub(uVar12,fVar8,local_138);
    local_264 = local_264 * fVar18;
    fVar11 = -(float)local_150 + (float)local_a8 * local_264;
    fVar14 = -(float)((ulong)local_150 >> 0x20) + (float)(local_a8 >> 0x20) * local_264;
    fVar20 = (float)NEON_fmadd(fVar16,fVar16,fVar9 * fVar9 + fVar13 * fVar13);
    fVar15 = (float)NEON_fnmsub(local_a0,local_264,local_148);
    fVar18 = 0.0;
    fVar39 = 0.0;
    fVar7 = local_148;
    fVar8 = extraout_s18;
    if (1.192093e-07 < fVar20) {
      lVar3 = *(long *)(this + 0x28);
      fVar8 = *(float *)(lVar3 + 0x15c);
      fVar17 = 1.0 / SQRT(fVar20);
      fVar20 = fVar17 * fVar9;
      local_a8 = (ulong)(uint)fVar20;
      fVar7 = fVar13 * fVar17;
      fVar17 = fVar16 * fVar17;
      fVar39 = (float)NEON_fmadd(*(float *)(lVar3 + 0x14c) * fVar20 + fVar8 * fVar7 +
                                 *(float *)(lVar3 + 0x16c) * fVar17,fVar20,
                                 ((float)*(undefined8 *)(lVar3 + 0x150) * fVar20 +
                                  (float)*(undefined8 *)(lVar3 + 0x160) * fVar7 +
                                 (float)*(undefined8 *)(lVar3 + 0x170) * fVar17) * fVar7);
      fVar39 = fVar39 + ((float)((ulong)*(undefined8 *)(lVar3 + 0x150) >> 0x20) * fVar20 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x160) >> 0x20) * fVar7 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x170) >> 0x20) * fVar17) * fVar17;
    }
    fVar22 = (float)NEON_fmadd(fVar15,fVar15,fVar11 * fVar11 + fVar14 * fVar14);
    fVar33 = 1.192093e-07;
    fVar20 = extraout_s19;
    if (1.192093e-07 < fVar22) {
      lVar3 = *(long *)(this + 0x30);
      fVar20 = 1.0 / SQRT(fVar22);
      fVar33 = fVar20 * fVar11;
      fVar8 = fVar14 * fVar20;
      fVar20 = fVar15 * fVar20;
      fVar18 = (float)NEON_fmadd(*(float *)(lVar3 + 0x14c) * fVar33 +
                                 *(float *)(lVar3 + 0x15c) * fVar8 +
                                 *(float *)(lVar3 + 0x16c) * fVar20,fVar33,
                                 ((float)*(undefined8 *)(lVar3 + 0x150) * fVar33 +
                                  (float)*(undefined8 *)(lVar3 + 0x160) * fVar8 +
                                 (float)*(undefined8 *)(lVar3 + 0x170) * fVar20) * fVar8);
      fVar18 = fVar18 + ((float)((ulong)*(undefined8 *)(lVar3 + 0x150) >> 0x20) * fVar33 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x160) >> 0x20) * fVar8 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x170) >> 0x20) * fVar20) * fVar20;
    }
    fVar33 = (float)NEON_fmadd(fVar33,fVar18,(float)local_a8 * fVar39);
    fVar22 = (float)NEON_fmadd(fVar8,fVar18,fVar7 * fVar39);
    fVar8 = (float)NEON_fmadd(fVar20,fVar18,fVar17 * fVar39);
    uVar12 = NEON_fmadd(fVar22,fVar22,fVar33 * fVar33);
    fVar7 = (float)NEON_fmadd(fVar8,fVar8,uVar12);
    if (1.192093e-07 < fVar7) {
      lVar3 = *(long *)(this + 0x28);
      lVar1 = *(long *)(this + 0x30);
      fVar7 = 1.0 / SQRT(fVar7);
      fVar33 = fVar7 * fVar33;
      fVar22 = fVar7 * fVar22;
      fVar7 = fVar7 * fVar8;
      fVar18 = (*(float *)(lVar1 + 0x14c) * fVar33 + *(float *)(lVar1 + 0x15c) * fVar22 +
               *(float *)(lVar1 + 0x16c) * fVar7) * fVar33 +
               (*(float *)(lVar1 + 0x150) * fVar33 + *(float *)(lVar1 + 0x160) * fVar22 +
               *(float *)(lVar1 + 0x170) * fVar7) * fVar22 +
               (*(float *)(lVar1 + 0x154) * fVar33 + *(float *)(lVar1 + 0x164) * fVar22 +
               *(float *)(lVar1 + 0x174) * fVar7) * fVar7;
      fVar39 = (*(float *)(lVar3 + 0x14c) * fVar33 + *(float *)(lVar3 + 0x15c) * fVar22 +
               *(float *)(lVar3 + 0x16c) * fVar7) * fVar33 +
               (*(float *)(lVar3 + 0x150) * fVar33 + *(float *)(lVar3 + 0x160) * fVar22 +
               *(float *)(lVar3 + 0x170) * fVar7) * fVar22 +
               (*(float *)(lVar3 + 0x154) * fVar33 + *(float *)(lVar3 + 0x164) * fVar22 +
               *(float *)(lVar3 + 0x174) * fVar7) * fVar7;
      fVar17 = 1.0 / ((fVar18 + fVar39) * (fVar18 + fVar39));
      fVar7 = (-(fVar11 * fVar18) + fVar9 * fVar39) * fVar17;
      fVar8 = (-(fVar14 * fVar18) + fVar13 * fVar39) * fVar17;
      fVar17 = fVar17 * (-(fVar18 * fVar15) + fVar16 * fVar39);
      if (0.0 <= *(float *)(this + 0x254)) {
        fVar14 = (float)*(undefined8 *)(this + 600);
        fVar13 = fVar14 + fVar7;
        fVar15 = (float)((ulong)*(undefined8 *)(this + 600) >> 0x20);
        fVar16 = fVar15 + fVar8;
        uVar23 = CONCAT44(fVar16,fVar13);
        fVar11 = *(float *)(this + 0x260) + fVar17;
        fVar9 = 1.0;
        if (this[0x241] != (btConeTwistConstraint)0x0) {
          fVar9 = fVar39;
        }
        fVar9 = *(float *)(this + 0x254) / fVar9;
        fVar18 = (float)NEON_fmadd(fVar11,fVar11,fVar13 * fVar13 + fVar16 * fVar16);
        if (fVar9 < SQRT(fVar18)) {
          fVar9 = fVar9 / SQRT(fVar18);
          uVar23 = CONCAT44(fVar16 * fVar9,fVar13 * fVar9);
          fVar11 = fVar9 * fVar11;
          fVar7 = fVar13 * fVar9 - fVar14;
          fVar8 = fVar16 * fVar9 - fVar15;
          fVar17 = fVar11 - *(float *)(this + 0x260);
        }
        *(undefined8 *)(this + 600) = uVar23;
        *(float *)(this + 0x260) = fVar11;
      }
      fVar9 = (float)NEON_fmadd(fVar17,fVar17,fVar7 * fVar7 + fVar8 * fVar8);
      fVar9 = SQRT(fVar9);
      fVar13 = 1.0 / fVar9;
      fVar7 = fVar13 * fVar7;
      fVar8 = fVar13 * fVar8;
      fVar13 = fVar13 * fVar17;
      if (*(long *)(param_1 + 0xf0) != 0) {
        uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x15c),fVar7,*(float *)(lVar3 + 0x160) * fVar8);
        uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x14c),fVar7,*(float *)(lVar3 + 0x150) * fVar8);
        uVar32 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),fVar7,*(float *)(lVar3 + 0x170) * fVar8);
        fVar16 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x164),fVar13,uVar12);
        fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x154),fVar13,uVar24);
        fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar13,uVar32);
        uVar12 = NEON_fmadd(fVar11 * fVar9,*(undefined4 *)(param_1 + 0x68),
                            *(undefined4 *)(param_1 + 0x58));
        *(ulong *)(param_1 + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar16 * fVar9,
                      (float)*(undefined8 *)(param_1 + 0x50) +
                      fVar14 * (float)*(undefined8 *)(param_1 + 0x60) * fVar9);
        *(undefined4 *)(param_1 + 0x58) = uVar12;
      }
      if (*(long *)(param_2 + 0xf0) != 0) {
        fVar9 = -fVar9;
        uVar24 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x15c),fVar7,*(float *)(lVar1 + 0x160) * fVar8);
        uVar32 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x14c),fVar7,*(float *)(lVar1 + 0x150) * fVar8);
        uVar12 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x16c),fVar7,*(float *)(lVar1 + 0x170) * fVar8);
        fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x164),fVar13,uVar24);
        fVar16 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x154),fVar13,uVar32);
        fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar13,uVar12);
        uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar8 * fVar9,
                          (float)*(undefined8 *)(param_2 + 0x50) +
                          fVar16 * (float)*(undefined8 *)(param_2 + 0x60) * fVar9);
        uVar12 = NEON_fmadd(fVar7 * fVar9,*(undefined4 *)(param_2 + 0x68),
                            *(undefined4 *)(param_2 + 0x58));
LAB_00f39288:
        *(undefined8 *)(param_2 + 0x50) = uVar23;
        *(undefined4 *)(param_2 + 0x58) = uVar12;
      }
    }
  }
  fVar7 = (*(float *)(param_2 + 0x50) + *(float *)(param_2 + 0xc0)) -
          (*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0xc0));
  fVar8 = ((float)*(undefined8 *)(param_2 + 0x54) + (float)*(undefined8 *)(param_2 + 0xc4)) -
          ((float)*(undefined8 *)(param_1 + 0x54) + (float)*(undefined8 *)(param_1 + 0xc4));
  fVar9 = ((float)((ulong)*(undefined8 *)(param_2 + 0x54) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 0xc4) >> 0x20)) -
          ((float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20));
  if (this[0x226] != (btConeTwistConstraint)0x0) {
    fVar16 = (float)*(undefined8 *)(this + 0x1e8);
    fVar11 = (float)((ulong)*(undefined8 *)(this + 0x1e8) >> 0x20);
    fVar14 = (float)NEON_fmadd(*(float *)(this + 0x1e4),fVar7,fVar16 * fVar8);
    fVar14 = fVar14 + fVar11 * fVar9;
    fVar13 = *(float *)(this + 0x1cc) * *(float *)(this + 0x228) * fVar14;
    if (fVar14 <= 0.0) {
      fVar13 = -0.0;
    }
    fVar13 = (float)NEON_fmadd(fVar13 + (*(float *)(this + 0x210) * *(float *)(this + 0x228) *
                                        *(float *)(this + 0x1c8)) / param_3,
                               *(undefined4 *)(this + 0x204),*(float *)(this + 0x21c));
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar14 = fVar13 - *(float *)(this + 0x21c);
    *(float *)(this + 0x21c) = fVar13;
    fVar13 = fVar14 * *(float *)(this + 0x1e4);
    fVar16 = fVar14 * fVar16;
    fVar14 = fVar14 * fVar11;
    uVar12 = NEON_fmadd(fVar16,*(undefined4 *)(this + 0x234),fVar13 * *(float *)(this + 0x230));
    uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(this + 0x238),uVar12);
    fVar11 = (float)NEON_fmsub(uVar12,*(float *)(this + 0x230),fVar13);
    fVar15 = (float)NEON_fmsub(uVar12,*(undefined4 *)(this + 0x234),fVar16);
    fVar14 = (float)NEON_fmsub(uVar12,*(undefined4 *)(this + 0x238),fVar14);
    uVar12 = NEON_fmadd(fVar15,fVar15,fVar11 * fVar11);
    fVar13 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
    fVar13 = SQRT(fVar13);
    fVar16 = 1.0 / fVar13;
    fVar11 = fVar16 * fVar11;
    fVar15 = fVar16 * fVar15;
    fVar16 = fVar16 * fVar14;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar3 = *(long *)(this + 0x28);
      uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x15c),fVar11,*(float *)(lVar3 + 0x160) * fVar15);
      uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x14c),fVar11,*(float *)(lVar3 + 0x150) * fVar15);
      uVar32 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),fVar11,*(float *)(lVar3 + 0x170) * fVar15);
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x164),fVar16,uVar12);
      fVar18 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x154),fVar16,uVar24);
      fVar17 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar16,uVar32);
      uVar12 = NEON_fmadd(fVar17 * fVar13,*(undefined4 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 0x58));
      *(ulong *)(param_1 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar14 * fVar13,
                    (float)*(undefined8 *)(param_1 + 0x50) +
                    fVar18 * (float)*(undefined8 *)(param_1 + 0x60) * fVar13);
      *(undefined4 *)(param_1 + 0x58) = uVar12;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      lVar3 = *(long *)(this + 0x30);
      fVar13 = -fVar13;
      uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x15c),fVar11,*(float *)(lVar3 + 0x160) * fVar15);
      uVar32 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x14c),fVar11,*(float *)(lVar3 + 0x150) * fVar15);
      uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),fVar11,*(float *)(lVar3 + 0x170) * fVar15);
      fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x164),fVar16,uVar24);
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x154),fVar16,uVar32);
      fVar16 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar16,uVar12);
      uVar12 = NEON_fmadd(fVar16 * fVar13,*(undefined4 *)(param_2 + 0x68),
                          *(undefined4 *)(param_2 + 0x58));
      *(ulong *)(param_2 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar11 * fVar13,
                    (float)*(undefined8 *)(param_2 + 0x50) +
                    fVar14 * (float)*(undefined8 *)(param_2 + 0x60) * fVar13);
      *(undefined4 *)(param_2 + 0x58) = uVar12;
    }
  }
  if (this[0x225] != (btConeTwistConstraint)0x0) {
    uVar10 = *(ulong *)(this + 0x1f8);
    fVar13 = (float)uVar10;
    fVar16 = (float)(uVar10 >> 0x20);
    uVar12 = *(undefined4 *)(this + 500);
    fVar7 = (float)NEON_fmadd(uVar12,fVar7,fVar13 * fVar8);
    fVar7 = fVar7 + fVar16 * fVar9;
    fVar8 = *(float *)(this + 0x1cc) * *(float *)(this + 0x22c) * fVar7;
    if (fVar7 <= 0.0) {
      fVar8 = -0.0;
    }
    fVar9 = *(float *)(this + 0x220);
    fVar7 = (float)NEON_fmadd(fVar8 + (*(float *)(this + 0x214) * *(float *)(this + 0x22c) *
                                      *(float *)(this + 0x1c8)) / param_3,
                              *(undefined4 *)(this + 0x208),fVar9);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *(float *)(this + 0x220) = fVar7;
    fVar7 = fVar7 - fVar9;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar3 = *(long *)(this + 0x28);
      uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x15c),uVar12,*(float *)(lVar3 + 0x160) * fVar13);
      uVar32 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),uVar12,*(float *)(lVar3 + 0x170) * fVar13);
      uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x14c),uVar12,*(float *)(lVar3 + 0x150) * fVar13);
      fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x164),fVar16,uVar24);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar16,uVar32);
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x154),fVar16,uVar12);
      uVar12 = NEON_fmadd(fVar9 * fVar7,*(undefined4 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar12;
      *(ulong *)(param_1 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar13 * fVar7,
                    (float)*(undefined8 *)(param_1 + 0x50) +
                    fVar8 * (float)*(undefined8 *)(param_1 + 0x60) * fVar7);
      uVar12 = *(undefined4 *)(this + 500);
      uVar10 = (ulong)*(uint *)(this + 0x1f8);
      fVar16 = *(float *)(this + 0x1fc);
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      lVar3 = *(long *)(this + 0x30);
      fVar7 = -fVar7;
      fVar8 = (float)uVar10;
      uVar24 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x15c),uVar12,*(float *)(lVar3 + 0x160) * fVar8);
      uVar32 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x14c),uVar12,*(float *)(lVar3 + 0x150) * fVar8);
      uVar12 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x16c),uVar12,*(float *)(lVar3 + 0x170) * fVar8);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x164),fVar16,uVar24);
      fVar13 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x154),fVar16,uVar32);
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x174),fVar16,uVar12);
      uVar12 = NEON_fmadd(fVar8 * fVar7,*(undefined4 *)(param_2 + 0x68),
                          *(undefined4 *)(param_2 + 0x58));
      *(ulong *)(param_2 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar9 * fVar7,
                    (float)*(undefined8 *)(param_2 + 0x50) +
                    fVar13 * (float)*(undefined8 *)(param_2 + 0x60) * fVar7);
      *(undefined4 *)(param_2 + 0x58) = uVar12;
    }
  }
LAB_00f39634:
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


