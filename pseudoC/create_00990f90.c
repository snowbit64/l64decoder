// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 00990f90
// Size: 2796 bytes
// Signature: undefined __thiscall create(Bt2PhysicsJointObject * this, Bt2ScenegraphPhysicsContext * param_1, TransformGroup * param_2, TransformGroup * param_3)


/* Bt2PhysicsJointObject::create(Bt2ScenegraphPhysicsContext*, TransformGroup*, TransformGroup*) */

void __thiscall
Bt2PhysicsJointObject::create
          (Bt2PhysicsJointObject *this,Bt2ScenegraphPhysicsContext *param_1,TransformGroup *param_2,
          TransformGroup *param_3)

{
  long lVar1;
  long lVar2;
  Bt2D6Joint *this_00;
  undefined4 *puVar3;
  long *plVar4;
  uint uVar5;
  btRigidBody *pbVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  btRigidBody *pbVar11;
  btRigidBody *pbVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  *(Bt2ScenegraphPhysicsContext **)(this + 0x10) = param_1;
  this[0x30] = (Bt2PhysicsJointObject)0x0;
  if (param_2 == (TransformGroup *)0x0) {
    pbVar11 = (btRigidBody *)0x0;
joined_r0x00991020:
    uVar7 = 0;
    if (param_3 != (TransformGroup *)0x0) goto LAB_00991024;
LAB_00991064:
    pbVar12 = (btRigidBody *)0x0;
    pbVar6 = pbVar11;
  }
  else {
    lVar2 = RawTransformGroup::getPhysicsObject();
    pbVar11 = *(btRigidBody **)(lVar2 + 0x30);
    lVar2 = RawTransformGroup::getPhysicsObject();
    if (*(int *)(lVar2 + 0x8c) == 0) goto joined_r0x00991020;
    lVar2 = RawTransformGroup::getPhysicsObject();
    uVar7 = *(uint *)(lVar2 + 0x8c);
    if (param_3 == (TransformGroup *)0x0) goto LAB_00991064;
LAB_00991024:
    lVar2 = RawTransformGroup::getPhysicsObject();
    pbVar12 = *(btRigidBody **)(lVar2 + 0x30);
    lVar2 = RawTransformGroup::getPhysicsObject();
    if (uVar7 < *(uint *)(lVar2 + 0x8c)) {
      lVar2 = RawTransformGroup::getPhysicsObject();
      uVar7 = *(uint *)(lVar2 + 0x8c);
    }
    pbVar6 = (btRigidBody *)((ulong)pbVar11 | (ulong)pbVar12);
  }
  if (pbVar6 == (btRigidBody *)0x0) goto LAB_00991a38;
  lVar2 = *(long *)(this + 0x20);
  if (pbVar11 == (btRigidBody *)0x0) {
    RawTransformGroup::updateWorldTransformation();
    local_174 = *(undefined4 *)(lVar2 + 0xb8);
    local_178 = *(undefined4 *)(lVar2 + 0xc0);
    local_17c = *(float *)(lVar2 + 0xbc);
    uVar13 = *(undefined4 *)(lVar2 + 200);
    fVar21 = *(float *)(lVar2 + 0xcc);
    uVar18 = *(undefined4 *)(lVar2 + 0xd0);
    local_180 = *(float *)(lVar2 + 0xe8);
    fVar14 = *(float *)(lVar2 + 0xec);
    uVar22 = *(undefined4 *)(lVar2 + 0xd8);
    fVar15 = *(float *)(lVar2 + 0xdc);
    uVar19 = *(undefined4 *)(lVar2 + 0xe0);
    fVar16 = *(float *)(lVar2 + 0xf0);
joined_r0x009911f4:
    if (pbVar12 != (btRigidBody *)0x0) goto LAB_009911f8;
LAB_00991238:
    lVar2 = *(long *)(this + 0x20);
    RawTransformGroup::updateWorldTransformation();
    uStack_e8 = *(undefined8 *)(lVar2 + 0xc0);
    local_f0 = *(undefined8 *)(lVar2 + 0xb8);
    local_d8 = *(undefined8 *)(lVar2 + 0xd0);
    local_e0 = *(undefined8 *)(lVar2 + 200);
    uStack_c8 = *(undefined8 *)(lVar2 + 0xe0);
    local_d0 = *(undefined8 *)(lVar2 + 0xd8);
    local_b8 = *(undefined8 *)(lVar2 + 0xf0);
    local_c0 = *(undefined8 *)(lVar2 + 0xe8);
  }
  else {
    if (param_2 == *(TransformGroup **)(lVar2 + 0x20)) {
      local_174 = *(undefined4 *)(lVar2 + 0x78);
      local_178 = *(undefined4 *)(lVar2 + 0x80);
      local_17c = *(float *)(lVar2 + 0x7c);
      uVar13 = *(undefined4 *)(lVar2 + 0x88);
      fVar21 = *(float *)(lVar2 + 0x8c);
      uVar18 = *(undefined4 *)(lVar2 + 0x90);
      local_180 = *(float *)(lVar2 + 0xa8);
      fVar14 = *(float *)(lVar2 + 0xac);
      uVar22 = *(undefined4 *)(lVar2 + 0x98);
      fVar15 = *(float *)(lVar2 + 0x9c);
      uVar19 = *(undefined4 *)(lVar2 + 0xa0);
      fVar16 = *(float *)(lVar2 + 0xb0);
      goto joined_r0x009911f4;
    }
    uStack_e8 = 0;
    local_f0 = 0x3f800000;
    local_d8 = 0;
    local_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = 0x3f80000000000000;
    local_c0 = 0;
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(param_2 + 0xb8));
    lVar2 = *(long *)(this + 0x20);
    RawTransformGroup::updateWorldTransformation();
    fVar14 = *(float *)(lVar2 + 200);
    fVar15 = *(float *)(lVar2 + 0xcc);
    uVar19 = *(undefined4 *)(lVar2 + 0xb8);
    uVar24 = *(undefined4 *)(lVar2 + 0xbc);
    fVar16 = *(float *)(lVar2 + 0xd0);
    uVar26 = *(undefined4 *)(lVar2 + 0xd8);
    uVar27 = *(undefined4 *)(lVar2 + 0xdc);
    uVar25 = *(undefined4 *)(lVar2 + 0xc0);
    uVar29 = *(undefined4 *)(lVar2 + 0xe0);
    uVar18 = NEON_fmadd((undefined4)local_f0,uVar19,local_f0._4_4_ * fVar14);
    uVar22 = NEON_fmadd((undefined4)local_f0,uVar24,local_f0._4_4_ * fVar15);
    uVar13 = NEON_fmadd((undefined4)local_f0,uVar25,local_f0._4_4_ * fVar16);
    local_174 = NEON_fmadd((undefined4)uStack_e8,uVar26,uVar18);
    local_178 = NEON_fmadd((undefined4)uStack_e8,uVar29,uVar13);
    local_17c = (float)NEON_fmadd((undefined4)uStack_e8,uVar27,uVar22);
    uVar13 = NEON_fmadd((undefined4)local_e0,uVar19,fVar14 * local_e0._4_4_);
    uVar22 = NEON_fmadd((undefined4)local_e0,uVar24,fVar15 * local_e0._4_4_);
    uVar13 = NEON_fmadd((undefined4)local_d8,uVar26,uVar13);
    uVar18 = NEON_fmadd((undefined4)local_e0,uVar25,fVar16 * local_e0._4_4_);
    fVar21 = (float)NEON_fmadd((undefined4)local_d8,uVar27,uVar22);
    uVar18 = NEON_fmadd((undefined4)local_d8,uVar29,uVar18);
    uVar22 = NEON_fmadd((float)local_c0,uVar19,fVar14 * local_c0._4_4_);
    uVar17 = NEON_fmadd((undefined4)local_d0,uVar19,fVar14 * local_d0._4_4_);
    uVar20 = NEON_fmadd((float)local_c0,uVar24,fVar15 * local_c0._4_4_);
    uVar23 = NEON_fmadd((float)local_c0,uVar25,fVar16 * local_c0._4_4_);
    uVar24 = NEON_fmadd((undefined4)local_d0,uVar24,fVar15 * local_d0._4_4_);
    uVar19 = NEON_fmadd((undefined4)local_d0,uVar25,fVar16 * local_d0._4_4_);
    local_180 = (float)NEON_fmadd((float)local_b8,uVar26,uVar22);
    uVar22 = NEON_fmadd((undefined4)uStack_c8,uVar26,uVar17);
    fVar14 = (float)NEON_fmadd((float)local_b8,uVar27,uVar20);
    fVar16 = (float)NEON_fmadd((float)local_b8,uVar29,uVar23);
    fVar15 = (float)NEON_fmadd((undefined4)uStack_c8,uVar27,uVar24);
    uVar19 = NEON_fmadd((undefined4)uStack_c8,uVar29,uVar19);
    fVar16 = fVar16 + *(float *)(lVar2 + 0xf0);
    local_180 = *(float *)(lVar2 + 0xe8) + local_180;
    fVar14 = fVar14 + *(float *)(lVar2 + 0xec);
    if (pbVar12 == (btRigidBody *)0x0) goto LAB_00991238;
LAB_009911f8:
    Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(param_3 + 0x78));
  }
  local_130 = local_174;
  local_120 = local_17c;
  local_110 = local_178;
  local_100 = local_180;
  local_170 = (undefined4)local_f0;
  uStack_16c = (undefined4)local_e0;
  local_168 = (undefined4)local_d0;
  local_164 = 0;
  local_160 = local_f0._4_4_;
  fStack_15c = local_e0._4_4_;
  local_158 = local_d0._4_4_;
  local_154 = 0;
  local_150 = (undefined4)uStack_e8;
  uStack_14c = (undefined4)local_d8;
  local_148 = (undefined4)uStack_c8;
  local_144 = 0;
  local_140 = (float)local_c0;
  fStack_13c = local_c0._4_4_;
  local_138 = (float)local_b8;
  local_134 = 0;
  local_12c = uVar13;
  local_128 = uVar22;
  fStack_11c = fVar21;
  local_118 = fVar15;
  uStack_10c = uVar18;
  local_108 = uVar19;
  fStack_fc = fVar14;
  local_f8 = fVar16;
  if (((pbVar11 != (btRigidBody *)0x0) && (((byte)pbVar11[0xe0] & 1) == 0)) &&
     (lVar2 = *(long *)(pbVar11 + 0x228), lVar2 != 0)) {
    uVar20 = *(undefined4 *)(lVar2 + 0x58);
    fVar28 = *(float *)(lVar2 + 0x5c);
    uVar23 = *(undefined4 *)(lVar2 + 0x68);
    fVar30 = *(float *)(lVar2 + 0x6c);
    uVar31 = *(undefined4 *)(lVar2 + 0x78);
    fVar32 = *(float *)(lVar2 + 0x7c);
    uVar27 = *(undefined4 *)(lVar2 + 0x60);
    uVar29 = *(undefined4 *)(lVar2 + 0x70);
    uVar25 = NEON_fmadd(uVar13,uVar20,fVar21 * fVar28);
    uVar24 = NEON_fmadd(local_174,uVar20,local_17c * fVar28);
    uVar17 = NEON_fmadd(local_174,uVar23,local_17c * fVar30);
    local_130 = NEON_fmadd(local_178,uVar27,uVar24);
    uVar24 = NEON_fmadd(uVar13,uVar23,fVar21 * fVar30);
    uVar26 = NEON_fmadd(uVar22,uVar20,fVar15 * fVar28);
    fStack_11c = (float)NEON_fmadd(uVar18,uVar29,uVar24);
    local_12c = NEON_fmadd(uVar18,uVar27,uVar25);
    local_128 = NEON_fmadd(uVar19,uVar27,uVar26);
    uVar25 = NEON_fmadd(local_174,uVar31,local_17c * fVar32);
    local_120 = (float)NEON_fmadd(local_178,uVar29,uVar17);
    uVar24 = NEON_fmadd(uVar13,uVar31,fVar21 * fVar32);
    uVar13 = NEON_fmadd(uVar22,uVar31,fVar15 * fVar32);
    uVar17 = NEON_fmadd(uVar22,uVar23,fVar15 * fVar30);
    uVar22 = *(undefined4 *)(lVar2 + 0x80);
    local_118 = (float)NEON_fmadd(uVar19,uVar29,uVar17);
    local_110 = NEON_fmadd(local_178,uVar22,uVar25);
    uVar17 = NEON_fmadd(local_180,uVar20,fVar14 * fVar28);
    uVar20 = NEON_fmadd(local_180,uVar23,fVar14 * fVar30);
    uVar23 = NEON_fmadd(local_180,uVar31,fVar14 * fVar32);
    uStack_10c = NEON_fmadd(uVar18,uVar22,uVar24);
    local_108 = NEON_fmadd(uVar19,uVar22,uVar13);
    local_100 = (float)NEON_fmadd(fVar16,uVar27,uVar17);
    fStack_fc = (float)NEON_fmadd(fVar16,uVar29,uVar20);
    local_f8 = (float)NEON_fmadd(fVar16,uVar22,uVar23);
    local_100 = local_100 + *(float *)(lVar2 + 0x88);
    fStack_fc = fStack_fc + *(float *)(lVar2 + 0x8c);
    local_f8 = local_f8 + *(float *)(lVar2 + 0x90);
  }
  local_f4 = 0;
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
  if (pbVar12 == (btRigidBody *)0x0) {
    if (pbVar11 == (btRigidBody *)0x0) goto LAB_0099156c;
    pbVar12 = (btRigidBody *)btTypedConstraint::getFixedBody();
  }
  else {
    if ((((byte)pbVar12[0xe0] & 1) == 0) && (lVar2 = *(long *)(pbVar12 + 0x228), lVar2 != 0)) {
      uVar20 = *(undefined4 *)(lVar2 + 0x58);
      fVar21 = *(float *)(lVar2 + 0x5c);
      uVar23 = *(undefined4 *)(lVar2 + 0x68);
      fVar14 = *(float *)(lVar2 + 0x6c);
      uVar31 = *(undefined4 *)(lVar2 + 0x78);
      fVar15 = *(float *)(lVar2 + 0x7c);
      uVar27 = *(undefined4 *)(lVar2 + 0x60);
      uVar24 = NEON_fmadd((undefined4)local_f0,uVar20,local_f0._4_4_ * fVar21);
      uVar25 = NEON_fmadd((undefined4)local_e0,uVar20,local_e0._4_4_ * fVar21);
      uVar13 = NEON_fmadd((undefined4)local_f0,uVar23,local_f0._4_4_ * fVar14);
      uVar19 = NEON_fmadd((undefined4)local_e0,uVar23,local_e0._4_4_ * fVar14);
      uVar22 = NEON_fmadd((undefined4)local_f0,uVar31,local_f0._4_4_ * fVar15);
      uVar18 = NEON_fmadd((undefined4)local_e0,uVar31,local_e0._4_4_ * fVar15);
      uVar29 = *(undefined4 *)(lVar2 + 0x70);
      uVar26 = NEON_fmadd((undefined4)local_d0,uVar20,local_d0._4_4_ * fVar21);
      uVar17 = *(undefined4 *)(lVar2 + 0x80);
      local_170 = NEON_fmadd((undefined4)uStack_e8,uVar27,uVar24);
      uStack_16c = NEON_fmadd((undefined4)local_d8,uVar27,uVar25);
      uVar24 = NEON_fmadd((undefined4)local_d0,uVar23,local_d0._4_4_ * fVar14);
      local_160 = (float)NEON_fmadd((undefined4)uStack_e8,uVar29,uVar13);
      fStack_15c = (float)NEON_fmadd((undefined4)local_d8,uVar29,uVar19);
      uVar13 = NEON_fmadd((undefined4)local_d0,uVar31,local_d0._4_4_ * fVar15);
      local_150 = NEON_fmadd((undefined4)uStack_e8,uVar17,uVar22);
      uVar22 = NEON_fmadd((float)local_c0,uVar20,local_c0._4_4_ * fVar21);
      uStack_14c = NEON_fmadd((undefined4)local_d8,uVar17,uVar18);
      uVar18 = NEON_fmadd((float)local_c0,uVar23,local_c0._4_4_ * fVar14);
      uVar19 = NEON_fmadd((float)local_c0,uVar31,local_c0._4_4_ * fVar15);
      local_168 = NEON_fmadd((undefined4)uStack_c8,uVar27,uVar26);
      local_158 = (float)NEON_fmadd((undefined4)uStack_c8,uVar29,uVar24);
      local_148 = NEON_fmadd((undefined4)uStack_c8,uVar17,uVar13);
      local_140 = (float)NEON_fmadd((float)local_b8,uVar27,uVar22);
      fStack_13c = (float)NEON_fmadd((float)local_b8,uVar29,uVar18);
      local_138 = (float)NEON_fmadd((float)local_b8,uVar17,uVar19);
      local_138 = local_138 + *(float *)(lVar2 + 0x90);
      local_140 = local_140 + *(float *)(lVar2 + 0x88);
      fStack_13c = fStack_13c + *(float *)(lVar2 + 0x8c);
    }
    local_134 = 0;
    local_144 = 0;
    local_154 = 0;
    local_164 = 0;
    if (pbVar11 == (btRigidBody *)0x0) {
LAB_0099156c:
      local_134 = 0;
      local_144 = 0;
      local_154 = 0;
      local_164 = 0;
      pbVar11 = (btRigidBody *)btTypedConstraint::getFixedBody();
    }
  }
  this_00 = (Bt2D6Joint *)btAlignedAllocInternal(0x370,0x10);
                    /* try { // try from 00991584 to 00991597 has its CatchHandler @ 00991a7c */
  Bt2D6Joint::Bt2D6Joint
            (this_00,pbVar11,pbVar12,(btTransform *)&local_130,(btTransform *)&local_170);
  *(Bt2D6Joint **)(this + 0x28) = this_00;
  puVar3 = (undefined4 *)operator_new(0x18);
  lVar2 = *(long *)(this + 0x20);
  fVar15 = -1.0;
  fVar21 = 1.0;
  *puVar3 = 1;
  *(long *)(puVar3 + 2) = lVar2;
  puVar3[4] = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 **)(this_00 + 0x10) = puVar3;
  lVar2 = *(long *)(this + 0x28);
  fVar14 = -1.0;
  if (this[0x48] != (Bt2PhysicsJointObject)0x0) {
    fVar21 = -*(float *)(this + 0x58);
    fVar14 = -*(float *)(this + 0x4c);
    if (*(float *)(this + 0x4c) <= *(float *)(this + 0x58)) {
      fVar16 = fmodf(fVar21,6.283185);
      fVar21 = fVar16 + 6.283185;
      if (-6.283185 <= fVar16) {
        fVar21 = fVar16;
      }
      fVar14 = fmodf(fVar14,6.283185);
      fVar16 = fVar14 + 6.283185;
      if (-6.283185 <= fVar14) {
        fVar16 = fVar14;
      }
      fVar14 = fVar16 + 6.283185;
      if (fVar21 <= fVar16) {
        fVar14 = fVar16;
      }
      if (fVar14 < fVar21 + 0.001) {
        fVar21 = (fVar21 + fVar14) * 0.5;
        fVar14 = fVar21;
      }
    }
  }
  *(float *)(lVar2 + 0x1c0) = fVar21;
  *(float *)(lVar2 + 0x1c4) = fVar14;
  fVar21 = 1.0;
  if (this[0x49] != (Bt2PhysicsJointObject)0x0) {
    fVar21 = -*(float *)(this + 0x5c);
    fVar15 = -*(float *)(this + 0x50);
    if (*(float *)(this + 0x50) <= *(float *)(this + 0x5c)) {
      fVar14 = fmodf(fVar21,6.283185);
      fVar21 = fVar14 + 6.283185;
      if (-6.283185 <= fVar14) {
        fVar21 = fVar14;
      }
      fVar15 = fmodf(fVar15,6.283185);
      fVar14 = fVar15 + 6.283185;
      if (-6.283185 <= fVar15) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14 + 6.283185;
      if (fVar21 <= fVar14) {
        fVar15 = fVar14;
      }
      if (fVar15 < fVar21 + 0.001) {
        fVar15 = (fVar21 + fVar15) * 0.5;
        fVar21 = fVar15;
      }
    }
  }
  *(float *)(lVar2 + 0x204) = fVar21;
  *(float *)(lVar2 + 0x208) = fVar15;
  fVar21 = 1.0;
  fVar14 = -1.0;
  if (this[0x4a] != (Bt2PhysicsJointObject)0x0) {
    fVar21 = -*(float *)(this + 0x60);
    fVar14 = -*(float *)(this + 0x54);
    if (*(float *)(this + 0x54) <= *(float *)(this + 0x60)) {
      fVar15 = fmodf(fVar21,6.283185);
      fVar21 = fVar15 + 6.283185;
      if (-6.283185 <= fVar15) {
        fVar21 = fVar15;
      }
      fVar14 = fmodf(fVar14,6.283185);
      fVar15 = fVar14 + 6.283185;
      if (-6.283185 <= fVar14) {
        fVar15 = fVar14;
      }
      fVar14 = fVar15 + 6.283185;
      if (fVar21 <= fVar15) {
        fVar14 = fVar15;
      }
      if (fVar14 < fVar21 + 0.001) {
        fVar21 = (fVar21 + fVar14) * 0.5;
        fVar14 = fVar21;
      }
    }
  }
  *(float *)(lVar2 + 0x248) = fVar21;
  *(float *)(lVar2 + 0x24c) = fVar14;
  Bt2D6Joint::selectBestRotateOrder();
  lVar2 = *(long *)(this + 0x28);
  fVar21 = -1.0;
  fVar14 = 1.0;
  if (this[100] != (Bt2PhysicsJointObject)0x0) {
    fVar15 = *(float *)(this + 0x68);
    fVar16 = *(float *)(this + 0x74);
    fVar21 = (fVar15 + fVar16) * 0.5;
    fVar14 = fVar21;
    if (fVar16 < fVar15 || fVar15 + 0.0001 <= fVar16) {
      fVar21 = fVar16;
      fVar14 = fVar15;
    }
  }
  *(float *)(lVar2 + 0xcc) = fVar14;
  *(float *)(lVar2 + 0xdc) = fVar21;
  fVar21 = 1.0;
  fVar14 = -1.0;
  if (this[0x65] != (Bt2PhysicsJointObject)0x0) {
    fVar15 = *(float *)(this + 0x6c);
    fVar16 = *(float *)(this + 0x78);
    fVar21 = (fVar15 + fVar16) * 0.5;
    fVar14 = fVar21;
    if (fVar16 < fVar15 || fVar15 + 0.0001 <= fVar16) {
      fVar21 = fVar15;
      fVar14 = fVar16;
    }
  }
  *(float *)(lVar2 + 0xd0) = fVar21;
  *(float *)(lVar2 + 0xe0) = fVar14;
  fVar21 = 1.0;
  fVar14 = -1.0;
  if (this[0x66] != (Bt2PhysicsJointObject)0x0) {
    fVar15 = *(float *)(this + 0x70);
    fVar16 = *(float *)(this + 0x7c);
    fVar21 = (fVar15 + fVar16) * 0.5;
    fVar14 = fVar21;
    if (fVar16 < fVar15 || fVar15 + 0.0001 <= fVar16) {
      fVar21 = fVar15;
      fVar14 = fVar16;
    }
  }
  *(float *)(lVar2 + 0xd4) = fVar21;
  *(float *)(lVar2 + 0xe4) = fVar14;
  if (((byte)this[9] >> 3 & 1) != 0) {
    *(float *)(*(long *)(this + 0x28) + 0x18) = *(float *)(this + 0x84) * 0.01666;
  }
  uVar5 = *(uint *)(pbVar11 + 300);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    lVar2 = *(long *)(pbVar11 + 0x138);
    do {
      if (*(btRigidBody **)(lVar2 + uVar8 * 8) == pbVar12) {
        if ((int)uVar8 < (int)uVar5) {
          uVar5 = uVar5 - 1;
          uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
          uVar10 = *(undefined8 *)(lVar2 + uVar8 * 8);
          *(undefined8 *)(lVar2 + uVar8 * 8) = *(undefined8 *)(lVar2 + uVar9);
          *(undefined8 *)(*(long *)(pbVar11 + 0x138) + uVar9) = uVar10;
          *(uint *)(pbVar11 + 300) = uVar5;
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  *(uint *)(pbVar11 + 0x120) = (uint)(0 < (int)uVar5);
  uVar5 = *(uint *)(pbVar12 + 300);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    lVar2 = *(long *)(pbVar12 + 0x138);
    do {
      if (*(btRigidBody **)(lVar2 + uVar8 * 8) == pbVar11) {
        if ((int)uVar8 < (int)uVar5) {
          uVar5 = uVar5 - 1;
          uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
          uVar10 = *(undefined8 *)(lVar2 + uVar8 * 8);
          *(undefined8 *)(lVar2 + uVar8 * 8) = *(undefined8 *)(lVar2 + uVar9);
          *(undefined8 *)(*(long *)(pbVar12 + 0x138) + uVar9) = uVar10;
          *(uint *)(pbVar12 + 300) = uVar5;
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  *(uint *)(pbVar12 + 0x120) = (uint)(0 < (int)uVar5);
  if (uVar7 == 0) {
    plVar4 = *(long **)(param_1 + 0x30);
    lVar2 = *(long *)(this + 0x28);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x30);
    lVar2 = *(long *)(this + 0x28);
    if (0x1d < uVar7) {
      uVar7 = 0x1e;
    }
    uVar5 = *(uint *)((long)plVar4 + 0xa4);
    if (*(uint *)((long)plVar4 + 0xa4) <= uVar7) {
      uVar5 = uVar7;
    }
    *(uint *)(lVar2 + 0x20) = uVar5;
  }
  (**(code **)(*plVar4 + 0x70))(plVar4,lVar2,1);
  if ((((byte)pbVar11[0xe0] & 1) != 0) || (((byte)pbVar12[0xe0] & 1) != 0)) {
    ScenegraphNode::addWorldTransformationDirtyListener
              (*(ScenegraphNode **)(this + 0x20),(WorldTransformationDirtyListener *)(this + 0x18));
  }
LAB_00991a38:
  if (*(long *)(lVar1 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


