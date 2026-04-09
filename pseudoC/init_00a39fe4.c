// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a39fe4
// Size: 4412 bytes
// Signature: undefined __cdecl init(IRenderDevice * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float * param_6, PIXEL_FORMAT param_7, bool param_8, PIXEL_FORMAT param_9, uint param_10, POST_PROCESS_ANTI_ALIASING param_11, DLSS_QUALITY param_12, FIDELITY_FX_SR param_13, XESS_QUALITY param_14, FIDELITY_FX_SR_20 param_15, QUALCOMM_SGSR_QUALITY param_16, uint param_17, uint param_18, uint param_19, bool param_20, uint param_21, bool param_22, bool param_23, bool param_24, bool param_25, float param_26, bool param_27, bool param_28, VALAR_SHADING_RATE_QUALITY param_29, char * param_30)


/* ScreenSpaceProcessor::init(IRenderDevice*, unsigned int, unsigned int, unsigned int, unsigned
   int, float const*, PixelFormat::PIXEL_FORMAT, bool, PixelFormat::PIXEL_FORMAT, unsigned int,
   HardwareScalability::POST_PROCESS_ANTI_ALIASING, HardwareScalability::DLSS_QUALITY,
   HardwareScalability::FIDELITY_FX_SR, HardwareScalability::XESS_QUALITY,
   HardwareScalability::FIDELITY_FX_SR_20, HardwareScalability::QUALCOMM_SGSR_QUALITY, unsigned int,
   unsigned int, unsigned int, bool, unsigned int, bool, bool, bool, bool, float, bool, bool,
   HardwareScalability::VALAR_SHADING_RATE_QUALITY, char const*) */

bool ScreenSpaceProcessor::init
               (IRenderDevice *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               float *param_6,PIXEL_FORMAT param_7,bool param_8,PIXEL_FORMAT param_9,uint param_10,
               POST_PROCESS_ANTI_ALIASING param_11,DLSS_QUALITY param_12,FIDELITY_FX_SR param_13,
               XESS_QUALITY param_14,FIDELITY_FX_SR_20 param_15,QUALCOMM_SGSR_QUALITY param_16,
               uint param_17,uint param_18,uint param_19,bool param_20,uint param_21,bool param_22,
               bool param_23,bool param_24,bool param_25,float param_26,bool param_27,bool param_28,
               VALAR_SHADING_RATE_QUALITY param_29,char *param_30)

