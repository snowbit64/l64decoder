// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRender
// Entry Point: 006f9c74
// Size: 1288 bytes
// Signature: undefined __thiscall debugRender(BillboardShape * this, uint param_1, float param_2, GsShape * param_3)


/* BillboardShape::debugRender(unsigned int, float, GsShape*) */

void __thiscall
BillboardShape::debugRender(BillboardShape *this,uint param_1,float param_2,GsShape *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  BillboardShape *pBVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar8;
  float *this_00;
  Renderer *pRVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined auVar24 [16];
  undefined8 local_230;
  float local_228;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  uVar6 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  pBVar7 = this;
  if (param_2 <= 1.570796) {
    lVar5 = EngineManager::getInstance();
    pRVar9 = *(Renderer **)(lVar5 + 0xb8);
    lVar5 = Renderer::getSharedRenderArgs();
    this_00 = *(float **)(lVar5 + 0x80);
    auVar24 = DeferredDebugRenderer::isCategoryEnabled((DeferredDebugRenderer *)this_00,0x100);
    uVar6 = auVar24._8_8_;
    pBVar7 = auVar24._0_8_;
    if ((auVar24 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      DeferredDebugRenderer::setNoDepthMode((DeferredDebugRenderer *)this_00,true);
      DeferredDebugRenderer::setBoldMode((DeferredDebugRenderer *)this_00,true);
      local_c0 = 0;
      local_b8 = 0.0;
      fVar11 = (float)GiantsAdPlacement::getAngleThreshold();
      fVar12 = (float)GiantsAdPlacement::getMinVisibleArea();
      fVar13 = (float)GiantsAdPlacement::getMaxVisibleArea();
      uStack_d8 = 0x3f80000000000000;
      local_e0 = 0x3f0000003f800000;
      uStack_c8 = 0x3f80000000000000;
      uStack_d0 = 0x3f80000000000000;
      uStack_e8 = 0x3f80000000000000;
      local_f0 = 0x3f800000;
      uVar6 = getVisibleAreaPoints(this,param_3,pRVar9,&local_110);
      fVar23 = 0.0;
      fVar14 = 0.0;
      if ((uVar6 & 1) != 0) {
        fVar14 = (float)NEON_fmadd(fStack_10c - local_fc,local_f8 - local_108,
                                   (local_104 - fStack_f4) * (local_110 - fStack_100));
        fVar14 = ABS(fVar14) * 0.5;
      }
      pfVar10 = (float *)(this + 0x4c);
      lVar5 = -4;
      fVar21 = 0.0;
      fVar22 = 0.0;
      puVar3 = &local_f0;
      if (param_2 <= fVar11 && (fVar12 <= fVar14 && fVar14 <= fVar13)) {
        puVar3 = &uStack_d0;
      }
      if (this[0x74] != (BillboardShape)0x0) {
        puVar3 = &local_e0;
      }
      do {
        RawTransformGroup::updateWorldTransformation();
        fVar18 = pfVar10[-2];
        fVar15 = pfVar10[-1];
        uVar16 = NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 0xc0),
                            fVar15 * *(float *)(param_3 + 0xd0));
        fVar20 = *pfVar10;
        local_228 = (float)NEON_fmadd(fVar20,*(undefined4 *)(param_3 + 0xe0),uVar16);
        local_230 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20) * fVar15 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xb8) >> 0x20) * fVar18 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xd8) >> 0x20) * fVar20 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xe8) >> 0x20),
                             (float)*(undefined8 *)(param_3 + 200) * fVar15 +
                             (float)*(undefined8 *)(param_3 + 0xb8) * fVar18 +
                             (float)*(undefined8 *)(param_3 + 0xd8) * fVar20 +
                             (float)*(undefined8 *)(param_3 + 0xe8));
        local_228 = *(float *)(param_3 + 0xf0) + local_228;
        RawTransformGroup::updateWorldTransformation();
        lVar1 = lVar5 + 1;
        lVar2 = 0;
        if (lVar5 != -1) {
          lVar2 = lVar5 + 5;
        }
        fVar19 = *(float *)(this + lVar2 * 0xc + 0x44);
        fVar15 = *(float *)(this + lVar2 * 0xc + 0x48);
        uVar16 = NEON_fmadd(fVar19,*(undefined4 *)(param_3 + 0xc0),
                            fVar15 * *(float *)(param_3 + 0xd0));
        fVar20 = *(float *)(this + lVar2 * 0xc + 0x4c);
        fVar18 = (float)NEON_fmadd(fVar20,*(undefined4 *)(param_3 + 0xe0),uVar16);
        local_130 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20) * fVar15 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xb8) >> 0x20) * fVar19 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xd8) >> 0x20) * fVar20 +
                             (float)((ulong)*(undefined8 *)(param_3 + 0xe8) >> 0x20),
                             (float)*(undefined8 *)(param_3 + 200) * fVar15 +
                             (float)*(undefined8 *)(param_3 + 0xb8) * fVar19 +
                             (float)*(undefined8 *)(param_3 + 0xd8) * fVar20 +
                             (float)*(undefined8 *)(param_3 + 0xe8));
        uStack_128 = CONCAT44(uStack_128._4_4_,*(float *)(param_3 + 0xf0) + fVar18);
        DeferredDebugRenderer::addLine
                  ((DeferredDebugRenderer *)this_00,(float *)&local_230,(float *)puVar3,
                   (float *)&local_130,(float *)puVar3,0x100);
        fVar21 = (float)local_230 + fVar21;
        fVar22 = (float)((ulong)local_230 >> 0x20) + fVar22;
        fVar23 = local_228 + fVar23;
        pfVar10 = pfVar10 + 3;
        lVar5 = lVar1;
      } while (lVar1 != 0);
      DeferredDebugRenderer::setBoldMode((DeferredDebugRenderer *)this_00,false);
      uVar17 = NEON_fmov(0x3e800000,4);
      local_b8 = fVar23 * 0.25;
      local_c0 = CONCAT44(fVar22 * (float)((ulong)uVar17 >> 0x20),fVar21 * (float)uVar17);
      lVar5 = EngineManager::getInstance();
      Renderer::projectClipCoords
                (*(Renderer **)(lVar5 + 0xb8),(Vector3 *)&local_c0,(Vector3 *)&local_120);
      if ((0.0 <= local_118) && (local_118 <= 1.0)) {
        uStack_128 = 0x3f8000003f800000;
        local_130 = 0x3f800000;
        fVar23 = (float)GiantsAdPlacement::getImpressionTimerMs();
        if (*(int *)(*(long *)(this + 0x28) + 0x58) == 2) {
          auVar24 = GiantsAdPlacement::getCoolOffPeriodMs();
        }
        else {
          auVar24 = GiantsAdPlacement::getMinExposureTimeMs();
        }
        fVar21 = (float)(auVar24._0_8_ & 0xffffffff);
        FUN_006faf40(fVar21,0x447a0000,&local_230,auVar24._8_8_,"Id: %u",
                     *(undefined4 *)(this + 0x20));
        fVar22 = local_120 + -0.04;
        fVar15 = fStack_11c + -0.02;
        DeferredDebugRenderer::addText(fVar22,fVar15,0.02,this_00,(char *)&local_130);
        FUN_006faf40((double)(fVar14 * 100.0),(double)(fVar12 * 100.0),&local_230,extraout_x1,
                     "Visible: %.2f%%(>%.2f%%)");
        puVar3 = &local_130;
        if (fVar12 <= fVar14 && fVar14 <= fVar13) {
          puVar3 = &uStack_d0;
        }
        DeferredDebugRenderer::addText(fVar22,fVar15 + -0.0242,0.02,this_00,(char *)puVar3);
        fVar12 = (float)MathUtil::radianToDegree(param_2);
        fVar13 = (float)MathUtil::radianToDegree(fVar11);
        FUN_006faf40((double)fVar12,(double)fVar13,&local_230,extraout_x1_00,"Angle: %.1f (<%.1f)");
        puVar3 = &uStack_d0;
        if (fVar11 < param_2) {
          puVar3 = &local_130;
        }
        DeferredDebugRenderer::addText(fVar22,fVar15 + -0.0484,0.02,this_00,(char *)puVar3);
        if ((int)*(uint *)(*(long *)(this + 0x28) + 0x58) < 3) {
          puVar8 = *(undefined **)
                    (GiantsAdPlacement::getTrackingStateStr(GiantsAdPlacement::TRACKING_STATE)::str
                    + (ulong)*(uint *)(*(long *)(this + 0x28) + 0x58) * 8);
        }
        else {
          puVar8 = &DAT_0050a39f;
        }
        FUN_006faf40((double)(fVar23 / 1000.0),(double)(fVar21 / 1000.0),&local_230,extraout_x1_01,
                     "ImpressionTimer: %.2fs(>%.2fs)\nImpressionTrackingState: %s",puVar8);
        DeferredDebugRenderer::addText(fVar22,fVar15 + -0.0726,0.02,this_00,(char *)&local_130);
      }
      auVar24 = DeferredDebugRenderer::setNoDepthMode((DeferredDebugRenderer *)this_00,false);
      uVar6 = auVar24._8_8_;
      pBVar7 = auVar24._0_8_;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pBVar7,uVar6);
  }
  return;
}


