// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00750068
// Size: 244 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::destroy() */

void EngineManager::destroy(void)

{
  long in_x0;
  I3DManager *this;
  AndroidInAppPurchase *this_00;
  Renderer *this_01;
  FontOverlayRenderer *this_02;
  TextureOverlayRenderer *this_03;
  void *pvVar1;
  
  *(undefined8 *)(in_x0 + 200) = 0;
  ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::stopContext();
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::clearCache(this,true);
  I3DStreamingManager::destroy();
  this_01 = *(Renderer **)(in_x0 + 0xb8);
  if (this_01 != (Renderer *)0x0) {
    Renderer::~Renderer(this_01);
    operator_delete(this_01);
  }
  ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::destroyContext();
  Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::release();
  ScriptSystemManager::getInstance();
  ScriptSystemManager::destroyCurrentScriptSystem();
  this_02 = *(FontOverlayRenderer **)(in_x0 + 0xf8);
  if (this_02 != (FontOverlayRenderer *)0x0) {
    FontOverlayRenderer::~FontOverlayRenderer(this_02);
    operator_delete(this_02);
  }
  this_03 = *(TextureOverlayRenderer **)(in_x0 + 0x100);
  if (this_03 != (TextureOverlayRenderer *)0x0) {
    TextureOverlayRenderer::~TextureOverlayRenderer(this_03);
    operator_delete(this_03);
  }
  if (*(void **)(in_x0 + 0x2c8) != (void *)0x0) {
    operator_delete(*(void **)(in_x0 + 0x2c8));
  }
  pvVar1 = *(void **)(in_x0 + 0x2e0);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 0x20) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x30));
    }
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x18));
    }
    operator_delete(pvVar1);
  }
  this_00 = *(AndroidInAppPurchase **)(in_x0 + 0x2d0);
  if (this_00 != (AndroidInAppPurchase *)0x0) {
    AndroidInAppPurchase::~AndroidInAppPurchase(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


