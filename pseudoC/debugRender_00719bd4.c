// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRender
// Entry Point: 00719bd4
// Size: 1360 bytes
// Signature: undefined debugRender(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficSystem::debugRender() */

void TrafficSystem::debugRender(void)

{
  long lVar1;
  long in_x0;
  DeferredDebugRenderer *this;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,true);
  uVar4 = *(uint *)(in_x0 + 0x4c90);
  uStack_a8 = 0x3f80000000000000;
  local_b0 = 0x3f800000;
  if (uVar4 != 0) {
    uVar9 = 0;
    lVar3 = *(long *)(in_x0 + 0x4ca0);
    do {
      lVar7 = lVar3 + uVar9 * 0x88;
      lVar10 = *(long *)(lVar7 + 0x70);
      if (*(long *)(lVar7 + 0x78) != lVar10) {
        uVar8 = 0;
        do {
          pfVar6 = (float *)(lVar10 + uVar8 * 0x14);
          lVar10 = uVar9 * 0x88;
          fVar16 = *pfVar6;
          fVar17 = pfVar6[2];
          fVar11 = (float)Spline::getLength();
          plVar2 = *(long **)(*(long *)(in_x0 + 0x4ca0) + lVar10 + 8);
          (**(code **)(*plVar2 + 0x10))(fVar16,plVar2,&local_e0,&local_f0);
          lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
          RawTransformGroup::updateWorldTransformation();
          uVar12 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar3 + 0xc0),
                              local_e0._4_4_ * *(float *)(lVar3 + 0xd0));
          local_b8 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
          local_c0._0_4_ =
               (float)*(undefined8 *)(lVar3 + 200) * local_e0._4_4_ +
               (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_e0 +
               (float)*(undefined8 *)(lVar3 + 0xd8) * local_d8 +
               (float)*(undefined8 *)(lVar3 + 0xe8);
          local_c0._4_4_ =
               (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_e0._4_4_ +
               (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_e0 +
               (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_d8 +
               (float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20);
          local_b8 = *(float *)(lVar3 + 0xf0) + local_b8;
          lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
          RawTransformGroup::updateWorldTransformation();
          fVar13 = (float)*(undefined8 *)(lVar3 + 200) * local_f0._4_4_ +
                   (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_f0 +
                   (float)*(undefined8 *)(lVar3 + 0xd8) * local_e8;
          fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_f0._4_4_ +
                   (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_f0 +
                   (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_e8;
          uVar12 = NEON_fmadd((float)local_f0,*(undefined4 *)(lVar3 + 0xc0),
                              local_f0._4_4_ * *(float *)(lVar3 + 0xd0));
          local_e8 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
          fVar15 = (float)NEON_fmadd(local_e8,local_e8,fVar14 * fVar14 + fVar13 * fVar13);
          local_f0._4_4_ = 1.0;
          if (1e-06 < fVar15) {
            local_f0._4_4_ = 1.0 / SQRT(fVar15);
          }
          local_e8 = local_e8 * local_f0._4_4_;
          local_f0._0_4_ = fVar13 * local_f0._4_4_;
          local_f0._4_4_ = fVar14 * local_f0._4_4_;
          fVar17 = fVar17 * 0.2;
          local_c8 = local_b8;
          fVar13 = (float)local_c0;
          fStack_cc = local_c0._4_4_;
          while( true ) {
            local_d0 = (float)NEON_fmadd(local_e8,fVar17,fVar13);
            local_c8 = local_c8 - fVar17 * (float)local_f0;
            DeferredDebugRenderer::addLine
                      (this,(float *)&local_c0,(float *)&local_b0,&local_d0,(float *)&local_b0,0x7ff
                      );
            fVar16 = 20.0 / fVar11 + fVar16;
            local_b8 = local_c8;
            local_c0._0_4_ = local_d0;
            local_c0._4_4_ = fStack_cc;
            lVar10 = uVar9 * 0x88;
            lVar3 = *(long *)(in_x0 + 0x4ca0) + lVar10;
            if (*(float *)(*(long *)(*(long *)(in_x0 + 0x4ca0) + uVar9 * 0x88 + 0x70) + uVar8 * 0x14
                          + 4) <= fVar16) break;
            plVar2 = *(long **)(lVar3 + 8);
            (**(code **)(*plVar2 + 0x10))(fVar16,plVar2,&local_e0,&local_f0);
            lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
            RawTransformGroup::updateWorldTransformation();
            uVar12 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar3 + 0xc0),
                                local_e0._4_4_ * *(float *)(lVar3 + 0xd0));
            fVar13 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
            local_e0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) *
                                local_e0._4_4_ +
                                (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) *
                                (float)local_e0 +
                                (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_d8,
                                (float)*(undefined8 *)(lVar3 + 0xe8) +
                                (float)*(undefined8 *)(lVar3 + 200) * local_e0._4_4_ +
                                (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_e0 +
                                (float)*(undefined8 *)(lVar3 + 0xd8) * local_d8);
            local_d8 = *(float *)(lVar3 + 0xf0) + fVar13;
            lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
            RawTransformGroup::updateWorldTransformation();
            fVar13 = (float)*(undefined8 *)(lVar3 + 200) * local_f0._4_4_ +
                     (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_f0 +
                     (float)*(undefined8 *)(lVar3 + 0xd8) * local_e8;
            fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_f0._4_4_ +
                     (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_f0 +
                     (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_e8;
            uVar12 = NEON_fmadd((float)local_f0,*(undefined4 *)(lVar3 + 0xc0),
                                local_f0._4_4_ * *(float *)(lVar3 + 0xd0));
            local_e8 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
            fVar15 = (float)NEON_fmadd(local_e8,local_e8,fVar14 * fVar14 + fVar13 * fVar13);
            local_f0._4_4_ = 1.0;
            if (1e-06 < fVar15) {
              local_f0._4_4_ = 1.0 / SQRT(fVar15);
            }
            local_e8 = local_e8 * local_f0._4_4_;
            local_f0._0_4_ = fVar13 * local_f0._4_4_;
            local_f0._4_4_ = fVar14 * local_f0._4_4_;
            local_c8 = local_d8;
            fVar13 = (float)local_e0;
            fStack_cc = local_e0._4_4_;
          }
          plVar2 = *(long **)(lVar3 + 8);
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_e0,&local_f0);
          lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
          RawTransformGroup::updateWorldTransformation();
          uVar12 = NEON_fmadd((float)local_e0,*(undefined4 *)(lVar3 + 0xc0),
                              local_e0._4_4_ * *(float *)(lVar3 + 0xd0));
          fVar11 = (float)NEON_fmadd(local_d8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
          local_e0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_e0._4_4_
                              + (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) *
                                (float)local_e0 +
                              (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_d8,
                              (float)*(undefined8 *)(lVar3 + 0xe8) +
                              (float)*(undefined8 *)(lVar3 + 200) * local_e0._4_4_ +
                              (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_e0 +
                              (float)*(undefined8 *)(lVar3 + 0xd8) * local_d8);
          local_d8 = *(float *)(lVar3 + 0xf0) + fVar11;
          lVar3 = *(long *)(*(long *)(in_x0 + 0x4ca0) + lVar10);
          RawTransformGroup::updateWorldTransformation();
          fVar11 = (float)*(undefined8 *)(lVar3 + 200) * local_f0._4_4_ +
                   (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_f0 +
                   (float)*(undefined8 *)(lVar3 + 0xd8) * local_e8;
          fVar13 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_f0._4_4_ +
                   (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_f0 +
                   (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_e8;
          uVar12 = NEON_fmadd((float)local_f0,*(undefined4 *)(lVar3 + 0xc0),
                              local_f0._4_4_ * *(float *)(lVar3 + 0xd0));
          local_e8 = (float)NEON_fmadd(local_e8,*(undefined4 *)(lVar3 + 0xe0),uVar12);
          fVar15 = (float)NEON_fmadd(local_e8,local_e8,fVar13 * fVar13 + fVar11 * fVar11);
          fVar14 = 1.0;
          if (1e-06 < fVar15) {
            fVar14 = 1.0 / SQRT(fVar15);
          }
          local_e8 = local_e8 * fVar14;
          local_f0 = CONCAT44(fVar13 * fVar14,fVar11 * fVar14);
          local_d0 = (float)NEON_fmadd(local_e8,fVar17,(float)local_e0);
          local_c8 = local_d8 - fVar17 * fVar11 * fVar14;
          fStack_cc = local_e0._4_4_;
          DeferredDebugRenderer::addLine
                    (this,(float *)&local_c0,(float *)&local_b0,&local_d0,(float *)&local_b0,0x7ff);
          local_c0 = local_e0;
          local_b8 = local_d8;
          DeferredDebugRenderer::addLine
                    (this,(float *)&local_c0,(float *)&local_b0,&local_d0,(float *)&local_b0,0x7ff);
          lVar3 = *(long *)(in_x0 + 0x4ca0);
          uVar8 = (ulong)((int)uVar8 + 1);
          lVar7 = lVar3 + uVar9 * 0x88;
          lVar10 = *(long *)(lVar7 + 0x70);
          uVar5 = (*(long *)(lVar7 + 0x78) - lVar10 >> 2) * -0x3333333333333333;
        } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
        uVar4 = *(uint *)(in_x0 + 0x4c90);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


