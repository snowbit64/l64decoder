// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: udpateSkySHParams
// Entry Point: 009ede40
// Size: 884 bytes
// Signature: undefined __thiscall udpateSkySHParams(AtmosphereRenderController * this, ICommandBuffer * param_1, LightSource * param_2, PostFxParams * param_3, Vector3 * param_4)


/* AtmosphereRenderController::udpateSkySHParams(ICommandBuffer*, LightSource const*, PostFxParams
   const&, Vector3 const&) */

void __thiscall
AtmosphereRenderController::udpateSkySHParams
          (AtmosphereRenderController *this,ICommandBuffer *param_1,LightSource *param_2,
          PostFxParams *param_3,Vector3 *param_4)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(float *)(param_3 + 0x254) == *(float *)(this + 0x978)) {
    if (*(float *)(param_3 + 600) == *(float *)(this + 0x970)) {
      if (*(float *)(param_3 + 0x25c) == *(float *)(this + 0x974)) {
        if (*(float *)(param_3 + 0x250) == *(float *)(this + 0x968)) {
          if (*(float *)(param_3 + 0x260) == *(float *)(this + 0x96c)) goto LAB_009edf5c;
        }
      }
    }
  }
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x920) + 0x10))
                              (*(long **)(this + 0x920),param_1);
  LightScatteringUtil::computeRayleighScatteringCoefficients(1.0,pfVar2);
  LightScatteringUtil::computeMieScatteringCoefficients(*(float *)(param_3 + 0x254),pfVar2 + 3);
  pfVar2[8] = *(float *)(param_3 + 0x250);
  LightScatteringUtil::computeRayleighScatteringCoefficients(*(float *)(param_3 + 600),pfVar2 + 4);
  LightScatteringUtil::computeMieScatteringCoefficients(*(float *)(param_3 + 0x25c),pfVar2 + 7);
  pfVar2[9] = *(float *)(param_3 + 0x260);
  (**(code **)(**(long **)(this + 0x920) + 0x18))(*(long **)(this + 0x920),param_1);
  auVar9 = *(undefined (*) [16])(param_3 + 0x254);
  auVar10 = NEON_ext(auVar9,auVar9,8,1);
  auVar6._4_12_ = auVar9._4_12_;
  auVar6._0_4_ = auVar9._8_4_;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._8_4_ = auVar9._12_4_;
  auVar8._12_4_ = auVar9._12_4_;
  auVar7._8_8_ = auVar8._8_8_;
  auVar7._4_4_ = auVar10._8_4_;
  auVar7._0_4_ = auVar9._8_4_;
  auVar9._0_12_ = auVar7._0_12_;
  auVar9._12_4_ = auVar10._12_4_;
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  *(long *)(this + 0x974) = auVar9._8_8_;
  *(long *)(this + 0x96c) = auVar9._0_8_;
  *(undefined4 *)(this + 0x968) = *(undefined4 *)(param_3 + 0x250);
