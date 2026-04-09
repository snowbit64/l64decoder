// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderFinalComposite
// Entry Point: 00a14e5c
// Size: 356 bytes
// Signature: undefined __thiscall renderFinalComposite(Renderer * this, IDisplay * param_1)


/* Renderer::renderFinalComposite(IDisplay*) */

void __thiscall Renderer::renderFinalComposite(Renderer *this,IDisplay *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*this != (Renderer)0x0) {
    RenderController::doFinalComposite();
  }
  iVar1 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = (**(code **)(*(long *)param_1 + 0x40))(param_1,uVar4);
      if ((((uVar3 & 1) == 0) || (*this == (Renderer)0x0)) &&
         (iVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1,uVar4), iVar1 != 0)) {
        if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 00a14f80 to 00a14f87 has its CatchHandler @ 00a14fc0 */
          OverlayRenderManager::OverlayRenderManager
                    ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
          __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                       OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
          __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
        }
        OverlayRenderManager::compositeOverlayToDisplayPlane
                  ((IRenderDevice *)OverlayRenderManager::getInstance()::obj,
                   *(IDisplay **)(this + 0x30),(uint)param_1,300.0,uVar4,(ITextureObject *)0x0,
                   (ISamplerObject *)0x0,(float *)0x0);
        (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined8 *)(this + 0x30),uVar4);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    } while (uVar4 < uVar2);
  }
  return;
}


