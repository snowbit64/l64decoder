// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convexSweepTest
// Entry Point: 00f4cb1c
// Size: 996 bytes
// Signature: undefined __thiscall convexSweepTest(btCollisionWorld * this, btConvexShape * param_1, btTransform * param_2, btTransform * param_3, ConvexResultCallback * param_4, float param_5, bool param_6)


/* btCollisionWorld::convexSweepTest(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float, bool) const */

void __thiscall
btCollisionWorld::convexSweepTest
          (btCollisionWorld *this,btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
          ConvexResultCallback *param_4,float param_5,bool param_6)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined local_240 [12];
  float local_234;
  float local_230;
  float fStack_22c;
  float local_228;
  uint local_224;
  float local_220;
  float local_21c;
  ulong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  btCollisionWorld *local_188;
  ConvexResultCallback *pCStack_180;
  float local_178;
  btConvexShape *local_170;
  undefined local_168;
  undefined8 local_160;
  float local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  long local_b8;
  
  lVar1 = tpidr_el0;
  local_b8 = *(long *)(lVar1 + 0x28);
  CProfileManager::Start_Profile("convexSweepTest");
  uStack_108 = *(undefined8 *)(param_2 + 8);
  local_110 = *(undefined8 *)param_2;
  uStack_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_100 = *(undefined8 *)(param_2 + 0x10);
  uStack_148 = *(undefined8 *)(param_3 + 8);
  local_150 = *(undefined8 *)param_3;
  uStack_138 = *(undefined8 *)(param_3 + 0x18);
  uStack_140 = *(undefined8 *)(param_3 + 0x10);
  uStack_e8 = *(undefined8 *)(param_2 + 0x28);
  local_f0 = *(undefined8 *)(param_2 + 0x20);
  uStack_d8 = *(undefined8 *)(param_2 + 0x38);
  uStack_e0 = *(undefined8 *)(param_2 + 0x30);
  uStack_128 = *(undefined8 *)(param_3 + 0x28);
  local_130 = *(undefined8 *)(param_3 + 0x20);
  uStack_118 = *(undefined8 *)(param_3 + 0x38);
  uStack_120 = *(undefined8 *)(param_3 + 0x30);
  btTransformUtil::calculateDiffAxisAngle
            ((btTransform *)&local_110,(btTransform *)&local_150,(btVector3 *)local_240,
             (float *)&local_c8);
  uStack_210 = 0;
  local_208 = 0;
  fVar15 = (float)local_240._0_8_ * (float)local_c8;
  fVar16 = (float)((ulong)local_240._0_8_ >> 0x20) * (float)local_c8;
  fVar14 = (float)local_240._8_4_ * (float)local_c8;
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_110,(btQuaternion *)&local_c8);
  local_224 = 0;
  local_234 = 0.0;
  uVar7 = NEON_fmadd(local_c8._4_4_,local_c8._4_4_,(float)local_c8 * (float)local_c8);
  uVar7 = NEON_fmadd(local_c0,local_c0,uVar7);
  fVar8 = (float)NEON_fmadd(local_bc,local_bc,uVar7);
  fVar8 = 2.0 / fVar8;
  fVar13 = fVar8 * local_c0;
  fVar9 = fVar8 * local_c8._4_4_;
  fVar12 = fVar8 * (float)local_c8 * -(float)local_c8;
  fVar11 = (float)NEON_fmsub(fVar13,local_c0,0x3f800000);
  local_21c = fVar8 * (float)local_c8 * local_bc;
  local_230 = fVar9 * (float)local_c8 + fVar13 * local_bc;
  fStack_22c = fVar11 + fVar12;
  local_228 = fVar13 * local_c8._4_4_ - local_21c;
  local_21c = fVar13 * local_c8._4_4_ + local_21c;
  local_220 = fVar13 * (float)local_c8 - fVar9 * local_bc;
  local_240._8_4_ = fVar13 * (float)local_c8 + fVar9 * local_bc;
  local_218 = (ulong)(uint)(fVar9 * -local_c8._4_4_ + 1.0 + fVar12);
  local_240._0_8_ =
       CONCAT44(fVar9 * (float)local_c8 - fVar13 * local_bc,fVar11 + fVar9 * -local_c8._4_4_);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,local_240,&local_c8,&local_160);
  fVar8 = (float)NEON_fmadd(fVar14,fVar14,fVar15 * fVar15 + fVar16 * fVar16);
  fVar9 = (float)(**(code **)(*(long *)param_1 + 0x20))(param_1);
  uStack_1e0 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x38);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  fVar9 = fVar9 * SQRT(fVar8);
  uStack_200 = *(undefined8 *)(param_2 + 0x18);
  local_208 = *(undefined8 *)(param_2 + 0x10);
  uStack_1f0 = *(undefined8 *)(param_2 + 0x28);
  local_1f8 = *(undefined8 *)(param_2 + 0x20);
  local_230 = 1e+18;
  local_c0 = local_c0 - fVar9;
  local_bc = 0.0;
  local_1e8._0_4_ = (float)uVar10;
  local_1e8._4_4_ = (float)((ulong)uVar10 >> 0x20);
  local_1a8._0_4_ = (float)uVar6;
  uStack_210 = *(undefined8 *)(param_2 + 8);
  local_218 = *(ulong *)param_2;
  local_1a8._0_4_ = (float)local_1a8 - (float)local_1e8;
  uStack_1b0 = *(undefined8 *)(param_3 + 0x28);
  local_1b8 = *(undefined8 *)(param_3 + 0x20);
  local_1a8._4_4_ = (float)((ulong)uVar6 >> 0x20);
  uStack_1d0 = *(undefined8 *)(param_3 + 8);
  local_1d8 = *(undefined8 *)param_3;
  uStack_1c0 = *(undefined8 *)(param_3 + 0x18);
  local_1c8 = *(undefined8 *)(param_3 + 0x10);
  local_1a8._4_4_ = local_1a8._4_4_ - local_1e8._4_4_;
  fVar11 = (float)uStack_1a0 - (float)uStack_1e0;
  uVar7 = NEON_fmadd(local_1a8._4_4_,local_1a8._4_4_,(float)local_1a8 * (float)local_1a8);
  local_158 = local_158 + fVar9;
  fVar8 = (float)NEON_fmadd(fVar11,fVar11,uVar7);
  local_c8 = CONCAT44((float)((ulong)local_c8 >> 0x20) - fVar9,(float)local_c8 - fVar9);
  local_160 = CONCAT44((float)((ulong)local_160 >> 0x20) + fVar9,(float)local_160 + fVar9);
  local_154 = 0;
  local_240._0_8_ = &PTR__btBroadphaseAabbCallback_01019780;
  fVar8 = 1.0 / SQRT(fVar8);
  fVar9 = fVar8 * (float)local_1a8;
  fVar12 = fVar8 * local_1a8._4_4_;
  fVar8 = fVar8 * fVar11;
  uVar7 = NEON_fmadd(fVar12,local_1a8._4_4_,fVar9 * (float)local_1a8);
  local_21c = (float)NEON_fmadd(fVar8,fVar11,uVar7);
  local_240._8_4_ = local_230;
  if (fVar9 != 0.0) {
    local_240._8_4_ = 1.0 / fVar9;
  }
  local_234 = local_230;
  if (fVar12 != 0.0) {
    local_234 = 1.0 / fVar12;
  }
  if (fVar8 != 0.0) {
    local_230 = 1.0 / fVar8;
  }
  local_228 = (float)(uint)((float)local_240._8_4_ < 0.0);
  local_224 = (uint)(local_234 < 0.0);
  local_220 = (float)(uint)(local_230 < 0.0);
  local_1e8 = uVar10;
  local_1a8 = uVar6;
  local_188 = this;
  pCStack_180 = param_4;
  local_178 = param_5;
  local_170 = param_1;
  local_168 = param_6;
  uVar4 = (**(code **)(**(long **)(this + 0x60) + 0x30))
                    (*(long **)(this + 0x60),&uStack_e0,&uStack_120,local_240,&local_c8,&local_160);
  puVar2 = CProfileManager::CurrentNode;
  iVar5 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar5;
  if ((iVar5 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday((timeval *)local_240,(__timezone_ptr_t)0x0);
    uVar4 = (ulong)uVar3;
    iVar5 = *(int *)(puVar2 + 0x18);
    uVar7 = NEON_fmadd((float)(unkuint9)
                              (ulong)((CONCAT44(local_234,local_240._8_4_) +
                                      (local_240._0_8_ - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar7;
  }
  if (iVar5 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


