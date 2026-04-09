// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initCamera
// Entry Point: 006dbe60
// Size: 164 bytes
// Signature: undefined initCamera(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::initCamera() */

void EngineApplication::initCamera(void)

{
  Camera *this;
  long *plVar1;
  long lVar2;
  float fVar3;
  
  this = (Camera *)operator_new(0x170);
                    /* try { // try from 006dbe78 to 006dbeaf has its CatchHandler @ 006dbf04 */
  fVar3 = (float)MathUtil::degreeToRadian(55.0);
  Camera::Camera(this,"default camera",fVar3,0.25,10000.0,false,1.0,0);
  ScenegraphNode::setVisibility((ScenegraphNode *)this,false);
  EngineManager::getInstance();
  plVar1 = (long *)Renderer::getRootNode();
  (**(code **)(*plVar1 + 0x18))(plVar1,this,0xffffffff);
  lVar2 = EngineManager::getInstance();
  Renderer::setDefaultCamera(*(Renderer **)(lVar2 + 0xb8),this);
  lVar2 = EngineManager::getInstance();
  Renderer::setCamera(*(Renderer **)(lVar2 + 0xb8),this);
  return;
}


