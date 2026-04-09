// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: run
// Entry Point: 006de504
// Size: 88 bytes
// Signature: undefined run(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::run() */

void EngineApplication::run(void)

{
  EngineApplication *in_x0;
  GlobalTimeManager *this;
  ulong uVar1;
  float fVar2;
  
  StopWatch::reset();
  StopWatch::start();
  this = (GlobalTimeManager *)GlobalTimeManager::getInstance();
  GlobalTimeManager::beginNewInterval(this,16.66667);
  do {
    GlobalTimeManager::getInstance();
    fVar2 = (float)GlobalTimeManager::getCurrentDt();
    uVar1 = runOneFrame(in_x0,fVar2);
  } while ((uVar1 & 1) != 0);
  return;
}


