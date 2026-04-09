// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initPlaneRenderInfo
// Entry Point: 00a133d4
// Size: 816 bytes
// Signature: undefined __thiscall initPlaneRenderInfo(Renderer * this, PlaneRenderInfoDesc * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float param_6, IRenderDevice * param_7, IDisplay * param_8, uint param_9, PIXEL_FORMAT param_10, bool param_11, PIXEL_FORMAT param_12, uint param_13, float param_14, bool param_15)


/* Renderer::initPlaneRenderInfo(Renderer::PlaneRenderInfoDesc&, unsigned int, unsigned int,
   unsigned int, unsigned int, float, IRenderDevice*, IDisplay*, unsigned int,
   PixelFormat::PIXEL_FORMAT, bool, PixelFormat::PIXEL_FORMAT, unsigned int, float, bool) */

void __thiscall
Renderer::initPlaneRenderInfo
          (Renderer *this,PlaneRenderInfoDesc *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,float param_6,IRenderDevice *param_7,IDisplay *param_8,uint param_9,
          PIXEL_FORMAT param_10,bool param_11,PIXEL_FORMAT param_12,uint param_13,float param_14,
          bool param_15)

{
  long lVar1;
  long lVar2;
  ScreenSpaceProcessor *pSVar3;
  RenderTextureController *pRVar4;
  AtmosphereRenderController *pAVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 in_stack_ffffffffffffff30;
  undefined7 in_stack_ffffffffffffff41;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (((((*(int *)(param_1 + 0xc) == 0) || (*(uint *)(param_1 + 300) != param_2)) ||
       (*(uint *)(param_1 + 0x130) != param_3)) ||
      ((*(uint *)(param_1 + 0x134) != param_4 || (*(uint *)(param_1 + 0x138) != param_5)))) ||
     ((param_1[0x128] != (PlaneRenderInfoDesc)param_15 ||
      ((*(IDisplay **)(param_1 + 0x140) != param_8 || (*(uint *)(param_1 + 0x13c) != param_13))))))
  {
    pSVar3 = *(ScreenSpaceProcessor **)(param_1 + 0x78);
    if (pSVar3 != (ScreenSpaceProcessor *)0x0) {
      ScreenSpaceProcessor::~ScreenSpaceProcessor(pSVar3);
      operator_delete(pSVar3);
    }
    pRVar4 = *(RenderTextureController **)(param_1 + 0x90);
    if (pRVar4 != (RenderTextureController *)0x0) {
      RenderTextureController::~RenderTextureController(pRVar4);
      operator_delete(pRVar4);
    }
    pAVar5 = *(AtmosphereRenderController **)(this + 0x2038);
    if (pAVar5 != (AtmosphereRenderController *)0x0) {
      AtmosphereRenderController::~AtmosphereRenderController(pAVar5);
      operator_delete(pAVar5);
    }
    *(undefined8 *)(this + 0x2038) = 0;
    *(uint *)(param_1 + 0x13c) = param_13;
    param_1[0x128] = (PlaneRenderInfoDesc)param_15;
    *(IDisplay **)(param_1 + 0x140) = param_8;
    if (param_15) {
      *(uint *)(param_1 + 300) = param_2;
      *(uint *)(param_1 + 0x130) = param_3;
      *(uint *)(param_1 + 0x134) = param_4;
      *(uint *)(param_1 + 0x138) = param_5;
      pAVar5 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 00a1353c to 00a1354b has its CatchHandler @ 00a1370c */
      AtmosphereRenderController::AtmosphereRenderController
                (pAVar5,param_7,*(AtmosphereRenderControllerShared **)(this + 0x2030),
                 "AtmosphereRenderController used for Renderer (initPlane)");
      *(AtmosphereRenderController **)(this + 0x2038) = pAVar5;
      lVar2 = EngineManager::getInstance();
      AtmosphereRenderController::init(pAVar5,param_7,*(uint *)(lVar2 + 0x24c),param_2,param_3,true)
      ;
      uStack_88 = *(undefined8 *)(this + 0x558);
      local_90 = *(undefined8 *)(this + 0x550);
      pSVar3 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 00a1358c to 00a1359f has its CatchHandler @ 00a13708 */
      ScreenSpaceProcessor::ScreenSpaceProcessor
                (pSVar3,*(AtmosphereRenderController **)(this + 0x2038),param_8,param_9,param_7,
                 (float *)&local_90);
      *(ScreenSpaceProcessor **)(param_1 + 0x78) = pSVar3;
      pRVar4 = (RenderTextureController *)operator_new(0x80);
                    /* try { // try from 00a135b0 to 00a135d3 has its CatchHandler @ 00a13704 */
      RenderTextureController::RenderTextureController
                (pRVar4,param_7,param_2,param_3,param_14,0,param_10,param_11,param_12);
      *(RenderTextureController **)(param_1 + 0x90) = pRVar4;
    }
    else {
      *(undefined2 *)param_1 = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 300) = 0;
      *(undefined8 *)(param_1 + 0x134) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x6c) = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x7c) = 0;
      *(undefined8 *)(param_1 + 0x74) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(undefined8 *)(param_1 + 0x84) = 0;
      *(undefined8 *)(this + 0x2038) = 0;
    }
    *(float *)(param_1 + 0x98) = param_6;
  }
  if (*(IRenderDevice **)(param_1 + 0x78) != (IRenderDevice *)0x0) {
    ScreenSpaceProcessor::initParametersFromHardwareScalability
              (*(IRenderDevice **)(param_1 + 0x78),(uint)param_7,param_2,param_3,param_4,
               (float *)(ulong)param_5,(int)this + 0x1de4,SUB41(param_10,0),
               CONCAT31((int3)((uint)in_stack_ffffffffffffff30 >> 8),param_11) & 0xffffff01,
               SUB41(param_12,0),(char *)CONCAT71(in_stack_ffffffffffffff41,this[0xf05]));
    lVar2 = *(long *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(lVar2 + 0x18b8);
    uVar6 = *(undefined8 *)(lVar2 + 0x18b0);
    uVar8 = *(undefined8 *)(lVar2 + 0x18a0);
    uVar10 = *(undefined8 *)(lVar2 + 0x1888);
    uVar9 = *(undefined8 *)(lVar2 + 0x1880);
    uVar12 = *(undefined8 *)(lVar2 + 0x1898);
    uVar11 = *(undefined8 *)(lVar2 + 0x1890);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x18a8);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar10;
    *(undefined8 *)param_1 = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    uVar7 = *(undefined8 *)(lVar2 + 0x18e8);
    uVar6 = *(undefined8 *)(lVar2 + 0x18e0);
    uVar9 = *(undefined8 *)(lVar2 + 0x18c8);
    uVar8 = *(undefined8 *)(lVar2 + 0x18c0);
    uVar11 = *(undefined8 *)(lVar2 + 0x18d8);
    uVar10 = *(undefined8 *)(lVar2 + 0x18d0);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar2 + 0x18f0);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x58) = uVar11;
    *(undefined8 *)(param_1 + 0x50) = uVar10;
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    *(undefined8 *)(param_1 + 0x60) = uVar6;
  }
  if (*(ShadowBufferRenderController **)(param_1 + 0x80) != (ShadowBufferRenderController *)0x0) {
    ShadowBufferRenderController::initialize
              (*(ShadowBufferRenderController **)(param_1 + 0x80),param_2,param_3);
  }
  if (*(ShadowDenoiser **)(param_1 + 0x88) != (ShadowDenoiser *)0x0) {
    ShadowDenoiser::initialize(*(ShadowDenoiser **)(param_1 + 0x88),param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


