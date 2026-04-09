// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLocal
// Entry Point: 00a50468
// Size: 504 bytes
// Signature: undefined __thiscall updateLocal(Camera * this, Matrix4x4 * param_1)


/* Camera::updateLocal(Matrix4x4 const&) */

void __thiscall Camera::updateLocal(Camera *this,Matrix4x4 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  Vector3 aVStack_58 [16];
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 == 0) {
    Matrix4x4::getEulerAngles(param_1,aVStack_58,(Vector3 *)0x0);
    local_48 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(float *)(param_1 + 0x38);
  }
  else {
    uStack_98 = 0;
    local_a0 = 0x3f800000;
    local_88 = 0;
    local_90 = 0x3f80000000000000;
    uStack_78 = 0x3f800000;
    local_80 = 0;
    uStack_68 = 0x3f80000000000000;
    local_70 = 0;
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_a0,(Matrix4x4 *)(lVar2 + 0xb8));
    uVar3 = *(undefined4 *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    fVar11 = *(float *)(param_1 + 0x14);
    uVar5 = NEON_fmadd(uVar3,(undefined4)local_a0,fVar4 * (float)local_90);
    uVar7 = NEON_fmadd(uVar3,local_a0._4_4_,fVar4 * local_90._4_4_);
    uVar3 = NEON_fmadd(uVar3,(undefined4)uStack_98,fVar4 * (float)local_88);
    local_d4 = 0;
    local_d8 = NEON_fmadd(uVar6,(undefined4)uStack_78,uVar3);
    local_c4 = 0;
    local_e0 = NEON_fmadd(uVar6,(undefined4)local_80,uVar5);
    uStack_dc = NEON_fmadd(uVar6,local_80._4_4_,uVar7);
    uVar7 = NEON_fmadd(uVar9,local_a0._4_4_,local_90._4_4_ * fVar11);
    uVar5 = NEON_fmadd(uVar9,(undefined4)local_a0,(float)local_90 * fVar11);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    local_b4 = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x24);
    uStack_cc = NEON_fmadd(uVar6,local_80._4_4_,uVar7);
    local_d0 = NEON_fmadd(uVar6,(undefined4)local_80,uVar5);
    local_a4 = 0x3f800000;
    uVar5 = NEON_fmadd(uVar9,(undefined4)uStack_98,(float)local_88 * fVar11);
    uVar12 = *(undefined4 *)(param_1 + 0x30);
    fVar11 = *(float *)(param_1 + 0x34);
    local_c8 = NEON_fmadd(uVar6,(undefined4)uStack_78,uVar5);
    uVar9 = NEON_fmadd(uVar3,(undefined4)local_a0,(float)local_90 * fVar4);
    uVar10 = NEON_fmadd(uVar3,local_a0._4_4_,local_90._4_4_ * fVar4);
    uVar6 = NEON_fmadd(uVar3,(undefined4)uStack_98,(float)local_88 * fVar4);
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = NEON_fmadd(uVar12,(undefined4)local_a0,(float)local_90 * fVar11);
    uVar7 = NEON_fmadd(uVar12,local_a0._4_4_,local_90._4_4_ * fVar11);
    uVar5 = NEON_fmadd(uVar12,(undefined4)uStack_98,(float)local_88 * fVar11);
    uVar12 = *(undefined4 *)(param_1 + 0x38);
    local_c0 = NEON_fmadd(uVar8,(undefined4)local_80,uVar9);
    uStack_bc = NEON_fmadd(uVar8,local_80._4_4_,uVar10);
    local_b8 = NEON_fmadd(uVar8,(undefined4)uStack_78,uVar6);
    local_b0 = (float)NEON_fmadd(uVar12,(undefined4)local_80,uVar3);
    fStack_ac = (float)NEON_fmadd(uVar12,local_80._4_4_,uVar7);
    local_a8 = (float)NEON_fmadd(uVar12,(undefined4)uStack_78,uVar5);
    local_b0 = (float)local_70 + local_b0;
    fStack_ac = fStack_ac + local_70._4_4_;
    local_a8 = local_a8 + (float)uStack_68;
    Matrix4x4::getEulerAngles((Matrix4x4 *)&local_e0,aVStack_58,(Vector3 *)0x0);
    local_48 = CONCAT44(fStack_ac,local_b0);
    local_40 = local_a8;
  }
  TransformGroup::setRotation((TransformGroup *)this,aVStack_58);
  TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