LAB_009edf5c:
  fVar15 = *(float *)(param_3 + 0x264);
  uVar3 = LightSource::getScatteringDirection(param_2,(Vector3 *)&local_78);
  if ((uVar3 & 1) == 0) {
    local_78 = *(float *)(param_2 + 0xd8);
    fStack_74 = *(float *)(param_2 + 0xdc);
    uVar11 = NEON_fmadd(local_78,local_78,fStack_74 * fStack_74);
    local_70 = *(float *)(param_2 + 0xe0);
    fVar13 = (float)NEON_fmadd(local_70,local_70,uVar11);
    fVar12 = 1.0;
    if (1e-06 < fVar13) {
      fVar12 = 1.0 / SQRT(fVar13);
    }
    local_78 = local_78 * fVar12;
    fStack_74 = fStack_74 * fVar12;
    local_70 = local_70 * fVar12;
  }
  fVar12 = *(float *)(param_3 + 0x28c);
  uVar14 = *(undefined8 *)(param_3 + 0x284);
  fVar15 = fVar15 * 3.141593;
  local_80 = fVar15 * *(float *)(param_2 + 400);
  local_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x188) >> 0x20) * fVar15,
                      (float)*(undefined8 *)(param_2 + 0x188) * fVar15);
  LightScatteringUtil::computeSunDirectionalLightColor
            (&local_78,(float *)&local_88,*(float *)(param_4 + 4),*(float *)(this + 0x96c),
             *(float *)(this + 0x974),*(float *)(this + 0x970),*(float *)(this + 0x978),1.0,
             (float *)&local_98);
  LightScatteringUtil::computeSunDirectionalLightColor
            ((float *)(param_3 + 0x278),(float *)(param_3 + 0x284),*(float *)(param_4 + 4),
             *(float *)(this + 0x96c),*(float *)(this + 0x974),*(float *)(this + 0x970),
             *(float *)(this + 0x978),1.0,(float *)&local_a8);
  puVar4 = (undefined4 *)
           (**(code **)(**(long **)(this + 0x930) + 0x10))(*(long **)(this + 0x930),param_1);
  *puVar4 = *(undefined4 *)param_4;
  puVar4[1] = *(undefined4 *)(param_4 + 4);
  uVar11 = *(undefined4 *)(param_4 + 8);
  *(ulong *)(puVar4 + 8) = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar15,(float)uVar14 * fVar15);
  puVar4[10] = fVar15 * fVar12;
  puVar4[2] = uVar11;
  *(undefined8 *)(puVar4 + 4) = local_88;
  *(ulong *)(puVar4 + 0xc) = CONCAT44(fStack_74,local_78);
  puVar4[6] = local_80;
  puVar4[0xe] = local_70;
  puVar4[0x10] = *(undefined4 *)(param_3 + 0x278);
  puVar4[0x11] = *(undefined4 *)(param_3 + 0x27c);
  uVar11 = *(undefined4 *)(param_3 + 0x280);
  *(undefined8 *)(puVar4 + 0x14) = local_98;
  puVar4[0x16] = local_90;
  *(undefined8 *)(puVar4 + 0x18) = local_a8;
  puVar4[0x12] = uVar11;
  puVar4[0x1a] = local_a0;
  puVar4[0x1c] = *(undefined4 *)(param_3 + 0x2d4);
  puVar4[0x1d] = *(undefined4 *)(param_3 + 0x2d8);
  puVar4[0x1e] = *(undefined4 *)(param_3 + 0x2dc);
  auVar9 = NEON_ucvtf(*(undefined (*) [16])(this + 0x980),4);
  *(long *)(puVar4 + 0x26) = auVar9._8_8_;
  *(long *)(puVar4 + 0x24) = auVar9._0_8_;
  puVar4[0xf] = *(undefined4 *)(param_3 + 0x26c);
  puVar4[3] = *(undefined4 *)(param_3 + 0x270);
  lVar5 = *(long *)(this + 0x998);
  puVar4[0x17] = *(undefined4 *)(lVar5 + 0x2b8);
  puVar4[0xb] = *(undefined4 *)(param_3 + 0x274);
  puVar4[7] = *(undefined4 *)(param_3 + 0x2b4);
  puVar4[0x13] = *(undefined4 *)(param_3 + 0x2c4);
  puVar4[0x20] = *(undefined4 *)(param_3 + 0x298);
  puVar4[0x21] = *(undefined4 *)(param_3 + 0x29c);
  puVar4[0x1b] = *(undefined4 *)(lVar5 + 700);
  puVar4[0x22] = *(undefined4 *)(lVar5 + 0x2b0);
  puVar4[0x23] = *(undefined4 *)(lVar5 + 0x2b4);
  puVar4[0x1f] = *(undefined4 *)(param_3 + 0x2d0);
  (**(code **)(**(long **)(this + 0x930) + 0x18))(*(long **)(this + 0x930),param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


