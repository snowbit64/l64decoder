// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTerrain
// Entry Point: 0099d204
// Size: 736 bytes
// Signature: undefined __thiscall addTerrain(Bt2ScenegraphPhysicsContext * this, TerrainTransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::addTerrain(TerrainTransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addTerrain
          (Bt2ScenegraphPhysicsContext *this,TerrainTransformGroup *param_1)

{
  long lVar1;
  int iVar2;
  Bt2PhysicsRBObject *this_00;
  long *this_01;
  btRigidBody *this_02;
  TerrainUserData *this_03;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float local_158;
  undefined4 uStack_154;
  ulong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined8 local_dc;
  undefined local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Bt2PhysicsUtil::getTransformScale((TransformGroup *)param_1,(Vector3 *)&local_78);
  if (((ABS((float)local_78 + -1.0) < 0.001) && (ABS(local_78._4_4_ + -1.0) < 0.001)) &&
     (ABS(local_70 + -1.0) < 0.001)) {
    local_78 = NEON_fmov(0x3f800000,4);
    local_70 = 1.0;
  }
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (*(long *)(this_00 + 0x30) == 0) {
    iVar2 = BaseTerrain::getHeightMapSize();
    this_01 = (long *)btAlignedAllocInternal(0xd0,0x10);
                    /* try { // try from 0099d2fc to 0099d30f has its CatchHandler @ 0099d508 */
    Bt2HeightfieldTerrainShape::Bt2HeightfieldTerrainShape
              ((Bt2HeightfieldTerrainShape *)this_01,iVar2,iVar2,*(ushort **)(param_1 + 0x1f0),
               *(float *)(param_1 + 0x214),0.0,*(float *)(param_1 + 0x210));
    fVar4 = (float)BaseTerrain::getUnitsPerPixel();
    fVar4 = fVar4 * (float)local_78;
    fVar5 = (float)BaseTerrain::getUnitsPerPixel();
    uStack_154 = local_78._4_4_;
    local_150 = (ulong)(uint)(fVar5 * local_70);
    local_158 = fVar4;
    (**(code **)(*this_01 + 0x30))(this_01,&local_158);
    RawTransformGroup::updateWorldTransformation();
    uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
    local_c0 = *(undefined8 *)(param_1 + 0xb8);
    uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
    local_b0 = *(undefined8 *)(param_1 + 200);
    uStack_98 = *(undefined8 *)(param_1 + 0xe0);
    local_a0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_88 = *(undefined8 *)(param_1 + 0xf0);
    local_90 = *(undefined8 *)(param_1 + 0xe8);
    Matrix4x4::orthonormalize3x3();
    local_f8 = 0;
    uStack_f0 = 0;
    local_d4 = 0;
    uStack_100 = 0;
    local_dc = 0x3f8000003f4ccccd;
    uStack_c8 = 0x3c23d70a3c23d70a;
    local_d0 = 0x3c23d70a3ba3d70a;
    local_158 = 0.0;
    local_150 = 0;
    local_13c = 0;
    local_12c = 0;
    local_11c = 0;
    local_10c = 0;
    local_e8 = *(float *)(this_00 + 0x60);
    if (*(float *)(this_00 + 0x60) < *(float *)(this_00 + 100)) {
      local_e8 = *(float *)(this_00 + 100);
    }
    local_148 = (undefined4)local_c0;
    uStack_144 = (undefined4)local_b0;
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    local_140 = (undefined4)local_a0;
    local_e8 = SQRT(local_e8);
    local_130 = local_a0._4_4_;
    local_138 = local_c0._4_4_;
    uStack_134 = local_b0._4_4_;
    local_128 = (undefined4)uStack_b8;
    uStack_124 = (undefined4)uStack_a8;
    local_110 = (undefined4)uStack_88;
    local_120 = (undefined4)uStack_98;
    local_118 = local_90;
    local_e0 = *(float *)(this_00 + 0x5c);
    if (local_e0 < 0.0) {
      local_e0 = 0.0;
    }
    local_e0 = SQRT(local_e0);
    local_e4 = *(undefined4 *)(this_00 + 0x68);
    local_108 = this_01;
    this_02 = (btRigidBody *)btAlignedAllocInternal(0x2c0,0x10);
                    /* try { // try from 0099d448 to 0099d44f has its CatchHandler @ 0099d4f4 */
    btRigidBody::btRigidBody(this_02,(btRigidBodyConstructionInfo *)&local_158);
    this_03 = (TerrainUserData *)operator_new(0x28);
                    /* try { // try from 0099d460 to 0099d46b has its CatchHandler @ 0099d4e4 */
    Bt2PhysicsUtil::TerrainUserData::TerrainUserData
              (this_03,0,(TransformGroup *)param_1,*(ushort **)(param_1 + 0x1f0));
    *(TerrainUserData **)(this_02 + 0x108) = this_03 + 8;
    *(TerrainUserData **)(param_1 + 0x1f8) = this_03;
    Bt2PhysicsRBObject::init(this_00,this,this_02);
    uVar3 = Bt2PhysicsUtil::getMergedRigidBodyCollisionMask(this_00,this_02);
    (**(code **)(**(long **)(this + 0x30) + 0xb0))
              (*(long **)(this + 0x30),this_02,uVar3 & 0xffffffff,(uVar3 & 0xffffffff) >> 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


