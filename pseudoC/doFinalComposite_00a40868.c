// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doFinalComposite
// Entry Point: 00a40868
// Size: 736 bytes
// Signature: undefined __thiscall doFinalComposite(ScreenSpaceProcessor * this, IRenderDevice * param_1, PostFxParams * param_2)


/* ScreenSpaceProcessor::doFinalComposite(IRenderDevice*, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::doFinalComposite
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,PostFxParams *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  if ((((this[0x187c] != (ScreenSpaceProcessor)0x0) && (this[0x187b] != (ScreenSpaceProcessor)0x0))
      && (*(long **)(this + 0x1858) != (long *)0x0)) &&
     (lVar7 = *(long *)(this + 0x1890), lVar2 = (**(code **)(**(long **)(this + 0x1858) + 0xb8))(),
     lVar7 != lVar2)) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    if ((this[0x1878] == (ScreenSpaceProcessor)0x0) || (this[0x1879] == (ScreenSpaceProcessor)0x0))
    {
      fVar8 = *(float *)(param_2 + 0x2f4);
      (**(code **)(*plVar3 + 0x120))(plVar3,1,this + 0x1930,0,0,0,1);
      if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 00a40ac8 to 00a40ad3 has its CatchHandler @ 00a40b4c */
        OverlayRenderManager::OverlayRenderManager
                  ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
        __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                     OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
      }
      OverlayRenderManager::compositeOverlayToDisplayPlane
                ((IRenderDevice *)OverlayRenderManager::getInstance()::obj,(IDisplay *)param_1,
                 (uint)*(undefined8 *)(this + 0x1858),fVar8,*(COLORSPACE *)(this + 0x1860),
                 (ITextureObject *)0x0,*(ISamplerObject **)(this + 0x1930),(float *)0x0);
    }
    else {
      if ((*(char *)(*(long *)(param_2 + 0x308) + 0x28) == '\0') &&
         (*(char *)(*(long *)(param_2 + 0x308) + 0x29) != '\0')) {
        toneMap(this,param_1,*(ITextureObject **)(this + 0x1918),*(ITextureObject **)(this + 0x1a90)
                ,false);
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
        (**(code **)(*plVar4 + 0x120))(plVar4,1,this + 0x1918,0,0,0,1);
        Upscaler::upscale(*(ICommandBuffer **)(param_2 + 0x308),(ITextureObject *)plVar3,
                          *(ITextureObject **)(this + 0x1918),(ITextureObject *)0x0,false,
                          (RenderArgs *)0x0,(ITextureObject **)0x0);
        uVar5 = ColorspaceUtil::colorspaceIsHdr(*(COLORSPACE *)(this + 0x1864));
        uVar6 = 7;
        if ((uVar5 & 1) == 0) {
          uVar6 = 4;
        }
        if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 00a40b10 to 00a40b1b has its CatchHandler @ 00a40b48 */
          OverlayRenderManager::OverlayRenderManager
                    ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
          __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                       OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
          __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
        }
        OverlayRenderManager::compositeOverlayToDisplayPlane
                  ((IRenderDevice *)OverlayRenderManager::getInstance()::obj,(IDisplay *)param_1,
                   (uint)*(undefined8 *)(this + 0x1858),*(float *)(param_2 + 0x2f4),
                   *(COLORSPACE *)(this + 0x1860),(ITextureObject *)(ulong)uVar6,
                   *(ISamplerObject **)(this + 0x1910),(float *)0x0);
      }
      else {
        toneMap(this,param_1,(ITextureObject *)0x0,*(ITextureObject **)(this + 0x1a90),true);
      }
      this[0x187a] = (ScreenSpaceProcessor)0x0;
      this[0x1a28] = (ScreenSpaceProcessor)((byte)this[0x1a28] ^ 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00a40ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x1858) + 0xb0))
              (*(long **)(this + 0x1858),param_1,*(undefined4 *)(this + 0x1860));
    return;
  }
  return;
}


