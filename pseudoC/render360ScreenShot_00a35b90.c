// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render360ScreenShot
// Entry Point: 00a35b90
// Size: 1872 bytes
// Signature: undefined __cdecl render360ScreenShot(Renderer * param_1, uint param_2, bool param_3, bool param_4, bool param_5, uint param_6, uint param_7, bool param_8, uint param_9, uint param_10, bool param_11, bool param_12, float param_13, uchar * * param_14, uint * param_15)


/* RenderQueueUtil::render360ScreenShot(Renderer*, unsigned int, bool, bool, bool, unsigned int,
   unsigned int, bool, unsigned int, unsigned int, bool, bool, float, unsigned char**, unsigned
   int&) */

void RenderQueueUtil::render360ScreenShot
               (Renderer *param_1,uint param_2,bool param_3,bool param_4,bool param_5,uint param_6,
               uint param_7,bool param_8,uint param_9,uint param_10,bool param_11,bool param_12,
               float param_13,uchar **param_14,uint *param_15)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  Camera *this;
  long **pplVar5;
  long lVar6;
  long lVar7;
  AtmosphereRenderControllerShared *this_00;
  AtmosphereRenderController *this_01;
  ScreenSpaceProcessor *pSVar8;
  RenderTextureController *pRVar9;
  uchar *puVar10;
  undefined8 uVar11;
  PIXEL_FORMAT PVar12;
  COLORSPACE CVar13;
  PIXEL_FORMAT PVar14;
  code *pcVar15;
  PIXEL_FORMAT PVar16;
  int iVar17;
  long *this_02;
  long *plVar18;
  long *plVar19;
  ulong __n;
  float fVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 in_stack_fffffffffffffca0;
  undefined4 in_stack_fffffffffffffd00;
  uint in_stack_fffffffffffffd38;
  uint in_stack_fffffffffffffd44;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_228;
  undefined2 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
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
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 local_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  this = (Camera *)Renderer::getCamera();
  if (this != (Camera *)0x0) {
    if (((byte)this[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_a8 = *(undefined8 *)(this + 0x13c);
    local_a0 = *(undefined4 *)(this + 0x144);
    pplVar5 = (long **)Renderer::getSharedRenderArgs();
    plVar19 = *pplVar5;
    bVar1 = !param_3;
    PVar12 = 0x1b;
    if (!param_4 && !param_5) {
      PVar12 = 0x16;
    }
    PVar16 = 5;
    if (!param_5) {
      PVar16 = 3;
    }
    if (!bVar1 && !param_4) {
      PVar12 = PVar16;
    }
    lVar6 = EngineManager::getInstance();
    local_1d0 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    local_1bc = 0;
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
    uStack_130 = 0;
    local_138 = 0x3f8000003f800000;
    uStack_f0 = 0;
    local_f8 = 0x3f8000003f800000;
    uStack_174 = 0;
    uStack_170 = 0;
    local_17c = 0;
    uStack_178 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    local_16c = 0;
    uStack_168 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_14c = 0;
    uStack_13c = 0;
    uStack_120 = 0x3f800000;
    local_128 = 0;
    uStack_110 = 0x3f80000000000000;
    local_118 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_e0 = 0x3f800000;
    local_e8 = 0;
    uStack_d0 = 0x3f80000000000000;
    local_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0x3f800000;
    if (param_3) {
      this_02 = (long *)0x0;
    }
    else {
      this_02 = (long *)operator_new(0x28);
      CVar13 = 6;
      if (!param_4) {
        CVar13 = 1;
      }
                    /* try { // try from 00a35d20 to 00a35d33 has its CatchHandler @ 00a362e0 */
      DisplayTexture::DisplayTexture((DisplayTexture *)this_02,param_2,param_2,1.0,CVar13,true);
      uStack_214 = 0x20000000200;
      local_21c = 0xffffffffffffffff;
      local_228 = 0;
      uStack_204 = 0;
      local_20c = 0x100000001;
      local_1fc = 3;
      PVar14 = 0x1b;
      if (!param_5) {
        PVar14 = 0x16;
      }
      if (!param_4) {
        PVar14 = PVar16;
      }
      local_220 = 0;
      local_1f8 = local_1f8 & 0xffffff00;
      uStack_1f4 = 1;
      local_1f0 = 1;
      local_1dc = 0;
      local_1d8 = 0;
      uStack_1e4 = 0x3f80000000000000;
      local_1ec = 0;
      in_stack_fffffffffffffca0 = 0;
      RenderDeviceUtil::buildRenderTargetDesc
                (param_2,param_2,1,(float *)0x0,PVar14,(bool)(~param_4 & 1),1,false,0,
                 "Render360Screenshot Output",(TextureObjectDesc *)&local_228);
      uVar21 = (**(code **)(*plVar19 + 0x138))(plVar19);
      lVar7 = (**(code **)(*plVar19 + 0x100))(plVar19,uVar21,&local_228);
      this_02[4] = lVar7;
    }
    this_00 = (AtmosphereRenderControllerShared *)operator_new(0x2c8);
                    /* try { // try from 00a35e14 to 00a35e17 has its CatchHandler @ 00a36308 */
    AtmosphereRenderControllerShared::AtmosphereRenderControllerShared(this_00);
    this_01 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 00a35e34 to 00a35e47 has its CatchHandler @ 00a362fc */
    AtmosphereRenderController::AtmosphereRenderController
              (this_01,(IRenderDevice *)plVar19,this_00,
               "AtmosphereRenderController used for render360ScreenShot");
    AtmosphereRenderController::init
              (this_01,(IRenderDevice *)plVar19,param_10,param_2,param_2,param_11);
    uStack_238 = 0x3f8000003f800000;
    local_240 = 0;
    pSVar8 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 00a35e90 to 00a35eab has its CatchHandler @ 00a362f0 */
    ScreenSpaceProcessor::ScreenSpaceProcessor
              (pSVar8,this_01,(IDisplay *)this_02,0,(IRenderDevice *)plVar19,(float *)&local_240);
    uStack_158 = SUB84(pSVar8,0);
    uStack_154 = (undefined4)((ulong)pSVar8 >> 0x20);
    iVar17 = 4;
    ScreenSpaceProcessor::init
              ((IRenderDevice *)pSVar8,(uint)plVar19,param_2,param_2,param_2,(float *)(ulong)param_2
               ,0,SUB41(PVar12,0),
               CONCAT31((int3)((uint)in_stack_fffffffffffffca0 >> 8),bVar1 || param_4) ^ 1,0x1e,
               param_6,0,5,0,4,0,0,param_7,5,SUB41(param_9,0),
               CONCAT31((int3)((uint)in_stack_fffffffffffffd00 >> 8),param_8) & 0xffffff01,
               SUB41(param_10,0),param_11,*(bool *)(lVar6 + 0x250),*(bool *)(lVar6 + 0x251),param_13
               ,param_12,bVar1,in_stack_fffffffffffffd38 & 0xffffff00,
               (char *)((ulong)in_stack_fffffffffffffd44 << 0x20));
    lVar6 = CONCAT44(uStack_154,uStack_158);
    uVar21 = *(undefined8 *)(lVar6 + 0x1880);
    uStack_188 = (undefined4)*(undefined8 *)(lVar6 + 0x18c8);
    uStack_184 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18c8) >> 0x20);
    uStack_190 = (undefined4)*(undefined8 *)(lVar6 + 0x18c0);
    local_18c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18c0) >> 0x20);
    uStack_178 = (undefined4)*(undefined8 *)(lVar6 + 0x18d8);
    uStack_174 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18d8) >> 0x20);
    uStack_180 = (undefined4)*(undefined8 *)(lVar6 + 0x18d0);
    local_17c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18d0) >> 0x20);
    uStack_168 = (undefined4)*(undefined8 *)(lVar6 + 0x18e8);
    uStack_164 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18e8) >> 0x20);
    uStack_170 = (undefined4)*(undefined8 *)(lVar6 + 0x18e0);
    local_16c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18e0) >> 0x20);
    uStack_1c8 = (undefined4)*(undefined8 *)(lVar6 + 0x1888);
    uStack_1c4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x1888) >> 0x20);
    local_1d0 = (undefined2)uVar21;
    uStack_1ce = (undefined2)((ulong)uVar21 >> 0x10);
    uStack_1cc = (undefined4)((ulong)uVar21 >> 0x20);
    uStack_1b8 = (undefined4)*(undefined8 *)(lVar6 + 0x1898);
    uStack_1b4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x1898) >> 0x20);
    uStack_1c0 = (undefined4)*(undefined8 *)(lVar6 + 0x1890);
    local_1bc = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x1890) >> 0x20);
    uStack_160 = (undefined4)*(undefined8 *)(lVar6 + 0x18f0);
    uStack_15c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18f0) >> 0x20);
    uStack_1a8 = (undefined4)*(undefined8 *)(lVar6 + 0x18a8);
    uStack_1a4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18a8) >> 0x20);
    uStack_1b0 = (undefined4)*(undefined8 *)(lVar6 + 0x18a0);
    local_1ac = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18a0) >> 0x20);
    uStack_198 = (undefined4)*(undefined8 *)(lVar6 + 0x18b8);
    uStack_194 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18b8) >> 0x20);
    uStack_1a0 = (undefined4)*(undefined8 *)(lVar6 + 0x18b0);
    local_19c = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18b0) >> 0x20);
    pRVar9 = (RenderTextureController *)operator_new(0x80);
    PVar12 = 3;
    PVar14 = 0x1b;
    if (!param_4) {
      PVar14 = PVar12;
    }
                    /* try { // try from 00a35fd4 to 00a35ff3 has its CatchHandler @ 00a362ec */
    RenderTextureController::RenderTextureController
              (pRVar9,(IRenderDevice *)plVar19,param_2,param_2,1.0,0,PVar14,false,0x1e);
    if (!param_4) {
      iVar17 = 1;
    }
    uStack_140 = SUB84(pRVar9,0);
    uStack_13c = (undefined4)((ulong)pRVar9 >> 0x20);
    if (param_5) {
      PVar12 = 4;
    }
    uVar3 = param_2 * param_2 * iVar17 * PVar12;
    __n = (ulong)uVar3;
    local_138 = CONCAT44(local_138._4_4_,0x3f800000);
    *param_15 = uVar3;
    PVar12 = 0x1a;
    if (param_5) {
      PVar12 = 0x1b;
    }
    puVar10 = (uchar *)operator_new__(__n);
    *param_14 = puVar10;
    memset(puVar10,0,__n);
    puVar10 = (uchar *)operator_new__(__n);
    param_14[1] = puVar10;
    memset(puVar10,0,__n);
    puVar10 = (uchar *)operator_new__(__n);
    param_14[2] = puVar10;
    memset(puVar10,0,__n);
    puVar10 = (uchar *)operator_new__(__n);
    param_14[3] = puVar10;
    memset(puVar10,0,__n);
    puVar10 = (uchar *)operator_new__(__n);
    param_14[4] = puVar10;
    memset(puVar10,0,__n);
    puVar10 = (uchar *)operator_new__(__n);
    param_14[5] = puVar10;
    memset(puVar10,0,__n);
    fVar20 = (float)Camera::getFovY();
    Camera::setFovY(this,1.570796);
    uVar21 = *(undefined8 *)(this + 0xa8);
    uVar22 = *(undefined4 *)(this + 0xb0);
    uVar3 = *(uint *)(param_1 + 0xf10);
    uVar2 = *(uint *)(param_1 + 0xf14);
    lVar6 = Renderer::getSharedRenderArgs();
    AtmosphereRenderControllerShared::update
              (this_00,(IRenderDevice *)plVar19,*(ITextureObject **)(lVar6 + 0xf8),
               (PostFxParams *)(param_1 + 0x11e8));
    lVar6 = 0;
    do {
      RenderDeviceUtil::makeCubeFaceMatrix((uint)lVar6,(float *)&local_228);
      local_1f8 = (uint)uVar21;
      uStack_1f4 = (undefined4)((ulong)uVar21 >> 0x20);
      local_1f0 = uVar22;
      RawTransformGroup::setTransformation((RawTransformGroup *)this,(Matrix4x4 *)&local_228,0);
      Renderer::renderSceneToTexture
                (param_1,this,(IDisplay *)this_02,(PlaneRenderInfo *)&local_1d0,(PixelViewport *)0x0
                 ,0xb7,5,uVar3,uVar2,true,true);
      if (param_3) {
        plVar18 = *(long **)(CONCAT44(uStack_154,uStack_158) + 0x1930);
        pcVar15 = *(code **)(*plVar19 + 0x138);
      }
      else {
        plVar18 = (long *)(**(code **)(*this_02 + 0xb8))(this_02);
        pcVar15 = *(code **)(*plVar19 + 0x138);
      }
      uVar11 = (*pcVar15)(plVar19);
      PVar14 = PVar16;
      if (param_4) {
        PVar14 = PVar12;
      }
      (**(code **)(*plVar18 + 0x80))(plVar18,uVar11,param_14[lVar6],0,0,PVar14);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 6);
    Camera::setFovY(this,fVar20);
    TransformGroup::setRotation((TransformGroup *)this,(Vector3 *)&local_a8);
    pSVar8 = (ScreenSpaceProcessor *)CONCAT44(uStack_154,uStack_158);
    if (pSVar8 != (ScreenSpaceProcessor *)0x0) {
      ScreenSpaceProcessor::~ScreenSpaceProcessor(pSVar8);
      operator_delete(pSVar8);
    }
    pRVar9 = (RenderTextureController *)CONCAT44(uStack_13c,uStack_140);
    if (pRVar9 != (RenderTextureController *)0x0) {
      RenderTextureController::~RenderTextureController(pRVar9);
      operator_delete(pRVar9);
    }
    AtmosphereRenderController::~AtmosphereRenderController(this_01);
    operator_delete(this_01);
    AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared(this_00);
    operator_delete(this_00);
    if (this_02 != (long *)0x0) {
      plVar19 = (long *)(**(code **)(*this_02 + 0xb8))(this_02);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 8))();
      }
      (**(code **)(*this_02 + 8))(this_02);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this != (Camera *)0x0);
  }
  return;
}


