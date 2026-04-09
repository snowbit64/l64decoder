// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: denoiseShadows
// Entry Point: 00a44980
// Size: 1320 bytes
// Signature: undefined __thiscall denoiseShadows(FFXShadowDenoisingTask * this, ICommandBuffer * param_1)


/* FFXShadowDenoiser::FFXShadowDenoisingTask::denoiseShadows(ICommandBuffer*) */

void __thiscall
FFXShadowDenoiser::FFXShadowDenoisingTask::denoiseShadows
          (FFXShadowDenoisingTask *this,ICommandBuffer *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  AdhocShader *pAVar11;
  long lVar12;
  ScopedGPUMarker aSStack_160 [8];
  char *local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 local_120;
  undefined4 local_118;
  char *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if (ShadowDenoiser::m_enabled != '\0') {
    lVar12 = *(long *)(this + 0x30);
    EngineManager::getInstance();
    uVar9 = HardwareScalability::getMSAA();
    bVar1 = 1 < uVar9;
    plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    ScopedGPUMarker::ScopedGPUMarker((ScopedGPUMarker *)&local_138,"Shadow Mask Prepare",param_1);
    uStack_f0 = *(undefined8 *)(lVar12 + 0x1d8);
    local_f8 = "t2d_hitMaskResults";
    local_e8 = 0xffffffff;
    uStack_78 = *(undefined8 *)(lVar12 + 0x120);
    local_120 = *(undefined8 *)(lVar12 + 0x128);
    local_80 = "PassData";
    local_128 = "rwsb_shadowMask";
                    /* try { // try from 00a44a38 to 00a44a87 has its CatchHandler @ 00a44eac */
    AdhocShader::bindResourcesCs
              ((AdhocShader *)(lVar12 + 0x20),param_1,(ShaderTexture *)&local_f8,1,
               (ShaderStructBuffer *)0x0,0,0xc,(ShaderTexture *)0x0,0,
               (ShaderStructBuffer *)&local_128,1,0xd,(ShaderConstantBuffer *)&local_80,1,
               (ShaderSampler *)0x0,0);
    uVar9 = DENOISER_TILE_SIZE_X * 4;
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = ((*(int *)(lVar12 + 0x18) + uVar9) - 1) / uVar9;
    }
    uVar9 = DENOISER_TILE_SIZE_Y * 4;
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = ((*(int *)(lVar12 + 0x1c) + uVar9) - 1) / uVar9;
    }
                    /* try { // try from 00a44acc to 00a44ad7 has its CatchHandler @ 00a44ea8 */
    (**(code **)(*plVar10 + 0x60))(plVar10,uVar5,uVar6,1);
    ScopedGPUMarker::~ScopedGPUMarker((ScopedGPUMarker *)&local_138);
    iVar8 = DENOISER_TILE_SIZE_Y;
    uVar5 = DENOISER_TILE_SIZE_X;
    uVar4 = *(undefined8 *)(lVar12 + 0x168);
    iVar2 = *(int *)(lVar12 + 0x18);
    iVar3 = *(int *)(lVar12 + 0x1c);
    *(undefined8 *)(lVar12 + 0x168) = *(undefined8 *)(lVar12 + 0x170);
    *(undefined8 *)(lVar12 + 0x170) = uVar4;
    ScopedGPUMarker::ScopedGPUMarker(aSStack_160,"Tile Classification",param_1);
    uStack_f0 = *(undefined8 *)(lVar12 + 0x1c8);
    uStack_90 = *(undefined8 *)(lVar12 + 0x1d0);
    local_118 = 0;
    local_e8 = 0xffffffff;
    local_d0 = 0xffffffff;
    local_f8 = "t2d_depth";
    local_120 = *(undefined8 *)(lVar12 + 0x168);
    local_d8 = *(undefined8 *)(lVar12 + 0x170);
    local_b8 = 0xffffffff;
    local_a0 = 0xffffffff;
    local_88 = 0xffffffff;
    local_100 = 0;
    local_e0 = "t2d_previousMoments";
    uStack_108 = *(undefined8 *)(lVar12 + 0x158);
    uStack_c0 = *(undefined8 *)(lVar12 + 0x160);
    local_c8 = "t2d_history";
    uStack_a8 = *(undefined8 *)(lVar12 + 0x1e8);
    local_b0 = "t2d_previousDepth";
    local_98 = "t2d_normal";
    uStack_78 = *(undefined8 *)(lVar12 + 0x128);
    local_80 = "sb_raytracerResult";
    local_110 = "rwt2d_reprojectionResults";
    local_140 = *(undefined8 *)(lVar12 + 0x148);
    uStack_130 = *(undefined8 *)(lVar12 + 0x150);
    local_128 = "rwt2d_momentsBuffer";
    local_138 = "rwsb_tileMetaData";
    local_150 = *(undefined8 *)(*(long *)(lVar12 + 8) + 0x58);
    local_158 = "samplerBilinearClamp";
    pcStack_148 = "cbPassData";
                    /* try { // try from 00a44bd4 to 00a44c6b has its CatchHandler @ 00a44ecc */
    pAVar11 = (AdhocShader *)
              AdhocShader::ShaderVariants::getShader((ShaderVariants *)(lVar12 + 0x130),(uint)bVar1)
    ;
    AdhocShader::bindResourcesCs
              (pAVar11,param_1,(ShaderTexture *)&local_f8,5,(ShaderStructBuffer *)&local_80,1,0xc,
               (ShaderTexture *)&local_128,2,(ShaderStructBuffer *)&local_138,1,0xd,
               (ShaderConstantBuffer *)&pcStack_148,1,(ShaderSampler *)&local_158,1);
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = ((iVar2 + uVar5) - 1) / uVar5;
    }
    uVar5 = iVar8 * 2;
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = ((iVar3 + uVar5) - 1) / uVar5;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,uVar9,uVar6,1);
    ScopedGPUMarker::~ScopedGPUMarker(aSStack_160);
    ScopedGPUMarker::ScopedGPUMarker((ScopedGPUMarker *)&pcStack_148,"Filter Passes",param_1);
    uStack_130 = *(undefined8 *)(lVar12 + 0x1c0);
    uStack_f0 = *(undefined8 *)(lVar12 + 0x1c8);
    local_118 = 0;
    local_e8 = 0xffffffff;
    local_f8 = "t2d_DepthBuffer";
    uStack_78 = *(undefined8 *)(lVar12 + 0x150);
    local_d8 = *(undefined8 *)(lVar12 + 0x158);
    local_d0 = 0xffffffff;
    local_b8 = 0xffffffff;
    local_138 = "cbPassData";
    local_e0 = "rqt2d_input";
    uStack_c0 = *(undefined8 *)(lVar12 + 0x1d0);
    local_c8 = "t2d_NormalBuffer";
    local_80 = "sb_tileMetaData";
    local_120 = *(undefined8 *)(lVar12 + 0x160);
    local_128 = "rwt2d_history";
                    /* try { // try from 00a44cf0 to 00a44d5f has its CatchHandler @ 00a44ec0 */
    pAVar11 = (AdhocShader *)
              AdhocShader::ShaderVariants::getShader((ShaderVariants *)(lVar12 + 0x178),(uint)bVar1)
    ;
    AdhocShader::bindResourcesCs
              (pAVar11,param_1,(ShaderTexture *)&local_f8,3,(ShaderStructBuffer *)&local_80,1,0xc,
               (ShaderTexture *)&local_128,1,(ShaderStructBuffer *)0x0,0,0xd,
               (ShaderConstantBuffer *)&local_138,1,(ShaderSampler *)0x0,0);
    (**(code **)(*plVar10 + 0x60))(plVar10,uVar9,uVar6,1);
    local_120 = *(undefined8 *)(lVar12 + 0x158);
    local_d8 = *(undefined8 *)(lVar12 + 0x160);
                    /* try { // try from 00a44d70 to 00a44ddf has its CatchHandler @ 00a44ebc */
    pAVar11 = (AdhocShader *)
              AdhocShader::ShaderVariants::getShader((ShaderVariants *)(lVar12 + 400),(uint)bVar1);
    AdhocShader::bindResourcesCs
              (pAVar11,param_1,(ShaderTexture *)&local_f8,3,(ShaderStructBuffer *)&local_80,1,0xc,
               (ShaderTexture *)&local_128,1,(ShaderStructBuffer *)0x0,0,0xd,
               (ShaderConstantBuffer *)&local_138,1,(ShaderSampler *)0x0,0);
    (**(code **)(*plVar10 + 0x60))(plVar10,uVar9,uVar6,1);
    local_d8 = *(undefined8 *)(lVar12 + 0x158);
    local_120 = *(undefined8 *)(lVar12 + 0x1e0);
    local_128 = "rwt2d_output";
                    /* try { // try from 00a44dfc to 00a44e6b has its CatchHandler @ 00a44eb8 */
    pAVar11 = (AdhocShader *)
              AdhocShader::ShaderVariants::getShader((ShaderVariants *)(lVar12 + 0x1a8),(uint)bVar1)
    ;
    AdhocShader::bindResourcesCs
              (pAVar11,param_1,(ShaderTexture *)&local_f8,3,(ShaderStructBuffer *)&local_80,1,0xc,
               (ShaderTexture *)&local_128,1,(ShaderStructBuffer *)0x0,0,0xd,
               (ShaderConstantBuffer *)&local_138,1,(ShaderSampler *)0x0,0);
    (**(code **)(*plVar10 + 0x60))(plVar10,uVar9,uVar6,1);
    ScopedGPUMarker::~ScopedGPUMarker((ScopedGPUMarker *)&pcStack_148);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


