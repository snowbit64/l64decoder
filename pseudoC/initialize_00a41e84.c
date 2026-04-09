// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00a41e84
// Size: 4148 bytes
// Signature: undefined __thiscall initialize(ShadowBufferRenderController * this, uint param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* ShadowBufferRenderController::initialize(unsigned int, unsigned int) */

void __thiscall
ShadowBufferRenderController::initialize
          (ShadowBufferRenderController *this,uint param_1,uint param_2)

{
  ShadowBufferRenderController *pSVar1;
  char *pcVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ShadowBufferRenderController SVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ShadowBufferRenderController *this_00;
  ShaderStructLayout local_940 [16];
  void *local_930;
  byte *local_920;
  byte *local_918;
  ShaderStructLayout local_900 [16];
  void *local_8f0;
  undefined2 local_8e8;
  byte *local_8e0;
  byte *local_8d8;
  undefined4 local_8c8;
  ShaderStructLayout local_8c0 [16];
  void *local_8b0;
  undefined2 local_8a8;
  byte *local_8a0;
  byte *local_898;
  undefined4 local_888;
  undefined8 local_880;
  undefined2 local_878;
  undefined8 local_874;
  undefined8 uStack_86c;
  undefined8 local_864;
  undefined8 uStack_85c;
  undefined4 local_854;
  undefined local_850;
  undefined8 local_84c;
  undefined8 local_844;
  undefined8 uStack_83c;
  undefined4 local_834;
  char *local_830;
  undefined auStack_800 [896];
  undefined auStack_480 [128];
  undefined8 *local_400;
  undefined *local_3f8;
  void *local_3f0;
  byte *local_3e0;
  byte *local_3d8;
  basic_string local_200 [4];
  void *local_1f0;
  undefined2 local_1e8;
  byte *local_1e0;
  byte *local_1d8;
  undefined4 local_1c8;
  byte local_1c0;
  void *local_1b0;
  undefined2 local_1a8;
  byte *local_1a0;
  byte *local_198;
  undefined4 local_188;
  undefined auStack_180 [128];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar9 = EngineManager::getInstance();
  iVar8 = HardwareScalability::getMSAA();
  lVar10 = (**(code **)(**(long **)(this + 0x28) + 0x28))();
  if ((*(char *)(lVar10 + 0x97) == '\0') ||
     (lVar10 = (**(code **)(**(long **)(this + 0x28) + 0x28))(), *(char *)(lVar10 + 0x99) == '\0'))
  {
    SVar6 = (ShadowBufferRenderController)0x0;
  }
  else {
    SVar6 = (ShadowBufferRenderController)(*(int *)(lVar9 + 0x218) - 1U < 2);
  }
  uVar11 = (**(code **)(**(long **)(this + 0x28) + 0x138))();
  if (*(long *)(this + 0x21d8) == 0) {
    FUN_00a41de0(&local_880,0x100,"shared/blueNoise/hdr_r_64x64_%u.png",0);
    local_400 = &local_880;
    FUN_00a41de0(auStack_800,0x80,"shared/blueNoise/hdr_r_64x64_%u.png",1);
    local_3f8 = auStack_800;
    uVar12 = TextureUtil::createTextureArray
                       ((char **)&local_400,2,1,2,true,false,
                        "blue noise single channel texture array",*(IRenderDevice **)(this + 0x28),
                        false,7,(bool *)&local_100);
    *(undefined8 *)(this + 0x21d8) = uVar12;
  }
  if ((*(uint *)(this + 0x21c0) != param_1) || (*(uint *)(this + 0x21c4) != param_2)) {
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 8))();
    }
    local_84c = 0x100000001;
    local_854 = 3;
    *(uint *)(this + 0x21c0) = param_1;
    *(uint *)(this + 0x21c4) = param_2;
    local_880 = 0;
    local_878 = 0;
    uStack_86c = 0x20000000200;
    local_874 = 0xffffffffffffffff;
    uStack_85c = 0;
    local_864 = 0x100000001;
    local_850 = 0;
    uStack_83c = 0x3f80000000000000;
    local_844 = 0;
    local_834 = 0;
    local_830 = (char *)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (param_1,param_2,1,(float *)0x0,0x14,false,0,false,0x2000,
               "Noisy Shadow Results Directional",(TextureObjectDesc *)&local_880);
    uVar12 = (**(code **)(**(long **)(this + 0x28) + 0x100))
                       (*(long **)(this + 0x28),uVar11,&local_880);
    *(undefined8 *)this = uVar12;
    uStack_86c = CONCAT44(param_2 << 2,param_1 << 2);
    local_830 = "Noisy Shadow Results Spot";
    uVar12 = (**(code **)(**(long **)(this + 0x28) + 0x100))
                       (*(long **)(this + 0x28),uVar11,&local_880);
    *(undefined8 *)(this + 8) = uVar12;
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    uStack_86c = 0x20000000200;
    local_874 = 0xffffffffffffffff;
    local_854 = 3;
    local_84c = 0x100000001;
    local_880 = 0;
    local_878 = 0;
    uStack_85c = 0;
    local_864 = 0x100000001;
    local_850 = 0;
    uStack_83c = 0x3f80000000000000;
    local_844 = 0;
    local_834 = 0;
    local_830 = (char *)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)(this + 0x21c0),*(uint *)(this + 0x21c4),1,(float *)0x0,0x1b,false,0,false,
               0x2000,"Debug Output Texture",(TextureObjectDesc *)&local_880);
    uVar12 = (**(code **)(**(long **)(this + 0x28) + 0x100))
                       (*(long **)(this + 0x28),uVar11,&local_880);
    *(undefined8 *)(this + 0x10) = uVar12;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)(this + 0x21c0),*(uint *)(this + 0x21c4),1,(float *)0x0,0x1b,false,0,false,
               0x2000,"Debug Output Texture 2",(TextureObjectDesc *)&local_880);
    uVar12 = (**(code **)(**(long **)(this + 0x28) + 0x100))
                       (*(long **)(this + 0x28),uVar11,&local_880);
    *(undefined8 *)(this + 0x18) = uVar12;
    RenderDeviceUtil::buildRenderTargetDesc
              (*(uint *)(this + 0x21c0),*(uint *)(this + 0x21c4),1,(float *)0x0,0x2d,false,0,false,
               0x2000,"Debug Output Texture Uint",(TextureObjectDesc *)&local_880);
    uVar11 = (**(code **)(**(long **)(this + 0x28) + 0x100))
                       (*(long **)(this + 0x28),uVar11,&local_880);
    *(undefined8 *)(this + 0x20) = uVar11;
    if ((((*(long *)this == 0) ||
         (uVar14 = RenderDeviceUtil::makeWriteOnlyConstantBuffer
                             (*(IRenderDevice **)(this + 0x28),0x30,
                              (IConstantBuffer **)(this + 0x50)), (uVar14 & 1) == 0)) ||
        (uVar14 = RenderDeviceUtil::makeWriteOnlyConstantBuffer
                            (*(IRenderDevice **)(this + 0x28),0x544,
                             (IConstantBuffer **)(this + 0x48)), (uVar14 & 1) == 0)) ||
       (uVar14 = RenderDeviceUtil::makeWriteOnlyConstantBuffer
                           (*(IRenderDevice **)(this + 0x28),0x8c,(IConstantBuffer **)(this + 0x60))
       , (uVar14 & 1) == 0)) {
      uVar11 = 0;
      goto LAB_00a42e84;
    }
  }
  if ((iVar8 != *(int *)(this + 0x21c8)) || (this[0x21cc] != SVar6)) {
    pSVar1 = this + 0x21cc;
    *(int *)(this + 0x21c8) = iVar8;
    *pSVar1 = SVar6;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    FUN_00a42f6c(&local_100,0x80,0x80,"#define GROUP_SIZE_X %u\n #define GROUP_SIZE_Y %u\n",
                 *(undefined4 *)(this + 0x21d0),*(undefined4 *)(this + 0x21d4));
    ShaderStructLayout::ShaderStructLayout(local_8c0,"PCSSDirectionalData",0);
                    /* try { // try from 00a42044 to 00a42313 has its CatchHandler @ 00a42f58 */
    ShaderStructLayout::addField(local_8c0,"invShadowTransforms",2,4,4,true,8);
    ShaderStructLayout::addField(local_8c0,"shadowTransforms",2,0,4,true,0x18);
    ShaderStructLayout::addField(local_8c0,"shadowFocusBoxOffsetScale",2,0,4,false,0);
    ShaderStructLayout::addField(local_8c0,"shadowMapCascadeScales",2,0,4,true,2);
    ShaderStructLayout::addField(local_8c0,"shadowMapSplitDistances",2,0,4,true,2);
    ShaderStructLayout::addField(local_8c0,"lightSizes_maxPenumbraSizes",2,0,4,true,8);
    ShaderStructLayout::addField(local_8c0,"invViewProjMatrix",2,4,4,false,0);
    ShaderStructLayout::addField(local_8c0,"viewProjMatrix",2,4,4,false,0);
    ShaderStructLayout::addField(local_8c0,"invViewMatrix",2,3,4,false,0);
    ShaderStructLayout::addField(local_8c0,"lightDir",2,0,3,false,0);
    ShaderStructLayout::addField(local_8c0,"lightShadowFarDistance",2,0,0,false,0);
    ShaderStructLayout::addField(local_8c0,"cInvShadowMapSize",2,0,2,false,0);
    ShaderStructLayout::addField(local_8c0,"pcssLightSize",2,0,2,false,0);
    ShaderStructLayout::addField(local_8c0,"pcssMaxPenumbraSize",2,0,2,false,0);
    ShaderStructLayout::addField(local_8c0,"sceneDepthTextureSize",2,0,2,false,0);
    ShaderStructLayout::addField(local_8c0,"pcssLightDistance",2,0,0,false,0);
    ShaderStructLayout::addField(local_8c0,"fNumSplits",2,0,0,false,0);
    ShaderStructLayout::addField(local_8c0,"noisePhase",2,0,0,false,0);
    ShaderStructLayout::addField(local_8c0,"nearClip",2,0,0,false,0);
    ShaderStructLayout::addField(local_8c0,"uCurrentFrame",2,0,0,false,0);
                    /* try { // try from 00a42314 to 00a42327 has its CatchHandler @ 00a42f08 */
    ShaderStructLayout::ShaderStructLayout(local_900,"CloudData",0);
                    /* try { // try from 00a42328 to 00a4246b has its CatchHandler @ 00a42f24 */
    ShaderStructLayout::addField(local_900,"g_volumetricCloudWindDirection",2,0,2,false,0);
    ShaderStructLayout::addField(local_900,"g_baseCloudShapeScaling",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"g_absCloudNoiseSamplingPosition",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"g_cameraPosition",2,0,3,false,0);
    ShaderStructLayout::addField(local_900,"g_erosionScaling",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"g_erosionWeight",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"g_coverageScaling",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"cloudShadowsSizeScale",2,0,0,false,0);
    ShaderStructLayout::addField(local_900,"cloudShadowsDensityScale",2,0,0,false,0);
                    /* try { // try from 00a4246c to 00a4247f has its CatchHandler @ 00a42f00 */
    ShaderStructLayout::ShaderStructLayout(local_940,"ScreenSpaceShadowsData",0);
                    /* try { // try from 00a42480 to 00a4257b has its CatchHandler @ 00a42f18 */
    ShaderStructLayout::addField(local_940,"ShadowingPercentage",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"MaximumDepthDifference",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"MinimumDepthDifference",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"MaximumSampleDistance",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"MaximumDepthDifferenceDepthScale",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"MaximumSampleDistanceDepthScale",2,0,0,false,0);
    ShaderStructLayout::addField(local_940,"NumSamples",2,0,0,false,0);
                    /* try { // try from 00a4257c to 00a425af has its CatchHandler @ 00a42efc */
    FUN_00a42f6c(&local_880,0x200,0x200,"%s%s%s%s",&local_100,
                 "\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n#define DEPTH_SHADOW_MAP\n#define NUM_DIRECTIONAL_LIGHTS 1\n#define NUM_DIRECTIONAL_LIGHTS_SHADOW 1\n"
                 ,"\n#define USE_DENOISING_DEBUG_TEXTURE\n",&DAT_0050a39f);
                    /* try { // try from 00a425c8 to 00a425df has its CatchHandler @ 00a42ef8 */
    FUN_00a42f6c(auStack_180,0x80,0x80,"\n#define TILE_SIZE_X %u\n#define TILE_SIZE_Y %u",
                 FFXShadowDenoiser::DENOISER_TILE_SIZE_X,FFXShadowDenoiser::DENOISER_TILE_SIZE_Y);
                    /* try { // try from 00a425e0 to 00a425f3 has its CatchHandler @ 00a42ef4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_200);
    local_1e8 = local_8a8;
                    /* try { // try from 00a42604 to 00a42607 has its CatchHandler @ 00a42edc */
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::vector((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
             &local_1e0,(vector *)&local_8a0);
    local_1c8 = local_888;
                    /* try { // try from 00a42618 to 00a42623 has its CatchHandler @ 00a42ed4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_1c0);
    local_1a8 = local_8e8;
                    /* try { // try from 00a42638 to 00a4263b has its CatchHandler @ 00a42ebc */
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::vector((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
             &local_1a0,(vector *)&local_8e0);
    this_00 = this + 0xc0;
    bVar7 = true;
    local_188 = local_8c8;
    uVar14 = 0;
    do {
      __strcpy_chk(&local_400,&local_880,0x200);
      uVar15 = (uint)uVar14;
      pcVar2 = "\n#define NUM_SHADOW_FOCUS_BOXES 0";
      if ((uVar14 & 1) != 0) {
        pcVar2 = "\n#define NUM_SHADOW_FOCUS_BOXES 1";
      }
      __strcat_chk(&local_400,pcVar2,0x200);
      if ((uVar15 >> 1 & 1) != 0) {
        __strcat_chk(&local_400,auStack_180,0x200);
        __strcat_chk(&local_400,"\n#define BINARY_HIT_BITMASK",0x200);
      }
      if ((uVar15 >> 2 & 1) != 0) {
        __strcat_chk(&local_400,"\n#define CLOUD_SHADOWS",0x200);
                    /* try { // try from 00a426dc to 00a426f3 has its CatchHandler @ 00a42f20 */
        FUN_00a42f6c(auStack_480,0x80,0x80,"\n#define ALIAS_TABLE_SIZE %d",0x80);
        __strcat_chk(&local_400,auStack_480,0x200);
      }
      if ((uVar15 >> 3 & 1) != 0) {
        __strcat_chk(&local_400,"\n#define MSAA",0x200);
      }
      if ((uVar15 >> 4 & 1) != 0) {
        __strcat_chk(&local_400,"\n#define SCREEN_SPACE_SHADOWS",0x200);
      }
                    /* try { // try from 00a42738 to 00a42753 has its CatchHandler @ 00a42f2c */
      uVar13 = AdhocShader::load((AdhocShader *)this_00,*(IRenderDevice **)(this + 0x28),
                                 "computeShadowBufferDirectional_cs.cg",(char *)&local_400,uVar15,
                                 (ShaderStructLayout *)local_200,2);
      pbVar5 = local_1a0;
      if ((uVar13 & 1) == 0) break;
      uVar13 = uVar14 + 1;
      bVar7 = uVar14 < 0x1f;
      this_00 = (ShadowBufferRenderController *)((AdhocShader *)this_00 + 0x100);
      uVar14 = uVar13;
    } while (uVar13 != 0x20);
    if (local_1a0 != (byte *)0x0) {
      while (pbVar4 = local_198, pbVar4 != pbVar5) {
        local_198 = pbVar4 + -0x20;
        if ((*local_198 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_198 = pbVar5;
      operator_delete(local_1a0);
    }
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
    pbVar5 = local_1e0;
    if (local_1e0 != (byte *)0x0) {
      while (pbVar4 = local_1d8, pbVar4 != pbVar5) {
        local_1d8 = pbVar4 + -0x20;
        if ((*local_1d8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_1d8 = pbVar5;
      operator_delete(local_1e0);
    }
    if (((byte)local_200[0]._0_1_ & 1) != 0) {
      operator_delete(local_1f0);
    }
    pbVar5 = local_920;
    if (local_920 != (byte *)0x0) {
      while (pbVar4 = local_918, pbVar4 != pbVar5) {
        local_918 = pbVar4 + -0x20;
        if ((*local_918 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_918 = pbVar5;
      operator_delete(local_920);
    }
    if (((byte)local_940[0] & 1) != 0) {
      operator_delete(local_930);
    }
    pbVar5 = local_8e0;
    if (local_8e0 != (byte *)0x0) {
      while (pbVar4 = local_8d8, pbVar4 != pbVar5) {
        local_8d8 = pbVar4 + -0x20;
        if ((*local_8d8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_8d8 = pbVar5;
      operator_delete(local_8e0);
    }
    if (((byte)local_900[0] & 1) != 0) {
      operator_delete(local_8f0);
    }
    pbVar5 = local_8a0;
    if (local_8a0 != (byte *)0x0) {
      while (pbVar4 = local_898, pbVar4 != pbVar5) {
        local_898 = pbVar4 + -0x20;
        if ((*local_898 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_898 = pbVar5;
      operator_delete(local_8a0);
    }
    if (((byte)local_8c0[0] & 1) != 0) {
      operator_delete(local_8b0);
    }
    if (bVar7) {
      uVar11 = 0;
      goto LAB_00a42e84;
    }
    ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_400,"SpotCB",0);
                    /* try { // try from 00a42c3c to 00a42d63 has its CatchHandler @ 00a42f0c */
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"invViewProjMatrix",2,4,4,false,0)
    ;
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"invViewMatrix",2,3,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"cInvShadowMapSize",2,0,2,false,0)
    ;
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"clusterPosScale",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"clusterZScale",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"clusterZOffset",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"cNumLightWords",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_400,"cLightOffset",2,0,0,false,0);
    ShaderStructLayout::endDefinition();
    memset(&local_880,0,0x400);
    if (*(uint *)(this + 0x21c8) < 2) {
      FUN_00a41de0(&local_880,0x400,
                   "%s\n%s\n%s\n#define DEPTH_SHADOW_MAP\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n"
                   ,&local_100,"\n#define USE_DENOISING_DEBUG_TEXTURE\n",&DAT_0050a39f);
      uVar15 = 2;
      if (*pSVar1 == (ShadowBufferRenderController)0x0) {
        uVar15 = 3;
      }
    }
    else {
                    /* try { // try from 00a42d80 to 00a42e1f has its CatchHandler @ 00a42eb8 */
      FUN_00a41de0(&local_880,0x400,
                   "%s\n%s\n%s\n#define DEPTH_SHADOW_MAP\n#define MSAA\n#define SSP_SHADOW_MAP_DIRECTIONAL_LIGHT0\n"
                   ,&local_100,"\n#define USE_DENOISING_DEBUG_TEXTURE\n",&DAT_0050a39f);
      uVar15 = (byte)*pSVar1 ^ 1;
    }
    AdhocShader::load((AdhocShader *)(this + 0x20c0),*(IRenderDevice **)(this + 0x28),
                      "computeShadowBufferSpot_cs.cg",(char *)&local_880,uVar15,
                      (ShaderStructLayout *)&local_400,1);
    pbVar5 = local_3e0;
    if (local_3e0 != (byte *)0x0) {
      while (pbVar4 = local_3d8, pbVar4 != pbVar5) {
        local_3d8 = pbVar4 + -0x20;
        if ((*local_3d8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
      }
      local_3d8 = pbVar5;
      operator_delete(local_3e0);
    }
    if (((ulong)local_400 & 1) != 0) {
      operator_delete(local_3f0);
    }
  }
  uVar11 = 1;
LAB_00a42e84:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


