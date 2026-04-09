// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawConstraint
// Entry Point: 00f356a8
// Size: 5428 bytes
// Signature: undefined __thiscall debugDrawConstraint(btDiscreteDynamicsWorld * this, btTypedConstraint * param_1)


/* btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint*) */

void __thiscall
btDiscreteDynamicsWorld::debugDrawConstraint
          (btDiscreteDynamicsWorld *this,btTypedConstraint *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  ulong *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
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
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  float local_168;
  undefined4 local_164;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  long local_b8;
  
  puVar4 = &stack0xffffffffffffff60;
  lVar2 = tpidr_el0;
  local_b8 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)(**(code **)(*(long *)this + 0x28))();
  uVar5 = (**(code **)(*plVar7 + 0x70))();
  plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
  uVar6 = (**(code **)(*plVar7 + 0x70))();
  fVar21 = *(float *)(param_1 + 0x3c);
  if (fVar21 <= 0.0) goto switchD_00f3575c_caseD_8;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 3:
    lVar13 = *(long *)(param_1 + 0x28);
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_f4 = 0;
    fStack_f0 = 0.0;
    uStack_d8 = 0x3f800000;
    fStack_ec = 1.0;
    fStack_fc = 0.0;
    fStack_f8 = 0.0;
    local_100 = 1.0;
    fVar24 = (float)*(undefined8 *)(param_1 + 0x144);
    fVar22 = *(float *)(param_1 + 0x14c);
    fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x144) >> 0x20);
    uVar12 = NEON_rev64(CONCAT44(*(float *)(lVar13 + 0xc) * fVar32,
                                 *(float *)(lVar13 + 0x18) * fVar24),4);
    fVar27 = (float)NEON_fmadd(*(undefined4 *)(lVar13 + 0x30),fVar22,
                               *(float *)(lVar13 + 0x28) * fVar24 +
                               *(float *)(lVar13 + 0x2c) * fVar32);
    local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar32 * *(float *)(lVar13 + 0x1c) +
                        *(float *)(lVar13 + 0x20) * fVar22 +
                        (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                        (float)uVar12 + fVar24 * *(float *)(lVar13 + 8) +
                        *(float *)(lVar13 + 0x10) * fVar22 + (float)*(undefined8 *)(lVar13 + 0x38));
    uStack_c8 = (ulong)(uint)(fVar27 + *(float *)(lVar13 + 0x40));
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    lVar13 = *(long *)(param_1 + 0x30);
    fVar22 = *(float *)(param_1 + 0x15c);
    fVar24 = (float)*(undefined8 *)(param_1 + 0x154);
    fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x154) >> 0x20);
    uVar12 = NEON_rev64(CONCAT44(*(float *)(lVar13 + 0xc) * fVar32,
                                 *(float *)(lVar13 + 0x18) * fVar24),4);
    fVar27 = (float)NEON_fmadd(*(undefined4 *)(lVar13 + 0x30),fVar22,
                               *(float *)(lVar13 + 0x28) * fVar24 +
                               *(float *)(lVar13 + 0x2c) * fVar32);
    local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar32 * *(float *)(lVar13 + 0x1c) +
                        *(float *)(lVar13 + 0x20) * fVar22 +
                        (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                        (float)uVar12 + fVar24 * *(float *)(lVar13 + 8) +
                        *(float *)(lVar13 + 0x10) * fVar22 + (float)*(undefined8 *)(lVar13 + 0x38));
    uStack_c8 = (ulong)(uint)(fVar27 + *(float *)(lVar13 + 0x40));
    if ((uVar5 >> 0xb & 1) != 0) {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    goto switchD_00f3575c_caseD_8;
  case 4:
    lVar13 = *(long *)(param_1 + 0x28);
    fVar17 = *(float *)(param_1 + 0x248);
    fVar24 = *(float *)(lVar13 + 8);
    fVar27 = *(float *)(lVar13 + 0xc);
    fVar32 = *(float *)(lVar13 + 0x18);
    fVar18 = *(float *)(lVar13 + 0x1c);
    uStack_f4 = 0;
    fVar35 = *(float *)(lVar13 + 0x28);
    fVar40 = *(float *)(lVar13 + 0x2c);
    fVar22 = (float)*(undefined8 *)(param_1 + 0x240);
    fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x240) >> 0x20);
    uVar29 = *(undefined4 *)(param_1 + 600);
    fVar38 = (float)*(undefined8 *)(param_1 + 0x270);
    fVar42 = (float)*(undefined8 *)(param_1 + 0x250);
    fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
    fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x270) >> 0x20);
    uVar23 = NEON_fmadd(uVar29,fVar27,fVar17 * fVar24);
    fVar41 = *(float *)(lVar13 + 0x10);
    uVar31 = *(undefined4 *)(param_1 + 0x268);
    uVar26 = NEON_fmadd(fVar18,uVar29,fVar32 * fVar17);
    uVar12 = NEON_rev64(CONCAT44(fVar39 * fVar27,fVar38 * fVar32),4);
    fVar44 = *(float *)(lVar13 + 0x20);
    fVar36 = (float)*(undefined8 *)(param_1 + 0x260);
    fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x260) >> 0x20);
    local_100 = fVar22 * fVar24 + fVar42 * fVar27 + fVar36 * fVar41;
    fStack_fc = fVar33 * fVar24 + fVar43 * fVar27 + fVar37 * fVar41;
    fVar34 = *(float *)(lVar13 + 0x30);
    fStack_f8 = (float)NEON_fmadd(uVar31,fVar41,uVar23);
    uVar23 = NEON_fmadd(fVar40,uVar29,fVar35 * fVar17);
    fVar27 = *(float *)(param_1 + 0x278);
    fStack_f0 = fVar22 * fVar32 + fVar42 * fVar18 + fVar36 * fVar44;
    fStack_ec = fVar33 * fVar32 + fVar43 * fVar18 + fVar37 * fVar44;
    uVar19 = NEON_fmadd(fVar44,uVar31,uVar26);
    fVar32 = (float)NEON_fmadd(fVar27,fVar34,fVar35 * fVar38 + fVar40 * fVar39);
    local_e0 = CONCAT44(fVar33 * fVar35 + fVar43 * fVar40 + fVar37 * fVar34,
                        fVar22 * fVar35 + fVar42 * fVar40 + fVar36 * fVar34);
    uVar30 = NEON_fmadd(fVar34,uVar31,uVar23);
    local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar18 * fVar39 + fVar44 * fVar27 +
                        (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                        (float)uVar12 + fVar24 * fVar38 + fVar41 * fVar27 +
                        (float)*(undefined8 *)(lVar13 + 0x38));
    uStack_e8 = (ulong)uVar19;
    uStack_d8 = (ulong)uVar30;
    uStack_c8 = (ulong)(uint)(fVar32 + *(float *)(lVar13 + 0x40));
    if ((uVar5 >> 0xb & 1) == 0) {
      lVar13 = *(long *)(param_1 + 0x30);
      fVar17 = *(float *)(param_1 + 0x288);
      fVar24 = *(float *)(lVar13 + 8);
      fVar27 = *(float *)(lVar13 + 0xc);
      fVar32 = *(float *)(lVar13 + 0x18);
      fVar18 = *(float *)(lVar13 + 0x1c);
      uStack_f4 = 0;
      fVar35 = *(float *)(lVar13 + 0x28);
      fVar40 = *(float *)(lVar13 + 0x2c);
      fVar22 = (float)*(undefined8 *)(param_1 + 0x280);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x280) >> 0x20);
      uVar29 = *(undefined4 *)(param_1 + 0x298);
      fVar38 = (float)*(undefined8 *)(param_1 + 0x2b0);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x290);
      fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x290) >> 0x20);
      fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20);
      uVar23 = NEON_fmadd(uVar29,fVar27,fVar17 * fVar24);
      fVar41 = *(float *)(lVar13 + 0x10);
      uVar31 = *(undefined4 *)(param_1 + 0x2a8);
      uVar26 = NEON_fmadd(fVar18,uVar29,fVar32 * fVar17);
      uVar12 = NEON_rev64(CONCAT44(fVar39 * fVar27,fVar38 * fVar32),4);
      fVar44 = *(float *)(lVar13 + 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x2a0);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a0) >> 0x20);
      local_100 = fVar22 * fVar24 + fVar42 * fVar27 + fVar36 * fVar41;
      fStack_fc = fVar33 * fVar24 + fVar43 * fVar27 + fVar37 * fVar41;
      fVar34 = *(float *)(lVar13 + 0x30);
      fStack_f8 = (float)NEON_fmadd(uVar31,fVar41,uVar23);
      uVar23 = NEON_fmadd(fVar40,uVar29,fVar35 * fVar17);
      fVar27 = *(float *)(param_1 + 0x2b8);
      fStack_f0 = fVar22 * fVar32 + fVar42 * fVar18 + fVar36 * fVar44;
      fStack_ec = fVar33 * fVar32 + fVar43 * fVar18 + fVar37 * fVar44;
      uVar30 = NEON_fmadd(fVar44,uVar31,uVar26);
      fVar32 = (float)NEON_fmadd(fVar27,fVar34,fVar35 * fVar38 + fVar40 * fVar39);
      local_e0 = CONCAT44(fVar33 * fVar35 + fVar43 * fVar40 + fVar37 * fVar34,
                          fVar22 * fVar35 + fVar42 * fVar40 + fVar36 * fVar34);
      uVar5 = NEON_fmadd(fVar34,uVar31,uVar23);
      local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar18 * fVar39 + fVar44 * fVar27 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                          (float)uVar12 + fVar24 * fVar38 + fVar41 * fVar27 +
                          (float)*(undefined8 *)(lVar13 + 0x38));
      uStack_e8 = (ulong)uVar30;
      uStack_d8 = (ulong)uVar5;
      uStack_c8 = (ulong)(uint)(fVar32 + *(float *)(lVar13 + 0x40));
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
      lVar13 = *(long *)(param_1 + 0x30);
      fVar22 = *(float *)(param_1 + 0x288);
      fVar33 = *(float *)(lVar13 + 0x18);
      fVar32 = *(float *)(lVar13 + 0x1c);
      fVar17 = *(float *)(lVar13 + 8);
      fVar18 = *(float *)(lVar13 + 0xc);
      uStack_f4 = 0;
      fVar42 = *(float *)(lVar13 + 0x28);
      fVar41 = *(float *)(lVar13 + 0x2c);
      fVar24 = (float)*(undefined8 *)(param_1 + 0x280);
      fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x280) >> 0x20);
      uVar29 = *(undefined4 *)(param_1 + 0x298);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x2b0);
      fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x290);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x290) >> 0x20);
      uVar23 = NEON_fmadd(uVar29,fVar18,fVar22 * fVar17);
      uVar31 = *(undefined4 *)(param_1 + 0x2a8);
      fVar40 = *(float *)(lVar13 + 0x10);
      fVar43 = *(float *)(param_1 + 0x2b8);
      uVar12 = NEON_rev64(CONCAT44(fVar35 * fVar18,fVar34 * fVar33),4);
      fVar38 = (float)*(undefined8 *)(param_1 + 0x2a0);
      fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a0) >> 0x20);
      local_100 = fVar24 * fVar17 + fVar36 * fVar18 + fVar38 * fVar40;
      fStack_fc = fVar27 * fVar17 + fVar37 * fVar18 + fVar39 * fVar40;
      fStack_f8 = (float)NEON_fmadd(uVar31,fVar40,uVar23);
      uVar26 = NEON_fmadd(fVar41,uVar29,fVar42 * fVar22);
      uVar23 = NEON_fmadd(fVar32,uVar29,fVar33 * fVar22);
      fVar22 = *(float *)(lVar13 + 0x20);
      fVar18 = *(float *)(lVar13 + 0x30);
      fStack_f0 = fVar24 * fVar33 + fVar36 * fVar32 + fVar38 * fVar22;
      fStack_ec = fVar27 * fVar33 + fVar37 * fVar32 + fVar39 * fVar22;
      fVar33 = (float)NEON_fmadd(fVar43,fVar18,fVar42 * fVar34 + fVar41 * fVar35);
      uVar30 = NEON_fmadd(fVar18,uVar31,uVar26);
      uVar5 = NEON_fmadd(fVar22,uVar31,uVar23);
      local_e0 = CONCAT44(fVar27 * fVar42 + fVar37 * fVar41 + fVar39 * fVar18,
                          fVar24 * fVar42 + fVar36 * fVar41 + fVar38 * fVar18);
      uStack_d8 = (ulong)uVar30;
      local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar32 * fVar35 + fVar22 * fVar43 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                          (float)uVar12 + fVar17 * fVar34 + fVar40 * fVar43 +
                          (float)*(undefined8 *)(lVar13 + 0x38));
      uStack_e8 = (ulong)uVar5;
      uStack_c8 = (ulong)(uint)(fVar33 + *(float *)(lVar13 + 0x40));
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    fVar27 = *(float *)(param_1 + 0x2c8);
    fVar32 = *(float *)(param_1 + 0x2cc);
    fVar24 = fmodf(fVar27 - fVar32,6.283185);
    if (-3.141593 <= fVar24) {
      if (3.141593 < fVar24) {
        fVar22 = -6.283185;
        goto LAB_00f364c8;
      }
    }
    else {
      fVar22 = 6.283185;
LAB_00f364c8:
      fVar24 = fVar24 + fVar22;
    }
    fVar27 = fmodf(fVar32 + fVar27,6.283185);
    if (-3.141593 <= fVar27) {
      if (3.141593 < fVar27) {
        fVar22 = -6.283185;
        goto LAB_00f36520;
      }
    }
    else {
      fVar22 = 6.283185;
LAB_00f36520:
      fVar27 = fVar27 + fVar22;
    }
    if ((fVar24 == fVar27) || ((uVar6 >> 0xc & 1) == 0)) goto switchD_00f3575c_caseD_8;
    if (fVar32 <= 0.0) {
      fVar24 = 0.0;
    }
    local_160 = CONCAT44((float)uStack_e8,fStack_f8);
    if (fVar32 <= 0.0) {
      fVar27 = 6.283185;
    }
    bVar11 = 0.0 < fVar32;
    uStack_158 = uStack_d8 & 0xffffffff;
    puVar8 = &local_d0;
    local_110 = CONCAT44(fStack_f0,local_100);
    uStack_108 = local_e0 & 0xffffffff;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_120 = 0;
    local_118 = 0;
    puVar9 = &local_110;
    puVar10 = &local_120;
    pcVar14 = *(code **)(*plVar7 + 0x88);
    goto LAB_00f36b94;
  case 5:
    lVar13 = *(long *)(param_1 + 0x28);
    puVar8 = (undefined8 *)(param_1 + 0x144);
    uVar29 = *(undefined4 *)(param_1 + 0x15c);
    fVar24 = *(float *)(lVar13 + 8);
    fVar27 = *(float *)(lVar13 + 0xc);
    fVar32 = *(float *)(lVar13 + 0x18);
    fVar18 = *(float *)(lVar13 + 0x1c);
    uStack_f4 = 0;
    fVar17 = *(float *)(param_1 + 0x14c);
    fVar22 = (float)*puVar8;
    fVar33 = (float)((ulong)*puVar8 >> 0x20);
    fVar35 = *(float *)(lVar13 + 0x28);
    fVar40 = *(float *)(lVar13 + 0x2c);
    fVar41 = *(float *)(lVar13 + 0x10);
    fVar42 = (float)*(undefined8 *)(param_1 + 0x154);
    fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x154) >> 0x20);
    uVar23 = NEON_fmadd(uVar29,fVar27,fVar17 * fVar24);
    fVar38 = (float)*(undefined8 *)(param_1 + 0x174);
    fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x174) >> 0x20);
    uVar31 = *(undefined4 *)(param_1 + 0x16c);
    fVar44 = *(float *)(lVar13 + 0x20);
    fVar36 = (float)*(undefined8 *)(param_1 + 0x164);
    fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x164) >> 0x20);
    local_100 = fVar22 * fVar24 + fVar42 * fVar27 + fVar36 * fVar41;
    fStack_fc = fVar33 * fVar24 + fVar43 * fVar27 + fVar37 * fVar41;
    uVar12 = NEON_rev64(CONCAT44(fVar39 * fVar27,fVar38 * fVar32),4);
    fStack_f8 = (float)NEON_fmadd(uVar31,fVar41,uVar23);
    uVar26 = NEON_fmadd(fVar18,uVar29,fVar32 * fVar17);
    fVar34 = *(float *)(lVar13 + 0x30);
    fVar27 = *(float *)(param_1 + 0x17c);
    uVar23 = NEON_fmadd(fVar40,uVar29,fVar35 * fVar17);
    fStack_f0 = fVar22 * fVar32 + fVar42 * fVar18 + fVar36 * fVar44;
    fStack_ec = fVar33 * fVar32 + fVar43 * fVar18 + fVar37 * fVar44;
    fVar32 = (float)NEON_fmadd(fVar27,fVar34,fVar35 * fVar38 + fVar40 * fVar39);
    uVar19 = NEON_fmadd(fVar44,uVar31,uVar26);
    local_e0 = CONCAT44(fVar33 * fVar35 + fVar43 * fVar40 + fVar37 * fVar34,
                        fVar22 * fVar35 + fVar42 * fVar40 + fVar36 * fVar34);
    uVar30 = NEON_fmadd(fVar34,uVar31,uVar23);
    local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar18 * fVar39 + fVar44 * fVar27 +
                        (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                        (float)uVar12 + fVar24 * fVar38 + fVar41 * fVar27 +
                        (float)*(undefined8 *)(lVar13 + 0x38));
    uStack_e8 = (ulong)uVar19;
    uStack_d8 = (ulong)uVar30;
    uStack_c8 = (ulong)(uint)(fVar32 + *(float *)(lVar13 + 0x40));
    if ((uVar5 >> 0xb & 1) == 0) {
      lVar13 = *(long *)(param_1 + 0x30);
      fVar17 = *(float *)(param_1 + 0x18c);
      fVar24 = *(float *)(lVar13 + 8);
      fVar27 = *(float *)(lVar13 + 0xc);
      fVar32 = *(float *)(lVar13 + 0x18);
      fVar18 = *(float *)(lVar13 + 0x1c);
      uStack_f4 = 0;
      fVar35 = *(float *)(lVar13 + 0x28);
      fVar40 = *(float *)(lVar13 + 0x2c);
      fVar22 = (float)*(undefined8 *)(param_1 + 0x184);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x184) >> 0x20);
      uVar29 = *(undefined4 *)(param_1 + 0x19c);
      fVar38 = (float)*(undefined8 *)(param_1 + 0x1b4);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x194);
      fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x194) >> 0x20);
      fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b4) >> 0x20);
      uVar23 = NEON_fmadd(uVar29,fVar27,fVar17 * fVar24);
      fVar41 = *(float *)(lVar13 + 0x10);
      uVar31 = *(undefined4 *)(param_1 + 0x1ac);
      uVar26 = NEON_fmadd(fVar18,uVar29,fVar32 * fVar17);
      uVar12 = NEON_rev64(CONCAT44(fVar39 * fVar27,fVar38 * fVar32),4);
      fVar44 = *(float *)(lVar13 + 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x1a4);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a4) >> 0x20);
      local_100 = fVar22 * fVar24 + fVar42 * fVar27 + fVar36 * fVar41;
      fStack_fc = fVar33 * fVar24 + fVar43 * fVar27 + fVar37 * fVar41;
      fVar34 = *(float *)(lVar13 + 0x30);
      fStack_f8 = (float)NEON_fmadd(uVar31,fVar41,uVar23);
      uVar23 = NEON_fmadd(fVar40,uVar29,fVar35 * fVar17);
      fVar27 = *(float *)(param_1 + 0x1bc);
      fStack_f0 = fVar22 * fVar32 + fVar42 * fVar18 + fVar36 * fVar44;
      fStack_ec = fVar33 * fVar32 + fVar43 * fVar18 + fVar37 * fVar44;
      uVar30 = NEON_fmadd(fVar44,uVar31,uVar26);
      fVar32 = (float)NEON_fmadd(fVar27,fVar34,fVar35 * fVar38 + fVar40 * fVar39);
      local_e0 = CONCAT44(fVar33 * fVar35 + fVar43 * fVar40 + fVar37 * fVar34,
                          fVar22 * fVar35 + fVar42 * fVar40 + fVar36 * fVar34);
      uVar5 = NEON_fmadd(fVar34,uVar31,uVar23);
      local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar18 * fVar39 + fVar44 * fVar27 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                          (float)uVar12 + fVar24 * fVar38 + fVar41 * fVar27 +
                          (float)*(undefined8 *)(lVar13 + 0x38));
      uStack_e8 = (ulong)uVar30;
      uStack_d8 = (ulong)uVar5;
      uStack_c8 = (ulong)(uint)(fVar32 + *(float *)(lVar13 + 0x40));
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
      lVar13 = *(long *)(param_1 + 0x30);
      fVar22 = *(float *)(param_1 + 0x18c);
      fVar33 = *(float *)(lVar13 + 0x18);
      fVar32 = *(float *)(lVar13 + 0x1c);
      fVar17 = *(float *)(lVar13 + 8);
      fVar18 = *(float *)(lVar13 + 0xc);
      uStack_f4 = 0;
      fVar42 = *(float *)(lVar13 + 0x28);
      fVar41 = *(float *)(lVar13 + 0x2c);
      fVar24 = (float)*(undefined8 *)(param_1 + 0x184);
      fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x184) >> 0x20);
      uVar29 = *(undefined4 *)(param_1 + 0x19c);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x1b4);
      fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b4) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x194);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x194) >> 0x20);
      uVar23 = NEON_fmadd(uVar29,fVar18,fVar22 * fVar17);
      uVar31 = *(undefined4 *)(param_1 + 0x1ac);
      fVar40 = *(float *)(lVar13 + 0x10);
      fVar43 = *(float *)(param_1 + 0x1bc);
      uVar12 = NEON_rev64(CONCAT44(fVar35 * fVar18,fVar34 * fVar33),4);
      fVar38 = (float)*(undefined8 *)(param_1 + 0x1a4);
      fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a4) >> 0x20);
      local_100 = fVar24 * fVar17 + fVar36 * fVar18 + fVar38 * fVar40;
      fStack_fc = fVar27 * fVar17 + fVar37 * fVar18 + fVar39 * fVar40;
      fStack_f8 = (float)NEON_fmadd(uVar31,fVar40,uVar23);
      uVar26 = NEON_fmadd(fVar41,uVar29,fVar42 * fVar22);
      uVar23 = NEON_fmadd(fVar32,uVar29,fVar33 * fVar22);
      fVar22 = *(float *)(lVar13 + 0x20);
      fVar18 = *(float *)(lVar13 + 0x30);
      fStack_f0 = fVar24 * fVar33 + fVar36 * fVar32 + fVar38 * fVar22;
      fStack_ec = fVar27 * fVar33 + fVar37 * fVar32 + fVar39 * fVar22;
      fVar33 = (float)NEON_fmadd(fVar43,fVar18,fVar42 * fVar34 + fVar41 * fVar35);
      uVar30 = NEON_fmadd(fVar18,uVar31,uVar26);
      uVar5 = NEON_fmadd(fVar22,uVar31,uVar23);
      local_e0 = CONCAT44(fVar27 * fVar42 + fVar37 * fVar41 + fVar39 * fVar18,
                          fVar24 * fVar42 + fVar36 * fVar41 + fVar38 * fVar18);
      uStack_d8 = (ulong)uVar30;
      local_d0 = CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar32 * fVar35 + fVar22 * fVar43 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20),
                          (float)uVar12 + fVar17 * fVar34 + fVar40 * fVar43 +
                          (float)*(undefined8 *)(lVar13 + 0x38));
      uStack_e8 = (ulong)uVar5;
      uStack_c8 = (ulong)(uint)(fVar33 + *(float *)(lVar13 + 0x40));
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    if ((uVar6 >> 0xc & 1) == 0) goto switchD_00f3575c_caseD_8;
    fVar17 = *(float *)(param_1 + 0x1d4);
    sincosf(SQRT(1.039566 /
                 (1.0 / (*(float *)(param_1 + 0x1d8) * *(float *)(param_1 + 0x1d8)) +
                 0.03956629 / (fVar17 * fVar17))) * 0.5,&fStack_1c4,&local_1c8);
    fVar27 = local_1c8 * fVar21;
    fVar24 = fStack_1c4 * 0.9807853;
    fStack_1c4 = fStack_1c4 * 0.1950907;
    uVar5 = 0;
    fVar22 = fVar24 * -fVar21;
    uVar23 = NEON_fmadd(fVar22,fVar24,fVar27 * local_1c8);
    fVar32 = (float)NEON_fmsub(fStack_1c4 * fVar21,fStack_1c4,uVar23);
    fVar33 = (float)NEON_fmadd(fStack_1c4 * fVar21,local_1c8,fStack_1c4 * fVar27);
    fVar24 = (float)NEON_fnmsub(fVar22,local_1c8,fVar24 * fVar27);
    uVar23 = NEON_fmadd(local_e0._4_4_,fVar33,(float)local_e0 * fVar32);
    fVar27 = (float)NEON_fmadd((undefined4)uStack_d8,fVar24,uVar23);
    local_110 = CONCAT44(fStack_f0 * fVar32 + fStack_ec * fVar33 + (float)uStack_e8 * fVar24 +
                         (float)((ulong)local_d0 >> 0x20),
                         local_100 * fVar32 + fStack_fc * fVar33 + fStack_f8 * fVar24 +
                         (float)local_d0);
    uStack_108 = (ulong)(uint)(fVar27 + (float)uStack_c8);
    while( true ) {
      sincosf((float)uVar5 * 0.1963495,&local_1cc,&local_1d0);
      fVar24 = local_1d0;
      fVar32 = local_1d0 * local_1d0;
      fVar27 = local_1cc * local_1cc;
      if (1.192093e-07 < ABS(local_1d0)) {
        fVar22 = fVar27 / fVar32;
        fVar17 = SQRT((fVar22 + 1.0) /
                      (1.0 / (*(float *)(param_1 + 0x1d8) * *(float *)(param_1 + 0x1d8)) +
                      fVar22 / (fVar17 * fVar17)));
      }
      fVar33 = -local_1cc;
      sincosf(fVar17 * 0.5,&fStack_1d4,&local_1d8);
      fVar27 = fStack_1d4 / SQRT(fVar32 + fVar27);
      fVar22 = local_1d8 * fVar21;
      fVar24 = fVar27 * fVar24;
      fVar27 = fVar27 * fVar33;
      fVar33 = fVar24 * -fVar21;
      uVar23 = NEON_fmadd(fVar33,fVar24,fVar22 * local_1d8);
      fVar32 = (float)NEON_fmsub(fVar27 * fVar21,fVar27,uVar23);
      fVar17 = (float)NEON_fmadd(fVar27 * fVar21,local_1d8,fVar27 * fVar22);
      fVar27 = (float)NEON_fnmsub(fVar33,local_1d8,fVar24 * fVar22);
      uVar23 = NEON_fmadd(local_e0._4_4_,fVar17,(float)local_e0 * fVar32);
      fVar24 = (float)NEON_fmadd((undefined4)uStack_d8,fVar27,uVar23);
      local_160 = CONCAT44(fStack_f0 * fVar32 + fStack_ec * fVar17 + (float)uStack_e8 * fVar27 +
                           (float)((ulong)local_d0 >> 0x20),
                           local_100 * fVar32 + fStack_fc * fVar17 + fStack_f8 * fVar27 +
                           (float)local_d0);
      uStack_158 = (ulong)(uint)(fVar24 + (float)uStack_c8);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      local_120 = 0;
      local_118 = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_110,&local_160,&local_120);
      if ((uVar5 & 3) == 0) {
        plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        local_120 = 0;
        local_118 = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_d0,&local_160,&local_120);
      }
      uStack_108 = uStack_158;
      local_110 = local_160;
      if (uVar5 == 0x1f) break;
      fVar17 = *(float *)(param_1 + 0x1d4);
      uVar5 = uVar5 + 1;
    }
    lVar13 = *(long *)(param_1 + 0x30);
    fVar24 = *(float *)(param_1 + 0x1dc);
    fVar32 = *(float *)(param_1 + 0x218);
    if (*(float *)(lVar13 + 0x19c) <= 0.0) {
      lVar13 = *(long *)(param_1 + 0x28);
    }
    else {
      puVar8 = (undefined8 *)(param_1 + 0x184);
    }
    btTransform::operator*((btTransform *)(lVar13 + 8),(btTransform *)puVar8);
    local_164 = 0;
    uStack_d8 = uStack_138;
    local_e0 = uStack_140;
    uVar3 = local_e0;
    uStack_c8 = uStack_128;
    local_d0 = local_130;
    fStack_f8 = (float)uStack_158;
    uStack_f4 = (undefined4)(uStack_158 >> 0x20);
    local_100 = (float)local_160;
    fStack_fc = (float)((ulong)local_160 >> 0x20);
    uStack_e8 = uStack_148;
    fStack_f0 = (float)local_150;
    fStack_ec = (float)((ulong)local_150 >> 0x20);
    uStack_158 = uStack_128;
    local_160 = local_130;
    local_120 = CONCAT44(fStack_f0,local_100);
    local_e0._4_4_ = (float)(uStack_140 >> 0x20);
    local_170._0_4_ = fStack_fc;
    local_170._4_4_ = fStack_ec;
    local_118 = uStack_140 & 0xffffffff;
    local_168 = local_e0._4_4_;
    local_e0 = uVar3;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    fVar27 = fVar24 - fVar32;
    puVar8 = &local_160;
    pcVar14 = *(code **)(*plVar7 + 0x88);
    fVar24 = -(fVar32 + fVar24);
    break;
  case 6:
  case 9:
    uStack_e8 = *(ulong *)(param_1 + 0x458);
    uStack_d8 = *(ulong *)(param_1 + 0x468);
    local_e0 = *(ulong *)(param_1 + 0x460);
    uStack_c8 = *(ulong *)(param_1 + 0x478);
    local_d0 = *(undefined8 *)(param_1 + 0x470);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_100 = (float)*(undefined8 *)(param_1 + 0x440);
    fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x450);
    fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x450) >> 0x20);
    if ((uVar5 >> 0xb & 1) != 0) {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
      uStack_d8 = *(ulong *)(param_1 + 0x4a8);
      local_e0 = *(ulong *)(param_1 + 0x4a0);
      uStack_c8 = *(ulong *)(param_1 + 0x4b8);
      local_d0 = *(undefined8 *)(param_1 + 0x4b0);
      uStack_e8 = *(ulong *)(param_1 + 0x498);
      fStack_f8 = (float)*(undefined8 *)(param_1 + 0x488);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
      local_100 = (float)*(undefined8 *)(param_1 + 0x480);
      fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
      fStack_f0 = (float)*(undefined8 *)(param_1 + 0x490);
      fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x490) >> 0x20);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    if ((uVar6 >> 0xc & 1) == 0) goto switchD_00f3575c_caseD_8;
    puVar15 = (ulong *)(param_1 + 0x460);
    uVar23 = *(undefined4 *)(param_1 + 0x3bc);
    uStack_e8 = *(ulong *)(param_1 + 0x458);
    uVar12 = *(undefined8 *)(param_1 + 0x450);
    uVar16 = *(undefined8 *)(param_1 + 0x440);
    uStack_d8 = *(ulong *)(param_1 + 0x468);
    local_e0 = *puVar15;
    uStack_c8 = *(ulong *)(param_1 + 0x478);
    local_d0 = *(undefined8 *)(param_1 + 0x470);
    fStack_f0 = (float)uVar12;
    fStack_ec = (float)((ulong)uVar12 >> 0x20);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_100 = (float)uVar16;
    fStack_fc = (float)((ulong)uVar16 >> 0x20);
    local_160 = CONCAT44((float)uStack_e8,fStack_f8);
    uStack_158 = uStack_d8 & 0xffffffff;
    uVar26 = *(undefined4 *)(param_1 + 0x3c0);
    local_110 = CONCAT44(fStack_f0,local_100);
    uVar29 = *(undefined4 *)(param_1 + 0x3fc);
    uStack_108 = local_e0 & 0xffffffff;
    uVar31 = *(undefined4 *)(param_1 + 0x400);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_120 = 0;
    local_118 = 0;
    (**(code **)(*plVar7 + 0x90))
              (fVar21 * 0.9,uVar23,uVar26,uVar29,uVar31,0x41200000,plVar7,param_1 + 0x4b0,&local_160
               ,&local_110,&local_120,1);
    fVar27 = fStack_ec;
    fVar24 = fStack_fc;
    fVar32 = local_e0._4_4_;
    fVar22 = *(float *)(param_1 + 0x4c8);
    local_110 = CONCAT44(fStack_ec,fStack_fc);
    uStack_108 = (ulong)(uint)local_e0._4_4_;
    sincosf(*(float *)(param_1 + 0x4c4),&fStack_1b4,&local_1b8);
    sincosf(fVar22,&fStack_1bc,&local_1c0);
    uStack_e8 = *(ulong *)(param_1 + 0x498);
    local_164 = 0;
    uStack_d8 = *(ulong *)(param_1 + 0x4a8);
    local_e0 = *(ulong *)(param_1 + 0x4a0);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x488);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
    local_100 = (float)*(undefined8 *)(param_1 + 0x480);
    fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x4b8);
    local_d0 = *(undefined8 *)(param_1 + 0x4b0);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x490);
    fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x490) >> 0x20);
    uVar26 = NEON_fmadd(fVar24,local_1c0,fVar27 * fStack_1bc);
    uVar23 = NEON_fnmsub(fVar27,local_1c0,fVar24 * fStack_1bc);
    local_170._0_4_ = -local_100;
    local_170._4_4_ = -fStack_f0;
    fVar24 = *(float *)(param_1 + 0x37c);
    uVar29 = NEON_fnmsub(uVar26,local_1b8,fVar32 * fStack_1b4);
    fVar27 = *(float *)(param_1 + 0x380);
    uVar26 = NEON_fmadd(uVar26,fStack_1b4,fVar32 * local_1b8);
    local_168 = -(float)local_e0;
    local_120 = CONCAT44(uVar23,uVar29);
    local_118 = CONCAT44(local_118._4_4_,uVar26);
    if (fVar24 <= fVar27) {
      if (fVar24 < fVar27) {
        plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        pcVar14 = *(code **)(*plVar7 + 0x88);
        uVar12 = 1;
        goto LAB_00f3661c;
      }
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      fVar24 = -3.141593;
      fVar27 = 3.141593;
      pcVar14 = *(code **)(*plVar7 + 0x88);
      uVar12 = 0;
LAB_00f3661c:
      uStack_178 = 0;
      local_180 = 0;
      (*pcVar14)(fVar21,fVar21,fVar24,fVar27,0x41200000,plVar7,param_1 + 0x4b0,&local_170,&local_120
                 ,&local_180,uVar12);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x440);
    uStack_c8 = *(ulong *)(param_1 + 0x478);
    local_d0 = *(undefined8 *)(param_1 + 0x470);
    uStack_e8 = *(ulong *)(param_1 + 0x458);
    uVar16 = *(undefined8 *)(param_1 + 0x450);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_100 = (float)uVar12;
    fStack_fc = (float)((ulong)uVar12 >> 0x20);
    fStack_f0 = (float)uVar16;
    fStack_ec = (float)((ulong)uVar16 >> 0x20);
    goto LAB_00f36ab0;
  case 7:
    uStack_e8 = *(ulong *)(param_1 + 0x368);
    uStack_d8 = *(ulong *)(param_1 + 0x378);
    local_e0 = *(ulong *)(param_1 + 0x370);
    uStack_c8 = *(ulong *)(param_1 + 0x388);
    local_d0 = *(undefined8 *)(param_1 + 0x380);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x358);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20);
    local_100 = (float)*(undefined8 *)(param_1 + 0x350);
    fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x360);
    fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x360) >> 0x20);
    if ((uVar5 >> 0xb & 1) == 0) {
      uStack_e8 = *(ulong *)(param_1 + 0x3a8);
      fStack_f8 = (float)*(undefined8 *)(param_1 + 0x398);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
      local_100 = (float)*(undefined8 *)(param_1 + 0x390);
      fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20);
      uStack_d8 = *(ulong *)(param_1 + 0x3b8);
      local_e0 = *(ulong *)(param_1 + 0x3b0);
      uStack_c8 = *(ulong *)(param_1 + 0x3c8);
      local_d0 = *(undefined8 *)(param_1 + 0x3c0);
      fStack_f0 = (float)*(undefined8 *)(param_1 + 0x3a0);
      fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
      uStack_d8 = *(ulong *)(param_1 + 0x3b8);
      local_e0 = *(ulong *)(param_1 + 0x3b0);
      uStack_c8 = *(ulong *)(param_1 + 0x3c8);
      local_d0 = *(undefined8 *)(param_1 + 0x3c0);
      uStack_e8 = *(ulong *)(param_1 + 0x3a8);
      fStack_f8 = (float)*(undefined8 *)(param_1 + 0x398);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
      local_100 = (float)*(undefined8 *)(param_1 + 0x390);
      fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20);
      fStack_f0 = (float)*(undefined8 *)(param_1 + 0x3a0);
      fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    if ((uVar6 >> 0xc & 1) == 0) goto switchD_00f3575c_caseD_8;
    uVar23 = *(undefined4 *)(param_1 + 0xd0);
    uVar26 = *(undefined4 *)(param_1 + 0xd4);
    puVar1 = (undefined4 *)(param_1 + 0x390);
    if (param_1[0xcc] != (btTypedConstraint)0x0) {
      puVar1 = (undefined4 *)(param_1 + 0x350);
    }
    uVar25 = *puVar1;
    fVar32 = (float)puVar1[1];
    uVar28 = puVar1[4];
    fVar22 = (float)puVar1[5];
    uVar30 = puVar1[8];
    fVar33 = (float)puVar1[9];
    uVar31 = NEON_fmadd(uVar23,uVar25,puVar1[0xc]);
    uVar20 = NEON_fmadd(uVar23,uVar28,puVar1[0xd]);
    uVar5 = NEON_fmadd(uVar23,uVar30,puVar1[0xe]);
    uVar23 = NEON_fmadd(uVar26,uVar25,puVar1[0xc]);
    uVar29 = NEON_fmadd(uVar26,uVar28,puVar1[0xd]);
    uVar6 = NEON_fmadd(uVar26,uVar30,puVar1[0xe]);
    local_160 = CONCAT44(uVar20,uVar31);
    uStack_158 = (ulong)uVar5;
    local_110 = CONCAT44(uVar29,uVar23);
    uStack_108 = (ulong)uVar6;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_120 = 0;
    local_118 = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_160,&local_110,&local_120);
    local_120 = CONCAT44(uVar28,uVar25);
    fVar24 = *(float *)(param_1 + 0xd8);
    fVar27 = *(float *)(param_1 + 0xdc);
    local_118 = (ulong)uVar30;
    puVar8 = (undefined8 *)(param_1 + 0x3c0);
    local_164 = 0;
    local_170._0_4_ = fVar32;
    local_170._4_4_ = fVar22;
    local_168 = fVar33;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    pcVar14 = *(code **)(*plVar7 + 0x88);
    break;
  default:
    goto switchD_00f3575c_caseD_8;
  case 0xc:
    puVar8 = (undefined8 *)(param_1 + 0x4ec);
    puVar9 = (undefined8 *)(param_1 + 0x51c);
    uStack_e8 = *(ulong *)(param_1 + 0x504);
    uStack_d8 = *(ulong *)(param_1 + 0x514);
    local_e0 = *(ulong *)(param_1 + 0x50c);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x4f4);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4f4) >> 0x20);
    local_100 = (float)*puVar8;
    fStack_fc = (float)((ulong)*puVar8 >> 0x20);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x4fc);
    fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x4fc) >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x524);
    local_d0 = *puVar9;
    if ((uVar5 >> 0xb & 1) != 0) {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
      uStack_d8 = *(ulong *)(param_1 + 0x554);
      local_e0 = *(ulong *)(param_1 + 0x54c);
      uStack_c8 = *(ulong *)(param_1 + 0x564);
      local_d0 = *(undefined8 *)(param_1 + 0x55c);
      uStack_e8 = *(ulong *)(param_1 + 0x544);
      fStack_f8 = (float)*(undefined8 *)(param_1 + 0x534);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x534) >> 0x20);
      local_100 = (float)*(undefined8 *)(param_1 + 0x52c);
      fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x52c) >> 0x20);
      fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x53c) >> 0x20);
      fStack_f0 = (float)*(undefined8 *)(param_1 + 0x53c);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar7 + 0x80))(fVar21,plVar7,&local_100);
    }
    if ((uVar6 >> 0xc & 1) == 0) goto switchD_00f3575c_caseD_8;
    puVar15 = (ulong *)(param_1 + 0x50c);
    uStack_c8 = *(ulong *)(param_1 + 0x524);
    local_d0 = *puVar9;
    uStack_e8 = *(ulong *)(param_1 + 0x504);
    uVar12 = *(undefined8 *)(param_1 + 0x4fc);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x4f4);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4f4) >> 0x20);
    local_100 = (float)*puVar8;
    fStack_fc = (float)((ulong)*puVar8 >> 0x20);
    uStack_d8 = *(ulong *)(param_1 + 0x514);
    local_e0 = *puVar15;
    fStack_ec = (float)((ulong)uVar12 >> 0x20);
    fStack_f0 = (float)uVar12;
    local_160 = CONCAT44((float)uStack_e8,fStack_f8);
    puVar10 = (undefined8 *)(param_1 + 0x55c);
    uVar23 = *(undefined4 *)(param_1 + 0x438);
    local_110 = CONCAT44(fStack_f0,local_100);
    uVar26 = *(undefined4 *)(param_1 + 0x43c);
    uVar29 = *(undefined4 *)(param_1 + 0x490);
    uStack_158 = uStack_d8 & 0xffffffff;
    uVar31 = *(undefined4 *)(param_1 + 0x494);
    uStack_108 = local_e0 & 0xffffffff;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_120 = 0;
    local_118 = 0;
    (**(code **)(*plVar7 + 0x90))
              (fVar21 * 0.9,uVar23,uVar26,uVar29,uVar31,0x41200000,plVar7,puVar10,&local_160,
               &local_110,&local_120,1);
    fVar32 = fStack_ec;
    fVar27 = fStack_fc;
    fVar22 = local_e0._4_4_;
    fVar24 = *(float *)(param_1 + 0x574);
    local_110 = CONCAT44(fStack_ec,fStack_fc);
    uStack_108 = (ulong)(uint)local_e0._4_4_;
    sincosf(*(float *)(param_1 + 0x570),&fStack_1a4,&local_1a8);
    sincosf(fVar24,&fStack_1ac,&local_1b0);
    fVar24 = *(float *)(param_1 + 0x3e0);
    local_164 = 0;
    uStack_e8 = *(ulong *)(param_1 + 0x544);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x534);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x534) >> 0x20);
    local_100 = (float)*(undefined8 *)(param_1 + 0x52c);
    fStack_fc = (float)((ulong)*(undefined8 *)(param_1 + 0x52c) >> 0x20);
    uVar26 = NEON_fmadd(local_1b0,fVar27,fVar32 * fStack_1ac);
    uStack_d8 = *(ulong *)(param_1 + 0x554);
    local_e0 = *(ulong *)(param_1 + 0x54c);
    fStack_ec = (float)((ulong)*(undefined8 *)(param_1 + 0x53c) >> 0x20);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x53c);
    uVar23 = NEON_fnmsub(fVar32,local_1b0,fStack_1ac * fVar27);
    uStack_c8 = *(ulong *)(param_1 + 0x564);
    local_d0 = *puVar10;
    uVar29 = NEON_fnmsub(uVar26,local_1a8,fVar22 * fStack_1a4);
    uVar26 = NEON_fmadd(uVar26,fStack_1a4,fVar22 * local_1a8);
    fVar27 = *(float *)(param_1 + 0x3e4);
    local_170._0_4_ = -local_100;
    local_170._4_4_ = -fStack_f0;
    local_120 = CONCAT44(uVar23,uVar29);
    local_168 = -(float)local_e0;
    local_118 = CONCAT44(local_118._4_4_,uVar26);
    if (fVar24 <= fVar27) {
      if (fVar24 < fVar27) {
        plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        pcVar14 = *(code **)(*plVar7 + 0x88);
        uVar12 = 1;
        goto LAB_00f36a8c;
      }
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      fVar24 = -3.141593;
      fVar27 = 3.141593;
      pcVar14 = *(code **)(*plVar7 + 0x88);
      uVar12 = 0;
LAB_00f36a8c:
      uStack_178 = 0;
      local_180 = 0;
      (*pcVar14)(fVar21,fVar21,fVar24,fVar27,0x41200000,plVar7,puVar10,&local_170,&local_120,
                 &local_180,uVar12);
    }
    uStack_c8 = *(ulong *)(param_1 + 0x524);
    local_d0 = *puVar9;
    uStack_e8 = *(ulong *)(param_1 + 0x504);
    uVar12 = *(undefined8 *)(param_1 + 0x4fc);
    fStack_f8 = (float)*(undefined8 *)(param_1 + 0x4f4);
    uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4f4) >> 0x20);
    local_100 = (float)*puVar8;
    fStack_fc = (float)((ulong)*puVar8 >> 0x20);
    fStack_ec = (float)((ulong)uVar12 >> 0x20);
    fStack_f0 = (float)uVar12;
LAB_00f36ab0:
    uStack_d8 = puVar15[1];
    local_e0 = *puVar15;
    uStack_178 = *(undefined8 *)(param_1 + 0x2c8);
    local_180 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_188 = *(undefined8 *)(param_1 + 0x2d8);
    local_190 = *(undefined8 *)(param_1 + 0x2d0);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_1a0 = 0;
    uStack_198 = 0;
    (**(code **)(*plVar7 + 0xa0))(plVar7,&local_180,&local_190,&local_100,&local_1a0);
    goto switchD_00f3575c_caseD_8;
  }
  uStack_178 = 0;
  local_180 = 0;
  puVar10 = &local_180;
  puVar9 = &local_170;
  bVar11 = true;
  puVar4 = &stack0xffffffffffffffa0;
LAB_00f36b94:
  (*pcVar14)(fVar21,fVar21,fVar24,fVar27,0x41200000,plVar7,puVar8,puVar4 + -0xc0,puVar9,puVar10,
             bVar11);
switchD_00f3575c_caseD_8:
  if (*(long *)(lVar2 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


