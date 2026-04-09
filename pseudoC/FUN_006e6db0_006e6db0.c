// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6db0
// Entry Point: 006e6db0
// Size: 136 bytes
// Signature: undefined FUN_006e6db0(void)


void FUN_006e6db0(float *param_1)

{
  long lVar1;
  long lVar2;
  long *this;
  float fVar3;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)this,"game.graphic.display.brightness",*param_1);
  (**(code **)(*this + 0x30))(this);
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  fVar3 = *param_1;
  if (*(float *)(lVar1 + 0x2e0) != fVar3) {
    lVar2 = EngineManager::getInstance();
    *(undefined *)(*(long *)(lVar2 + 0xb8) + 0xf06) = 1;
    fVar3 = *param_1;
  }
  *(float *)(lVar1 + 0x2e0) = fVar3;
  return;
}


