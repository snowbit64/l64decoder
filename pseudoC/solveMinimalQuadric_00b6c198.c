// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveMinimalQuadric
// Entry Point: 00b6c198
// Size: 912 bytes
// Signature: undefined __thiscall solveMinimalQuadric(QuadricSolverUtil * this, Matrix4x4 * param_1, Matrix4x4 * param_2)


/* QuadricSolverUtil::solveMinimalQuadric(Matrix4x4 const&, Matrix4x4 const&) */

void __thiscall
QuadricSolverUtil::solveMinimalQuadric
          (QuadricSolverUtil *this,Matrix4x4 *param_1,Matrix4x4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_1a8 [16];
  undefined4 local_168 [16];
  float local_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_8c = *(float *)this + *(float *)param_1;
  fStack_80 = *(float *)(this + 4) + *(float *)(param_1 + 4);
  local_74 = *(float *)(this + 8) + *(float *)(param_1 + 8);
  fStack_88 = *(float *)(this + 0x10) + *(float *)(param_1 + 0x10);
  local_7c = *(float *)(this + 0x14) + *(float *)(param_1 + 0x14);
  fStack_70 = *(float *)(this + 0x18) + *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x38);
  local_84 = *(float *)(this + 0x20) + *(float *)(param_1 + 0x20);
  fStack_78 = *(float *)(this + 0x24) + *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(this + 0x30);
  fVar7 = *(float *)(this + 0x34);
  local_6c = *(float *)(this + 0x28) + *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(this + 0x38);
  fVar9 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x34);
  SVDUtil::num_svd<float>(&local_8c,3,3,&local_b0,&local_e8,(float *)&local_d8);
  fVar9 = -(fVar6 + fVar9);
  fVar5 = -(fVar7 + fVar2);
  fVar6 = -(fVar8 + fVar4);
  fVar4 = 0.0;
  fVar7 = local_e8 * 1e-06;
  fVar2 = 0.0;
  if (fVar7 <= local_e8) {
    uVar3 = NEON_fmadd(local_b0,fVar9,0);
    uVar3 = NEON_fmadd(local_a4,fVar5,uVar3);
    fVar4 = (float)NEON_fmadd(local_98,fVar6,uVar3);
    fVar4 = fVar4 / local_e8;
  }
  if (fVar7 <= local_e4) {
    uVar3 = NEON_fmadd(local_ac,fVar9,0);
    uVar3 = NEON_fmadd(local_a0,fVar5,uVar3);
    fVar2 = (float)NEON_fmadd(local_94,fVar6,uVar3);
    fVar2 = fVar2 / local_e4;
  }
  fVar8 = 0.0;
  if (fVar7 <= local_e0) {
    uVar3 = NEON_fmadd(local_a8,fVar9,0);
    uVar3 = NEON_fmadd(local_9c,fVar5,uVar3);
    fVar8 = (float)NEON_fmadd(local_90,fVar6,uVar3);
    fVar8 = fVar8 / local_e0;
  }
  uVar3 = NEON_fmadd(local_d0,fVar4,0);
  local_11c = 0;
  local_10c = 0;
  local_128 = local_b0;
  fStack_124 = local_a4;
  local_fc = 0;
  local_ec = 0x3f800000;
  local_120 = local_98;
  uVar3 = NEON_fmadd(local_c4,fVar2,uVar3);
  local_110 = local_94;
  local_118 = local_ac;
  fStack_114 = local_a0;
  local_f0 = NEON_fmadd(local_b8,fVar8,uVar3);
  local_108 = local_a8;
  fStack_104 = local_9c;
  local_f8 = (float)local_d8 * fVar4 + 0.0 + (float)local_cc * fVar2 + (float)local_c0 * fVar8;
  fStack_f4 = (float)((ulong)local_d8 >> 0x20) * fVar4 + 0.0 +
              (float)((ulong)local_cc >> 0x20) * fVar2 + (float)((ulong)local_c0 >> 0x20) * fVar8;
  local_100 = local_90;
  FUN_00b6cb20(local_168,this,&local_128);
  FUN_00b6cb20(local_1a8,param_1,&local_128);
  fVar4 = (float)NEON_fmadd(local_f8,local_128,fStack_124 * fStack_f4);
  fVar6 = (float)NEON_fmadd(local_f8,local_118,fStack_114 * fStack_f4);
  fVar2 = (float)NEON_fmadd(local_f8,local_108,fStack_104 * fStack_f4);
  NEON_fnmadd(local_f0,local_120,-fVar4);
  NEON_fnmadd(local_f0,local_110,-fVar6);
  NEON_fnmadd(local_f0,local_100,-fVar2);
  FUN_00b6cb20();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


