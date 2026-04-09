// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6ecc
// Entry Point: 006e6ecc
// Size: 144 bytes
// Signature: undefined FUN_006e6ecc(void)


void FUN_006e6ecc(float *param_1)

{
  long lVar1;
  long lVar2;
  long *this;
  float fVar3;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)this,"game.graphic.display.brightnessNits",*param_1);
  (**(code **)(*this + 0x30))(this);
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  fVar3 = *param_1;
  if (*(float *)(lVar1 + 0x2fc) != fVar3) {
    lVar2 = EngineManager::getInstance();
    *(undefined *)(*(long *)(lVar2 + 0xb8) + 0xf06) = 1;
    fVar3 = *param_1;
  }
  *(float *)(lVar1 + 0x2fc) = fVar3;
  *(float *)(lVar1 + 0x300) = *param_1;
  return;
}


