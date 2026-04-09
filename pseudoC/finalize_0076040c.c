// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 0076040c
// Size: 1260 bytes
// Signature: undefined __thiscall finalize(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::finalize(MethodInvocation*) */

void __thiscall JointConstructor::finalize(JointConstructor *this,MethodInvocation *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  uVar1 = *(ulong *)this;
  uVar4 = *(ulong *)(this + 8);
  if ((uVar1 | uVar4) != 0) {
    local_70 = *(undefined8 *)(this + 0x40);
    local_a0 = *(undefined8 *)(this + 0x10);
    local_98 = *(float *)(this + 0x18);
    local_88 = *(undefined8 *)(this + 0x28);
    local_68 = *(float *)(this + 0x48);
    local_80 = *(float *)(this + 0x30);
    local_5c = *(float *)(this + 0x54);
    local_64 = *(undefined8 *)(this + 0x4c);
    local_94 = *(undefined8 *)(this + 0x1c);
    local_8c = *(float *)(this + 0x24);
    local_7c = *(undefined8 *)(this + 0x34);
    local_74 = *(float *)(this + 0x3c);
    if (((this[0x5a] != (JointConstructor)0x0) || (this[0x58] != (JointConstructor)0x0)) ||
       (this[0x59] != (JointConstructor)0x0)) {
      if (uVar1 != 0) {
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::invert3x4((Matrix4x4 *)&local_e0,(Matrix4x4 *)(uVar1 + 0xb8));
        fVar7 = (float)local_d0;
        fVar8 = (float)((ulong)local_d0 >> 0x20);
        fVar11 = (float)local_e0;
        fVar13 = (float)((ulong)local_e0 >> 0x20);
        fVar14 = (float)local_c0;
        fVar9 = (float)((ulong)local_c0 >> 0x20);
        if (this[0x5a] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x40);
          fVar5 = *(float *)(this + 0x44);
          fVar12 = *(float *)(this + 0x48);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_68 = (float)NEON_fmadd(fVar12,local_b8,uVar6);
          local_70 = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12 +
                              (float)((ulong)local_b0 >> 0x20),
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12 + (float)local_b0);
          local_68 = local_a8 + local_68;
        }
        if (this[0x58] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x10);
          fVar5 = *(float *)(this + 0x14);
          fVar12 = *(float *)(this + 0x18);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_a0 = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12,
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12);
          local_98 = (float)NEON_fmadd(fVar12,local_b8,uVar6);
        }
        if (this[0x59] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x28);
          fVar5 = *(float *)(this + 0x2c);
          fVar12 = *(float *)(this + 0x30);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_88 = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12,
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12);
          local_80 = (float)NEON_fmadd(fVar12,local_b8,uVar6);
        }
        uVar4 = *(ulong *)(this + 8);
      }
      if (uVar4 != 0) {
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::invert3x4((Matrix4x4 *)&local_e0,(Matrix4x4 *)(uVar4 + 0xb8));
        fVar7 = (float)local_d0;
        fVar8 = (float)((ulong)local_d0 >> 0x20);
        fVar11 = (float)local_e0;
        fVar13 = (float)((ulong)local_e0 >> 0x20);
        fVar14 = (float)local_c0;
        fVar9 = (float)((ulong)local_c0 >> 0x20);
        if (this[0x5a] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x4c);
          fVar5 = *(float *)(this + 0x50);
          fVar12 = *(float *)(this + 0x54);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_5c = (float)NEON_fmadd(fVar12,local_b8,uVar6);
          local_64 = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12 +
                              (float)((ulong)local_b0 >> 0x20),
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12 + (float)local_b0);
          local_5c = local_a8 + local_5c;
        }
        if (this[0x58] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x1c);
          fVar5 = *(float *)(this + 0x20);
          fVar12 = *(float *)(this + 0x24);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_94 = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12,
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12);
          local_8c = (float)NEON_fmadd(fVar12,local_b8,uVar6);
        }
        if (this[0x59] != (JointConstructor)0x0) {
          fVar10 = *(float *)(this + 0x34);
          fVar5 = *(float *)(this + 0x38);
          fVar12 = *(float *)(this + 0x3c);
          uVar6 = NEON_fmadd(fVar10,(undefined4)local_d8,fVar5 * local_c8);
          local_7c = CONCAT44(fVar8 * fVar5 + fVar13 * fVar10 + fVar9 * fVar12,
                              fVar7 * fVar5 + fVar11 * fVar10 + fVar14 * fVar12);
          local_74 = (float)NEON_fmadd(fVar12,local_b8,uVar6);
        }
      }
    }
    fVar14 = 1.0;
    uVar6 = NEON_fmadd((float)local_a0,(float)local_a0,local_a0._4_4_ * local_a0._4_4_);
    fVar8 = (float)NEON_fmadd(local_98,local_98,uVar6);
    fVar7 = 1.0;
    if (1e-06 < fVar8) {
      fVar14 = 1.0 / SQRT(fVar8);
    }
    local_98 = local_98 * fVar14;
    local_a0 = CONCAT44(local_a0._4_4_ * fVar14,(float)local_a0 * fVar14);
    uVar6 = NEON_fmadd((float)local_88,(float)local_88,local_88._4_4_ * local_88._4_4_);
    fVar8 = (float)NEON_fmadd(local_80,local_80,uVar6);
    if (1e-06 < fVar8) {
      fVar7 = 1.0 / SQRT(fVar8);
    }
    local_80 = local_80 * fVar7;
    fVar8 = 1.0;
    fVar14 = 1.0;
    local_88 = CONCAT44(local_88._4_4_ * fVar7,(float)local_88 * fVar7);
    uVar6 = NEON_fmadd((float)local_94,(float)local_94,local_94._4_4_ * local_94._4_4_);
    fVar7 = (float)NEON_fmadd(local_8c,local_8c,uVar6);
    if (1e-06 < fVar7) {
      fVar14 = 1.0 / SQRT(fVar7);
    }
    local_8c = local_8c * fVar14;
    local_94 = CONCAT44(local_94._4_4_ * fVar14,(float)local_94 * fVar14);
    uVar6 = NEON_fmadd((float)local_7c,(float)local_7c,local_7c._4_4_ * local_7c._4_4_);
    fVar7 = (float)NEON_fmadd(local_74,local_74,uVar6);
    if (1e-06 < fVar7) {
      fVar8 = 1.0 / SQRT(fVar7);
    }
    local_e0 = *(undefined8 *)this;
    local_d8 = *(undefined8 *)(this + 8);
    local_74 = local_74 * fVar8;
    local_7c = CONCAT44(local_7c._4_4_ * fVar8,(float)local_7c * fVar8);
    local_e8 = 0xffffffffffffffff;
    ScenegraphPhysicsContextManager::getInstance();
    uVar3 = ScenegraphPhysicsContextManager::getContext();
    uVar6 = Bt2ScenegraphPhysicsContext::enqueueAddLightJoint
                      (uVar3,(TransformGroup **)(ulong)*(uint *)(this + 0x5c),(uint *)&local_e0,
                       (IJointBreakReport *)&local_e8,(Vector3 *)0x0,(Vector3 *)&local_70,
                       (Vector3 *)&local_88,(float *)&local_a0,(float *)(this + 0x60),
                       (float *)(this + 0x6c),(float *)(this + 0xb4),(float *)(this + 0xc0),
                       (float *)(this + 0xcc),(float *)(this + 0x78),(float *)(this + 0x84),
                       (float *)(this + 0x90),(float *)(this + 0x9c),*(float *)(this + 0xd8),
                       *(float *)(this + 0xdc),*(float *)(this + 0xe0),(float *)(this + 0xa8),
                       (float *)(this + 0xe4),(float *)(this + 0xf0),(float *)(this + 0xfc),
                       (float *)(this + 0x108),(float *)(this + 0x114),(float *)(this + 0x120),
                       (float *)(this + 300),(float *)(this + 0x138),(float *)(this + 0x144));
    *(undefined4 *)(param_1 + 0x100) = uVar6;
    *(undefined4 *)(param_1 + 0x108) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


