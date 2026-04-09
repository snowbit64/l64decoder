// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStatsAtWorldPos
// Entry Point: 0089ca34
// Size: 1496 bytes
// Signature: undefined __cdecl getStatsAtWorldPos(float param_1, float param_2, float param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8)


/* HeatmapUtil::getStatsAtWorldPos(float, float, float, float&, float&, float&, float&, float&) */

void HeatmapUtil::getStatsAtWorldPos
               (float param_1,float param_2,float param_3,float *param_4,float *param_5,
               float *param_6,float *param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  RawTransformGroup *this;
  long **pplVar14;
  AtmosphereRenderControllerShared *this_00;
  AtmosphereRenderController *this_01;
  undefined8 uVar15;
  long *plVar16;
  ScreenSpaceProcessor *pSVar17;
  RenderTextureController *pRVar18;
  int iVar19;
  long *plVar20;
  Renderer *this_02;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 in_stack_fffffffffffffc00;
  uint in_stack_fffffffffffffc60;
  uint in_stack_fffffffffffffc98;
  uint in_stack_fffffffffffffca4;
  DisplayTexture aDStack_2a8 [32];
  long *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined2 local_230;
  undefined2 uStack_22e;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 local_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined2 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  char *local_b0;
  long local_a8;
  
  lVar11 = tpidr_el0;
  local_a8 = *(long *)(lVar11 + 0x28);
  lVar13 = EngineManager::getInstance();
  this_02 = *(Renderer **)(lVar13 + 0xb8);
  if (this_02 == (Renderer *)0x0) {
    bVar12 = false;
  }
  else {
    this = (RawTransformGroup *)Renderer::getCamera();
    if (this != (RawTransformGroup *)0x0) {
      EngineManager::getRenderWindow();
      pplVar14 = (long **)Renderer::getSharedRenderArgs();
      plVar20 = *pplVar14;
      this_00 = (AtmosphereRenderControllerShared *)operator_new(0x2c8);
                    /* try { // try from 0089cad4 to 0089cad7 has its CatchHandler @ 0089d02c */
      AtmosphereRenderControllerShared::AtmosphereRenderControllerShared(this_00);
      this_01 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 0089cae8 to 0089caff has its CatchHandler @ 0089d020 */
      AtmosphereRenderController::AtmosphereRenderController
                (this_01,(IRenderDevice *)plVar20,this_00,
                 "AtmosphereRenderController used for HeatMapUtil");
      AtmosphereRenderController::init(this_01,(IRenderDevice *)plVar20,0,0x10,0x10,false);
      local_100 = 0;
      local_e4 = 0x100000001;
      local_f8 = 0;
      local_f4 = 0xffffffff00000000;
      local_dc = 0;
      local_b4 = 0;
      local_ec = 0x1000000010;
      uStack_bc = 0x3f80000000000000;
      local_c4 = 0;
      local_d0 = 0;
      local_cc = 0x100000010;
      local_d8 = 0x1600000002;
      local_b0 = "Dummy RT";
      uVar15 = (**(code **)(*plVar20 + 0x138))(plVar20);
      plVar16 = (long *)(**(code **)(*plVar20 + 0x100))(plVar20,uVar15,&local_100);
      DisplayTexture::DisplayTexture(aDStack_2a8,0x10,0x10,1.0,0,true);
      local_230 = 0;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_21c = 0;
      uStack_218 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      local_20c = 0;
      uStack_208 = 0;
      uStack_180 = 0x3f800000;
      local_188 = 0;
      uStack_140 = 0x3f800000;
      local_148 = 0;
      uStack_190 = 0;
      local_198 = 0x3f8000003f800000;
      uStack_150 = 0;
      local_158 = 0x3f8000003f800000;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      local_1fc = 0;
      uStack_1f8 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      local_1ec = 0;
      uStack_1e8 = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      local_1dc = 0;
      uStack_1d8 = 0;
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      local_1cc = 0;
      uStack_1c8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_1ac = 0;
      uStack_19c = 0;
      uStack_170 = 0x3f80000000000000;
      local_178 = 0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_130 = 0x3f80000000000000;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0x3f800000;
      uStack_238 = 0x3f8000003f800000;
      local_240 = 0;
      local_288 = plVar16;
                    /* try { // try from 0089cc5c to 0089cc63 has its CatchHandler @ 0089d040 */
      pSVar17 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 0089cc68 to 0089cc7f has its CatchHandler @ 0089d014 */
      ScreenSpaceProcessor::ScreenSpaceProcessor
                (pSVar17,this_01,(IDisplay *)aDStack_2a8,0,(IRenderDevice *)plVar20,
                 (float *)&local_240);
      uStack_1b8 = SUB84(pSVar17,0);
      uStack_1b4 = (undefined4)((ulong)pSVar17 >> 0x20);
                    /* try { // try from 0089cc84 to 0089cd5b has its CatchHandler @ 0089d040 */
      ScreenSpaceProcessor::init
                ((IRenderDevice *)pSVar17,(uint)plVar20,0x10,0x10,0x10,(float *)0x10,0,true,
                 CONCAT31((int3)((uint)in_stack_fffffffffffffc00 >> 8),1),0x1e,1,0,5,0,4,0,0,0,5,
                 false,in_stack_fffffffffffffc60 & 0xffffff00,false,false,false,false,0.5,false,
                 false,in_stack_fffffffffffffc98 & 0xffffff00,
                 (char *)((ulong)in_stack_fffffffffffffca4 << 0x20));
      lVar13 = CONCAT44(uStack_1b4,uStack_1b8);
      uVar15 = *(undefined8 *)(lVar13 + 0x1880);
      uStack_1d8 = (undefined4)*(undefined8 *)(lVar13 + 0x18d8);
      uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18d8) >> 0x20);
      uStack_1e0 = (undefined4)*(undefined8 *)(lVar13 + 0x18d0);
      local_1dc = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18d0) >> 0x20);
      uStack_1c8 = (undefined4)*(undefined8 *)(lVar13 + 0x18e8);
      uStack_1c4 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18e8) >> 0x20);
      uStack_1d0 = (undefined4)*(undefined8 *)(lVar13 + 0x18e0);
      local_1cc = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18e0) >> 0x20);
      uStack_228 = (undefined4)*(undefined8 *)(lVar13 + 0x1888);
      uStack_224 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x1888) >> 0x20);
      local_230 = (undefined2)uVar15;
      uStack_22e = (undefined2)((ulong)uVar15 >> 0x10);
      uStack_22c = (undefined4)((ulong)uVar15 >> 0x20);
      uStack_218 = (undefined4)*(undefined8 *)(lVar13 + 0x1898);
      uStack_214 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x1898) >> 0x20);
      uStack_220 = (undefined4)*(undefined8 *)(lVar13 + 0x1890);
      uStack_21c = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x1890) >> 0x20);
      uStack_208 = (undefined4)*(undefined8 *)(lVar13 + 0x18a8);
      uStack_204 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18a8) >> 0x20);
      uStack_210 = (undefined4)*(undefined8 *)(lVar13 + 0x18a0);
      local_20c = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18a0) >> 0x20);
      uStack_1c0 = (undefined4)*(undefined8 *)(lVar13 + 0x18f0);
      uStack_1bc = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18f0) >> 0x20);
      uStack_1f8 = (undefined4)*(undefined8 *)(lVar13 + 0x18b8);
      uStack_1f4 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18b8) >> 0x20);
      uStack_200 = (undefined4)*(undefined8 *)(lVar13 + 0x18b0);
      local_1fc = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18b0) >> 0x20);
      uStack_1e8 = (undefined4)*(undefined8 *)(lVar13 + 0x18c8);
      uStack_1e4 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18c8) >> 0x20);
      uStack_1f0 = (undefined4)*(undefined8 *)(lVar13 + 0x18c0);
      local_1ec = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18c0) >> 0x20);
      pRVar18 = (RenderTextureController *)operator_new(0x80);
                    /* try { // try from 0089cd60 to 0089cd8b has its CatchHandler @ 0089d010 */
      RenderTextureController::RenderTextureController
                (pRVar18,(IRenderDevice *)plVar20,0x10,0x10,1.0,0,5,false,0x1e);
      local_198 = CONCAT44(local_198._4_4_,0x3f800000);
      local_244 = 0x3f800000;
      uVar1 = *(uint *)(this_02 + 0xf10);
      uStack_1a0 = SUB84(pRVar18,0);
      uStack_19c = (undefined4)((ulong)pRVar18 >> 0x20);
      uVar2 = *(uint *)(this_02 + 0xf14);
      uStack_278 = 0;
      local_280 = 0x3f800000;
      uStack_268 = 0;
      local_270 = 0x3f80000000000000;
      uStack_258 = 0x3f800000;
      local_260 = 0;
                    /* try { // try from 0089cddc to 0089cdef has its CatchHandler @ 0089d00c */
      local_250 = param_1;
      local_24c = param_2;
      local_248 = param_3;
      RawTransformGroup::setTransformation(this,(Matrix4x4 *)&local_280,0);
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      iVar19 = 4;
      do {
        *(undefined8 *)(this_02 + 0x1afc) = 0;
        *(undefined8 *)(this_02 + 0x1af4) = 0;
        *(undefined8 *)(this_02 + 0x1ae0) = 0;
        *(undefined8 *)(this_02 + 0x1ad8) = 0;
        *(undefined8 *)(this_02 + 0x1af0) = 0;
        *(undefined8 *)(this_02 + 0x1ae8) = 0;
        *(undefined8 *)(this_02 + 0x1ac0) = 0;
        *(undefined8 *)(this_02 + 0x1ab8) = 0;
        *(undefined8 *)(this_02 + 0x1ad0) = 0;
        *(undefined8 *)(this_02 + 0x1ac8) = 0;
        *(undefined8 *)(this_02 + 0x1aa0) = 0;
        *(undefined8 *)(this_02 + 0x1a98) = 0;
        *(undefined8 *)(this_02 + 0x1ab0) = 0;
        *(undefined8 *)(this_02 + 0x1aa8) = 0;
        *(undefined8 *)(this_02 + 0x1a90) = 0;
        *(undefined8 *)(this_02 + 0x1a88) = 0;
                    /* try { // try from 0089ce3c to 0089cecb has its CatchHandler @ 0089d044 */
        Renderer::renderSceneToTexture
                  (this_02,(Camera *)this,(IDisplay *)0x0,(PlaneRenderInfo *)&local_230,
                   (PixelViewport *)0x0,0xb7,5,uVar1,uVar2,true,true);
        uVar3 = *(uint *)(this_02 + 0x1a88);
        fVar21 = (float)local_260;
        fVar22 = (float)((ulong)local_260 >> 0x20);
        fVar23 = (float)uStack_258;
        fVar24 = (float)((ulong)uStack_258 >> 0x20);
        iVar4 = *(int *)(this_02 + 0x1a98);
        iVar5 = *(int *)(this_02 + 0x1aa0);
        iVar6 = *(int *)(this_02 + 0x1a8c);
        iVar7 = *(int *)(this_02 + 0x1a90);
        fVar25 = (float)((ulong)local_280 >> 0x20);
        local_260 = CONCAT44(fVar25 + fVar22 * -4.371139e-08,
                             (float)local_280 + fVar21 * -4.371139e-08);
        fVar26 = (float)((ulong)uStack_278 >> 0x20);
        uStack_258 = CONCAT44(fVar26 + fVar24 * -4.371139e-08,
                              (float)uStack_278 + fVar23 * -4.371139e-08);
        uVar8 = *(uint *)(this_02 + 0x1ac4);
        local_280 = CONCAT44(-fVar22 + fVar25 * -4.371139e-08,
                             -fVar21 + (float)local_280 * -4.371139e-08);
        uStack_278 = CONCAT44(-fVar24 + fVar26 * -4.371139e-08,
                              -fVar23 + (float)uStack_278 * -4.371139e-08);
        uVar9 = *(uint *)(this_02 + 0x1ac8);
        uVar10 = *(uint *)(this_02 + 0x1ad8);
        RawTransformGroup::setTransformation(this,(Matrix4x4 *)&local_280,0);
        fVar27 = fVar27 + (float)(ulong)uVar10;
        fVar28 = fVar28 + (float)(ulong)uVar9;
        fVar29 = fVar29 + (float)(ulong)uVar8;
        iVar19 = iVar19 + -1;
        fVar30 = fVar30 + (float)(ulong)(uint)(iVar5 + iVar4 + iVar6 + iVar7);
        fVar31 = fVar31 + (float)(ulong)uVar3;
      } while (iVar19 != 0);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      pSVar17 = (ScreenSpaceProcessor *)CONCAT44(uStack_1b4,uStack_1b8);
      if (pSVar17 != (ScreenSpaceProcessor *)0x0) {
        ScreenSpaceProcessor::~ScreenSpaceProcessor(pSVar17);
        operator_delete(pSVar17);
      }
      pRVar18 = (RenderTextureController *)CONCAT44(uStack_19c,uStack_1a0);
      if (pRVar18 != (RenderTextureController *)0x0) {
        RenderTextureController::~RenderTextureController(pRVar18);
        operator_delete(pRVar18);
      }
      AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared(this_00);
      operator_delete(this_00);
      AtmosphereRenderController::~AtmosphereRenderController(this_01);
      operator_delete(this_01);
      *param_4 = fVar31 * 0.25;
      *param_5 = fVar30 * 0.25;
      *param_6 = fVar29 * 0.25;
      *param_7 = fVar28 * 0.25;
      *param_8 = fVar27 * 0.25;
    }
    bVar12 = this != (RawTransformGroup *)0x0;
  }
  if (*(long *)(lVar11 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar12);
}