{
  IRenderDevice *pIVar1;
  IRenderDevice IVar2;
  PIXEL_FORMAT PVar3;
  ScreenSpaceProcessor *pSVar4;
  POST_PROCESS_ANTI_ALIASING PVar5;
  FIDELITY_FX_SR FVar6;
  POST_PROCESS_ANTI_ALIASING PVar7;
  uint uVar8;
  XESS_QUALITY XVar9;
  FIDELITY_FX_SR_20 FVar10;
  IRenderDevice IVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ScreenSpaceProcessor *this;
  long *plVar19;
  undefined8 uVar20;
  ResourceManager *this_00;
  long *plVar21;
  uint uVar22;
  float *pfVar23;
  IRenderDevice IVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined3 in_stack_00000059;
  undefined3 in_stack_00000069;
  long in_stack_000000a8;
  uint local_4e8;
  bool local_4a4 [4];
  undefined8 local_4a0;
  undefined2 local_498;
  undefined2 uStack_496;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined8 uStack_48c;
  undefined8 local_484;
  undefined8 uStack_47c;
  undefined4 local_474;
  undefined local_470;
  undefined8 local_46c;
  undefined8 local_464;
  undefined8 uStack_45c;
  undefined4 local_454;
  undefined8 *local_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined2 uStack_43e;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined local_418;
  undefined8 local_414;
  undefined8 local_40c;
  undefined8 uStack_404;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined **local_3f0;
  undefined2 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  uint local_3c0;
  uint uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  char *local_3a0;
  undefined **local_398;
  undefined uStack_390;
  undefined uStack_38f;
  undefined4 uStack_38c;
  undefined2 uStack_388;
  undefined2 uStack_386;
  uint uStack_384;
  uint uStack_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  uint local_368;
  uint local_364;
  undefined4 uStack_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  char *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  
  pfVar23 = (float *)(ulong)param_7;
  plVar21 = (long *)(ulong)param_2;
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  if (param_13 == 5) {
    local_4e8 = param_14;
  }
  else {
    param_16 = 0;
    param_12 = 0;
    local_4e8 = 0;
    param_15 = 4;
  }
  pIVar1 = param_1 + 0x1879;
  if (!param_28) {
    param_18 = 0;
  }
  if (param_25) {
    bVar15 = 1;
  }
  else {
    bVar15 = (_param_22 | _param_20) != 0 | param_12 - 1 < 2 | (byte)param_21;
  }
  lVar25 = *(long *)(param_1 + 0x1b18);
  bVar13 = true;
  uVar22 = (uint)param_6;
  if (((*(uint *)(param_1 + 0x1868) == param_3) && (*(uint *)(param_1 + 0x186c) == param_4)) &&
     (*(uint *)(param_1 + 0x1870) == param_5)) {
    bVar13 = *(uint *)(param_1 + 0x1874) != uVar22;
  }
  PVar5 = *(POST_PROCESS_ANTI_ALIASING *)(param_1 + 0x1b60);
  lVar27 = *(long *)(param_1 + 0x1b20);
  FVar6 = *(FIDELITY_FX_SR *)(param_1 + 0x1b4c);
  PVar7 = *(POST_PROCESS_ANTI_ALIASING *)(param_1 + 0x1b48);
  uVar8 = *(uint *)(param_1 + 7000);
  XVar9 = *(XESS_QUALITY *)(param_1 + 0x1b50);
  FVar10 = *(FIDELITY_FX_SR_20 *)(param_1 + 0x1b54);
  uVar16 = *(uint *)(param_1 + 0x1b5c);
  bVar14 = RenderQueueUtil::getNeedsMotionVectors
                     (param_12,param_13,param_15,param_16,(VALAR_SHADING_RATE_QUALITY)param_30);
  IVar24 = param_1[0x1908];
  param_1[0x1908] = SUB41(param_29 & 1,0);
  IVar11 = param_1[0x1b78];
  IVar2 = (IRenderDevice)(bVar14 & 1);
  uVar18 = (**(code **)(*plVar21 + 0x138))(plVar21);
  if ((((bVar13) || (PVar5 != param_11)) ||
      ((param_12 != PVar7 || ((FVar6 != param_13 || (local_4e8 != uVar8)))))) ||
     ((param_15 != XVar9 ||
      (((((param_16 != FVar10 || (uVar16 != param_17)) || (((bVar15 ^ lVar25 == 0) & 1) == 0)) ||
        ((lVar27 != 0 || (*pIVar1 != (IRenderDevice)param_28)))) ||
       ((uint)(byte)IVar24 != (param_29 & 1))))))) {
    plVar19 = *(long **)(param_1 + 0x1890);
    plVar26 = *(long **)(param_1 + 0x18b0);
    *(uint *)(param_1 + 0x1868) = param_3;
    *(uint *)(param_1 + 0x186c) = param_4;
    *(uint *)(param_1 + 0x1870) = param_5;
    *(uint *)(param_1 + 0x1874) = uVar22;
    *(POST_PROCESS_ANTI_ALIASING *)(param_1 + 0x1b60) = param_11;
    if (plVar19 != plVar26) {
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 8))(plVar26);
        plVar19 = *(long **)(param_1 + 0x1890);
      }
      *(undefined8 *)(param_1 + 0x18b0) = 0;
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
    plVar19 = *(long **)(param_1 + 0x18d8);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    plVar26 = *(long **)(param_1 + 0x18e0);
    if ((plVar19 != plVar26) && (plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 8))(plVar26);
      plVar19 = *(long **)(param_1 + 0x18d8);
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
    if (*(long **)(param_1 + 0x18e8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18e8) + 8))();
    }
    if (*(long **)(param_1 + 0x18d0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18d0) + 8))();
    }
    param_1[0x1b78] = (IRenderDevice)0x0;
    if (*(long **)(param_1 + 0x1b18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b18) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1b18) = 0;
    if (*(long **)(param_1 + 0x1b20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b20) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1b20) = 0;
    *(undefined8 *)(param_1 + 0x188c) = 0;
    *(undefined8 *)(param_1 + 0x1884) = 0;
    *(undefined8 *)(param_1 + 0x189c) = 0;
    *(undefined8 *)(param_1 + 0x1894) = 0;
    *(undefined8 *)(param_1 + 0x18ac) = 0;
    *(undefined8 *)(param_1 + 0x18a4) = 0;
    *(undefined8 *)(param_1 + 0x18bc) = 0;
    *(undefined8 *)(param_1 + 0x18b4) = 0;
    *(undefined8 *)(param_1 + 0x18cc) = 0;
    *(undefined8 *)(param_1 + 0x18c4) = 0;
    *(undefined2 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x18dc) = 0;
    *(undefined8 *)(param_1 + 0x18d4) = 0;
    *(undefined8 *)(param_1 + 0x18ec) = 0;
    *(undefined8 *)(param_1 + 0x18e4) = 0;
    *(undefined4 *)(param_1 + 0x18f4) = 0;
    *(undefined8 *)(param_1 + 0x1978) = 0;
    *(undefined8 *)(param_1 + 0x1970) = 0;
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
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    local_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    local_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    local_310 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    local_340 = 0;
    if (in_stack_000000a8 != 0) {
      FUN_00a3b120(&local_c0,0x40,0x40,"%s Color Render Target",in_stack_000000a8);
      FUN_00a3b120(&local_100,0x40,0x40,"%s Color Resolve Target",in_stack_000000a8);
      FUN_00a3b120(&local_140,0x40,0x40,"%s Depth Render Target",in_stack_000000a8);
      FUN_00a3b120(&local_180,0x40,0x40,"%s Depth Resolve Target",in_stack_000000a8);
      FUN_00a3b120(&local_1c0,0x40,0x40,"%s ZFill Color Render Target",in_stack_000000a8);
      FUN_00a3b120(&local_200,0x40,0x40,"%s Motion Vectors Render Target",in_stack_000000a8);
      FUN_00a3b120(&local_240,0x40,0x40,"%s Output Color Render Target 0",in_stack_000000a8);
      FUN_00a3b120(&local_280,0x40,0x40,"%s Output Color Render Target 1",in_stack_000000a8);
      FUN_00a3b120(&local_2c0,0x40,0x40,"%s Output Color Render Target 2",in_stack_000000a8);
      FUN_00a3b120(&local_300,0x40,0x40,"%s Output Linearized Depth Render Target 0",
                   in_stack_000000a8);
      FUN_00a3b120(&local_340,0x40,0x40,"%s Output Linearized Depth Render Target 1",
                   in_stack_000000a8);
    }
    uVar8 = 0x20120;
    local_36c = 3;
    local_3c4 = 3;
    if (param_11 < 2) {
      uVar8 = 0x100;
    }
    uStack_390 = 0;
    uStack_38f = 0;
    uStack_384 = 0x200;
    uStack_380 = 0x200;
    uStack_38c = 0xffffffff;
    uStack_388 = 0xffff;
    uStack_386 = 0xffff;
    uStack_374 = 0;
    uStack_370 = 0;
    local_37c = 1;
    uStack_378 = 1;
    local_368 = local_368 & 0xffffff00;
    local_364 = 1;
    uStack_360 = 1;
    uStack_354 = 0;
    uStack_350 = 0x3f800000;
    local_35c = 0;
    uStack_358 = 0;
    local_34c = 0;
    local_348 = (char *)0x0;
    local_3f0 = (undefined **)0x0;
    uStack_3e8 = 0;
    uStack_3dc = 0x200;
    uStack_3d8 = 0x200;
    uStack_3e4 = 0xffffffff;
    uStack_3e0 = 0xffffffff;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3d4 = 1;
    uStack_3d0 = 1;
    local_3c0 = local_3c0 & 0xffffff00;
    uStack_3bc = 1;
    uStack_3b8 = 1;
    uStack_3ac = 0;
    uStack_3a8 = 0x3f800000;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3a4 = 0;
    local_3a0 = (char *)0x0;
    local_398 = (undefined **)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (param_3,param_4,1,pfVar23,(uint)param_8,(bool)((byte)param_9 & 1),param_11,false,
               uVar8,(char *)&local_c0,(TextureObjectDesc *)&local_398);
    RenderDeviceUtil::buildResolvedRenderTargetDescs
              (0,false,(char *)&local_100,(IRenderDevice *)plVar21,(TextureObjectDesc *)&local_398,
               (TextureObjectDesc *)&local_3f0,local_4a4);
    if (((((param_4 != uVar22) || (param_3 != param_5)) || (param_15 != 4)) ||
        ((param_13 != 5 || ((param_12 | param_18) != 0)))) ||
       ((param_28 ||
        (((param_21 & 1) != 0 || (plVar19 = *(long **)(param_1 + 0x1858), plVar19 == (long *)0x0))))
       )) {
      *(undefined4 *)(param_1 + 0x188c) = 1;
LAB_00a3a700:
      this = (ScreenSpaceProcessor *)(**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_398);
      IVar24 = (IRenderDevice)0x1;
    }
    else {
      iVar17 = (**(code **)(*plVar19 + 0x48))(plVar19,*(undefined4 *)(param_1 + 0x1860));
      *(undefined4 *)(param_1 + 0x188c) = 1;
      if ((((iVar17 != 0) || (*(long **)(param_1 + 0x1858) == (long *)0x0)) ||
          (lVar25 = (**(code **)(**(long **)(param_1 + 0x1858) + 0xb8))(), lVar25 == 0)) ||
         ((uVar16 = (**(code **)(**(long **)(param_1 + 0x1858) + 0x90))
                              (*(long **)(param_1 + 0x1858),*(undefined4 *)(param_1 + 0x1860)),
          uVar16 != param_3 ||
          (uVar16 = (**(code **)(**(long **)(param_1 + 0x1858) + 0x98))
                              (*(long **)(param_1 + 0x1858),*(undefined4 *)(param_1 + 0x1860)),
          uVar16 != param_4)))) goto LAB_00a3a700;
      this = (ScreenSpaceProcessor *)(**(code **)(**(long **)(param_1 + 0x1858) + 0xb8))();
      IVar24 = (IRenderDevice)0x0;
    }
    *(ScreenSpaceProcessor **)(param_1 + 0x1890) = this;
    param_1[0x187d] = IVar24;
    if (param_12 == 0) {
      if (local_4a4[0] != false) {
        this = (ScreenSpaceProcessor *)(**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_3f0);
      }
      *(ScreenSpaceProcessor **)(param_1 + 0x18b0) = this;
    }
    else {
      pSVar4 = (ScreenSpaceProcessor *)0x0;
      if (1 < param_12 - 1) {
        pSVar4 = this;
      }
      *(undefined2 *)(param_1 + 0x1880) = 0x101;
      *(ScreenSpaceProcessor **)(param_1 + 0x18b0) = pSVar4;
    }
    param_1[0x1b78] = IVar2;
    if (IVar2 == (IRenderDevice)0x0) {
      IVar24 = (IRenderDevice)0x1;
    }
    else {
      uStack_434 = 0;
      uStack_430 = 0;
      local_42c = 0;
      uStack_428 = 0x3f800000;
      uStack_424 = 0;
      uStack_420 = *(undefined4 *)(param_1 + 0x1b60);
      local_448 = CONCAT44(param_4,param_3);
      uStack_438 = 0;
      local_440 = 1;
      uStack_43e = 0;
      uStack_43c = 0x18;
      bVar14 = createRenderTexture(this,(IRenderDevice *)plVar21,
                                   (PostFxRenderTextureAttachmentDesc *)&local_448,
                                   "Motion Vector Target",(ITextureObject **)(param_1 + 0x18d0));
      IVar24 = (IRenderDevice)(bVar14 & 1);
    }
    uStack_434 = 0x200;
    uStack_430 = 0x200;
    uStack_43c = 0xffffffff;
    uStack_438 = 0xffffffff;
    local_41c = 3;
    local_414 = 0x100000001;
    uStack_424 = 0;
    uStack_420 = 0;
    local_42c = 1;
    uStack_428 = 1;
    local_3f8 = 0;
    uStack_404 = 0x3f80000000000000;
    local_40c = 0;
    local_448 = 0;
    local_440 = 0;
    local_418 = 0;
    local_3fc = 0;
    RenderDeviceUtil::buildRenderTargetDesc
              (param_3,param_4,1,(float *)0x0,param_10,false,param_11,false,uVar8,(char *)&local_140
               ,(TextureObjectDesc *)&local_448);
    uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_448);
    *(undefined8 *)(param_1 + 0x18d8) = uVar20;
    if ((param_29 & 1) != 0) {
      uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_448);
      *(undefined8 *)(param_1 + 0x18f0) = uVar20;
    }
    *(undefined8 *)(param_1 + 0x18e0) = 0;
    if ((bVar15 & 1) != 0) {
      uStack_48c = 0x20000000200;
      uStack_494 = 0xffffffff;
      uStack_490 = 0xffffffff;
      local_474 = 3;
      local_46c = 0x100000001;
      uStack_47c = 0;
      local_484 = 0x100000001;
      uStack_45c = 0x3f80000000000000;
      local_464 = 0;
      local_4a0 = 0;
      local_498 = 0;
      local_470 = 0;
      local_454 = 0;
      local_450 = (undefined8 *)0x0;
      RenderDeviceUtil::buildRenderTargetDesc
                (param_3,param_4,1,(float *)0x0,0x14,false,0,false,0,(char *)&local_300,
                 (TextureObjectDesc *)&local_4a0);
      local_46c = CONCAT44(local_46c._4_4_,0x2001);
      uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_4a0);
      *(undefined4 *)(param_1 + 0x1b38) = 0;
      *(undefined8 *)(param_1 + 0x1b18) = uVar20;
    }
    *(undefined4 *)(param_1 + 0x18f8) = 0;
    if (((param_16 == 0) && (param_13 == 5)) && (param_15 == 4)) {
      uVar8 = param_12 - 1;
      uStack_48c = 0x20000000200;
      uStack_494 = 0xffffffff;
      uStack_490 = 0xffffffff;
      local_474 = 3;
      uStack_47c = 0;
      local_484 = 0x100000001;
      local_46c = 0x100000001;
      uStack_45c = 0x3f80000000000000;
      local_464 = 0;
      local_4a0 = 0;
      PVar3 = 0x15;
      if (1 < uVar8) {
        PVar3 = (uint)param_8;
      }
      local_498 = 0;
      local_470 = 0;
      local_454 = 0;
      local_450 = (undefined8 *)0x0;
      RenderDeviceUtil::buildRenderTargetDesc
                (param_3,param_4,1,pfVar23,PVar3,(bool)((byte)param_9 & 1),1,false,
                 (uint)(uVar8 < 3) << 0xd,(char *)&local_240,(TextureObjectDesc *)&local_4a0);
      uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_4a0);
      *(undefined8 *)(param_1 + 0x1920) = uVar20;
      if (uVar8 < 2) {
        local_450 = &local_280;
        uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_4a0);
        *(undefined8 *)(param_1 + 0x1928) = uVar20;
      }
    }
    *(DLSS_QUALITY *)(param_1 + 0x1b48) = param_12;
    *(FIDELITY_FX_SR *)(param_1 + 0x1b4c) = param_13;
    *(QUALCOMM_SGSR_QUALITY *)(param_1 + 0x1b54) = param_16;
    *(FIDELITY_FX_SR_20 *)(param_1 + 0x1b50) = param_15;
    *(uint *)(param_1 + 7000) = local_4e8;
    *(uint *)(param_1 + 0x1b5c) = param_17;
    if (*(long **)(param_1 + 0x19e8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x19e8) + 8))();
    }
    local_4a0 = CONCAT44(local_4a0._4_4_,0x18);
    local_498 = 0;
    uStack_496 = 0;
    uStack_494 = 0;
    uStack_490 = 8;
    uVar20 = (**(code **)(*plVar21 + 0x118))(plVar21,uVar18,&local_4a0);
    bVar13 = IVar24 != (IRenderDevice)0x0;
    *(undefined8 *)(param_1 + 0x19e8) = uVar20;
    param_1[0x187c] = (IRenderDevice)0x0;
    param_1[0x187b] = IVar24;
    param_1[0x187a] = (IRenderDevice)0x1;
  }
  else {
    bVar13 = true;
  }
  plVar19 = *(long **)(param_1 + 0x1858);
  if (plVar19 == (long *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = (**(code **)(*plVar19 + 0x50))(plVar19,*(undefined4 *)(param_1 + 0x1860));
  }
  if ((((param_1[0x187c] != (IRenderDevice)0x0) && (param_18 == *(uint *)(param_1 + 0x1b3c))) &&
      (*(uint *)(param_1 + 0x1a08) == param_19)) &&
     ((((*(uint *)(param_1 + 0x1b40) == _param_20 && (*(float *)(param_1 + 0x1b68) == 0.5)) &&
       ((((uint)(byte)param_1[0x1b44] == (param_21 & 1) &&
         ((param_1[0x1b64] == (IRenderDevice)param_24 &&
          (param_1[0x1b65] == (IRenderDevice)param_27)))) && (IVar11 == IVar2)))) &&
      (((*pIVar1 == (IRenderDevice)param_28 && (iVar17 == *(int *)(param_1 + 0x1864))) &&
       (*(uint *)(param_1 + 0x1b5c) == param_17)))))) goto LAB_00a3b02c;
  *pIVar1 = (IRenderDevice)param_28;
  if (param_28) {
    if ((param_1[0x1b64] != (IRenderDevice)param_24) ||
       ((*(long *)(param_1 + 0x1a30) == 0 && (!param_24)))) {
      bVar15 = initLuminance((ScreenSpaceProcessor *)param_1,(IRenderDevice *)plVar21,param_24);
      bVar13 = (bool)(bVar13 & bVar15);
    }
  }
  else {
    if (*(long **)(param_1 + 0x1a30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1a30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1a30) = 0;
    if (*(long **)(param_1 + 0x1a38) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1a38) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1a38) = 0;
    if (*(long **)(param_1 + 0x1a40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1a40) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1a40) = 0;
  }
  if ((param_18 != *(uint *)(param_1 + 0x1b3c)) || (*(uint *)(param_1 + 0x1a08) != param_19)) {
    bVar15 = initBloom((ScreenSpaceProcessor *)param_1,(IRenderDevice *)plVar21,param_18,param_19);
    bVar13 = (bool)(bVar13 & bVar15);
  }
  if (((((uint)(byte)param_1[0x1b44] != (param_21 & 1)) ||
       (param_1[0x1b65] != (IRenderDevice)param_27)) || (PVar5 != param_11)) ||
     ((param_12 != PVar7 || (IVar11 != IVar2)))) {
    bVar15 = initDOF((ScreenSpaceProcessor *)param_1,(IRenderDevice *)plVar21,SUB41(param_21 & 1,0),
                     param_27);
    bVar13 = (bool)(bVar13 & bVar15);
  }
  if ((*(uint *)(param_1 + 0x1b40) == _param_20) && (*(float *)(param_1 + 0x1b68) == 0.5)) {
    *(int *)(param_1 + 0x1864) = iVar17;
    if (_param_20 != 0) goto LAB_00a3ad70;
LAB_00a3ad60:
    if ((*(long *)(param_1 + 0x1b70) != 0) && (*(int *)(*(long *)(param_1 + 0x1b70) + 0x97c) != 0))
    goto LAB_00a3ad70;
    if (*(long **)(param_1 + 0x1b28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b28) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1b28) = 0;
    if (*(long **)(param_1 + 0x1b30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1b30) = 0;
    plVar19 = *(long **)(param_1 + 0x1910);
  }
  else {
    bVar15 = initSSAO((ScreenSpaceProcessor *)param_1,(IRenderDevice *)plVar21,_param_20 != 0,0.5);
    bVar13 = (bool)(bVar13 & bVar15);
    *(uint *)(param_1 + 0x1b40) = _param_20;
    *(undefined4 *)(param_1 + 0x1b68) = 0x3f000000;
    *(int *)(param_1 + 0x1864) = iVar17;
    if (_param_20 == 0) goto LAB_00a3ad60;
LAB_00a3ad70:
    if (*(long **)(param_1 + 0x1b28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b28) + 8))();
    }
    uVar8 = param_3 + 1 >> 1;
    uVar16 = param_4 + 1 >> 1;
    *(undefined8 *)(param_1 + 0x1b28) = 0;
    if (*(long **)(param_1 + 0x1b30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1b30) = 0;
    local_398 = (undefined **)0x0;
    uStack_390 = 0;
    uStack_38f = 0;
    local_36c = 0x14;
    uStack_354 = 0;
    uStack_350 = 0x3f800000;
    local_35c = 0;
    uStack_358 = 0;
    uStack_374 = 0;
    uStack_370 = 0;
    local_37c = 1;
    uStack_378 = 1;
    local_368 = local_368 & 0xffffff00;
    local_34c = 0;
    local_348 = "Half Res Linearized Scene Depth Texture";
    local_364 = 0x2001;
    uStack_360 = 1;
    uStack_38c = 0;
    uStack_388 = 0xffff;
    uStack_386 = 0xffff;
    uStack_384 = uVar8;
    uStack_380 = uVar16;
    uVar20 = (**(code **)(*plVar21 + 0x138))(plVar21);
    uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar20,&local_398);
    *(undefined8 *)(param_1 + 0x1b28) = uVar20;
    local_3c4 = 0x15;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3d4 = 1;
    uStack_3d0 = 1;
    local_3f0 = (undefined **)0x0;
    uStack_3e8 = 0;
    local_3c0 = local_3c0 & 0xffffff00;
    uStack_3ac = 0;
    uStack_3a8 = 0x3f800000;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3a4 = 0;
    local_3a0 = "Half Res Scene Normals Texture";
    uStack_3bc = 0x2001;
    uStack_3b8 = 1;
    uStack_3e4 = 0;
    uStack_3e0 = 0xffffffff;
    uStack_3dc = uVar8;
    uStack_3d8 = uVar16;
    uVar20 = (**(code **)(*plVar21 + 0x138))(plVar21);
    uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar20,&local_3f0);
    *(undefined8 *)(param_1 + 0x1b30) = uVar20;
    plVar19 = *(long **)(param_1 + 0x1910);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))();
  }
  *(undefined8 *)(param_1 + 0x1910) = 0;
  if (*(long **)(param_1 + 0x1918) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1918) + 8))();
  }
  *(undefined8 *)(param_1 + 0x1918) = 0;
  if ((local_4e8 | param_17) != 0) {
    uStack_384 = 0x200;
    uStack_380 = 0x200;
    uStack_38c = 0xffffffff;
    uStack_388 = 0xffff;
    uStack_386 = 0xffff;
    local_398 = (undefined **)0x0;
    uStack_390 = 0;
    uStack_38f = 0;
    local_364 = 1;
    uStack_360 = 1;
    local_36c = 3;
    uStack_374 = 0;
    uStack_370 = 0;
    local_37c = 1;
    uStack_378 = 1;
    local_368 = local_368 & 0xffffff00;
    uStack_354 = 0;
    uStack_350 = 0x3f800000;
    local_35c = 0;
    uStack_358 = 0;
    local_34c = 0;
    local_348 = (char *)0x0;
    RenderDeviceUtil::buildRenderTargetDesc
              (param_3,param_4,1,pfVar23,0x20,false,1,false,0,"FSR/SGSR Tonemapped Target",
               (TextureObjectDesc *)&local_398);
    uVar20 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_398);
    *(undefined8 *)(param_1 + 0x1918) = uVar20;
    uStack_3c8 = uStack_370;
    local_3c4 = local_36c;
    uStack_3d0 = uStack_378;
    uStack_3cc = uStack_374;
    local_3a0 = "FSR/SGSR Resolve Target";
    uStack_3b8 = uStack_360;
    uStack_3b4 = local_35c;
    uStack_3e8 = CONCAT11(uStack_38f,uStack_390);
    uStack_3e0 = CONCAT22(uStack_386,uStack_388);
    uStack_3a8 = uStack_350;
    uStack_3a4 = local_34c;
    uStack_3b0 = uStack_358;
    uStack_3ac = uStack_354;
    local_3c0 = local_368 & 0xffffff00;
    uStack_3e4 = uStack_38c;
    local_3f0 = local_398;
    uStack_3d4 = local_37c;
    uStack_3bc = local_364 | 0x2000;
    uStack_3dc = param_5;
    uStack_3d8 = uVar22;
    uVar18 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar18,&local_3f0);
    *(undefined8 *)(param_1 + 0x1910) = uVar18;
  }
  param_1[0x187a] = (IRenderDevice)0x1;
  bVar15 = createShaders((ScreenSpaceProcessor *)param_1,(IRenderDevice *)plVar21);
  bVar13 = (bool)(bVar13 & bVar15);
  param_1[0x187c] = (IRenderDevice)(bVar15 & 1);
LAB_00a3b02c:
  if (((*(AtmosphereRenderController **)(param_1 + 0x1b70) != (AtmosphereRenderController *)0x0) &&
      (AtmosphereRenderController::init
                 (*(AtmosphereRenderController **)(param_1 + 0x1b70),(IRenderDevice *)plVar21,
                  _param_22,param_3,param_4,param_23), _param_22 != 0)) &&
     (*(long *)(param_1 + 0x1b80) == 0)) {
    uStack_390 = 1;
    uStack_38c = 0;
    uStack_388 = 0;
    local_398 = &PTR__ResourceDesc_00fd99b0;
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    uVar18 = ResourceManager::get
                       (this_00,"shared/blueNoise/ldr_rgba_64x64.png",2,(ResourceDesc *)&local_398,1
                        ,true,true);
    *(undefined8 *)(param_1 + 0x1b80) = uVar18;
  }
  if (*(long *)(lVar12 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}


