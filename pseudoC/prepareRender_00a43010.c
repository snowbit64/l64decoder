// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00a43010
// Size: 1512 bytes
// Signature: undefined __thiscall prepareRender(ShadowBufferRenderController * this, RenderArgs * param_1, LightList * param_2, LightListRasterizer * param_3, LightSourceQueueItem * param_4, float * param_5, Vector2 * param_6, PostFxParams * param_7, ITextureObject * param_8)


/* ShadowBufferRenderController::prepareRender(RenderArgs const&, LightList const&,
   LightListRasterizer&, LightSourceQueueItem const*, float const*, Vector2 const*, PostFxParams
   const&, ITextureObject*) */

void __thiscall
ShadowBufferRenderController::prepareRender
          (ShadowBufferRenderController *this,RenderArgs *param_1,LightList *param_2,
          LightListRasterizer *param_3,LightSourceQueueItem *param_4,float *param_5,Vector2 *param_6
          ,PostFxParams *param_7,ITextureObject *param_8)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  void *__dest;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  uint uStack_24c;
  uint uStack_248;
  uint local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  float afStack_1b0 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  EngineManager::getInstance();
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar6;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_3 + 0x68);
  RenderArgs::computeViewProjectionMatrices(param_1,(float *)&local_170,afStack_1b0);
  uStack_1e8 = uStack_168;
  local_1f0 = local_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_1c8 = uStack_148;
  local_1d0 = local_150;
  uStack_1b8 = uStack_138;
  local_1c0 = uStack_140;
  Matrix4x4::invert((Matrix4x4 *)&local_230,(Matrix4x4 *)&local_1f0);
  uVar6 = (**(code **)(**(long **)(this + 0x28) + 0x138))();
  if (param_4 == (LightSourceQueueItem *)0x0) goto LAB_00a434f8;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_4 + 0x10);
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 2);
  DAT_02112c94 = DAT_02112c94 + 1;
  __dest = (void *)(**(code **)(**(long **)(this + 0x48) + 0x10))(*(long **)(this + 0x48),uVar6);
  pbVar1 = *(byte **)(param_4 + 8);
  local_240 = *(undefined8 *)(*(long *)param_4 + 0x20);
  local_238 = *(undefined4 *)(*(long *)param_4 + 0x28);
  bVar3 = *pbVar1;
  local_244 = (uint)bVar3;
  uVar21 = *(undefined4 *)(pbVar1 + (ulong)(local_244 - 1) * 4 + 0x48);
  if (bVar3 < 2) {
    if (bVar3 != 0) goto LAB_00a43188;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar1 + 0x48);
    *(undefined8 *)((long)__dest + 0x3b8) = *(undefined8 *)(pbVar1 + 0x50);
    *(undefined8 *)((long)__dest + 0x3b0) = uVar15;
    if (4 < bVar3) {
      uVar15 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x58);
      *(undefined8 *)((long)__dest + 0x3c8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x60);
      *(undefined8 *)((long)__dest + 0x3c0) = uVar15;
    }
