// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initLoadingScreen
// Entry Point: 006db7e4
// Size: 172 bytes
// Signature: undefined __thiscall initLoadingScreen(EngineApplication * this, bool param_1)


/* EngineApplication::initLoadingScreen(bool) */

void __thiscall EngineApplication::initLoadingScreen(EngineApplication *this,bool param_1)

{
  IRenderWindow *pIVar1;
  DisplayMonitor *this_00;
  undefined8 uVar2;
  float fVar3;
  
  pIVar1 = (IRenderWindow *)(**(code **)(**(long **)(this + 0x170) + 0x80))();
  this_00 = (DisplayMonitor *)operator_new(0x28);
                    /* try { // try from 006db81c to 006db82f has its CatchHandler @ 006db890 */
  EngineManager::getInstance();
  fVar3 = (float)EngineManager::getScreenAspectRatio();
  DisplayMonitor::DisplayMonitor(this_00,pIVar1,fVar3);
  *(DisplayMonitor **)(this + 0x290) = this_00;
  drawInitialFrame(this,*(IRenderWindow **)(this + 0x178),0.0,true,(IDisplay *)this_00,param_1,true)
  ;
  drawInitialFrame(this,*(IRenderWindow **)(this + 0x178),0.0,true,*(IDisplay **)(this + 0x290),
                   param_1,true);
  uVar2 = Watch::getCurrentTicks();
  *(undefined8 *)(this + 0x260) = uVar2;
  return;
}


