// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078acb8
// Entry Point: 0078acb8
// Size: 1868 bytes
// Signature: undefined FUN_0078acb8(void)


void FUN_0078acb8(char **param_1)

{
  uint uVar1;
  POST_PROCESS_ANTI_ALIASING PVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  Camera *pCVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  AtmosphereRenderControllerShared *this;
  long lVar15;
  AtmosphereRenderController *this_00;
  ScreenSpaceProcessor *pSVar16;
  RenderTextureController *pRVar17;
  void *__s;
  undefined8 uVar18;
  PIXEL_FORMAT PVar19;
  PIXEL_FORMAT PVar20;
  uint uVar21;
  char *pcVar22;
  code *pcVar23;
  PIXEL_FORMAT PVar24;
  Renderer *this_01;
  long *this_02;
  long *plVar25;
  long *plVar26;
  ulong __n;
  undefined4 uVar27;
  undefined4 in_stack_fffffffffffffcb0;
  undefined4 in_stack_fffffffffffffd10;
  uint in_stack_fffffffffffffd48;
  uint in_stack_fffffffffffffd54;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_218;
  undefined2 local_210;
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  PIXEL_FORMAT PStack_1d8;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  ulong local_1c8;
  undefined2 local_1c0;
  undefined2 uStack_1be;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 local_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 3;
  lVar9 = EngineManager::getInstance();
  this_01 = *(Renderer **)(lVar9 + 0xb8);
  pCVar10 = (Camera *)Renderer::getCamera();
  if (pCVar10 != (Camera *)0x0) {
    EngineManager::getInstance();
    pplVar11 = (long **)Renderer::getSharedRenderArgs();
    pcVar22 = *param_1;
    plVar25 = *pplVar11;
    uVar21 = *(uint *)(param_1 + 2);
    uVar1 = *(uint *)(param_1 + 4);
    uVar27 = *(undefined4 *)(param_1 + 6);
    lVar9 = StringUtil::stristr(param_1[8],"raw");
    uVar12 = StringUtil::stristr(param_1[8],"hdr");
    uVar13 = StringUtil::stristr(param_1[8],"alpha");
    PVar2 = *(POST_PROCESS_ANTI_ALIASING *)(param_1 + 10);
    uVar3 = *(undefined4 *)(param_1 + 0x16);
    local_98 = *(undefined4 *)(param_1 + 0xc);
    cVar6 = *(char *)(param_1 + 0x18);
    uStack_94 = *(undefined4 *)(param_1 + 0xe);
    local_90 = *(undefined4 *)(param_1 + 0x10);
    PVar19 = 0x1b;
    if ((uVar12 | uVar13) == 0) {
      PVar19 = 0x16;
    }
    PVar24 = 5;
    if (uVar13 == 0) {
      PVar24 = 3;
    }
    uStack_8c = *(undefined4 *)(param_1 + 0x12);
    if (lVar9 != 0 && uVar12 == 0) {
      PVar19 = PVar24;
    }
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_1 + 0x1a);
    lVar14 = EngineManager::getInstance();
    local_1c0 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    local_1ac = 0;
    uStack_1a8 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    local_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    local_18c = 0;
    uStack_188 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    local_17c = 0;
    uStack_178 = 0;
    uStack_120 = 0;
    local_128 = 0x3f8000003f800000;
    uStack_e0 = 0;
    local_e8 = 0x3f8000003f800000;
    uStack_164 = 0;
    uStack_160 = 0;
    local_16c = 0;
    uStack_168 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    local_15c = 0;
    uStack_158 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    local_13c = 0;
    uStack_12c = 0;
    uStack_110 = 0x3f800000;
    local_118 = 0;
    uStack_100 = 0x3f80000000000000;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_d0 = 0x3f800000;
    local_d8 = 0;
    uStack_c0 = 0x3f80000000000000;
    local_c8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0x3f800000;
    if (lVar9 == 0) {
      this_02 = (long *)operator_new(0x28);
                    /* try { // try from 0078ae94 to 0078aeab has its CatchHandler @ 0078b404 */
      DisplayTexture::DisplayTexture((DisplayTexture *)this_02,uVar21,uVar1,1.0,0,true);
      local_218 = 0;
      iStack_204 = 0x200;
      uStack_200 = 0x200;
      uStack_20c = 0xffffffff;
      uStack_208 = 0xffffffff;
      local_210 = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      local_1fc = 1;
      uStack_1f8 = 1;
      uStack_1ec = 3;
      local_1e8 = local_1e8 & 0xffffff00;
      PVar20 = 0x1b;
      if (uVar13 == 0) {
        PVar20 = 0x16;
      }
      if (uVar12 == 0) {
        PVar20 = PVar24;
      }
      local_1cc = 0;
      uStack_1e4 = 1;
      uStack_1e0 = 1;
      local_1c8 = 0;
      in_stack_fffffffffffffcb0 = 0;
      uStack_1d4 = 0x3f80000000000000;
      local_1dc = 0;
      PStack_1d8 = 0;
      RenderDeviceUtil::buildRenderTargetDesc
                (uVar21,uVar1,1,(float *)0x0,PVar20,uVar12 == 0,1,false,0,"RenderScreenshot Output",
                 (TextureObjectDesc *)&local_218);
      uVar18 = (**(code **)(*plVar25 + 0x138))(plVar25);
      lVar15 = (**(code **)(*plVar25 + 0x100))(plVar25,uVar18,&local_218);
      this_02[4] = lVar15;
    }
    else {
      this_02 = (long *)0x0;
    }
    this = (AtmosphereRenderControllerShared *)operator_new(0x2c8);
                    /* try { // try from 0078af90 to 0078af93 has its CatchHandler @ 0078b424 */
    AtmosphereRenderControllerShared::AtmosphereRenderControllerShared(this);
    lVar15 = Renderer::getSharedRenderArgs();
    AtmosphereRenderControllerShared::update
              (this,(IRenderDevice *)plVar25,*(ITextureObject **)(lVar15 + 0xf8),
               (PostFxParams *)(this_01 + 0x11e8));
    this_00 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 0078afc8 to 0078afdf has its CatchHandler @ 0078b418 */
    AtmosphereRenderController::AtmosphereRenderController
              (this_00,(IRenderDevice *)plVar25,this,
               "AtmosphereRenderController used for renderScreenshot");
    AtmosphereRenderController::init(this_00,(IRenderDevice *)plVar25,uVar5,uVar21,uVar1,false);
    uStack_228 = 0x3f8000003f800000;
    local_230 = 0;
    pSVar16 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 0078b018 to 0078b02f has its CatchHandler @ 0078b414 */
    ScreenSpaceProcessor::ScreenSpaceProcessor
              (pSVar16,this_00,(IDisplay *)this_02,0,(IRenderDevice *)plVar25,(float *)&local_230);
    uStack_148 = SUB84(pSVar16,0);
    uStack_144 = (undefined4)((ulong)pSVar16 >> 0x20);
    iVar8 = 4;
    ScreenSpaceProcessor::init
              ((IRenderDevice *)pSVar16,(uint)plVar25,uVar21,uVar1,uVar21,(float *)(ulong)uVar1,
               (int)&stack0xffffffffffffffa0 - 0x38,SUB41(PVar19,0),
               CONCAT31((int3)((uint)in_stack_fffffffffffffcb0 >> 8),lVar9 == 0 || uVar12 != 0) ^ 1,
               0x1e,PVar2,0,5,0,4,0,0,uVar4,5,SUB41(uVar3,0),
               CONCAT31((int3)((uint)in_stack_fffffffffffffd10 >> 8),cVar6 != '\0'),SUB41(uVar5,0),
               false,*(bool *)(lVar14 + 0x250),*(bool *)(lVar14 + 0x251),0.5,false,lVar9 == 0,
               in_stack_fffffffffffffd48 & 0xffffff00,
               (char *)((ulong)in_stack_fffffffffffffd54 << 0x20));
    lVar14 = CONCAT44(uStack_144,uStack_148);
    uVar18 = *(undefined8 *)(lVar14 + 0x1880);
    uStack_178 = (undefined4)*(undefined8 *)(lVar14 + 0x18c8);
    uStack_174 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18c8) >> 0x20);
    uStack_180 = (undefined4)*(undefined8 *)(lVar14 + 0x18c0);
    local_17c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18c0) >> 0x20);
    uStack_168 = (undefined4)*(undefined8 *)(lVar14 + 0x18d8);
    uStack_164 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18d8) >> 0x20);
    uStack_170 = (undefined4)*(undefined8 *)(lVar14 + 0x18d0);
    local_16c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18d0) >> 0x20);
    uStack_158 = (undefined4)*(undefined8 *)(lVar14 + 0x18e8);
    uStack_154 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18e8) >> 0x20);
    uStack_160 = (undefined4)*(undefined8 *)(lVar14 + 0x18e0);
    local_15c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18e0) >> 0x20);
    uStack_1b8 = (undefined4)*(undefined8 *)(lVar14 + 0x1888);
    uStack_1b4 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x1888) >> 0x20);
    local_1c0 = (undefined2)uVar18;
    uStack_1be = (undefined2)((ulong)uVar18 >> 0x10);
    uStack_1bc = (undefined4)((ulong)uVar18 >> 0x20);
    uStack_1a8 = (undefined4)*(undefined8 *)(lVar14 + 0x1898);
    uStack_1a4 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x1898) >> 0x20);
    uStack_1b0 = (undefined4)*(undefined8 *)(lVar14 + 0x1890);
    local_1ac = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x1890) >> 0x20);
    uStack_150 = (undefined4)*(undefined8 *)(lVar14 + 0x18f0);
    uStack_14c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18f0) >> 0x20);
    uStack_198 = (undefined4)*(undefined8 *)(lVar14 + 0x18a8);
    uStack_194 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18a8) >> 0x20);
    uStack_1a0 = (undefined4)*(undefined8 *)(lVar14 + 0x18a0);
    local_19c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18a0) >> 0x20);
    uStack_188 = (undefined4)*(undefined8 *)(lVar14 + 0x18b8);
    uStack_184 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18b8) >> 0x20);
    uStack_190 = (undefined4)*(undefined8 *)(lVar14 + 0x18b0);
    local_18c = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18b0) >> 0x20);
    pRVar17 = (RenderTextureController *)operator_new(0x80);
                    /* try { // try from 0078b144 to 0078b167 has its CatchHandler @ 0078b410 */
    RenderTextureController::RenderTextureController
              (pRVar17,(IRenderDevice *)plVar25,uVar21,uVar1,1.0,0,PVar19,false,0x1e);
    local_128 = CONCAT44(local_128._4_4_,uVar27);
    uStack_130 = SUB84(pRVar17,0);
    uStack_12c = (undefined4)((ulong)pRVar17 >> 0x20);
    iStack_204 = 3;
    if (uVar13 != 0) {
      iStack_204 = 4;
    }
    if (uVar12 == 0) {
      iVar8 = 1;
    }
    uStack_208 = 0;
    local_1fc = 0;
    local_210 = 1;
    uStack_20e = 0;
    uStack_20c = 1;
    uStack_200 = 8;
    if (uVar12 == 0) {
      uStack_200 = 1;
    }
    uStack_1d4 = uStack_1d4 & 0xffff000000000000;
    local_1cc = 0;
    uStack_1f8 = uVar1 * uVar21 * iVar8 * iStack_204;
    __n = (ulong)uStack_1f8;
    local_1c8 = local_1c8 & 0xffffffffffff0000;
    local_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    local_1dc = 0;
    local_218 = CONCAT44(uVar1,uVar21);
    PStack_1d8 = PVar24;
    __s = operator_new__(__n);
    uStack_1f0 = SUB84(__s,0);
    uStack_1ec = (undefined4)((ulong)__s >> 0x20);
    memset(__s,0,__n);
    RenderDeviceManager::getInstance();
    iVar8 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar8 == 0) {
      uVar21 = 0;
    }
    else {
      RenderDeviceManager::getInstance();
      iVar8 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar8 == 4) {
        uVar21 = 0;
      }
      else {
        RenderDeviceManager::getInstance();
        iVar8 = RenderDeviceManager::getCurrentRenderDeviceType();
        uVar21 = (uint)(iVar8 != 5);
      }
    }
    uStack_1d4 = CONCAT44(uStack_1d4._4_4_,uVar21);
    Renderer::renderSceneToTexture
              (this_01,pCVar10,(IDisplay *)this_02,(PlaneRenderInfo *)&local_1c0,
               (PixelViewport *)0x0,0xb7,5,*(uint *)(this_01 + 0xf10),*(uint *)(this_01 + 0xf14),
               true,true);
    if (lVar9 == 0) {
      plVar26 = (long *)(**(code **)(*this_02 + 0xb8))(this_02);
      pcVar23 = *(code **)(*plVar25 + 0x138);
    }
    else {
      plVar26 = *(long **)(CONCAT44(uStack_144,uStack_148) + 0x1930);
      pcVar23 = *(code **)(*plVar25 + 0x138);
    }
    uVar18 = (*pcVar23)(plVar25);
    if (uVar12 == 0) {
      pcVar23 = *(code **)(*plVar26 + 0x80);
    }
    else {
      pcVar23 = *(code **)(*plVar26 + 0x80);
      PVar24 = 0x1a;
      if (uVar13 != 0) {
        PVar24 = 0x1b;
      }
    }
    (*pcVar23)(plVar26,uVar18,__s,0,0,PVar24);
    uVar12 = ImageSaveUtil::saveImage(pcVar22,(ImageDesc *)&local_218,true);
    if ((uVar12 & 1) != 0) {
      *(undefined *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x21) = 3;
    }
    if ((void *)CONCAT44(uStack_1ec,uStack_1f0) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_1ec,uStack_1f0));
    }
    pSVar16 = (ScreenSpaceProcessor *)CONCAT44(uStack_144,uStack_148);
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1f8 = 0;
    if (pSVar16 != (ScreenSpaceProcessor *)0x0) {
      ScreenSpaceProcessor::~ScreenSpaceProcessor(pSVar16);
      operator_delete(pSVar16);
    }
    pRVar17 = (RenderTextureController *)CONCAT44(uStack_12c,uStack_130);
    if (pRVar17 != (RenderTextureController *)0x0) {
      RenderTextureController::~RenderTextureController(pRVar17);
      operator_delete(pRVar17);
    }
    AtmosphereRenderController::~AtmosphereRenderController(this_00);
    operator_delete(this_00);
    AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared(this);
    operator_delete(this);
    if (this_02 != (long *)0x0) {
      plVar25 = (long *)(**(code **)(*this_02 + 0xb8))(this_02);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      (**(code **)(*this_02 + 8))(this_02);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


