// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcAngleInfo2
// Entry Point: 00f3a0dc
// Size: 4476 bytes
// Signature: undefined __thiscall calcAngleInfo2(btConeTwistConstraint * this, btTransform * param_1, btTransform * param_2, btMatrix3x3 * param_3, btMatrix3x3 * param_4)


/* btConeTwistConstraint::calcAngleInfo2(btTransform const&, btTransform const&, btMatrix3x3 const&,
   btMatrix3x3 const&) */

void __thiscall
btConeTwistConstraint::calcAngleInfo2
          (btConeTwistConstraint *this,btTransform *param_1,btTransform *param_2,
          btMatrix3x3 *param_3,btMatrix3x3 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
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
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  undefined8 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined8 uVar67;
  undefined4 uVar68;
  float fVar69;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined2 *)(this + 0x225) = 0;
  if ((this[0x240] != (btConeTwistConstraint)0x0) && (this[0x227] == (btConeTwistConstraint)0x0)) {
    fVar3 = *(float *)(this + 0x244);
    fVar31 = *(float *)(this + 0x248);
    fVar14 = *(float *)(this + 0x24c);
    fVar49 = *(float *)(this + 0x174);
    fVar56 = *(float *)(param_1 + 0x10);
    fVar64 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(this + 0x250);
    fVar8 = *(float *)param_1;
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar11 = NEON_fmadd(fVar31,fVar31,fVar3 * fVar3);
    fVar28 = *(float *)(this + 0x144);
    fVar10 = *(float *)(this + 0x148);
    fVar18 = *(float *)(param_1 + 0x20);
    fVar22 = *(float *)(param_1 + 0x24);
    uVar23 = *(undefined4 *)(this + 0x178);
    uVar11 = NEON_fmadd(fVar14,fVar14,uVar11);
    fVar12 = *(float *)(this + 0x14c);
    uVar68 = NEON_fmadd(uVar23,fVar64,fVar49 * fVar56);
    fVar32 = *(float *)(this + 0x154);
    fVar45 = (float)NEON_fmadd(fVar7,fVar7,uVar11);
    fVar38 = *(float *)(this + 0x158);
    fVar17 = *(float *)(this + 0x15c);
    fVar50 = *(float *)(param_1 + 0x18);
    uVar11 = NEON_fmadd(uVar4,fVar32,fVar8 * fVar28);
    uVar27 = *(undefined4 *)(this + 0x17c);
    uVar53 = NEON_fmadd(fVar38,uVar4,fVar10 * fVar8);
    fVar45 = 2.0 / fVar45;
    uVar58 = NEON_fmadd(fVar17,uVar4,fVar12 * fVar8);
    uVar20 = NEON_fmadd(uVar23,uVar4,fVar49 * fVar8);
    fVar8 = *(float *)(this + 0x164);
    fVar5 = (float)NEON_fmadd(uVar27,fVar50,uVar68);
    uVar4 = *(undefined4 *)(param_1 + 8);
    fVar61 = *(float *)(this + 0x168);
    fVar19 = *(float *)(param_1 + 0x28);
    fVar6 = (float)NEON_fmadd(uVar4,fVar8,uVar11);
    fVar46 = *(float *)(this + 0x16c);
    uVar11 = NEON_fmadd(fVar61,uVar4,uVar53);
    fVar21 = (float)NEON_fmadd(uVar27,uVar4,uVar20);
    fVar43 = fVar45 * fVar31;
    fVar57 = fVar45 * fVar14;
    uVar20 = NEON_fmadd(fVar46,uVar4,uVar58);
    fVar15 = fVar56 * fVar28 + fVar64 * fVar32 + fVar50 * fVar8;
    fVar28 = fVar18 * fVar28 + fVar22 * fVar32 + fVar19 * fVar8;
    fVar29 = fVar56 * fVar10 + fVar64 * fVar38 + fVar50 * fVar61;
    fVar61 = fVar18 * fVar10 + fVar22 * fVar38 + fVar19 * fVar61;
    fVar56 = fVar56 * fVar12 + fVar64 * fVar17 + fVar50 * fVar46;
    fVar64 = fVar18 * fVar12 + fVar22 * fVar17 + fVar19 * fVar46;
    fVar10 = (float)NEON_fmsub(fVar57,fVar14,0x3f800000);
    fVar12 = fVar45 * fVar3 * -fVar3;
    fVar8 = fVar43 * fVar3 + fVar57 * fVar7;
    fVar17 = fVar45 * fVar3 * fVar7;
    fVar47 = fVar43 * fVar3 - fVar57 * fVar7;
    fVar50 = fVar57 * fVar3 + fVar43 * fVar7;
    uVar68 = *(undefined4 *)(param_2 + 0x18);
    fVar51 = fVar10 + fVar43 * -fVar31;
    fVar10 = fVar10 + fVar12;
    fVar38 = *(float *)(this + 0x184);
    fVar46 = fVar57 * fVar31 - fVar17;
    fVar17 = fVar57 * fVar31 + fVar17;
    uVar4 = NEON_fmadd(uVar23,fVar22,fVar49 * fVar18);
    fVar3 = fVar57 * fVar3 - fVar43 * fVar7;
    uVar65 = *(undefined4 *)(this + 0x194);
    fVar32 = (float)NEON_fmadd(uVar27,fVar19,uVar4);
    fVar12 = fVar43 * -fVar31 + 1.0 + fVar12;
    fVar14 = *(float *)param_2;
    uVar33 = *(undefined4 *)(param_2 + 4);
    fVar57 = *(float *)(param_2 + 0x10);
    uVar39 = *(undefined4 *)(param_2 + 0x14);
    fVar21 = fVar21 + *(float *)(param_1 + 0x30);
    fVar19 = *(float *)(this + 0x188);
    uVar53 = *(undefined4 *)(param_2 + 8);
    fVar5 = fVar5 + *(float *)(param_1 + 0x34);
    fVar32 = fVar32 + *(float *)(param_1 + 0x38);
    uVar23 = *(undefined4 *)(this + 0x198);
    uVar58 = NEON_fmadd(uVar33,uVar65,fVar14 * fVar38);
    fVar69 = *(float *)(param_2 + 0x20);
    uVar59 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = NEON_fmadd(uVar39,uVar65,fVar57 * fVar38);
    uVar13 = NEON_fmadd(uVar39,uVar23,fVar57 * fVar19);
    uVar54 = *(undefined4 *)(this + 0x1a4);
    local_dc = 0.0;
    fVar18 = (float)NEON_fmadd(uVar68,uVar54,uVar4);
    fVar7 = *(float *)(this + 0x18c);
    uVar27 = NEON_fmadd(uVar59,uVar65,fVar69 * fVar38);
    fVar31 = (float)NEON_fmadd(uVar53,uVar54,uVar58);
    uVar66 = *(undefined4 *)(param_2 + 0x28);
    uVar4 = *(undefined4 *)(this + 0x19c);
    local_cc = 0;
    fVar22 = (float)NEON_fmadd(uVar66,uVar54,uVar27);
    uVar27 = NEON_fmadd(uVar23,uVar33,fVar19 * fVar14);
    uVar23 = NEON_fmadd(uVar59,uVar23,fVar69 * fVar19);
    uVar65 = *(undefined4 *)(this + 0x1a8);
    uVar54 = NEON_fmadd(uVar4,uVar33,fVar7 * fVar14);
    uVar58 = NEON_fmadd(uVar39,uVar4,fVar57 * fVar7);
    uVar34 = NEON_fmadd(uVar59,uVar4,fVar69 * fVar7);
    uVar40 = *(undefined4 *)(this + 0x1ac);
    uVar27 = NEON_fmadd(uVar65,uVar53,uVar27);
    uVar13 = NEON_fmadd(uVar68,uVar65,uVar13);
    uVar4 = NEON_fmadd(uVar66,uVar65,uVar23);
    uVar54 = NEON_fmadd(uVar40,uVar53,uVar54);
    uVar36 = NEON_fmadd(uVar68,uVar40,uVar58);
    uVar65 = NEON_fmadd(uVar66,uVar40,uVar34);
    uVar34 = NEON_fmadd(uVar27,fVar8,fVar31 * fVar51);
    uVar58 = NEON_fmadd(uVar27,fVar10,fVar31 * fVar47);
    uVar23 = NEON_fmadd(uVar27,fVar46,fVar31 * fVar50);
    fVar43 = (float)NEON_fmadd(uVar54,fVar3,uVar34);
    fVar31 = (float)NEON_fmadd(uVar54,fVar17,uVar58);
    fVar38 = (float)NEON_fnmadd(fVar21,fVar6,-(fVar32 * fVar28 + fVar5 * fVar15));
    fVar49 = (float)NEON_fmadd(uVar54,fVar12,uVar23);
    uVar23 = NEON_fmadd(uVar13,fVar8,fVar18 * fVar51);
    uVar54 = NEON_fmadd(uVar13,fVar10,fVar18 * fVar47);
    uVar27 = NEON_fmadd(uVar13,fVar46,fVar18 * fVar50);
    fVar45 = *(float *)(this + 0x1b4);
    uVar58 = NEON_fnmadd(fVar21,uVar11,-(fVar32 * fVar61 + fVar5 * fVar29));
    fVar7 = (float)NEON_fmadd(uVar36,fVar17,uVar54);
    fVar19 = (float)NEON_fmadd(uVar36,fVar3,uVar23);
    fVar18 = (float)NEON_fmadd(uVar36,fVar12,uVar27);
    uVar27 = NEON_fnmadd(fVar21,uVar20,-(fVar32 * fVar64 + fVar5 * fVar56));
    uVar54 = *(undefined4 *)(this + 0x1b8);
    uVar13 = NEON_fmadd(fVar31,uVar58,fVar43 * fVar38);
    uVar34 = NEON_fmadd(fVar19,fVar38,fVar45 * fVar57);
    uVar23 = *(undefined4 *)(this + 0x1bc);
    uVar40 = NEON_fmadd(uVar4,fVar8,fVar22 * fVar51);
    uVar59 = NEON_fmadd(uVar54,uVar59,fVar45 * fVar69);
    local_bc = 0;
    uVar13 = NEON_fmadd(fVar49,uVar27,uVar13);
    local_ac = 0;
    uVar36 = NEON_fmadd(uVar4,fVar10,fVar22 * fVar47);
    uVar62 = NEON_fmadd(fVar7,uVar58,uVar34);
    uVar34 = NEON_fmadd(uVar4,fVar46,fVar22 * fVar50);
    fVar5 = (float)NEON_fmadd(uVar23,uVar66,uVar59);
    uVar4 = NEON_fmadd(fVar45,fVar14,uVar13);
    fVar8 = (float)NEON_fmadd(uVar65,fVar3,uVar40);
    fVar10 = (float)NEON_fmadd(uVar65,fVar17,uVar36);
    uVar36 = NEON_fmadd(fVar18,uVar27,uVar62);
    fVar3 = (float)NEON_fmadd(uVar65,fVar12,uVar34);
    uVar13 = NEON_fmadd(uVar54,uVar33,uVar4);
    uVar65 = NEON_fmadd(uVar54,uVar39,uVar36);
    uVar4 = NEON_fmadd(fVar8,fVar38,fVar5 + *(float *)(param_2 + 0x38));
    uVar54 = NEON_fmadd(fVar31,uVar11,fVar43 * fVar6);
    uVar33 = NEON_fmadd(fVar7,uVar11,fVar19 * fVar6);
    uVar4 = NEON_fmadd(fVar10,uVar58,uVar4);
    local_b8 = (float)NEON_fmadd(uVar23,uVar53,uVar13);
    uVar11 = NEON_fmadd(fVar10,uVar11,fVar8 * fVar6);
    local_e8 = (float)NEON_fmadd(fVar49,uVar20,uVar54);
    fStack_b4 = (float)NEON_fmadd(uVar23,uVar68,uVar65);
    local_d8 = NEON_fmadd(fVar18,uVar20,uVar33);
    local_d4 = CONCAT44(fVar28 * fVar19 + fVar61 * fVar7 + fVar64 * fVar18,
                        fVar15 * fVar19 + fVar29 * fVar7 + fVar56 * fVar18);
    fStack_e4 = fVar15 * fVar43 + fVar29 * fVar31 + fVar56 * fVar49;
    fStack_e0 = fVar28 * fVar43 + fVar61 * fVar31 + fVar64 * fVar49;
    local_c4 = CONCAT44(fVar28 * fVar8 + fVar61 * fVar10 + fVar64 * fVar3,
                        fVar15 * fVar8 + fVar29 * fVar10 + fVar56 * fVar3);
    local_c8 = NEON_fmadd(fVar3,uVar20,uVar11);
    local_b0 = NEON_fmadd(fVar3,uVar27,uVar4);
    local_b8 = local_b8 + *(float *)(param_2 + 0x30);
    fStack_b4 = fStack_b4 + *(float *)(param_2 + 0x34);
    btMatrix3x3::getRotation((btMatrix3x3 *)&local_e8,(btQuaternion *)&local_a8);
    uVar4 = NEON_fmadd(fStack_a4,fStack_a4,local_a8 * local_a8);
    fVar3 = (float)NEON_fmadd(local_a0,local_a0,uVar4);
    if (1.192093e-07 <= fVar3) {
      *(undefined4 *)(this + 0x1f0) = 0;
      if (local_9c <= -1.0) {
        local_9c = -1.0;
      }
      fVar8 = 1.0 / SQRT(fVar3);
      fVar3 = (float)NEON_fminnm(local_9c,0x3f800000);
      *(float *)(this + 0x1e4) = fVar8 * local_a8;
      *(float *)(this + 0x1e8) = fVar8 * fStack_a4;
      *(float *)(this + 0x1ec) = fVar8 * local_a0;
      fVar3 = acosf(fVar3);
      *(float *)(this + 0x210) = fVar3 + fVar3;
      if (1.192093e-07 <= ABS(fVar3 + fVar3)) {
        this[0x226] = (btConeTwistConstraint)0x1;
      }
    }
    goto LAB_00f3b218;
  }
  btMatrix3x3::getRotation((btMatrix3x3 *)param_1,(btQuaternion *)&local_e8);
  fVar12 = local_dc;
  fVar10 = fStack_e0;
  fVar8 = fStack_e4;
  fVar3 = local_e8;
  uVar16 = NEON_rev64(CONCAT44(fStack_e0,fStack_e4),4);
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x144),(btQuaternion *)&local_e8);
  uVar9 = NEON_rev64(CONCAT44(fStack_e4,local_e8),4);
  fVar6 = (float)((ulong)uVar9 >> 0x20);
  fVar14 = (float)((ulong)uVar16 >> 0x20);
  fVar7 = fVar8 * local_dc +
          (((float)uVar9 * fVar12 + (float)uVar16 * local_e8) - fVar3 * fStack_e0);
  fVar5 = fVar12 * local_dc - (fVar6 * fVar3 + fVar14 * fStack_e4 + fVar10 * fStack_e0);
  fVar18 = -((float)uVar9 * (float)uVar16) + fVar12 * local_e8 + fVar8 * fStack_e0 +
           fVar3 * local_dc;
  fVar19 = -(fVar6 * fVar14) + fVar3 * fStack_e4 + fVar12 * fStack_e0 + fVar10 * local_dc;
  btMatrix3x3::getRotation((btMatrix3x3 *)param_2,(btQuaternion *)&local_e8);
  fVar12 = local_dc;
  fVar10 = fStack_e0;
  fVar8 = fStack_e4;
  fVar3 = local_e8;
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x184),(btQuaternion *)&local_e8);
  uVar9 = NEON_rev64(CONCAT44(fStack_e4,local_e8),4);
  fVar6 = (float)((ulong)uVar9 >> 0x20);
  fVar15 = -(local_e8 * fVar8) + fVar3 * (float)uVar9 + fVar12 * fStack_e0 + fVar10 * local_dc;
  fVar28 = -(fStack_e4 * fVar10) + fVar12 * fVar6 + fVar8 * fStack_e0 + fVar3 * local_dc;
  fVar14 = fVar12 * local_dc - ((float)uVar9 * fVar8 + fVar3 * local_e8 + fVar10 * fStack_e0);
  fVar22 = fVar8 * local_dc + ((fVar6 * fVar10 + fVar12 * fStack_e4) - fVar3 * fStack_e0);
  fVar21 = (fVar14 * fVar18 + fVar7 * fVar15) - (fVar22 * fVar19 + fVar5 * fVar28);
  fVar32 = (fVar14 * fVar19 + fVar18 * fVar22) - (fVar15 * fVar5 + fVar7 * fVar28);
  uVar9 = NEON_rev64(CONCAT44(fVar28 * fVar19,fVar15 * fVar18),4);
  fVar8 = fVar15 * fVar19 + fVar14 * fVar5 + fVar22 * fVar7 + fVar28 * fVar18;
  fVar6 = ((float)uVar9 + fVar7 * fVar14) - ((float)((ulong)uVar9 >> 0x20) + fVar5 * fVar22);
  fVar3 = fVar21 * fVar6 + fVar8 * (fVar32 + fVar32) + fVar21 * fVar6;
  fVar17 = (fVar8 * fVar8 + fVar21 * fVar21) - (fVar32 * fVar32 + fVar6 * fVar6);
  fVar10 = fVar21 * (fVar32 + fVar32) - fVar6 * (fVar8 + fVar8);
  fVar12 = (float)NEON_fmadd(fVar3,fVar3,fVar17 * fVar17);
  fVar12 = 1.0 / SQRT(fVar12 + fVar10 * fVar10);
  if (-0.9999999 <= fVar12 * fVar17) {
    fVar31 = (float)NEON_fmadd(fVar12 * fVar17,0x40000000,0x40000000);
    fVar17 = 1.0 / SQRT(fVar31);
    fVar38 = SQRT(fVar31) * 0.5;
    fVar31 = 0.0;
    fVar10 = fVar17 * -fVar12 * fVar10;
    fVar17 = fVar17 * fVar12 * fVar3;
  }
  else {
    fVar17 = 0.0;
    fVar31 = -0.0;
    fVar38 = 0.0;
    fVar10 = 1.0;
  }
  fVar12 = *(float *)(this + 0x1d4);
  fVar61 = *(float *)(this + 0x1e0);
  puVar1 = (undefined8 *)(this + 0x1e4);
  fVar29 = *(float *)(this + 0x1d8);
  uVar4 = NEON_fmadd(fVar10,fVar10,fVar31 * fVar31);
  uVar4 = NEON_fmadd(fVar17,fVar17,uVar4);
  fVar3 = (float)NEON_fmadd(fVar38,fVar38,uVar4);
  fVar3 = 1.0 / SQRT(fVar3);
  fVar31 = fVar3 * fVar31;
  fVar10 = fVar3 * fVar10;
  fVar17 = fVar3 * fVar17;
  fVar3 = fVar3 * fVar38;
  if ((fVar12 < fVar61) || (fVar29 < fVar61)) {
    fVar46 = *(float *)(this + 0x144);
    fVar45 = *(float *)(this + 0x154);
    fVar38 = *(float *)(this + 0x164);
    uVar16 = *(undefined8 *)param_1;
    fVar42 = (float)((ulong)*(undefined8 *)(this + 0x158) >> 0x20);
    fVar48 = (float)*(undefined8 *)(this + 0x148);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    fVar47 = *(float *)(param_1 + 0x18);
    fVar35 = *(float *)(param_1 + 0x20);
    fVar57 = *(float *)(param_1 + 0x24);
    fVar30 = *(float *)(param_1 + 0x28);
    uVar63 = NEON_rev64(uVar16,4);
    fVar51 = (float)((ulong)uVar16 >> 0x20);
    fVar44 = *(float *)(this + 0x184);
    uVar67 = NEON_rev64(uVar9,4);
    fVar52 = *(float *)(this + 0x194);
    fVar64 = (float)((ulong)uVar9 >> 0x20);
    fVar55 = *(float *)(this + 0x1a4);
    fVar41 = (float)((ulong)*(undefined8 *)(this + 0x148) >> 0x20);
    fVar60 = (float)*(undefined8 *)(this + 0x158);
    fVar50 = (float)*(undefined8 *)(param_2 + 0x10) * fVar44 +
             (float)*(undefined8 *)(param_2 + 0x14) * fVar52 +
             (float)*(undefined8 *)(param_2 + 0x18) * fVar55;
    fVar56 = *(float *)param_2 * fVar44 + *(float *)(param_2 + 4) * fVar52 +
             *(float *)(param_2 + 8) * fVar55;
    fVar43 = (float)*(undefined8 *)(param_1 + 8);
    fVar49 = (float)*(undefined8 *)(this + 0x168);
    fVar37 = (float)((ulong)*(undefined8 *)(this + 0x168) >> 0x20);
    fVar69 = fVar48 * (float)uVar16 + (float)uVar63 * fVar60 + fVar49 * fVar43;
    fVar24 = fVar42 * fVar51 + (float)((ulong)uVar63 >> 0x20) * fVar41 + fVar37 * fVar43;
    fVar25 = fVar48 * (float)uVar9 + (float)uVar67 * fVar60 + fVar49 * fVar47;
    fVar26 = fVar42 * fVar64 + (float)((ulong)uVar67 >> 0x20) * fVar41 + fVar37 * fVar47;
    uVar4 = NEON_fmadd(fVar57,fVar45,fVar35 * fVar46);
    fVar49 = fVar48 * fVar35 + fVar60 * fVar57 + fVar49 * fVar30;
    fVar57 = fVar41 * fVar35 + fVar42 * fVar57 + fVar37 * fVar30;
    uVar11 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),fVar52,*(float *)(param_2 + 0x20) * fVar44);
    fVar51 = (float)uVar16 * fVar46 + fVar51 * fVar45 + fVar43 * fVar38;
    fVar64 = (float)uVar9 * fVar46 + fVar64 * fVar45 + fVar47 * fVar38;
    fVar46 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x28),fVar55,uVar11);
    fVar43 = (float)NEON_fmadd(fVar30,fVar38,uVar4);
    fVar38 = fVar69 * fVar56 + fVar25 * fVar50 + fVar49 * fVar46;
    fVar45 = fVar24 * fVar56 + fVar26 * fVar50 + fVar57 * fVar46;
    if ((fVar61 <= fVar12) || (fVar61 <= fVar29)) {
      fVar47 = (float)NEON_fmadd(fVar46,fVar43,fVar56 * fVar51 + fVar64 * fVar50);
      if (fVar61 <= fVar12) {
        if (((1.192093e-07 <= ABS(fVar47)) || (1.192093e-07 <= ABS(fVar38))) &&
           (this[0x226] = (btConeTwistConstraint)0x1, fVar61 <= fVar12)) {
          fVar29 = atan2f(fVar38,fVar47);
          if (fVar29 <= fVar12) {
            if (-fVar12 <= fVar29) {
              fVar45 = 0.0;
              goto LAB_00f3ae68;
            }
            sincosf(fVar12,&fStack_ec,&local_f0);
            local_f4 = -fStack_ec;
            local_f8 = local_f0;
          }
          else {
            sincosf(fVar12,&local_f4,&local_f8);
          }
          fVar45 = 0.0;
          fVar47 = local_f8;
          fVar38 = local_f4;
        }
      }
      else if (((1.192093e-07 <= ABS(fVar47)) || (1.192093e-07 <= ABS(fVar45))) &&
              (this[0x226] = (btConeTwistConstraint)0x1, fVar61 <= fVar29)) {
        fVar12 = atan2f(fVar45,fVar47);
        if (fVar12 <= fVar29) {
          if (-fVar29 <= fVar12) {
            fVar38 = 0.0;
            goto LAB_00f3ae68;
          }
          sincosf(fVar29,&fStack_fc,&local_100);
          local_104 = -fStack_fc;
          local_108 = local_100;
        }
        else {
          sincosf(fVar29,&local_104,&local_108);
        }
        fVar47 = local_108;
        fVar38 = 0.0;
        fVar45 = local_104;
      }
LAB_00f3ae68:
      *(undefined4 *)(this + 0x1f0) = 0;
      fVar29 = fVar24 * fVar45 + fVar69 * fVar38 + fVar51 * fVar47;
      fVar64 = fVar26 * fVar45 + fVar25 * fVar38 + fVar64 * fVar47;
      fVar45 = (float)NEON_fmadd(fVar47,fVar43,fVar38 * fVar49 + fVar45 * fVar57);
      fVar12 = (float)NEON_fmadd(fVar45,fVar45,fVar29 * fVar29 + fVar64 * fVar64);
      fVar12 = 1.0 / SQRT(fVar12);
      fVar61 = fVar29 * fVar12 * fVar50 - fVar64 * fVar12 * fVar56;
      fVar38 = -(fVar29 * fVar12 * fVar46) + fVar56 * fVar12 * fVar45;
      fVar29 = -(fVar50 * fVar12 * fVar45) + fVar64 * fVar12 * fVar46;
      *(float *)(this + 0x1ec) = fVar61;
      uVar9 = NEON_rev64(CONCAT44(fVar29,fVar38),4);
      *puVar1 = uVar9;
      fVar12 = SQRT(fVar38 * fVar38 + fVar29 * fVar29 + fVar61 * fVar61);
      *(float *)(this + 0x210) = fVar12;
      if (1.192093e-07 <= fVar12) {
        fVar12 = 1.0 / fVar12;
        uVar9 = NEON_rev64(CONCAT44(fVar29 * fVar12,fVar38 * fVar12),4);
        *(float *)(this + 0x1ec) = fVar12 * fVar61;
        *puVar1 = uVar9;
      }
    }
    else {
      uVar9 = NEON_fcmgt(0x3400000034000000,CONCAT44(ABS(fVar45),ABS(fVar38)),4);
      if (((uint)uVar9 & (uint)((ulong)uVar9 >> 0x20) & 1) == 0) {
        *(undefined4 *)(this + 0x1f0) = 0;
        uVar11 = NEON_fnmsub(fVar46,fVar64,fVar50 * fVar43);
        uVar20 = NEON_fnmsub(fVar56,fVar43,fVar46 * fVar51);
        uVar4 = NEON_fmsub(fVar56,fVar64,fVar50 * fVar51);
        this[0x226] = (btConeTwistConstraint)0x1;
        *(undefined4 *)(this + 0x1e4) = uVar11;
        *(undefined4 *)(this + 0x1e8) = uVar20;
        *(undefined4 *)(this + 0x1ec) = uVar4;
      }
    }
  }
  else {
    fVar61 = (float)NEON_fminnm(fVar3,0x3f800000);
    fVar38 = fVar31;
    fVar61 = acosf(fVar61);
    fVar45 = 1.192093e-07;
    fVar46 = fVar61 + fVar61;
    if (fVar46 <= 1.192093e-07) {
      fVar43 = 0.0;
    }
    else {
      uVar4 = NEON_fmadd(fVar10,fVar10,fVar31 * fVar31);
      fVar38 = (float)NEON_fmadd(fVar17,fVar17,uVar4);
      fVar38 = 1.0 / SQRT(fVar38);
      fVar61 = fVar38 * fVar10;
      fVar45 = fVar38 * fVar31;
      fVar38 = fVar38 * fVar17;
      fVar43 = fVar12;
      if (1.192093e-07 < ABS(fVar61)) {
        fVar43 = (fVar38 * fVar38) / (fVar61 * fVar61);
        fVar43 = SQRT((fVar43 + 1.0) / (fVar43 / (fVar12 * fVar12) + 1.0 / (fVar29 * fVar29)));
      }
    }
    fVar50 = *(float *)(this + 0x1c4) * fVar43;
    if (fVar50 < fVar46) {
      this[0x226] = (btConeTwistConstraint)0x1;
      fVar56 = 1.0;
      if ((fVar46 < fVar43) && (fVar56 = 1.0, *(float *)(this + 0x1c4) < 0.9999999)) {
        fVar56 = (fVar46 - fVar50) / (fVar43 - fVar50);
      }
      *(float *)(this + 0x228) = fVar56;
      *(float *)(this + 0x210) = fVar46 - fVar50;
      if (1.192093e-07 < ABS(fVar61)) {
        uVar4 = NEON_fmadd(fVar61,fVar61,fVar45 * fVar45);
        fVar12 = ABS((fVar61 * -fVar29 * fVar38) / (fVar61 * fVar12));
        if (0.0 <= fVar38) {
          fVar12 = -fVar12;
        }
        fVar38 = (float)NEON_fmadd(fVar12,fVar12,uVar4);
        fVar38 = 1.0 / SQRT(fVar38);
        fVar45 = fVar38 * fVar45;
        fVar61 = fVar38 * fVar61;
        fVar38 = fVar38 * -fVar12;
      }
      *(undefined4 *)(this + 0x1f0) = 0;
      fVar46 = (float)NEON_fnmadd(fVar15,fVar45,-(fVar61 * fVar14));
      fVar43 = -(fVar15 * fVar38 + fVar22 * fVar61) + -fVar28 * fVar45;
      fVar50 = -(fVar14 * fVar38 + fVar28 * fVar61) + fVar22 * fVar45;
      fVar46 = fVar46 + fVar38 * fVar28;
      fVar29 = (float)NEON_fnmadd(fVar14,fVar45,-(fVar38 * fVar22));
      fVar29 = fVar29 + fVar61 * fVar15;
      uVar9 = NEON_rev64(CONCAT44(fVar50 * fVar28,fVar46 * fVar15),4);
      fVar12 = ((fVar46 * fVar14 + fVar43 * fVar22) - (float)uVar9) + fVar15 * fVar29;
      fVar38 = ((fVar43 * fVar28 + fVar50 * fVar22) - (float)((ulong)uVar9 >> 0x20)) +
               fVar14 * fVar29;
      fVar29 = (float)NEON_fmsub(fVar29,fVar22,fVar43 * fVar15 + fVar46 * fVar28 + fVar14 * fVar50);
      *(undefined8 *)(this + 0x238) = 0;
      *(undefined8 *)(this + 0x230) = 0;
      uVar9 = NEON_rev64(CONCAT44(fVar38,fVar12),4);
      *(float *)(this + 0x1ec) = fVar29;
      *puVar1 = uVar9;
      fVar12 = (float)NEON_fmadd((*(float *)(param_4 + 0x28) + *(float *)(param_3 + 0x28)) * fVar29
                                 + (*(float *)(param_4 + 0x18) + *(float *)(param_3 + 0x18)) *
                                   fVar12 +
                                 (*(float *)(param_4 + 8) + *(float *)(param_3 + 8)) * fVar38,fVar29
                                 ,((*(float *)(param_4 + 0x20) + *(float *)(param_3 + 0x20)) *
                                   fVar29 + (*(float *)(param_4 + 0x10) + *(float *)(param_3 + 0x10)
                                            ) * fVar12 +
                                  (*(float *)param_4 + *(float *)param_3) * fVar38) * fVar38 +
                                  ((*(float *)(param_4 + 0x24) + *(float *)(param_3 + 0x24)) *
                                   fVar29 + (*(float *)(param_4 + 0x14) + *(float *)(param_3 + 0x14)
                                            ) * fVar12 +
                                  (*(float *)(param_4 + 4) + *(float *)(param_3 + 4)) * fVar38) *
                                  fVar12);
      *(float *)(this + 0x204) = 1.0 / fVar12;
    }
  }
  fVar12 = *(float *)(this + 0x1dc);
  if (0.0 <= fVar12) {
    fVar61 = (float)NEON_fmadd(fVar3,fVar32,fVar10 * fVar21);
    fVar38 = (float)NEON_fmadd(fVar17,fVar6,fVar3 * fVar21);
    fVar29 = (float)NEON_fmadd(fVar31,fVar8,fVar10 * fVar32);
    fVar45 = (float)NEON_fmadd(fVar10,fVar8,fVar17 * fVar21);
    uVar4 = NEON_fmadd(fVar17,fVar32,fVar10 * fVar6);
    fVar32 = (float)NEON_fmadd(fVar3,fVar6,fVar31 * fVar32);
    fVar38 = fVar38 - fVar29;
    fVar10 = (float)NEON_fmadd(fVar17,fVar8,fVar31 * fVar6);
    uVar4 = NEON_fmadd(fVar31,fVar21,uVar4);
    fVar32 = fVar32 - fVar45;
    fVar61 = fVar61 - fVar10;
    fVar8 = (float)NEON_fmadd(fVar3,fVar8,uVar4);
    uVar4 = NEON_fmadd(fVar32,fVar32,fVar38 * fVar38);
    uVar4 = NEON_fmadd(fVar61,fVar61,uVar4);
    fVar3 = (float)NEON_fmadd(fVar8,fVar8,uVar4);
    fVar10 = 1.0 / SQRT(fVar3);
    fVar8 = fVar10 * fVar8;
    fVar38 = fVar10 * fVar38;
    fVar32 = fVar10 * fVar32;
    fVar10 = fVar10 * fVar61;
    fVar3 = fVar8;
    if (fVar8 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar3 = (float)NEON_fminnm(fVar3,0x3f800000);
    fVar3 = acosf(fVar3);
    fVar3 = fVar3 + fVar3;
    if (3.141593 < fVar3) {
      fVar8 = -fVar8;
      fVar38 = -fVar38;
      fVar32 = -fVar32;
      fVar10 = -fVar10;
      if (fVar8 <= -1.0) {
        fVar8 = -1.0;
      }
      fVar3 = (float)NEON_fminnm(fVar8,0x3f800000);
      fVar3 = acosf(fVar3);
      fVar3 = fVar3 + fVar3;
    }
    *(float *)(this + 0x218) = fVar3;
    if (1.192093e-07 < fVar3) {
      uVar4 = NEON_fmadd(fVar32,fVar32,fVar38 * fVar38);
      fVar8 = (float)NEON_fmadd(fVar10,fVar10,uVar4);
      fVar8 = 1.0 / SQRT(fVar8);
      fVar38 = fVar8 * fVar38;
      fVar32 = fVar8 * fVar32;
      fVar10 = fVar8 * fVar10;
    }
    fVar8 = *(float *)(this + 0x1c4) * fVar12;
    if (fVar8 < fVar3) {
      fVar6 = 1.0;
      this[0x225] = (btConeTwistConstraint)0x1;
      if (fVar3 < fVar12 && *(float *)(this + 0x1c4) < 0.9999999) {
        fVar6 = (fVar3 - fVar8) / (fVar12 - fVar8);
      }
      *(float *)(this + 0x22c) = fVar6;
      *(float *)(this + 0x214) = fVar3 - fVar8;
      *(undefined4 *)(this + 0x200) = 0;
      fVar17 = (float)NEON_fnmadd(fVar15,fVar38,-(fVar32 * fVar14));
      fVar3 = (float)NEON_fnmadd(fVar32,fVar22,-(fVar38 * fVar28));
      uVar4 = NEON_fmadd(fVar10,fVar14,fVar32 * fVar28);
      fVar17 = fVar17 + fVar10 * fVar28;
      fVar3 = fVar3 - fVar10 * fVar15;
      fVar12 = (float)NEON_fnmsub(fVar38,fVar22,uVar4);
      fVar6 = (float)NEON_fnmadd(fVar14,fVar38,-(fVar10 * fVar22));
      fVar6 = fVar6 + fVar32 * fVar15;
      uVar4 = NEON_fmadd(fVar12,fVar22,fVar3 * fVar28);
      fVar8 = (float)NEON_fnmsub(fVar3,fVar22,fVar12 * fVar28);
      fVar3 = (float)NEON_fmadd(fVar12,fVar14,fVar3 * fVar15);
      fVar12 = (float)NEON_fmadd(fVar6,fVar14,uVar4);
      fVar12 = fVar12 - fVar17 * fVar15;
      uVar4 = NEON_fmadd(fVar17,fVar14,fVar8 + fVar6 * fVar15);
      fVar3 = (float)NEON_fmsub(fVar6,fVar22,fVar3 + fVar17 * fVar28);
      *(float *)(this + 500) = fVar12;
      *(undefined4 *)(this + 0x1f8) = uVar4;
      *(float *)(this + 0x1fc) = fVar3;
      uVar11 = NEON_fmadd(*(float *)(param_4 + 0x10) + *(float *)(param_3 + 0x10),uVar4,
                          (*(float *)(param_4 + 0x20) + *(float *)(param_3 + 0x20)) * fVar3);
      uVar20 = NEON_fmadd(*(float *)(param_4 + 0x14) + *(float *)(param_3 + 0x14),uVar4,
                          (*(float *)(param_4 + 0x24) + *(float *)(param_3 + 0x24)) * fVar3);
      fVar8 = (float)NEON_fmadd(*(float *)param_4 + *(float *)param_3,fVar12,uVar11);
      uVar11 = NEON_fmadd(*(float *)(param_4 + 4) + *(float *)(param_3 + 4),fVar12,uVar20);
      uVar20 = NEON_fmadd(*(float *)(param_4 + 0x18) + *(float *)(param_3 + 0x18),uVar4,
                          (*(float *)(param_4 + 0x28) + *(float *)(param_3 + 0x28)) * fVar3);
      uVar20 = NEON_fmadd(*(float *)(param_4 + 8) + *(float *)(param_3 + 8),fVar12,uVar20);
      uVar4 = NEON_fmadd(uVar11,uVar4,fVar8 * fVar12);
      fVar3 = (float)NEON_fmadd(uVar20,fVar3,uVar4);
      *(float *)(this + 0x208) = 1.0 / fVar3;
    }
    if (this[0x226] != (btConeTwistConstraint)0x0) {
      *(undefined4 *)(this + 0x23c) = 0;
      fVar3 = (float)NEON_fmadd(fVar32,fVar7,fVar38 * fVar18);
      uVar4 = NEON_fmadd(fVar10,fVar5,fVar32 * fVar18);
      fVar3 = (float)NEON_fnmadd(fVar19,fVar10,-fVar3);
      uVar11 = NEON_fmadd(fVar5,fVar38,fVar10 * fVar7);
      fVar8 = (float)NEON_fnmsub(fVar38,fVar7,uVar4);
      uVar4 = NEON_fmadd(fVar19,fVar38,fVar32 * fVar5);
      uVar23 = NEON_fnmsub(fVar32,fVar19,uVar11);
      uVar27 = NEON_fnmsub(fVar10,fVar18,uVar4);
      uVar20 = NEON_fmadd(fVar8,fVar7,fVar3 * fVar18);
      uVar11 = NEON_fmadd(fVar8,fVar5,fVar3 * fVar19);
      uVar4 = NEON_fnmsub(fVar3,fVar7,fVar8 * fVar18);
      uVar20 = NEON_fmadd(uVar23,fVar5,uVar20);
      uVar11 = NEON_fmadd(uVar27,fVar18,uVar11);
      uVar4 = NEON_fmadd(uVar23,fVar19,uVar4);
      uVar20 = NEON_fmsub(uVar27,fVar19,uVar20);
      uVar4 = NEON_fmadd(uVar27,fVar5,uVar4);
      uVar11 = NEON_fmsub(uVar23,fVar7,uVar11);
      *(undefined4 *)(this + 0x230) = uVar20;
      *(undefined4 *)(this + 0x234) = uVar4;
      *(undefined4 *)(this + 0x238) = uVar11;
    }
  }
  else {
    *(undefined4 *)(this + 0x218) = 0;
  }
LAB_00f3b218:
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


