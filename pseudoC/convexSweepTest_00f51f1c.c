// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convexSweepTest
// Entry Point: 00f51f1c
// Size: 892 bytes
// Signature: undefined __cdecl convexSweepTest(btConvexShape * param_1, btTransform * param_2, btTransform * param_3, ConvexResultCallback * param_4, float param_5, bool param_6)


/* btGhostObject::convexSweepTest(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float, bool) const */

void btGhostObject::convexSweepTest
               (btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
               ConvexResultCallback *param_4,float param_5,bool param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  uint in_w5;
  undefined in_w6;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_1c4;
  btVector3 abStack_1c0 [16];
  undefined8 local_1b0;
  float local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  float local_198;
  undefined4 local_194;
  undefined8 local_190;
  ulong local_188;
  long local_180;
  ulong local_178;
  undefined8 local_170;
  float local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  float local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  long local_a8;
  
  plVar4 = (long *)(ulong)param_6;
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  uStack_118 = *(undefined8 *)(param_4 + 0x28);
  local_120 = *(undefined8 *)(param_4 + 0x20);
  local_108 = *(undefined8 *)(param_4 + 0x38);
  local_110 = *(undefined8 *)(param_4 + 0x30);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  local_e0 = *(undefined8 *)(param_3 + 0x20);
  local_c8 = *(undefined8 *)(param_3 + 0x38);
  local_d0 = *(undefined8 *)(param_3 + 0x30);
  uStack_f8 = *(undefined8 *)(param_3 + 8);
  local_100 = *(undefined8 *)param_3;
  uStack_e8 = *(undefined8 *)(param_3 + 0x18);
  uStack_f0 = *(undefined8 *)(param_3 + 0x10);
  uVar7 = CONCAT44((float)((ulong)local_110 >> 0x20) - (float)((ulong)local_d0 >> 0x20),
                   (float)local_110 - (float)local_d0);
  uStack_138 = *(undefined8 *)(param_4 + 8);
  local_140 = *(undefined8 *)param_4;
  uStack_128 = *(undefined8 *)(param_4 + 0x18);
  uStack_130 = *(undefined8 *)(param_4 + 0x10);
  fVar14 = (float)local_108 - (float)local_c8;
  btTransformUtil::calculateDiffAxisAngle
            ((btTransform *)&local_100,(btTransform *)&local_140,(btVector3 *)&local_190,
             (float *)&local_b8);
  local_160 = 0;
  uStack_158 = 0;
  fVar16 = (float)local_190 * (float)local_b8;
  fVar17 = (float)((ulong)local_190 >> 0x20) * (float)local_b8;
  fVar15 = (float)local_188 * (float)local_b8;
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_100,(btQuaternion *)&local_b8);
  local_164 = 0;
  uVar8 = NEON_fmadd(local_b8._4_4_,local_b8._4_4_,(float)local_b8 * (float)local_b8);
  uVar8 = NEON_fmadd(local_b0,local_b0,uVar8);
  fVar9 = (float)NEON_fmadd(local_ac,local_ac,uVar8);
  fVar9 = 2.0 / fVar9;
  fVar13 = fVar9 * local_b0;
  fVar10 = fVar9 * local_b8._4_4_;
  local_168 = fVar9 * (float)local_b8 * -(float)local_b8;
  fVar11 = (float)NEON_fmsub(fVar13,local_b0,0x3f800000);
  fVar9 = fVar9 * (float)local_b8 * local_ac;
  local_180 = CONCAT44(fVar11 + local_168,fVar10 * (float)local_b8 + fVar13 * local_ac);
  local_168 = fVar10 * -local_b8._4_4_ + 1.0 + local_168;
  local_178 = (ulong)(uint)(fVar13 * local_b8._4_4_ - fVar9);
  local_170 = CONCAT44(fVar13 * local_b8._4_4_ + fVar9,fVar13 * (float)local_b8 - fVar10 * local_ac)
  ;
  local_188 = (ulong)(uint)(fVar13 * (float)local_b8 + fVar10 * local_ac);
  local_190 = CONCAT44(fVar10 * (float)local_b8 - fVar13 * local_ac,
                       fVar11 + fVar10 * -local_b8._4_4_);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_190,&local_b8,&local_150);
  fVar11 = (float)NEON_fminnm(fVar14,0x80000000);
  fVar9 = (float)NEON_fmadd(fVar15,fVar15,fVar16 * fVar16 + fVar17 * fVar17);
  uVar12 = NEON_fminnm(uVar7,0x8000000080000000,4);
  uVar7 = NEON_fmaxnm(uVar7,0x8000000080000000,4);
  uVar3 = (ulong)local_b8 >> 0x20;
  uVar2 = (ulong)local_150 >> 0x20;
  fVar10 = (float)(**(code **)(*(long *)param_2 + 0x20))(param_2);
  fVar10 = fVar10 * SQRT(fVar9);
  local_ac = 0.0;
  local_144 = 0;
  local_b0 = (fVar11 + local_b0) - fVar10;
  local_148 = fVar14 + local_148 + fVar10;
  local_b8._0_4_ = ((float)uVar12 + (float)local_b8) - fVar10;
  local_b8._4_4_ = ((float)((ulong)uVar12 >> 0x20) + (float)uVar3) - fVar10;
  local_150._0_4_ = (float)uVar7 + (float)local_150 + fVar10;
  local_150._4_4_ = (float)((ulong)uVar7 >> 0x20) + (float)uVar2 + fVar10;
  if (0 < *(int *)(param_1 + 0x154)) {
    lVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x160) + lVar6 * 8);
      uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar5 + 0xc0));
      if ((uVar3 & 1) != 0) {
        (**(code **)(**(long **)(lVar5 + 200) + 0x10))
                  (*(long **)(lVar5 + 200),lVar5 + 8U,&local_1a0,&local_1b0);
        local_1a0 = CONCAT44(local_b8._4_4_ + (float)((ulong)local_1a0 >> 0x20),
                             (float)local_b8 + (float)local_1a0);
        local_198 = local_b0 + local_198;
        local_1b0 = CONCAT44(local_150._4_4_ + (float)((ulong)local_1b0 >> 0x20),
                             (float)local_150 + (float)local_1b0);
        local_194 = 0;
        local_1a8 = local_148 + local_1a8;
        local_1a4 = 0;
        local_1c4 = 1.0;
        uVar3 = btRayAabb((btVector3 *)(param_3 + 0x30),(btVector3 *)(param_4 + 0x30),
                          (btVector3 *)&local_1a0,(btVector3 *)&local_1b0,&local_1c4,abStack_1c0);
        if ((uVar3 & 1) != 0) {
          local_188 = *(ulong *)(lVar5 + 200);
          local_170 = 0xffffffffffffffff;
          local_190 = 0;
          local_180 = lVar5;
          local_178 = lVar5 + 8U;
          btCollisionWorld::objectQuerySingleInternal
                    ((btCollisionWorld *)param_2,(btConvexShape *)&local_100,
                     (btTransform *)&local_140,(btTransform *)&local_190,
                     (btCollisionObjectWrapper *)plVar4,(ConvexResultCallback *)(ulong)(in_w5 & 1),
                     param_5,(bool)in_w6);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x154));
  }
  if (*(long *)(lVar1 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


