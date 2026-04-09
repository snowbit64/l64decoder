// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createJointPhysics
// Entry Point: 009253f4
// Size: 660 bytes
// Signature: undefined __thiscall createJointPhysics(DestructionShape * this, uint param_1, uint param_2, Matrix4x4 * param_3, Matrix4x4 * param_4, Vector3 * param_5, float param_6, float param_7)


/* DestructionShape::createJointPhysics(unsigned int, unsigned int, Matrix4x4 const&, Matrix4x4
   const&, Vector3 const&, float, float) */

void __thiscall
DestructionShape::createJointPhysics
          (DestructionShape *this,uint param_1,uint param_2,Matrix4x4 *param_3,Matrix4x4 *param_4,
          Vector3 *param_5,float param_6,float param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158;
  uint uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  float fStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Matrix4x4::invert3x4((Matrix4x4 *)&local_b8,param_3);
  Matrix4x4::invert3x4((Matrix4x4 *)&local_f8,param_4);
  fVar3 = *(float *)param_5;
  fVar4 = *(float *)(param_5 + 4);
  fVar2 = *(float *)(param_5 + 8);
  uVar5 = NEON_fmadd(fVar3,local_b0,fVar4 * local_a0);
  local_128 = 0x3f800000;
  local_108 = (float)NEON_fmadd(fVar2,local_90,uVar5);
  local_110 = CONCAT44((float)((ulong)local_a8 >> 0x20) * fVar4 +
                       (float)((ulong)local_b8 >> 0x20) * fVar3 +
                       (float)((ulong)local_98 >> 0x20) * fVar2 + (float)((ulong)local_88 >> 0x20),
                       (float)local_a8 * fVar4 + (float)local_b8 * fVar3 + (float)local_98 * fVar2 +
                       (float)local_88);
  uVar5 = NEON_fmadd(fVar3,local_f8,fVar4 * local_e8);
  local_108 = local_80 + local_108;
  fVar6 = (float)NEON_fmadd(*(float *)param_3,0,*(float *)(param_3 + 0x10) * 0.0);
  fVar8 = (float)NEON_fmadd(*(float *)(param_3 + 4),0,*(float *)(param_3 + 0x14) * 0.0);
  fStack_104 = (float)NEON_fmadd(fVar2,local_d8,uVar5);
  uVar12 = NEON_fmadd(fVar3,local_f4,fVar4 * fStack_e4);
  uVar5 = NEON_fmadd(fVar3,uStack_f0,fVar4 * local_e0);
  fVar4 = (float)NEON_fmadd(*(float *)(param_3 + 0x24),0,
                            *(float *)(param_3 + 4) + *(float *)(param_3 + 0x14) * 0.0);
  uVar10 = NEON_fmadd(*(float *)(param_3 + 0x20),0,
                      *(float *)param_3 + *(float *)(param_3 + 0x10) * 0.0);
  fVar6 = *(float *)(param_3 + 0x20) + fVar6;
  fVar3 = (float)NEON_fmadd(*(float *)(param_3 + 8),0,*(float *)(param_3 + 0x18) * 0.0);
  fStack_104 = local_c8 + fStack_104;
  local_100 = (float)NEON_fmadd(fVar2,uStack_d4,uVar12);
  fVar8 = *(float *)(param_3 + 0x24) + fVar8;
  fStack_fc = (float)NEON_fmadd(fVar2,local_d0,uVar5);
  uVar7 = NEON_fmadd(*(float *)(param_3 + 0x28),0,
                     *(float *)(param_3 + 8) + *(float *)(param_3 + 0x18) * 0.0);
  fVar3 = *(float *)(param_3 + 0x28) + fVar3;
  local_100 = local_c4 + local_100;
  fStack_fc = fStack_c0 + fStack_fc;
  uVar5 = NEON_fmadd(uVar10,local_f8,fVar4 * local_e8);
  uVar12 = NEON_fmadd(uVar10,local_f4,fVar4 * fStack_e4);
  local_138 = 0x3f800000;
  uVar10 = NEON_fmadd(uVar10,uStack_f0,fVar4 * local_e0);
  uVar9 = NEON_fmadd(fVar6,local_f8,fVar8 * local_e8);
  local_11c = NEON_fmadd(uVar7,local_d8,uVar5);
  uVar11 = NEON_fmadd(fVar6,local_f4,fVar8 * fStack_e4);
  uStack_118 = NEON_fmadd(uVar7,uStack_d4,uVar12);
  uVar5 = NEON_fmadd(fVar6,uStack_f0,fVar8 * local_e0);
  local_134 = NEON_fmadd(fVar3,local_d8,uVar9);
  local_114 = NEON_fmadd(uVar7,local_d0,uVar10);
  uStack_130 = NEON_fmadd(fVar3,uStack_d4,uVar11);
  local_12c = NEON_fmadd(fVar3,local_d0,uVar5);
  local_178 = 0xbf800000bf800000;
  local_170 = 0xbf800000;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = param_1;
  uStack_154 = param_2;
  Bt2ScenegraphPhysicsContext::enqueueAddLightJoint
            ((uint)*(undefined8 *)(this + 0x290),(TransformGroup **)0x7f,(uint *)&local_150,
             (IJointBreakReport *)&local_158,(Vector3 *)(this + 0x210),(Vector3 *)&local_110,
             (Vector3 *)&local_128,(float *)&uStack_140,(float *)&local_168,(float *)&local_168,
             (float *)&local_168,(float *)&local_168,(float *)&local_178,(float *)&local_168,
             (float *)&local_168,(float *)&local_168,(float *)&local_168,0.0,param_6,param_7,
             (float *)&local_178,(float *)&local_168,(float *)&local_168,(float *)&local_168,
             (float *)&local_168,(float *)&local_168,(float *)&local_168,(float *)&local_168,
             (float *)&local_168,(float *)&local_168);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


