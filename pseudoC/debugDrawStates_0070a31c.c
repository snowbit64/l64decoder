// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawStates
// Entry Point: 0070a31c
// Size: 1596 bytes
// Signature: undefined debugDrawStates(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::debugDrawStates() */

void AnimalLocomotionSystem::debugDrawStates(void)

{
  uint uVar1;
  long lVar2;
  undefined4 *in_x0;
  float *this;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined8 local_100;
  float local_f8;
  float afStack_f0 [4];
  float afStack_e0 [4];
  float afStack_d0 [4];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_78;
  float fStack_74;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  switch(*in_x0) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
  }
  EngineManager::getInstance();
  this = (float *)Renderer::getDeferredDebugRenderer();
  lVar3 = EngineManager::getInstance();
  Renderer::projectClipCoords
            (*(Renderer **)(lVar3 + 0xb8),*(Vector3 **)(in_x0 + 0xee),(Vector3 *)&local_78);
  uStack_88 = 0x3f8000003f800000;
  local_90 = 0x3f8000003f800000;
  DeferredDebugRenderer::addText(local_78,fStack_74,0.02,this,(char *)&local_90);
  AnimalAnimationSystem::getActiveAnimationName();
  DeferredDebugRenderer::addText(local_78,fStack_74 + 0.03,0.02,this,(char *)&local_90);
  local_b8 = 0;
  puVar4 = *(undefined8 **)(in_x0 + 0xee);
  local_c0 = 0x3f80000000000000;
  local_a8 = *(float *)(puVar4 + 1);
  local_98 = *(float *)(puVar4 + 1);
  local_b0._4_4_ = (float)((ulong)*puVar4 >> 0x20);
  local_a0._4_4_ = (float)((ulong)*puVar4 >> 0x20);
  local_a0._4_4_ = local_a0._4_4_ + 0.1;
  local_b0._4_4_ = local_b0._4_4_ + 0.1;
  local_a0._0_4_ = (float)*puVar4;
  local_b0._0_4_ = (undefined4)*puVar4;
  Vector4::set((Vector4 *)afStack_d0,0.5,0.5,0.5,1.0);
  Vector4::set((Vector4 *)afStack_e0,1.0,0.2,0.7,1.0);
  Vector4::set((Vector4 *)afStack_f0,0.25,1.0,1.0,1.0);
  DeferredDebugRenderer::addCircle
            ((DeferredDebugRenderer *)this,(float *)&local_a0,
             *(float *)(*(long *)(in_x0 + 0xee) + 0x4c),(float *)&local_c0,0.0,afStack_d0,0xf,0x7ff)
  ;
  if (in_x0[0x10a] == 2) {
    lVar3 = *(long *)(in_x0 + 0x118);
    uVar1 = in_x0[0x11e];
    uVar5 = (uint)((ulong)(*(long *)(in_x0 + 0x11a) - lVar3) >> 3);
    if (uVar1 < uVar5) {
      lVar6 = (ulong)uVar1 << 3;
      iVar7 = ~uVar1 + uVar5;
      while( true ) {
        local_b0._0_4_ = *(undefined4 *)(lVar3 + lVar6);
        local_a8 = (float)((undefined4 *)(lVar3 + lVar6))[1];
        DeferredDebugRenderer::addLine
                  ((DeferredDebugRenderer *)this,(float *)&local_a0,afStack_f0,(float *)&local_b0,
                   afStack_f0,0x7ff);
        local_a0._0_4_ = (float)(undefined4)local_b0;
        local_a0._4_4_ = local_b0._4_4_;
        local_98 = local_a8;
        if (iVar7 == 0) break;
        lVar3 = *(long *)(in_x0 + 0x118);
        lVar6 = lVar6 + 8;
        iVar7 = iVar7 + -1;
      }
    }
  }
  else if (in_x0[0x10a] == 1) {
    fVar8 = **(float **)(in_x0 + 0x1a);
    local_98 = (float)in_x0[0x10e] * fVar8 + (float)in_x0[0x10c];
    local_a0._0_4_ = (float)in_x0[0x10b] + (float)in_x0[0x10d] * fVar8;
    DeferredDebugRenderer::addCircle
              ((DeferredDebugRenderer *)this,(float *)&local_a0,(*(float **)(in_x0 + 0x1a))[1],
               (float *)&local_c0,0.0,afStack_e0,0xf,0x7ff);
    local_a0._0_4_ = (float)in_x0[0x113];
    local_98 = (float)in_x0[0x114];
    local_b0._0_4_ = in_x0[0x10b];
    local_a8 = (float)in_x0[0x10c];
    DeferredDebugRenderer::addLine
              ((DeferredDebugRenderer *)this,(float *)&local_a0,afStack_e0,(float *)&local_b0,
               afStack_e0,0x7ff);
  }
  puVar4 = *(undefined8 **)(in_x0 + 0xee);
  local_110 = (float)*puVar4;
  fStack_10c = (float)((ulong)*puVar4 >> 0x20);
  fVar9 = *(float *)(*(long *)(in_x0 + 0x1a) + 0x28);
  fVar8 = *(float *)((long)puVar4 + 0x4c);
  local_120._0_4_ = (float)*(undefined8 *)((long)puVar4 + 0xc);
  local_120._4_4_ = (float)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
  fVar10 = (float)*(undefined8 *)((long)puVar4 + 0xc) * fVar8;
  fVar11 = (float)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20) * fVar8;
  fVar8 = fVar8 * -*(float *)((long)puVar4 + 0x14);
  local_100._0_4_ = (float)*puVar4;
  local_100._4_4_ = (float)((ulong)*puVar4 >> 0x20);
  local_118 = fVar9 * *(float *)((long)puVar4 + 0x14) + *(float *)(puVar4 + 1);
  uVar14 = NEON_rev64(CONCAT44(fVar11,fVar10),4);
  local_f8 = fVar10 + *(float *)(puVar4 + 1);
  fVar12 = fVar9 * (float)local_120 + (float)local_100;
  fVar9 = fVar9 * local_120._4_4_ + local_100._4_4_;
  fStack_10c = fStack_10c - (float)uVar14;
  local_108 = *(float *)(puVar4 + 1) - (float)((ulong)uVar14 >> 0x20);
  fStack_12c = fVar11 + fVar9;
  local_128 = fVar10 + local_118;
  local_100 = CONCAT44(fVar11 + local_100._4_4_,fVar8 + (float)local_100);
  local_110 = local_110 - fVar8;
  local_130 = fVar8 + fVar12;
  local_118 = local_118 - fVar10;
  local_120 = CONCAT44(fVar9 - fVar11,fVar12 - fVar8);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,(float *)&local_100,afStack_d0,&local_110,afStack_d0,
             0x7ff);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,&local_110,afStack_d0,(float *)&local_120,afStack_d0,
             0x7ff);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,(float *)&local_120,afStack_d0,&local_130,afStack_d0,
             0x7ff);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,&local_130,afStack_d0,(float *)&local_100,afStack_d0,
             0x7ff);
  puVar4 = *(undefined8 **)(in_x0 + 0xee);
  local_a0 = *puVar4;
  local_98 = *(float *)(puVar4 + 1);
  fVar8 = (float)MathUtil::degreeToRadian(15.0);
  sincosf(fVar8,&fStack_134,&local_138);
  lVar3 = *(long *)(in_x0 + 0xee);
  fVar12 = (float)NEON_fmadd(*(undefined4 *)((long)puVar4 + 0xc),fStack_134,
                             local_138 * *(float *)((long)puVar4 + 0x14));
  fVar11 = (float)NEON_fmadd(*(undefined4 *)((long)puVar4 + 0xc),local_138,
                             fStack_134 * -*(float *)((long)puVar4 + 0x14));
  fVar8 = (float)MathUtil::degreeToRadian(-15.0);
  sincosf(fVar8,&fStack_13c,&local_140);
  fVar8 = *(float *)(lVar3 + 0x14);
  uVar13 = *(undefined4 *)(lVar3 + 0xc);
  fVar10 = *(float *)(*(long *)(in_x0 + 0x1a) + 0x28);
  fVar9 = (float)NEON_fmadd(uVar13,fStack_13c,local_140 * fVar8);
  fVar8 = (float)NEON_fmadd(uVar13,local_140,fStack_13c * -fVar8);
  local_a8 = fVar12 * fVar10 + local_98;
  local_b0 = CONCAT44(fVar10 * 0.0 + local_a0._4_4_,(float)local_a0 + fVar11 * fVar10);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,(float *)&local_a0,afStack_d0,(float *)&local_b0,
             afStack_d0,0x7ff);
  local_a8 = fVar9 * fVar10 + local_98;
  local_b0 = CONCAT44(fVar10 * 0.0 + local_a0._4_4_,fVar8 * fVar10 + (float)local_a0);
  DeferredDebugRenderer::addLine
            ((DeferredDebugRenderer *)this,(float *)&local_a0,afStack_d0,(float *)&local_b0,
             afStack_d0,0x7ff);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


