// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayCast
// Entry Point: 009b6938
// Size: 1232 bytes
// Signature: undefined __thiscall rayCast(Bt2RaycastVehicle * this, btDynamicsWorld * param_1, int param_2, Bt2WheelInfo * param_3)


/* Bt2RaycastVehicle::rayCast(btDynamicsWorld*, int, Bt2WheelInfo&) */

void __thiscall
Bt2RaycastVehicle::rayCast
          (Bt2RaycastVehicle *this,btDynamicsWorld *param_1,int param_2,Bt2WheelInfo *param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  float local_190;
  float fStack_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  float local_170;
  float fStack_16c;
  uint local_168;
  undefined4 local_164;
  float local_160;
  float fStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 local_144;
  long local_140 [5];
  float local_114;
  float fStack_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined **local_f8;
  float local_f0;
  undefined2 local_ec;
  undefined2 local_ea;
  long local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined4 *)(param_3 + 0xa4);
  fVar8 = *(float *)(param_3 + 0xa8);
  fVar12 = *(float *)(param_3 + 0x110);
  fVar28 = *(float *)(param_3 + 0x120);
  uVar10 = *(undefined4 *)(param_3 + 0x10c);
  uVar26 = *(undefined4 *)(param_3 + 0x11c);
  local_e8 = *(long *)(this + (ulong)*(uint *)(param_3 + 0x180) * 8 + 8);
  uVar9 = *(undefined4 *)(param_3 + 0xac);
  uVar14 = *(undefined4 *)(param_3 + 0x114);
  uVar22 = *(undefined4 *)(local_e8 + 0x18);
  fVar23 = *(float *)(local_e8 + 0x1c);
  uVar15 = *(undefined4 *)(local_e8 + 8);
  fVar16 = *(float *)(local_e8 + 0xc);
  uVar24 = *(undefined4 *)(local_e8 + 0x28);
  fVar25 = *(float *)(local_e8 + 0x2c);
  local_f0 = 1.0;
  uVar31 = NEON_fmadd(uVar22,uVar2,fVar8 * fVar23);
  uVar34 = NEON_fmadd(uVar10,uVar22,fVar23 * fVar12);
  uVar29 = NEON_fmadd(uVar15,uVar2,fVar16 * fVar8);
  uVar2 = NEON_fmadd(uVar24,uVar2,fVar8 * fVar25);
  uVar33 = NEON_fmadd(uVar10,uVar15,fVar16 * fVar12);
  uVar11 = NEON_fmadd(uVar10,uVar24,fVar25 * fVar12);
  uVar13 = *(undefined4 *)(local_e8 + 0x20);
  uVar10 = *(undefined4 *)(local_e8 + 0x10);
  uVar15 = NEON_fmadd(uVar15,uVar26,fVar16 * fVar28);
  uVar17 = *(undefined4 *)(local_e8 + 0x30);
  uVar22 = NEON_fmadd(uVar22,uVar26,fVar23 * fVar28);
  uVar24 = NEON_fmadd(uVar24,uVar26,fVar25 * fVar28);
  fVar27 = (float)NEON_fmadd(uVar14,uVar13,uVar34);
  fVar32 = (float)NEON_fmadd(uVar13,uVar9,uVar31);
  fVar35 = *(float *)(param_3 + 0xd4) - *(float *)(param_3 + 0xd8);
  fVar36 = (float)NEON_fmadd(uVar10,uVar9,uVar29);
  fVar30 = (float)NEON_fmadd(uVar17,uVar9,uVar2);
  uVar2 = *(undefined4 *)(param_3 + 0x124);
  fVar16 = (float)NEON_fmadd(uVar14,uVar10,uVar33);
  fVar23 = (float)NEON_fmadd(uVar14,uVar17,uVar11);
  fVar27 = fVar27 + *(float *)(local_e8 + 0x3c);
  fVar19 = (float)NEON_fmadd(uVar13,uVar2,uVar22);
  fVar16 = *(float *)(local_e8 + 0x38) + fVar16;
  fVar8 = *(float *)(param_3 + 0x104);
  fVar23 = fVar23 + *(float *)(local_e8 + 0x40);
  fVar18 = (float)NEON_fmadd(uVar10,uVar2,uVar15);
  fVar28 = (float)NEON_fmadd(uVar17,uVar2,uVar24);
  local_ec = *(undefined2 *)(param_3 + 0x174);
  local_f8 = &PTR__ConvexResultCallback_00fe1ba0;
  fVar25 = fVar19 * fVar8 + fVar27 + fVar32 * fVar35;
  fVar21 = fVar18 * fVar8 + fVar16 + fVar36 * fVar35;
  local_ea = *(undefined2 *)(param_3 + 0x176);
  fVar20 = fVar28 * fVar8 + fVar23 + fVar30 * fVar35;
  uVar2 = NEON_fmadd(fVar18,fVar21,fVar19 * fVar25);
  local_180 = *(float *)(param_3 + 0xe0);
  local_d4 = 0;
  local_b0 = NEON_fmadd(fVar28,fVar20,uVar2);
  fVar12 = *(float *)(param_3 + 0xd8) + *(float *)(param_3 + 0xdc);
  local_c4 = 0;
  local_b4 = 0;
  local_90 = 0;
  fStack_17c = *(float *)(param_3 + 0x100);
  uStack_174 = 0;
  fStack_178 = local_180;
  local_e0 = fVar36;
  fStack_dc = fVar32;
  local_d8 = fVar30;
  local_d0 = fVar18;
  fStack_cc = fVar19;
  local_c8 = fVar28;
  local_c0 = fVar21;
  fStack_bc = fVar25;
  local_b8 = fVar20;
  fStack_ac = fVar12;
  btCylinderShape::btCylinderShape((btCylinderShape *)local_140,(btVector3 *)&local_180);
  fVar8 = *(float *)(param_3 + 0xe0);
  if (*(float *)(param_3 + 0x100) <= *(float *)(param_3 + 0xe0)) {
    fVar8 = *(float *)(param_3 + 0x100);
  }
                    /* try { // try from 009b6b34 to 009b6bbf has its CatchHandler @ 009b6e0c */
  fVar3 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  fVar4 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  fVar5 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  local_104 = NEON_fminnm(fVar8,0x3e19999a);
  fVar8 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  fVar6 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  fVar7 = (float)(**(code **)(local_140[0] + 0x60))(local_140);
  uStack_174 = 0;
  local_164 = 0;
  uStack_154 = 0;
  fStack_110 = (fVar4 + fStack_110) - fVar6;
  local_114 = (fVar3 + local_114) - fVar8;
  local_10c = (fVar5 + local_10c) - fVar7;
  uStack_158 = NEON_fmadd(fVar36,fVar19,fVar18 * -fVar32);
  fStack_178 = (float)NEON_fmadd(fVar32,fVar28,fVar19 * -fVar30);
  local_108 = 0;
  local_168 = NEON_fmadd(fVar30,fVar18,fVar28 * -fVar36);
  uStack_1b8 = (ulong)(uint)fStack_178;
  local_1c0 = CONCAT44(fVar18,fVar36);
  uStack_1a8 = (ulong)local_168;
  uStack_1b0 = CONCAT44(fVar19,fVar32);
  local_190 = fVar21 + fVar36 * fVar12;
  fStack_18c = fVar25 + fVar32 * fVar12;
  local_188 = fVar20 + fVar30 * fVar12;
  local_144 = 0;
  local_184 = 0;
  uStack_198 = (ulong)uStack_158;
  local_1a0 = CONCAT44(fVar28,fVar30);
                    /* try { // try from 009b6c94 to 009b6dc3 has its CatchHandler @ 009b6e08 */
  local_180 = fVar36;
  fStack_17c = fVar18;
  local_170 = fVar32;
  fStack_16c = fVar19;
  local_160 = fVar30;
  fStack_15c = fVar28;
  local_150 = fVar21;
  fStack_14c = fVar25;
  local_148 = fVar20;
  btCollisionWorld::convexSweepTest
            ((btCollisionWorld *)param_1,(btConvexShape *)local_140,(btTransform *)&local_180,
             (btTransform *)&local_1c0,(ConvexResultCallback *)&local_f8,0.0,true);
  if (((1.0 <= local_f0) || ((*(byte *)(local_90 + 0x100) >> 1 & 1) == 0)) || (local_90 == 0)) {
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(float *)(param_3 + 8) = -fVar30;
    fVar8 = *(float *)(param_3 + 0xd4) + *(float *)(param_3 + 0xdc);
    *(undefined4 *)(param_3 + 0xc) = 0;
    fVar12 = fVar8 + *(float *)(param_3 + 0xe0);
    *(float *)param_3 = -fVar36;
    *(float *)(param_3 + 0x10) = fVar16 + fVar36 * fVar12;
    *(float *)(param_3 + 4) = -fVar32;
    *(float *)(param_3 + 0x14) = fVar27 + fVar32 * fVar12;
  }
  else {
    *(long *)(param_3 + 0x20) = local_90;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    fVar28 = (float)NEON_fmadd(local_f0,fVar12,fVar35);
    fVar12 = fVar28 + *(float *)(param_3 + 0xe0);
    fVar25 = *(float *)(param_3 + 0xd4) + *(float *)(param_3 + 0xdc);
    fVar8 = *(float *)(param_3 + 0xd4) - *(float *)(param_3 + 0xd8);
    *(undefined4 *)(param_3 + 0x28) = local_98;
    if (fVar28 <= fVar25) {
      fVar25 = fVar28;
    }
    *(float *)(param_3 + 0x10) = fVar16 + fVar36 * fVar12;
    if (fVar8 <= fVar28) {
      fVar8 = fVar25;
    }
    *(undefined8 *)(param_3 + 8) = uStack_a0;
    *(undefined8 *)param_3 = local_a8;
    *(float *)(param_3 + 0x14) = fVar27 + fVar32 * fVar12;
  }
  *(float *)(param_3 + 0x18) = fVar23 + fVar30 * fVar12;
  *(float *)(param_3 + 0x18c) = fVar8;
  updateWheelCollisionShape(this,param_2,true);
  btConvexShape::~btConvexShape((btConvexShape *)local_140);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


