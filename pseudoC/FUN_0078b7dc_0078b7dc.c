// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078b7dc
// Entry Point: 0078b7dc
// Size: 2192 bytes
// Signature: undefined FUN_0078b7dc(void)


void FUN_0078b7dc(long *param_1)

{
  PIXEL_FORMAT PVar1;
  uint uVar2;
  uint uVar3;
  POST_PROCESS_ANTI_ALIASING PVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  uint3 uVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  Renderer *this;
  long **pplVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  AtmosphereRenderControllerShared *this_00;
  long lVar18;
  AtmosphereRenderController *this_01;
  EntityRegistryManager *this_02;
  Camera *pCVar19;
  ScreenSpaceProcessor *pSVar20;
  RenderTextureController *pRVar21;
  void *pvVar22;
  undefined8 uVar23;
  PIXEL_FORMAT PVar24;
  long *plVar25;
  long lVar26;
  char *pcVar27;
  PIXEL_FORMAT PVar28;
  long lVar29;
  int iVar30;
  PIXEL_FORMAT PVar31;
  undefined8 *puVar32;
  long *this_03;
  int iVar33;
  uint uVar34;
  ulong __n;
  uint uVar35;
  uint uVar37;
  long *plVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint in_stack_fffffffffffffbe0;
  uint in_stack_fffffffffffffc40;
  uint in_stack_fffffffffffffc78;
  uint in_stack_fffffffffffffc84;
  ulong local_250;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint local_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ScreenSpaceProcessor *local_1d8;
  RenderTextureController *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint local_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  ulong uStack_108;
  uint local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  PIXEL_FORMAT local_e0;
  uint local_dc;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  float *pfVar36;
  
  lVar9 = tpidr_el0;
  local_b8 = *(long *)(lVar9 + 0x28);
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 3;
  if ((*(ushort *)((long)param_1 + 0x1c) & 0xfffffe | (uint)*(byte *)((long)param_1 + 0x1e) << 0x10)
      << 1 != (uint)(*(uint3 *)((long)param_1 + 0xc) >> 1)) goto LAB_0078bb10;
  lVar13 = EngineManager::getInstance();
  this = *(Renderer **)(lVar13 + 0xb8);
  pplVar14 = (long **)Renderer::getSharedRenderArgs();
  lVar29 = *param_1;
  uVar10 = *(uint3 *)((long)param_1 + 0x1c);
  plVar25 = *pplVar14;
  uVar2 = *(uint *)(param_1 + 6);
  lVar26 = param_1[2];
  uVar3 = *(uint *)(param_1 + 8);
  uVar39 = *(undefined4 *)(param_1 + 10);
  pcVar27 = (char *)param_1[4];
  lVar13 = StringUtil::stristr((char *)param_1[0xc],"raw");
  uVar15 = StringUtil::stristr((char *)param_1[0xc],"hdr");
  uVar16 = StringUtil::stristr((char *)param_1[0xc],"alpha");
  PVar24 = 0x1b;
  if ((uVar15 | uVar16) == 0) {
    PVar24 = 0x16;
  }
  PVar4 = *(POST_PROCESS_ANTI_ALIASING *)(param_1 + 0xe);
  bVar11 = uVar15 == 0;
  iVar30 = 4;
  if (bVar11) {
    iVar30 = 1;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  local_c8 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x1a);
  uStack_c4 = *(undefined4 *)(param_1 + 0x12);
  local_c0 = *(undefined4 *)(param_1 + 0x14);
  cVar8 = *(char *)(param_1 + 0x1c);
  uStack_bc = *(undefined4 *)(param_1 + 0x16);
  uVar37 = 8;
  if (bVar11) {
    uVar37 = 1;
  }
  PVar31 = 5;
  if (uVar16 == 0) {
    PVar31 = 3;
  }
  uVar34 = 3;
  if (uVar16 != 0) {
    uVar34 = 4;
  }
  uVar7 = *(uint *)(param_1 + 0x1e);
  local_100 = uVar3 * uVar2 * iVar30 * uVar34;
  __n = (ulong)local_100;
  PVar1 = PVar31;
  if (lVar13 == 0 || !bVar11) {
    PVar1 = PVar24;
  }
  local_118 = 0x100000001;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_dc = 0;
  local_110 = (ulong)uVar34 << 0x20;
  uStack_108 = (ulong)uVar37;
  local_120 = uVar2;
  uStack_11c = uVar3;
  local_e0 = PVar31;
  local_f8 = operator_new__(__n);
  memset(local_f8,0,__n);
  RenderDeviceManager::getInstance();
  iVar12 = RenderDeviceManager::getCurrentRenderDeviceType();
  if (iVar12 == 0) {
LAB_0078b9e0:
    uVar37 = 0;
  }
  else {
    RenderDeviceManager::getInstance();
    iVar12 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar12 == 4) goto LAB_0078b9e0;
    RenderDeviceManager::getInstance();
    iVar12 = RenderDeviceManager::getCurrentRenderDeviceType();
    uVar37 = (uint)(iVar12 != 5);
  }
  local_dc = uVar37;
  lVar17 = EngineManager::getInstance();
  this_00 = (AtmosphereRenderControllerShared *)operator_new(0x2c8);
                    /* try { // try from 0078ba14 to 0078ba17 has its CatchHandler @ 0078c078 */
  AtmosphereRenderControllerShared::AtmosphereRenderControllerShared(this_00);
  lVar18 = Renderer::getSharedRenderArgs();
  AtmosphereRenderControllerShared::update
            (this_00,(IRenderDevice *)plVar25,*(ITextureObject **)(lVar18 + 0xf8),
             (PostFxParams *)(this + 0x11e8));
  this_01 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 0078ba48 to 0078ba5f has its CatchHandler @ 0078c06c */
  AtmosphereRenderController::AtmosphereRenderController
            (this_01,(IRenderDevice *)plVar25,this_00,
             "AtmosphereRenderController used for renderMultiviewportScreenshot");
  PVar24 = 0x1b;
  if (uVar16 == 0) {
    PVar24 = 0x16;
  }
  PVar28 = 0x1a;
  if (uVar16 != 0) {
    PVar28 = 0x1b;
  }
  if (uVar15 == 0) {
    PVar28 = PVar31;
    PVar24 = PVar31;
  }
  if (1 < uVar10) {
    uVar34 = (uint)(uVar10 >> 1);
    uVar15 = 0;
    if (uVar34 < 2) {
      uVar34 = 1;
    }
    puVar32 = (undefined8 *)((ulong)&local_250 | 4);
    do {
      pfVar36 = (float *)(lVar29 + uVar15 * 0x10);
      fVar42 = *pfVar36;
      fVar40 = pfVar36[2];
      fVar43 = pfVar36[3];
      fVar41 = pfVar36[1];
      if (uVar37 != 0) {
        fVar41 = (1.0 - pfVar36[1]) - fVar43;
      }
      this_02 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      pCVar19 = (Camera *)
                EntityRegistryManager::getEntityById(this_02,*(uint *)(lVar26 + uVar15 * 4));
      if ((pCVar19 != (Camera *)0x0) && ((char)pCVar19[0x11] < '\0')) {
        uVar37 = (uint)(fVar40 * (float)(ulong)uVar2);
        uVar35 = (uint)(fVar43 * (float)(ulong)uVar3);
        pfVar36 = (float *)(ulong)uVar35;
        AtmosphereRenderController::init(this_01,(IRenderDevice *)plVar25,uVar7,uVar37,uVar35,false)
        ;
        if (lVar13 == 0) {
          this_03 = (long *)operator_new(0x28);
                    /* try { // try from 0078bc68 to 0078bc7f has its CatchHandler @ 0078c07c */
          DisplayTexture::DisplayTexture((DisplayTexture *)this_03,uVar37,uVar35,1.0,0,true);
          uStack_23c = 0x200;
          uStack_238 = 0x200;
          uStack_244 = 0xffffffff;
          uStack_240 = 0xffffffff;
          local_250 = 0;
          uStack_22c = 0;
          uStack_228 = 0;
          uStack_234 = 1;
          local_230 = 1;
          uStack_248 = 0;
          local_220 = local_220 & 0xffffff00;
          uStack_224 = 3;
          uStack_204 = 0;
          local_200 = 0;
          local_21c = 1;
          uStack_218 = 1;
          in_stack_fffffffffffffbe0 = 0;
          uStack_20c = 0;
          uStack_208 = 0x3f800000;
          uStack_214 = 0;
          local_210 = 0;
          RenderDeviceUtil::buildRenderTargetDesc
                    (uVar2,uVar3,1,(float *)0x0,PVar24,bVar11,1,false,0,
                     "RenderMultiviewportScreenshot Output",(TextureObjectDesc *)&local_250);
          uVar23 = (**(code **)(*plVar25 + 0x138))(plVar25);
          lVar18 = (**(code **)(*plVar25 + 0x100))(plVar25,uVar23,&local_250);
          this_03[4] = lVar18;
        }
        else {
          this_03 = (long *)0x0;
        }
        local_250 = local_250 & 0xffffffffffff0000;
        *(undefined4 *)(puVar32 + 0x12) = 0;
        uStack_1a0 = 0x3f800000;
        local_1a8 = 0;
        uStack_190 = 0x3f80000000000000;
        local_198 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0x3f8000003f800000;
        uStack_180 = 0;
        local_188 = 0;
        uStack_170 = 0;
        local_178 = 0x3f8000003f800000;
        uStack_160 = 0x3f800000;
        local_168 = 0;
        uStack_150 = 0x3f80000000000000;
        local_158 = 0;
        puVar32[1] = 0;
        *puVar32 = 0;
        puVar32[3] = 0;
        puVar32[2] = 0;
        puVar32[5] = 0;
        puVar32[4] = 0;
        puVar32[7] = 0;
        puVar32[6] = 0;
        puVar32[9] = 0;
        puVar32[8] = 0;
        puVar32[0xb] = 0;
        puVar32[10] = 0;
        puVar32[0xd] = 0;
        puVar32[0xc] = 0;
        puVar32[0xf] = 0;
        puVar32[0xe] = 0;
        puVar32[0x11] = 0;
        puVar32[0x10] = 0;
        uStack_140 = 0;
        local_148 = 0;
        uStack_130 = 0;
        uStack_138 = 0x3f800000;
        pSVar20 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 0078bd90 to 0078bdab has its CatchHandler @ 0078c08c */
        ScreenSpaceProcessor::ScreenSpaceProcessor
                  (pSVar20,this_01,(IDisplay *)this_03,0,(IRenderDevice *)plVar25,
                   (float *)&DAT_005189dc);
        in_stack_fffffffffffffc40 = CONCAT31((int3)(in_stack_fffffffffffffc40 >> 8),cVar8 != '\0');
        in_stack_fffffffffffffc78 = in_stack_fffffffffffffc78 & 0xffffff00;
        local_1d8 = pSVar20;
        ScreenSpaceProcessor::init
                  ((IRenderDevice *)pSVar20,(uint)plVar25,uVar37,uVar35,uVar37,pfVar36,
                   (int)&stack0xffffffffffffffa0 - 0x68,SUB41(PVar1,0),
                   CONCAT31((int3)(in_stack_fffffffffffffbe0 >> 8),lVar13 != 0 && bVar11),0x1e,PVar4
                   ,0,5,0,4,0,0,uVar5,5,SUB41(uVar6,0),in_stack_fffffffffffffc40,SUB41(uVar7,0),
                   false,*(bool *)(lVar17 + 0x250),*(bool *)(lVar17 + 0x251),0.5,false,lVar13 == 0,
                   in_stack_fffffffffffffc78,(char *)((ulong)in_stack_fffffffffffffc84 << 0x20));
        uStack_1f8 = *(undefined8 *)(local_1d8 + 0x18d8);
        local_200 = *(undefined8 *)(local_1d8 + 0x18d0);
        uVar23 = *(undefined8 *)(local_1d8 + 0x1888);
        local_250 = *(ulong *)(local_1d8 + 0x1880);
        uStack_1e8 = *(undefined8 *)(local_1d8 + 0x18e8);
        local_1f0 = *(undefined8 *)(local_1d8 + 0x18e0);
        uStack_208 = (undefined4)*(undefined8 *)(local_1d8 + 0x18c8);
        uStack_204 = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18c8) >> 0x20);
        local_210 = (undefined4)*(undefined8 *)(local_1d8 + 0x18c0);
        uStack_20c = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18c0) >> 0x20);
        local_1e0 = *(undefined8 *)(local_1d8 + 0x18f0);
        uStack_248 = (undefined2)uVar23;
        uStack_246 = (undefined2)((ulong)uVar23 >> 0x10);
        uStack_244 = (undefined4)((ulong)uVar23 >> 0x20);
        uStack_238 = (undefined4)*(undefined8 *)(local_1d8 + 0x1898);
        uStack_234 = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x1898) >> 0x20);
        uStack_240 = (undefined4)*(undefined8 *)(local_1d8 + 0x1890);
        uStack_23c = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x1890) >> 0x20);
        uStack_228 = (undefined4)*(undefined8 *)(local_1d8 + 0x18a8);
        uStack_224 = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18a8) >> 0x20);
        local_230 = (undefined4)*(undefined8 *)(local_1d8 + 0x18a0);
        uStack_22c = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18a0) >> 0x20);
        uStack_218 = (undefined4)*(undefined8 *)(local_1d8 + 0x18b8);
        uStack_214 = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18b8) >> 0x20);
        local_220 = (uint)*(undefined8 *)(local_1d8 + 0x18b0);
        local_21c = (undefined4)((ulong)*(undefined8 *)(local_1d8 + 0x18b0) >> 0x20);
        pRVar21 = (RenderTextureController *)operator_new(0x80);
                    /* try { // try from 0078beb8 to 0078bedb has its CatchHandler @ 0078c088 */
        RenderTextureController::RenderTextureController
                  (pRVar21,(IRenderDevice *)plVar25,uVar37,uVar35,1.0,0,PVar1,false,0x1e);
        in_stack_fffffffffffffbe0 = *(uint *)(this + 0xf14);
        local_1b8 = CONCAT44(local_1b8._4_4_,uVar39);
        local_1c0 = pRVar21;
        Renderer::renderSceneToTexture
                  (this,pCVar19,(IDisplay *)this_03,(PlaneRenderInfo *)&local_250,
                   (PixelViewport *)0x0,0xb7,5,*(uint *)(this + 0xf10),in_stack_fffffffffffffbe0,
                   true,true);
        iVar12 = local_110._4_4_ * iVar30;
        uVar37 = iVar12 * uVar37;
        pvVar22 = operator_new__((ulong)(uVar37 * uVar35));
        if (lVar13 == 0) {
          plVar38 = (long *)(**(code **)(*this_03 + 0xb8))(this_03);
        }
        else {
          plVar38 = *(long **)(local_1d8 + 0x1930);
        }
        uVar23 = (**(code **)(*plVar25 + 0x138))(plVar25);
        (**(code **)(*plVar38 + 0x80))(plVar38,uVar23,pvVar22,0,0,PVar28);
        if (uVar35 != 0) {
          uVar35 = 0;
          iVar33 = (int)(fVar41 * (float)(ulong)uVar3);
          do {
            memcpy((void *)((long)local_f8 +
                           (ulong)(((int)(fVar42 * (float)(ulong)uVar2) + iVar33 * local_120) *
                                  iVar12)),(void *)((long)pvVar22 + (ulong)uVar35),(ulong)uVar37);
            uVar35 = uVar35 + uVar37;
            iVar33 = iVar33 + 1;
            pfVar36 = (float *)((long)pfVar36 + -1);
          } while (pfVar36 != (float *)0x0);
        }
        pSVar20 = local_1d8;
        if (local_1d8 != (ScreenSpaceProcessor *)0x0) {
          ScreenSpaceProcessor::~ScreenSpaceProcessor(local_1d8);
          operator_delete(pSVar20);
        }
        pRVar21 = local_1c0;
        if (local_1c0 != (RenderTextureController *)0x0) {
          RenderTextureController::~RenderTextureController(local_1c0);
          operator_delete(pRVar21);
        }
        if (this_03 != (long *)0x0) {
          plVar38 = (long *)(**(code **)(*this_03 + 0xb8))(this_03);
          if (plVar38 != (long *)0x0) {
            (**(code **)(*plVar38 + 8))();
          }
          (**(code **)(*this_03 + 8))(this_03);
        }
      }
      uVar15 = uVar15 + 1;
      uVar37 = local_dc;
    } while (uVar15 != uVar34);
  }
  uVar15 = ImageSaveUtil::saveImage(pcVar27,(ImageDesc *)&local_120,true);
  if ((uVar15 & 1) != 0) {
    *(undefined *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x21) = 3;
  }
  AtmosphereRenderController::~AtmosphereRenderController(this_01);
  operator_delete(this_01);
  AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared(this_00);
  operator_delete(this_00);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
LAB_0078bb10:
  if (*(long *)(lVar9 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


