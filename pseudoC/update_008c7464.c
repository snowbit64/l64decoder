// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008c7464
// Size: 56 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SplineGeometry::update() */

void SplineGeometry::update(void)

{
  SplineGeometry *in_x0;
  IRenderDevice *pIVar1;
  
  VertexBufferGeometry::deleteBuffers();
  init();
  RenderDeviceManager::getInstance();
  pIVar1 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
  initGraphics(in_x0,pIVar1);
  return;
}


