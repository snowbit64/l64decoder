// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParams
// Entry Point: 009ed598
// Size: 2216 bytes
// Signature: undefined __thiscall updateParams(AtmosphereRenderController * this, ICommandBuffer * param_1, ITextureObject * param_2, LightSource * param_3, PostFxParams * param_4, RenderArgs * param_5)


/* AtmosphereRenderController::updateParams(ICommandBuffer*, ITextureObject const*, LightSource
   const*, PostFxParams const&, RenderArgs const&) */

void __thiscall
AtmosphereRenderController::updateParams
          (AtmosphereRenderController *this,ICommandBuffer *param_1,ITextureObject *param_2,
          LightSource *param_3,PostFxParams *param_4,RenderArgs *param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  float fStack_104;
  undefined4 local_100;
  float fStack_fc;
  undefined4 local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float fStack_ec;
  undefined4 local_e8;
  float fStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  undefined4 local_d8;
  float fStack_d4;
  undefined4 local_d0;
  float fStack_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x97c) != 0) {
    fVar22 = *(float *)(param_4 + 0x264);
    uVar3 = LightSource::getScatteringDirection(param_3,(Vector3 *)&local_98);
    if ((uVar3 & 1) == 0) {
      local_98 = *(float *)(param_3 + 0xd8);
      fStack_94 = *(float *)(param_3 + 0xdc);
      uVar12 = NEON_fmadd(local_98,local_98,fStack_94 * fStack_94);
      local_90 = *(float *)(param_3 + 0xe0);
      fVar15 = (float)NEON_fmadd(local_90,local_90,uVar12);
      fVar13 = 1.0;
      if (1e-06 < fVar15) {
        fVar13 = 1.0 / SQRT(fVar15);
      }
      local_98 = local_98 * fVar13;
      fStack_94 = fStack_94 * fVar13;
      local_90 = local_90 * fVar13;
    }
    fVar15 = *(float *)(this + 0x978);
    fVar23 = *(float *)(param_4 + 0x28c);
    fVar22 = fVar22 * 3.141593;
    uVar20 = *(undefined8 *)(param_4 + 0x284);
    local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x188) >> 0x20) * fVar22,
                        (float)*(undefined8 *)(param_3 + 0x188) * fVar22);
    local_a0 = fVar22 * *(float *)(param_3 + 400);
    fVar13 = (float)uVar20;
    if ((((*(float *)(param_4 + 0x254) != fVar15) ||
         (fVar14 = *(float *)(this + 0x970), *(float *)(param_4 + 600) != fVar14)) ||
        (fVar10 = *(float *)(this + 0x974), *(float *)(param_4 + 0x25c) != fVar10)) ||
       ((*(float *)(param_4 + 0x250) != *(float *)(this + 0x968) ||
        (fVar9 = *(float *)(this + 0x96c), fVar11 = fVar13, *(float *)(param_4 + 0x260) != fVar9))))
    {
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x920) + 0x10))
                                  (*(long **)(this + 0x920),param_1);
      LightScatteringUtil::computeRayleighScatteringCoefficients(1.0,pfVar4);
      LightScatteringUtil::computeMieScatteringCoefficients(*(float *)(param_4 + 0x254),pfVar4 + 3);
      pfVar4[8] = *(float *)(param_4 + 0x250);
      LightScatteringUtil::computeRayleighScatteringCoefficients
                (*(float *)(param_4 + 600),pfVar4 + 4);
      LightScatteringUtil::computeMieScatteringCoefficients(*(float *)(param_4 + 0x25c),pfVar4 + 7);
      pfVar4[9] = *(float *)(param_4 + 0x260);
      (**(code **)(**(long **)(this + 0x920) + 0x18))(*(long **)(this + 0x920),param_1);
      fVar9 = *(float *)(param_4 + 0x260);
      *(float *)(this + 0x96c) = fVar9;
      fVar14 = *(float *)(param_4 + 600);
      *(float *)(this + 0x970) = fVar14;
      fVar10 = *(float *)(param_4 + 0x25c);
      *(float *)(this + 0x974) = fVar10;
      fVar15 = *(float *)(param_4 + 0x254);
      *(float *)(this + 0x978) = fVar15;
      *(undefined4 *)(this + 0x968) = *(undefined4 *)(param_4 + 0x250);
      fVar11 = *(float *)(param_4 + 0x284);
    }
    fVar24 = 1.0;
    LightScatteringUtil::computeSunDirectionalLightColor
              (&local_98,(float *)&local_a8,*(float *)(param_5 + 0x358),fVar9,fVar10,fVar14,fVar15,
               1.0,(float *)&local_b8);
    LightScatteringUtil::computeSunDirectionalLightColor
              ((float *)(param_4 + 0x278),(float *)(param_4 + 0x284),*(float *)(param_5 + 0x358),
               *(float *)(this + 0x96c),*(float *)(this + 0x974),*(float *)(this + 0x970),
               *(float *)(this + 0x978),1.0,(float *)&local_c8);
    auVar8 = ZEXT816(0);
    uVar5 = (*(uint *)(*(long *)(param_5 + 0x3a0) + 0x90) & 0xf) + 1;
    uVar7 = uVar5;
    do {
      fVar24 = fVar24 * 0.5;
      auVar8._0_4_ = (float)NEON_fmadd(fVar24,(float)(ulong)(uVar7 & 1),auVar8._0_4_);
      uVar7 = (uint)((float)(ulong)uVar7 * 0.5);
    } while (uVar7 != 0);
    fVar15 = 0.0;
    fVar14 = 1.0;
    do {
      fVar14 = fVar14 / 3.0;
      fVar15 = (float)NEON_fmadd(fVar14,(float)(ulong)(uVar5 - (uVar5 / 3 +
                                                               ((uint)((ulong)uVar5 * 0xaaaaaaab >>
                                                                      0x20) & 0xfffffffe))),fVar15);
      uVar5 = (uint)((float)(ulong)uVar5 / 3.0);
    } while (uVar5 != 0);
    fVar18 = *(float *)(param_5 + 0x158);
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x95c));
    fVar26 = *(float *)(param_5 + 0x160);
    fVar25 = *(float *)(param_5 + 0x15c);
    fVar14 = (auVar8._0_4_ + -0.5) / fVar14;
    fStack_ec = *(float *)(param_5 + 0x16c);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x960));
    fVar29 = *(float *)(param_5 + 0x164) * 0.0;
    uVar16 = NEON_fmadd(fVar26,0,*(float *)(param_5 + 0x164));
    bVar1 = 0.01 < fVar11;
    fVar9 = *(float *)(param_5 + 0x154) * 0.0;
    fVar32 = *(float *)(param_5 + 0x170);
    fVar27 = (float)NEON_fmadd(fVar26,0,fVar29);
    fVar10 = (fVar15 + -0.5) / fVar10;
    fVar15 = *(float *)(param_5 + 0x150);
    uVar12 = NEON_fmadd(fVar15,0,*(float *)(param_5 + 0x154));
    fVar11 = (float)NEON_fmadd(fVar15,0,fVar9);
    fVar24 = *(float *)(param_5 + 0x168);
    uVar12 = NEON_fmadd(fVar18,0,uVar12);
    fStack_fc = (float)NEON_fmadd(fVar18,0,fVar11);
    uVar19 = NEON_fmadd(fVar18,0,fVar15 + fVar9);
    fVar15 = 0.0;
    if (this[0x994] != (AtmosphereRenderController)0x0) {
      fVar15 = fVar14 + fVar14;
    }
    uVar16 = NEON_fmadd(fVar24,0,uVar16);
    local_100 = NEON_fmadd(fVar25,0,fVar18 + fVar11);
    fStack_fc = fVar25 + fStack_fc;
    uVar30 = NEON_fmadd(fVar24,0,fVar26 + fVar29);
    fVar11 = (float)NEON_fmadd(fVar24,0,fVar27);
    fVar9 = *(float *)(param_5 + 0x178);
    local_108 = NEON_fmadd(fVar25,fVar15,uVar19);
    fVar14 = 0.0;
    if (this[0x994] != (AtmosphereRenderController)0x0) {
      fVar14 = fVar10 + fVar10;
    }
    fVar18 = *(float *)(param_5 + 0x174) * 0.0;
    local_f0 = NEON_fmadd(fStack_ec,0,fVar24 + fVar27);
    fStack_104 = (float)NEON_fmadd(fVar25,fVar14,uVar12);
    local_f8 = NEON_fmadd(fStack_ec,fVar15,uVar30);
    fStack_f4 = (float)NEON_fmadd(fStack_ec,fVar14,uVar16);
    uVar12 = NEON_fmadd(fVar32,0,*(float *)(param_5 + 0x174));
    fStack_ec = fStack_ec + fVar11;
    fVar25 = *(float *)(param_5 + 0x184) * 0.0;
    fVar24 = *(float *)(param_5 + 0x180);
    uVar19 = NEON_fmadd(fVar9,0,uVar12);
    fVar26 = *(float *)(param_5 + 0x188);
    fVar10 = (float)NEON_fmadd(fVar32,0,fVar18);
    uVar12 = NEON_fmadd(fVar9,0,fVar32 + fVar18);
    uVar16 = NEON_fmadd(fVar24,0,*(float *)(param_5 + 0x184));
    fVar18 = (float)NEON_fmadd(fVar24,0,fVar25);
    fStack_dc = *(float *)(param_5 + 0x17c);
    fVar11 = (float)NEON_fmadd(fVar9,0,fVar10);
    fStack_cc = *(float *)(param_5 + 0x18c);
    local_e8 = NEON_fmadd(fStack_dc,fVar15,uVar12);
    fStack_e4 = (float)NEON_fmadd(fStack_dc,fVar14,uVar19);
    uVar19 = NEON_fmadd(fVar26,0,fVar24 + fVar25);
    uVar12 = NEON_fmadd(fVar26,0,uVar16);
    local_e0 = NEON_fmadd(fStack_dc,0,fVar9 + fVar10);
    fStack_dc = fStack_dc + fVar11;
    fVar10 = (float)NEON_fmadd(fVar26,0,fVar18);
    local_d8 = NEON_fmadd(fStack_cc,fVar15,uVar19);
    fStack_d4 = (float)NEON_fmadd(fStack_cc,fVar14,uVar12);
    local_d0 = NEON_fmadd(fStack_cc,0,fVar26 + fVar18);
    fStack_cc = fStack_cc + fVar10;
    pfVar4 = (float *)(**(code **)(**(long **)(this + 0x918) + 0x10))
                                (*(long **)(this + 0x918),param_1);
    ShaderStructLayout::setMatrix4x4(pfVar4,(Matrix4x4 *)&local_108);
    pfVar4[0x10] = *(float *)(param_5 + 0x354);
    pfVar4[0x11] = *(float *)(param_5 + 0x358);
    pfVar4[0x12] = *(float *)(param_5 + 0x35c);
    pfVar4[0x17] = *(float *)(param_5 + 200);
    pfVar4[0x3e] = *(float *)(param_4 + 0x2d0);
    pfVar4[0x3f] = *(float *)(param_5 + 0xc4);
    uVar3 = *(ulong *)(*(long *)(param_5 + 0x3a0) + 0x90);
    *(ulong *)(pfVar4 + 0x1c) = CONCAT44(fStack_94,local_98);
    pfVar4[0x1e] = local_90;
    *(undefined8 *)(pfVar4 + 0x14) = local_a8;
    pfVar4[0x16] = local_a0;
    pfVar4[0x40] = (float)(unkuint9)uVar3;
    pfVar4[0x20] = *(float *)(param_4 + 0x278);
    pfVar4[0x21] = *(float *)(param_4 + 0x27c);
    fVar15 = *(float *)(param_4 + 0x280);
    *(ulong *)(pfVar4 + 0x18) = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar22,fVar13 * fVar22);
    pfVar4[0x1a] = fVar22 * fVar23;
    pfVar4[0x22] = fVar15;
    auVar8 = NEON_ucvtf(*(undefined (*) [16])(this + 0x980),4);
    *(long *)(pfVar4 + 0x3c) = auVar8._8_8_;
    *(long *)(pfVar4 + 0x3a) = auVar8._0_8_;
    pfVar4[0x27] = *(float *)(param_4 + 0x26c);
    pfVar4[0x35] = *(float *)(param_4 + 0x270);
    lVar6 = *(long *)(this + 0x998);
    pfVar4[0x36] = *(float *)(lVar6 + 0x2b8);
    pfVar4[0x1f] = *(float *)(param_4 + 0x274);
    pfVar4[0x1b] = *(float *)(param_4 + 0x2b4);
    fVar22 = *(float *)(param_4 + 0x2c4);
    *(undefined8 *)(pfVar4 + 0x24) = local_b8;
    pfVar4[0x26] = local_b0;
    *(undefined8 *)(pfVar4 + 0x28) = local_c8;
    pfVar4[0x34] = fVar22;
    pfVar4[0x2a] = local_c0;
    pfVar4[0x2c] = *(float *)(param_4 + 0x298);
    pfVar4[0x2d] = *(float *)(param_4 + 0x29c);
    pfVar4[0x37] = *(float *)(lVar6 + 700);
    pfVar4[0x2e] = *(float *)(lVar6 + 0x2b0);
    pfVar4[0x2f] = *(float *)(lVar6 + 0x2b4);
    uVar3 = (**(code **)(**(long **)(this + 0x938) + 0x20))();
    pfVar4[0x30] = (float)(uVar3 & 0xffffffff);
    uVar3 = (**(code **)(**(long **)(this + 0x938) + 0x28))();
    pfVar4[0x31] = (float)(uVar3 & 0xffffffff);
    uVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
    pfVar4[0x32] = (float)(uVar3 & 0xffffffff);
    uVar3 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    pfVar4[0x33] = (float)(uVar3 & 0xffffffff);
    fVar22 = *(float *)(param_4 + 0x2a4);
    if (!bVar1 && *(float *)(param_4 + 0x2b0) != 0.0) {
      fVar22 = 0.0;
    }
    pfVar4[0x2b] = fVar22;
    fVar22 = *(float *)(param_4 + 0x2b0);
    fVar13 = *(float *)(param_4 + 0x2a8);
    if (!bVar1 && fVar22 != 1.0) {
      fVar13 = 0.0;
    }
    pfVar4[0x38] = fVar13;
    fVar13 = *(float *)(param_4 + 0x2ac);
    pfVar4[0x13] = fVar22;
    pfVar4[0x39] = fVar13;
    pfVar4[0x23] = *(float *)(param_4 + 0x2a0);
    (**(code **)(**(long **)(this + 0x918) + 0x18))(*(long **)(this + 0x918),param_1);
    *(uint *)(this + 0x990) = (uint)bVar1;
    if (this[0x994] != (AtmosphereRenderController)0x0) {
      fVar13 = *(float *)(param_5 + 0x124);
      fVar22 = *(float *)(param_5 + 0x120);
      uVar16 = *(undefined4 *)(param_5 + 0x114);
      uVar30 = *(undefined4 *)(param_5 + 0x110);
      fVar15 = *(float *)(param_5 + 0x128);
      fVar23 = *(float *)(param_5 + 300);
      uVar33 = NEON_fmadd(local_108,uVar16,fStack_104 * fVar13);
      uVar17 = *(undefined4 *)(param_5 + 0x134);
      uVar19 = NEON_fmadd(local_108,uVar30,fStack_104 * fVar22);
      uVar12 = *(undefined4 *)(param_5 + 0x130);
      uVar21 = *(undefined4 *)(param_5 + 0x118);
      uVar38 = NEON_fmadd(local_100,uVar17,uVar33);
      uVar34 = *(undefined4 *)(param_5 + 0x11c);
      uVar37 = NEON_fmadd(local_100,uVar12,uVar19);
      uVar36 = NEON_fmadd(local_108,uVar21,fStack_104 * fVar15);
      uVar35 = NEON_fmadd(local_108,uVar34,fStack_104 * fVar23);
      uVar19 = *(undefined4 *)(param_5 + 0x140);
      uVar40 = NEON_fmadd(local_f8,uVar30,fVar22 * fStack_f4);
      uVar28 = *(undefined4 *)(param_5 + 0x144);
      uVar42 = NEON_fmadd(local_f8,uVar16,fVar13 * fStack_f4);
      uVar31 = *(undefined4 *)(param_5 + 0x138);
      uVar33 = NEON_fmadd(local_f8,uVar21,fVar15 * fStack_f4);
      uVar41 = *(undefined4 *)(param_5 + 0x13c);
      local_148 = NEON_fmadd(fStack_fc,uVar19,uVar37);
      uStack_144 = NEON_fmadd(fStack_fc,uVar28,uVar38);
      uVar39 = NEON_fmadd(local_f8,uVar34,fVar23 * fStack_f4);
      uVar38 = NEON_fmadd(local_100,uVar31,uVar36);
      uVar36 = *(undefined4 *)(param_5 + 0x148);
      uVar35 = NEON_fmadd(local_100,uVar41,uVar35);
      uVar37 = *(undefined4 *)(param_5 + 0x14c);
      local_140 = NEON_fmadd(fStack_fc,uVar36,uVar38);
      uStack_13c = NEON_fmadd(fStack_fc,uVar37,uVar35);
      uVar38 = NEON_fmadd(local_f0,uVar12,uVar40);
      uVar40 = NEON_fmadd(local_f0,uVar17,uVar42);
      uVar33 = NEON_fmadd(local_f0,uVar31,uVar33);
      uVar35 = NEON_fmadd(local_f0,uVar41,uVar39);
      local_138 = NEON_fmadd(fStack_ec,uVar19,uVar38);
      uStack_134 = NEON_fmadd(fStack_ec,uVar28,uVar40);
      local_130 = NEON_fmadd(fStack_ec,uVar36,uVar33);
      uStack_12c = NEON_fmadd(fStack_ec,uVar37,uVar35);
      uVar33 = NEON_fmadd(local_e8,uVar30,fVar22 * fStack_e4);
      uVar40 = NEON_fmadd(local_e8,uVar16,fVar13 * fStack_e4);
      uVar42 = NEON_fmadd(local_e8,uVar21,fVar15 * fStack_e4);
      uVar30 = NEON_fmadd(local_d8,uVar30,fVar22 * fStack_d4);
      uVar38 = NEON_fmadd(local_e8,uVar34,fVar23 * fStack_e4);
      uVar16 = NEON_fmadd(local_d8,uVar16,fVar13 * fStack_d4);
      uVar35 = NEON_fmadd(local_d8,uVar21,fVar15 * fStack_d4);
      uVar39 = NEON_fmadd(local_e0,uVar12,uVar33);
      uVar33 = NEON_fmadd(local_e0,uVar17,uVar40);
      uVar21 = NEON_fmadd(local_d8,uVar34,fVar23 * fStack_d4);
      uVar34 = NEON_fmadd(local_e0,uVar41,uVar38);
      local_128 = NEON_fmadd(fStack_dc,uVar19,uVar39);
      uVar38 = NEON_fmadd(local_e0,uVar31,uVar42);
      uVar12 = NEON_fmadd(local_d0,uVar12,uVar30);
      uStack_124 = NEON_fmadd(fStack_dc,uVar28,uVar33);
      uVar16 = NEON_fmadd(local_d0,uVar17,uVar16);
      uVar17 = NEON_fmadd(local_d0,uVar31,uVar35);
      uVar30 = NEON_fmadd(local_d0,uVar41,uVar21);
      local_120 = NEON_fmadd(fStack_dc,uVar36,uVar38);
      uStack_11c = NEON_fmadd(fStack_dc,uVar37,uVar34);
      local_118 = NEON_fmadd(fStack_cc,uVar19,uVar12);
      uStack_114 = NEON_fmadd(fStack_cc,uVar28,uVar16);
      local_110 = NEON_fmadd(fStack_cc,uVar36,uVar17);
      uStack_10c = NEON_fmadd(fStack_cc,uVar37,uVar30);
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x928) + 0x10))
                                  (*(long **)(this + 0x928),param_1);
      ShaderStructLayout::setMatrix4x4(pfVar4,(Matrix4x4 *)&local_148);
      uVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
      pfVar4[0x12] = (float)(uVar3 & 0xffffffff);
      uVar3 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
      pfVar4[0x13] = (float)(uVar3 & 0xffffffff);
      pfVar4[0x14] = *(float *)(param_5 + 200);
      uVar3 = (**(code **)(**(long **)(this + 0x940) + 0x20))();
      pfVar4[0x10] = (float)(uVar3 & 0xffffffff);
      uVar3 = (**(code **)(**(long **)(this + 0x940) + 0x28))();
      pfVar4[0x11] = (float)(uVar3 & 0xffffffff);
      fVar22 = *(float *)(param_5 + 0x2d0);
      if (this[0x995] != (AtmosphereRenderController)0x0) {
        fVar22 = 1.0;
      }
      pfVar4[0x15] = fVar22;
      pfVar4[0x16] = *(float *)(param_5 + 0xc4);
      (**(code **)(**(long **)(this + 0x928) + 0x18))(*(long **)(this + 0x928),param_1);
      this[0x995] = (AtmosphereRenderController)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


