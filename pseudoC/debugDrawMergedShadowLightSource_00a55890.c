// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawMergedShadowLightSource
// Entry Point: 00a55890
// Size: 2384 bytes
// Signature: undefined __thiscall debugDrawMergedShadowLightSource(MergedShadowGroup * this, DeferredDebugRenderer * param_1)


/* LightSource::MergedShadowGroup::debugDrawMergedShadowLightSource(DeferredDebugRenderer*) const */

void __thiscall
LightSource::MergedShadowGroup::debugDrawMergedShadowLightSource
          (MergedShadowGroup *this,DeferredDebugRenderer *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 *local_1a0;
  undefined8 *puStack_198;
  undefined8 *local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  Vector3 aVStack_b8 [16];
  Vector3 aVStack_a8 [16];
  Vector3 aVStack_98 [16];
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  computeMergedShadowAxes(this,aVStack_b8,aVStack_98,aVStack_a8);
  computeFit((Vector3 *)this,aVStack_b8,aVStack_a8,(MergedShadowClippingPlaneCorners *)aVStack_98,
             (MergedShadowAABB *)&local_148);
  uStack_178 = 0x3f8000003f4ccccd;
  local_180 = 0x3e8000003f666666;
  local_1a0 = &local_148;
  puStack_198 = &local_13c;
  local_190 = &local_130;
  puStack_188 = &local_124;
  DeferredDebugRenderer::addPolyLine(param_1,(float **)&local_1a0,4,(float *)&local_180,2);
  uStack_178 = 0x3f8000003f666666;
  local_180._0_1_ = 'f';
  local_180._1_1_ = 'f';
  local_180._2_1_ = 'f';
  local_180._3_1_ = '?';
  local_180._4_1_ = 'f';
  local_180._5_1_ = 'f';
  local_180._6_1_ = 'f';
  local_180._7_1_ = '?';
  local_1a0 = &local_e8;
  puStack_198 = &local_dc;
  local_190 = &local_d0;
  puStack_188 = &local_c4;
  DeferredDebugRenderer::addPolyLine(param_1,(float **)&local_1a0,4,(float *)&local_180,2);
  puStack_198 = (undefined8 *)0x3f8000003f333333;
  local_1a0 = (undefined8 *)0x3f3333333f333333;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_e8,(float *)&local_1a0,(float *)&local_148,(float *)&local_1a0,
             2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_d0,(float *)&local_1a0,(float *)&local_130,(float *)&local_1a0,
             2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_c4,(float *)&local_1a0,(float *)&local_124,(float *)&local_1a0,
             2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_dc,(float *)&local_1a0,(float *)&local_13c,(float *)&local_1a0,
             2);
  uStack_178 = 0x3f8000003f4ccccd;
  local_180 = 0x3e8000003f666666;
  local_1a0 = &local_118;
  puStack_198 = &local_10c;
  local_190 = &local_100;
  puStack_188 = &local_f4;
  DeferredDebugRenderer::addPolyLine(param_1,(float **)&local_1a0,4,(float *)&local_180,2);
  puStack_198 = (undefined8 *)0x3f8000003dcccccd;
  local_1a0 = (undefined8 *)0x3ee666663f000000;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_118,(float *)&local_1a0,(float *)&local_148,(float *)&local_1a0
             ,2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_100,(float *)&local_1a0,(float *)&local_130,(float *)&local_1a0
             ,2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_f4,(float *)&local_1a0,(float *)&local_124,(float *)&local_1a0,
             2);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_10c,(float *)&local_1a0,(float *)&local_13c,(float *)&local_1a0
             ,2);
  fVar9 = 1.0;
  fVar3 = (float)local_118 - (float)local_148;
  fVar2 = (float)((ulong)local_118 >> 0x20);
  fVar6 = (float)((ulong)local_148 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_110 - local_140;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  puStack_198 = (undefined8 *)0x3f8000003f000000;
  local_1a0 = (undefined8 *)0x3dcccccd3dcccccd;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_148 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_118 + fVar3 * fVar7 * 0.0);
  local_80 = local_110 + fVar5 * fVar7 * 0.0;
  uStack_178._0_4_ = local_140 + fVar5 * fVar9 * -100.5;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_f4 - (float)local_124;
  fVar2 = (float)((ulong)local_f4 >> 0x20);
  fVar6 = (float)((ulong)local_124 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_ec - local_11c;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_11c + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_124 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_f4 + fVar3 * fVar7 * 0.0);
  local_80 = local_ec + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_100 - (float)local_130;
  fVar2 = (float)((ulong)local_100 >> 0x20);
  fVar6 = (float)((ulong)local_130 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_f8 - local_128;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_128 + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_130 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_100 + fVar3 * fVar7 * 0.0);
  local_80 = local_f8 + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_10c - (float)local_13c;
  fVar2 = (float)((ulong)local_10c >> 0x20);
  fVar6 = (float)((ulong)local_13c >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_104 - local_134;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_134 + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_13c + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_10c + fVar3 * fVar7 * 0.0);
  local_80 = local_104 + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_e8 - (float)local_148;
  fVar2 = (float)((ulong)local_e8 >> 0x20);
  fVar6 = (float)((ulong)local_148 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_e0 - local_140;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  puStack_198 = (undefined8 *)0x3f8000003e4ccccd;
  local_1a0 = (undefined8 *)0x3dcccccd3f000000;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_140 + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_148 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_e8 + fVar3 * fVar7 * 0.0);
  local_80 = local_e0 + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_c4 - (float)local_124;
  fVar2 = (float)((ulong)local_c4 >> 0x20);
  fVar6 = (float)((ulong)local_124 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_bc - local_11c;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_11c + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_124 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_c4 + fVar3 * fVar7 * 0.0);
  local_80 = local_bc + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_d0 - (float)local_130;
  fVar2 = (float)((ulong)local_d0 >> 0x20);
  fVar6 = (float)((ulong)local_130 >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_c8 - local_128;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  uStack_178._0_4_ = local_128 + fVar5 * fVar9 * -100.5;
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_130 + fVar3 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_d0 + fVar3 * fVar7 * 0.0);
  local_80 = local_c8 + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  fVar9 = 1.0;
  fVar3 = (float)local_dc - (float)local_13c;
  fVar2 = (float)((ulong)local_dc >> 0x20);
  fVar6 = (float)((ulong)local_13c >> 0x20);
  fVar4 = fVar2 - fVar6;
  fVar5 = local_d4 - local_134;
  fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = 1.0;
  if (1e-06 < fVar8) {
    fVar9 = 1.0 / SQRT(fVar8);
  }
  local_180 = CONCAT44(fVar6 + fVar4 * fVar9 * -100.5,(float)local_13c + fVar3 * fVar9 * -100.5);
  uStack_178 = CONCAT44(uStack_178._4_4_,local_134 + fVar5 * fVar9 * -100.5);
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_88 = CONCAT44(fVar2 + fVar4 * fVar7 * 0.0,(float)local_dc + fVar3 * fVar7 * 0.0);
  local_80 = local_d4 + fVar5 * fVar7 * 0.0;
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_180,(float *)&local_1a0,(float *)&local_88,(float *)&local_1a0,
             0x7ff);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


