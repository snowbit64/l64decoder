// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toneMap
// Entry Point: 00a40d2c
// Size: 692 bytes
// Signature: undefined __thiscall toneMap(ScreenSpaceProcessor * this, IRenderDevice * param_1, ITextureObject * param_2, ITextureObject * param_3, bool param_4)


/* ScreenSpaceProcessor::toneMap(IRenderDevice*, ITextureObject*, ITextureObject*, bool) */

void __thiscall
ScreenSpaceProcessor::toneMap
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ITextureObject *param_2,
          ITextureObject *param_3,bool param_4)

{
  ScreenSpaceProcessor *pSVar1;
  ScreenSpaceProcessor SVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ITextureObject *local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  char *local_168;
  undefined8 uStack_160;
  char *local_158;
  undefined8 uStack_150;
  char *local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  ITextureObject *pIStack_120;
  undefined4 local_118 [2];
  char *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  char *local_f8;
  ITextureObject *pIStack_f0;
  undefined4 local_e8 [32];
  long local_68;
  long lVar8;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar1 = this + 0x1b64;
  pIStack_120 = *(ITextureObject **)(this + 0x1930);
  local_118[0] = 0xffffffff;
  local_128 = "sceneTexture";
  if (*pSVar1 == (ScreenSpaceProcessor)0x0) {
    uStack_130 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38);
    local_138 = "eyeAdaptedLuminanceBuffer";
  }
  local_100 = 0xffffffff;
  uStack_108 = *(undefined8 *)(this + 0x1968);
  local_110 = "colorLUT";
  local_190 = param_2;
  if (param_4) {
    if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar4 != 0)) {
                    /* try { // try from 00a40fa4 to 00a40faf has its CatchHandler @ 00a40fe0 */
      OverlayRenderManager::OverlayRenderManager
                ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
      __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                   OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
    }
    lVar5 = OverlayRenderManager::getOverlayTexture
                      ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj,
                       *(IDisplay **)(this + 0x1858),*(uint *)(this + 0x1860));
    lVar8 = 3;
    uVar7 = 3;
    pIStack_f0 = (ITextureObject *)*(long *)(this + 0x1a20);
    if (lVar5 != 0) {
      pIStack_f0 = (ITextureObject *)lVar5;
    }
    local_e8[0] = 0xffffffff;
    local_f8 = "overlayTexture";
    iVar4 = *(int *)(this + 0x1b3c);
    lVar5 = local_178;
  }
  else {
    lVar8 = 2;
    uVar7 = 2;
    iVar4 = *(int *)(this + 0x1b3c);
    lVar5 = local_178;
  }
  if (iVar4 != 0) {
    uVar7 = (int)lVar8 + 1;
    local_118[lVar8 * 6] = 0xffffffff;
    (&local_128)[lVar8 * 3] = "bloomMaskTexture";
    (&pIStack_120)[lVar8 * 3] = param_3;
  }
  uStack_160 = *(undefined8 *)(this + 0x19d0);
  uStack_150 = *(undefined8 *)(this + 0x1988);
  local_168 = "DeviceParameters";
  uStack_140 = *(undefined8 *)(this + 0x1a00);
  local_180 = *(undefined8 *)(this + 0x1930);
  local_178 = *(long *)(this + 0x1a90);
  local_158 = "BloomParams";
  local_148 = "PreRotationParams";
  if (local_178 == 0) {
    uVar10 = 1;
    SVar2 = *pSVar1;
    local_178 = lVar5;
  }
  else {
    uVar10 = 2;
    SVar2 = *pSVar1;
  }
  if (SVar2 == (ScreenSpaceProcessor)0x0) {
    uVar11 = 9;
    local_188 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38);
  }
  else {
    uVar11 = 1;
  }
  uVar9 = (uint)(SVar2 == (ScreenSpaceProcessor)0x0);
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  (**(code **)(*plVar6 + 0x120))(plVar6,uVar10,&local_180,uVar9,&local_188,0,uVar11);
  postProcess(this,param_1,(ShaderTexture *)&local_128,uVar7,(ShaderStructBuffer *)&local_138,uVar9,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_168,3,
              (AdhocShader *)(this + ((ulong)param_4 & 1) * 0x100 + 0x1658),&local_190,
              (uint)(local_190 != (ITextureObject *)0x0),3,false,0);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


