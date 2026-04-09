// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSettingsChanged
// Entry Point: 00a124a0
// Size: 164 bytes
// Signature: undefined __thiscall onSettingsChanged(Renderer * this, float param_1, float param_2)


/* Renderer::onSettingsChanged(float, float) */

void __thiscall Renderer::onSettingsChanged(Renderer *this,float param_1,float param_2)

{
  int iVar1;
  
  *(float *)(this + 0x1ddc) = param_1;
  *(float *)(this + 0x1de0) = param_2;
  *(undefined8 *)(this + 0xd0) = 0;
  RenderController::onSettingsChanged();
  deletePlaneRenderInfos();
  IndirectLightRenderController::termRendering();
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 00a1250c to 00a12517 has its CatchHandler @ 00a12544 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  OverlayRenderManager::deleteOverlayTexture();
  return;
}


