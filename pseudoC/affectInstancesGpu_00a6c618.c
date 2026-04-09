// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: affectInstancesGpu
// Entry Point: 00a6c618
// Size: 936 bytes
// Signature: undefined __thiscall affectInstancesGpu(DensityAnimationMap * this, IRenderDevice * param_1, ACCESS_MODE param_2, FoliageUpdateCb * param_3)


/* DensityAnimationMap::affectInstancesGpu(IRenderDevice*, RenderTargetDesc::ACCESS_MODE,
   DensityAnimationMap::FoliageUpdateCb&) */

void __thiscall
DensityAnimationMap::affectInstancesGpu
          (DensityAnimationMap *this,IRenderDevice *param_1,ACCESS_MODE param_2,
          FoliageUpdateCb *param_3)

{
  AdhocShader *this_00;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  char *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_170 [2];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  ACCESS_MODE local_144;
  undefined4 uStack_140;
  undefined local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined local_88;
  char *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  iVar1 = *(uint *)(this + 0x6c) - 1;
  fVar12 = (float)(ulong)*(uint *)(this + 0x6c);
  uVar8 = NEON_ucvtf(CONCAT44(iVar1,iVar1) & *(ulong *)(this + 0x48),4);
  fVar7 = (float)uVar8 / fVar12;
  fVar12 = (float)((ulong)uVar8 >> 0x20) / fVar12;
  *(ulong *)(param_3 + 0x80) = CONCAT44(fVar12,fVar7);
  *(undefined4 *)param_3 = *(undefined4 *)(this + 0x74);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(this + 0x60);
  *(float *)(param_3 + 0x10) = *(float *)(this + 0x74) / *(float *)(this + 0x18);
  *(float *)(param_3 + 0x14) = *(float *)(this + 0x74) / *(float *)(this + 0x18);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(this + 100);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(this + 0x68);
  fVar13 = *(float *)(this + 0x2c);
  *(undefined4 *)(param_3 + 0x8c) = 0;
  *(float *)(param_3 + 0x88) = fVar13 * 65535.0;
  fVar20 = *(float *)(this + 0x74);
  fVar10 = *(float *)(this + 0x28) + 8.0;
  lVar6 = *(long *)(this + 0x10);
  fVar14 = ((*(float *)(param_3 + 0x60) - fVar10) - *(float *)(this + 0x5c)) / fVar20;
  fVar17 = ((fVar10 + *(float *)(param_3 + 0x70)) - *(float *)(this + 0x5c)) / fVar20;
  fVar13 = 0.0;
  if (0.0 < fVar14) {
    fVar13 = fVar14;
  }
  fVar14 = 0.0;
  if (0.0 < fVar17) {
    fVar14 = fVar17;
  }
  fVar17 = (float)NEON_fmin(((*(float *)(param_3 + 0x68) - fVar10) - *(float *)(this + 0x60)) /
                            fVar20,0x3f800000);
  fVar10 = (float)NEON_fmin(((fVar10 + *(float *)(param_3 + 0x78)) - *(float *)(this + 0x60)) /
                            fVar20,0x3f800000);
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  local_158 = 0;
  local_150 = 0;
  local_80 = "DensityAnimationMap::affectInstancesGpu";
  local_13c = 0;
  local_14c = 0x100000002;
  local_130 = 0;
  uStack_128 = 0;
  local_138 = 0;
  local_120 = 0;
  local_170[0] = 1;
  local_168 = *(undefined8 *)(this + 0x88);
  uStack_114 = 0x300000003;
  local_11c = 0x100000002;
  local_10c = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  local_f0 = 0;
  uStack_e4 = 0x300000003;
  local_ec = 0x100000002;
  local_dc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  uStack_b4 = 0x300000003;
  local_bc = 0x100000002;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x300000003;
  local_98 = 0x100000002;
  local_88 = 0;
  uStack_160 = 0;
  uStack_140 = 3;
  local_144 = param_2;
  (**(code **)(*plVar4 + 0x38))
            (plVar4,local_170,0,1,0,0,*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x6c));
  uStack_1b0 = *(undefined8 *)(this + 0x80);
  this_00 = (AdhocShader *)(this + 0x1c0);
  local_1b8 = "foliageCurStateTexture";
  uStack_198 = *(undefined8 *)(this + 0x90);
  local_1a0 = "foliageInfoTexture";
  uStack_180 = *(undefined8 *)(*(long *)(lVar6 + 0x280) + 0x68);
  local_1a8 = 0;
  local_190 = 0;
  local_188 = "heightMapTexture";
  local_178 = 0;
  AdhocShader::bindResourcesPs
            (this_00,(ICommandBuffer *)plVar4,(ShaderTexture *)&local_1b8,3,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  uVar3 = AdhocShader::getConstantBufferHandle(this_00,"USER");
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0xa0))(plVar4,uVar3,*(undefined8 *)(this + 0xa0));
  uVar8 = *(undefined8 *)param_3;
  puVar5[1] = *(undefined8 *)(param_3 + 8);
  *puVar5 = uVar8;
  uVar11 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = *(undefined8 *)(param_3 + 0x48);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  uVar16 = *(undefined8 *)(param_3 + 0x18);
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x20);
  puVar5[7] = *(undefined8 *)(param_3 + 0x38);
  puVar5[6] = uVar11;
  puVar5[9] = uVar9;
  puVar5[8] = uVar8;
  puVar5[3] = uVar16;
  puVar5[2] = uVar15;
  puVar5[5] = uVar19;
  puVar5[4] = uVar18;
  uVar11 = *(undefined8 *)(param_3 + 0x70);
  uVar9 = *(undefined8 *)(param_3 + 0x88);
  uVar8 = *(undefined8 *)(param_3 + 0x80);
  uVar16 = *(undefined8 *)(param_3 + 0x58);
  uVar15 = *(undefined8 *)(param_3 + 0x50);
  uVar19 = *(undefined8 *)(param_3 + 0x68);
  uVar18 = *(undefined8 *)(param_3 + 0x60);
  puVar5[0xf] = *(undefined8 *)(param_3 + 0x78);
  puVar5[0xe] = uVar11;
  puVar5[0x11] = uVar9;
  puVar5[0x10] = uVar8;
  puVar5[0xb] = uVar16;
  puVar5[10] = uVar15;
  puVar5[0xd] = uVar19;
  puVar5[0xc] = uVar18;
  (**(code **)(*plVar4 + 0xa8))(plVar4,uVar3,*(undefined8 *)(this + 0xa0));
  FullScreenRenderController::renderUVRange
            ((FullScreenRenderController *)(this + 0x2c0),(ICommandBuffer *)plVar4,0,fVar7 + fVar13,
             fVar12 + fVar17,fVar7 + fVar14,fVar12 + fVar10);
  AdhocShader::unbindResourcesPs
            (this_00,(ICommandBuffer *)plVar4,(ShaderTexture *)&local_1b8,3,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  (**(code **)(*plVar4 + 0x40))(plVar4);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