LAB_00a43188:
    pfVar12 = (float *)((long)__dest + 0x200);
    puVar10 = &local_f0;
    uVar7 = (ulong)bVar3;
    do {
      ShaderStructLayout::setParameterMatrixf(pfVar12,0,(Matrix4x4 *)puVar10);
      pfVar12 = pfVar12 + 0xc;
      puVar10 = puVar10 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  memcpy(__dest,&local_130,0x200);
  uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x3a0) + 0x98) + 0x20))();
  *(float *)((long)__dest + 0x510) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x3a0) + 0x98) + 0x28))();
  *(undefined8 *)((long)__dest + 0x458) = uStack_228;
  *(undefined8 *)((long)__dest + 0x450) = local_230;
  *(undefined8 *)((long)__dest + 0x468) = uStack_218;
  *(undefined8 *)((long)__dest + 0x460) = uStack_220;
  *(undefined8 *)((long)__dest + 0x478) = uStack_208;
  *(undefined8 *)((long)__dest + 0x470) = local_210;
  *(undefined8 *)((long)__dest + 0x488) = uStack_1f8;
  *(undefined8 *)((long)__dest + 0x480) = uStack_200;
  *(undefined8 *)((long)__dest + 0x498) = uStack_168;
  *(undefined8 *)((long)__dest + 0x490) = local_170;
  *(undefined8 *)((long)__dest + 0x4a8) = uStack_158;
  *(undefined8 *)((long)__dest + 0x4a0) = uStack_160;
  *(float *)((long)__dest + 0x514) = 1.0 / (float)(uVar7 & 0xffffffff);
  *(undefined8 *)((long)__dest + 0x4b8) = uStack_148;
  *(undefined8 *)((long)__dest + 0x4b0) = local_150;
  *(undefined8 *)((long)__dest + 0x4c8) = uStack_138;
  *(undefined8 *)((long)__dest + 0x4c0) = uStack_140;
  ShaderStructLayout::setMatrix3x4((float *)((long)__dest + 0x4d0),(Matrix4x4 *)(param_1 + 0x40));
  uVar18 = *(undefined8 *)param_5;
  uVar16 = *(undefined8 *)(param_5 + 6);
  uVar15 = *(undefined8 *)(param_5 + 4);
  *(undefined8 *)((long)__dest + 0x398) = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)((long)__dest + 0x390) = uVar18;
  *(undefined8 *)((long)__dest + 0x3a8) = uVar16;
  *(undefined8 *)((long)__dest + 0x3a0) = uVar15;
  fVar13 = (float)LightSource::getSoftShadowsLightSize();
  fVar14 = (float)LightSource::getPCSSMaxPenumbraSize();
  plVar8 = (long *)RenderController::getShadowMap();
  uVar7 = (**(code **)(*plVar8 + 0x20))();
  uVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
  fVar20 = 1.0 / *(float *)param_6;
  fVar19 = (float)(uVar7 & 0xffffffff) / (float)(uVar9 & 0xffffffff);
  *(float *)((long)__dest + 0x3d8) = fVar14 * fVar20;
  fVar17 = fVar13 * fVar19;
  fVar19 = fVar14 * fVar19;
  *(float *)((long)__dest + 0x3d0) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x3d4) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x3dc) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 8);
  *(float *)((long)__dest + 0x3e0) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x3e4) = fVar17 * fVar20;
  *(float *)((long)__dest + 1000) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x3ec) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 0x10);
  *(float *)((long)__dest + 0x3f0) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x3f4) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x3f8) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x3fc) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 0x18);
  *(float *)((long)__dest + 0x400) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x404) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x408) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x40c) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 0x20);
  *(float *)((long)__dest + 0x410) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x414) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x418) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x41c) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 0x28);
  *(float *)((long)__dest + 0x420) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x424) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x428) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x42c) = fVar19 * fVar20;
  fVar20 = 1.0 / *(float *)(param_6 + 0x30);
  *(float *)((long)__dest + 0x430) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x434) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x438) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x43c) = fVar19 * fVar20;
  fVar20 = *(float *)(param_6 + 0x38);
  *(float *)((long)__dest + 0x51c) = fVar17;
  *(undefined4 *)((long)__dest + 0x508) = local_238;
  *(undefined8 *)((long)__dest + 0x500) = local_240;
  fVar20 = 1.0 / fVar20;
  *(uint *)((long)__dest + 0x534) = local_244;
  *(undefined4 *)((long)__dest + 0x50c) = uVar21;
  *(float *)((long)__dest + 0x518) = fVar13;
  *(float *)((long)__dest + 0x520) = fVar14;
  *(float *)((long)__dest + 0x524) = fVar19;
  *(float *)((long)__dest + 0x440) = fVar13 * fVar20;
  *(float *)((long)__dest + 0x444) = fVar17 * fVar20;
  *(float *)((long)__dest + 0x448) = fVar14 * fVar20;
  *(float *)((long)__dest + 0x44c) = fVar19 * fVar20;
  uVar21 = LightSource::getSoftShadowsLightDistance();
  *(undefined4 *)((long)__dest + 0x530) = uVar21;
  if (cVar2 != '\0') {
    lVar11 = *(long *)(*(long *)(param_4 + 8) + (ulong)bVar3 * 8 + 8);
    uVar15 = *(undefined8 *)(lVar11 + 0x74);
    *(undefined8 *)((long)__dest + 0x388) = *(undefined8 *)(lVar11 + 0x7c);
    *(undefined8 *)((long)__dest + 0x380) = uVar15;
  }
  fVar13 = (float)NEON_ucvtf(DAT_02112c94 & 0xff);
  *(float *)((long)__dest + 0x538) = fVar13 * 1.618034;
  *(undefined4 *)((long)__dest + 0x53c) = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = (**(code **)(*(long *)param_8 + 0x20))(param_8);
  *(float *)((long)__dest + 0x528) = (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(*(long *)param_8 + 0x28))(param_8);
  *(uint *)((long)__dest + 0x540) = DAT_02112c94;
  *(float *)((long)__dest + 0x52c) = (float)(uVar7 & 0xffffffff);
  (**(code **)(**(long **)(this + 0x48) + 0x18))(*(long **)(this + 0x48),uVar6);
  uVar7 = (ulong)ShadowDenoiser::m_enabled;
  uVar5 = HardwareScalability::getMSAA();
  *(ShadowBufferRenderController **)(this + 0xb8) =
       this + ((ulong)(cVar2 != '\0') | uVar7 << 1 | (ulong)(1 < uVar5) << 3) * 0x100 + 0xc0;
LAB_00a434f8:
  puVar10 = (undefined8 *)
            (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60),uVar6);
  puVar10[5] = uStack_208;
  puVar10[4] = local_210;
  puVar10[7] = uStack_1f8;
  puVar10[6] = uStack_200;
  puVar10[1] = uStack_228;
  *puVar10 = local_230;
  puVar10[3] = uStack_218;
  puVar10[2] = uStack_220;
  ShaderStructLayout::setMatrix3x4((float *)(puVar10 + 8),(Matrix4x4 *)(param_1 + 0x40));
  uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x3a0) + 0x98) + 0x20))();
  *(float *)(puVar10 + 0xe) = 1.0 / (float)(uVar7 & 0xffffffff);
  uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x3a0) + 0x98) + 0x28))();
  *(float *)((long)puVar10 + 0x74) = 1.0 / (float)(uVar7 & 0xffffffff);
  LightListRasterizer::getShaderArgs
            (param_3,(float *)(puVar10 + 0xf),(float *)((long)puVar10 + 0x7c),
             (float *)(puVar10 + 0x10),(uint *)&local_240);
  LightList::computeLightTextureOffsets(param_2,&local_244,&uStack_248,&uStack_24c);
  *(undefined4 *)((long)puVar10 + 0x84) = (undefined4)local_240;
  *(uint *)(puVar10 + 0x11) = local_244;
  (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60),uVar6);
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


