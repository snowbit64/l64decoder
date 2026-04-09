// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPlane
// Entry Point: 009fb3b4
// Size: 980 bytes
// Signature: undefined __thiscall addPlane(DeferredDebugRenderer * this, Plane * param_1, float * param_2, Vector3 * param_3, float param_4, bool param_5, Matrix4x4 * param_6, CATEGORY param_7)


/* DeferredDebugRenderer::addPlane(Plane const&, float const*, Vector3 const&, float, bool,
   Matrix4x4 const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPlane
          (DeferredDebugRenderer *this,Plane *param_1,float *param_2,Vector3 *param_3,float param_4,
          bool param_5,Matrix4x4 *param_6,CATEGORY param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x2a0) & param_7) != 0) {
    local_a8 = *(undefined8 *)param_1;
    local_a0 = *(float *)(param_1 + 8);
    fVar3 = (float)Plane::signedDistanceTo(param_1,param_3);
    fVar8 = (float)local_a8;
    fVar6 = (float)((ulong)local_a8 >> 0x20);
    fVar5 = (float)*(undefined8 *)param_3 - fVar8 * fVar3;
    fVar7 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar6 * fVar3;
    local_b8 = CONCAT44(fVar7,fVar5);
    local_b0 = *(float *)(param_3 + 8) - fVar3 * local_a0;
    if (param_6 != (Matrix4x4 *)0x0) {
      uVar11 = NEON_fmadd(fVar8,*(float *)param_6,fVar6 * *(float *)(param_6 + 0x10));
      uVar12 = NEON_fmadd(fVar8,*(float *)(param_6 + 4),fVar6 * *(float *)(param_6 + 0x14));
      uVar4 = NEON_fmadd(fVar8,*(float *)(param_6 + 8),fVar6 * *(float *)(param_6 + 0x18));
      fVar8 = (float)NEON_fmadd(local_a0,*(undefined4 *)(param_6 + 0x20),uVar11);
      fVar6 = (float)NEON_fmadd(local_a0,*(undefined4 *)(param_6 + 0x24),uVar12);
      fVar3 = (float)NEON_fmadd(local_b0,*(undefined4 *)(param_6 + 0x20),
                                *(float *)(param_6 + 0x10) * fVar7 + *(float *)param_6 * fVar5);
      fVar9 = (float)NEON_fmadd(local_b0,*(undefined4 *)(param_6 + 0x24),
                                *(float *)(param_6 + 0x14) * fVar7 + *(float *)(param_6 + 4) * fVar5
                               );
      local_b0 = (float)NEON_fmadd(local_b0,*(undefined4 *)(param_6 + 0x28),
                                   *(float *)(param_6 + 0x18) * fVar7 +
                                   *(float *)(param_6 + 8) * fVar5);
      local_a0 = (float)NEON_fmadd(local_a0,*(undefined4 *)(param_6 + 0x28),uVar4);
      local_a8 = CONCAT44(fVar6,fVar8);
      local_b0 = local_b0 + *(float *)(param_6 + 0x38);
      local_b8 = CONCAT44(fVar9 + *(float *)(param_6 + 0x34),fVar3 + *(float *)(param_6 + 0x30));
    }
    fVar7 = 1.0;
    fVar5 = 0.0;
    fVar3 = 1.0;
    if (fVar8 == 0.0) {
      fVar5 = 1.0;
      fVar3 = 0.0;
    }
    fVar10 = (float)NEON_fnmsub(local_a0,fVar5,fVar8);
    fVar9 = fVar6 - fVar3 * local_a0;
    fVar3 = (float)NEON_fmadd(fVar8,fVar3,fVar5 * -fVar6);
    uVar4 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
    fVar13 = (float)NEON_fmadd(fVar3,fVar3,uVar4);
    fVar5 = 1.0;
    if (1e-06 < fVar13) {
      fVar5 = 1.0 / SQRT(fVar13);
    }
    fVar3 = fVar3 * fVar5;
    fVar10 = fVar10 * fVar5;
    fVar9 = fVar9 * fVar5;
    fVar13 = (float)NEON_fmadd(local_a0,fVar9,fVar3 * -fVar8);
    fVar5 = (float)NEON_fmadd(fVar6,fVar3,fVar10 * -local_a0);
    fVar6 = (float)NEON_fmadd(fVar8,fVar10,fVar9 * -fVar6);
    uVar4 = NEON_fmadd(fVar5,fVar5,fVar13 * fVar13);
    fVar8 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
    if (1e-06 < fVar8) {
      fVar7 = 1.0 / SQRT(fVar8);
    }
    this[0x1f8] = (DeferredDebugRenderer)0x1;
    local_c8 = fVar9;
    fStack_c4 = fVar10;
    local_c0 = fVar3;
    addSimpleArrow(this,(Vector3 *)&local_b8,(Vector3 *)&local_a8,(Vector3 *)&local_c8,
                   param_4 / 20.0,param_2,param_7);
    this[0x1f8] = (DeferredDebugRenderer)0x0;
    if (param_5) {
      local_100 = param_4 * 0.5;
      local_d8._0_4_ = (float)local_b8;
      fVar8 = (float)local_d8;
      local_d8._4_4_ = (float)((ulong)local_b8 >> 0x20);
      fVar2 = local_d8._4_4_;
      local_c8 = local_100 * fVar9;
      fStack_c4 = local_100 * fVar10;
      local_c0 = local_100 * fVar3;
      fVar5 = local_100 * fVar5 * fVar7;
      fVar3 = local_100 * fVar13 * fVar7;
      local_100 = local_100 * fVar6 * fVar7;
      local_d0 = (local_b0 - local_c0) - local_100;
      local_d8 = CONCAT44((local_d8._4_4_ - fStack_c4) - fVar3,((float)local_d8 - local_c8) - fVar5)
      ;
      local_e0 = (local_c0 + local_b0) - local_100;
      local_e8 = CONCAT44((fStack_c4 + fVar2) - fVar3,(local_c8 + fVar8) - fVar5);
      local_f0 = local_100 + local_c0 + local_b0;
      local_100 = local_100 + (local_b0 - local_c0);
      local_f8 = CONCAT44(fVar3 + fStack_c4 + fVar2,fVar5 + local_c8 + fVar8);
      local_108 = CONCAT44(fVar3 + (fVar2 - fStack_c4),fVar5 + (fVar8 - local_c8));
      addTriangle(this,(float *)&local_d8,param_2,(float *)&local_f8,param_2,(float *)&local_e8,
                  param_2,param_7);
      addTriangle(this,(float *)&local_d8,param_2,(float *)&local_108,param_2,(float *)&local_f8,
                  param_2,param_7);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


