// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5a0c
// Entry Point: 007b5a0c
// Size: 40 bytes
// Signature: undefined FUN_007b5a0c(void)


void FUN_007b5a0c(RenderOverlay *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  TextureOverlayRenderer::addPendingRenderOverlay
            (*(TextureOverlayRenderer **)(lVar1 + 0x100),param_1);
  return;
}


