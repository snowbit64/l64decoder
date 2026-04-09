// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWorldTransformation
// Entry Point: 00a5aa68
// Size: 432 bytes
// Signature: undefined __thiscall setWorldTransformation(RawTransformGroup * this, Matrix4x4 * param_1, uint param_2)


/* RawTransformGroup::setWorldTransformation(Matrix4x4 const&, unsigned int) */

void __thiscall
RawTransformGroup::setWorldTransformation(RawTransformGroup *this,Matrix4x4 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float fStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x20);
  updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_88,(Matrix4x4 *)(lVar2 + 0xb8));
  uVar4 = *(undefined4 *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 0x14);
  uVar5 = NEON_fmadd(uVar4,local_88,fVar3 * local_78);
  uVar6 = NEON_fmadd(uVar4,local_84,fVar3 * fStack_74);
  uVar4 = NEON_fmadd(uVar4,uStack_80,fVar3 * local_70);
  uVar12 = *(undefined4 *)(param_1 + 0x30);
  fVar13 = *(float *)(param_1 + 0x34);
  local_c8 = NEON_fmadd(uVar7,local_68,uVar5);
  uStack_c4 = NEON_fmadd(uVar7,uStack_64,uVar6);
  local_c0 = NEON_fmadd(uVar7,local_60,uVar4);
  uVar11 = *(undefined4 *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  uVar7 = NEON_fmadd(uVar8,local_88,local_78 * fVar9);
  uVar5 = NEON_fmadd(uVar8,local_84,fStack_74 * fVar9);
  uVar4 = NEON_fmadd(uVar8,uStack_80,local_70 * fVar9);
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  uStack_b4 = NEON_fmadd(uVar10,uStack_64,uVar5);
  uVar14 = NEON_fmadd(uVar11,local_88,local_78 * fVar3);
  local_b0 = NEON_fmadd(uVar10,local_60,uVar4);
  uVar8 = NEON_fmadd(uVar11,uStack_80,local_70 * fVar3);
  uVar4 = NEON_fmadd(uVar12,local_88,local_78 * fVar13);
  uVar6 = NEON_fmadd(uVar12,local_84,fStack_74 * fVar13);
  uVar5 = NEON_fmadd(uVar12,uStack_80,local_70 * fVar13);
  local_b8 = NEON_fmadd(uVar10,local_68,uVar7);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar10 = NEON_fmadd(uVar11,local_84,fStack_74 * fVar3);
  local_8c = 0x3f800000;
  local_98 = (float)NEON_fmadd(uVar7,local_68,uVar4);
  fStack_94 = (float)NEON_fmadd(uVar7,uStack_64,uVar6);
  local_90 = (float)NEON_fmadd(uVar7,local_60,uVar5);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  local_98 = local_58 + local_98;
  local_bc = 0;
  local_ac = 0;
  fStack_94 = fStack_94 + local_54;
  local_90 = local_90 + fStack_50;
  local_a8 = NEON_fmadd(uVar4,local_68,uVar14);
  uStack_a4 = NEON_fmadd(uVar4,uStack_64,uVar10);
  local_9c = 0;
  local_a0 = NEON_fmadd(uVar4,local_60,uVar8);
  (**(code **)(*(long *)this + 0x30))(this,&local_c8);
  (**(code **)(*(long *)this + 0x28))(this,1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


