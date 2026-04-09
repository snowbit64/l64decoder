// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSettingsChanged
// Entry Point: 006d0ae0
// Size: 248 bytes
// Signature: undefined onSettingsChanged(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Application::onSettingsChanged() */

void Application::onSettingsChanged(void)

{
  long in_x0;
  long lVar1;
  EngineManager *this;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)Properties::getFloat
                           (*(Properties **)(in_x0 + 0x188),"game.graphic.display.scaling",1.0);
  fVar3 = (float)Properties::getFloat
                           (*(Properties **)(in_x0 + 0x188),"game.graphic.display.uiScaling",1.0);
  *(float *)(in_x0 + 0x198) = fVar2 * fVar3;
  fVar3 = (float)Properties::getFloat
                           (*(Properties **)(in_x0 + 0x188),"game.graphic.display.rtScaling",1.0);
  *(float *)(in_x0 + 0x19c) = fVar2 * fVar3;
  lVar1 = EngineManager::getInstance();
  *(float *)(in_x0 + 0x198) = *(float *)(lVar1 + 0x1b8) * *(float *)(in_x0 + 0x198);
  lVar1 = EngineManager::getInstance();
  fVar4 = *(float *)(in_x0 + 0x198);
  fVar3 = *(float *)(lVar1 + 0x1bc) * *(float *)(in_x0 + 0x19c);
  fVar2 = 0.1;
  if ((0.1 <= fVar4) && (fVar2 = 10.0, fVar4 <= 10.0)) {
    fVar2 = fVar4;
  }
  *(float *)(in_x0 + 0x198) = fVar2;
  fVar2 = 0.1;
  if ((0.1 <= fVar3) && (fVar2 = 10.0, fVar3 <= 10.0)) {
    fVar2 = fVar3;
  }
  *(float *)(in_x0 + 0x19c) = fVar2;
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::onSettingsChanged(this,*(float *)(in_x0 + 0x198),*(float *)(in_x0 + 0x19c));
  return;
}


