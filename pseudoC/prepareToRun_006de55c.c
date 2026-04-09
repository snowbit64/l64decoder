// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareToRun
// Entry Point: 006de55c
// Size: 60 bytes
// Signature: undefined prepareToRun(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::prepareToRun() */

void EngineApplication::prepareToRun(void)

{
  GlobalTimeManager *this;
  
  StopWatch::reset();
  StopWatch::start();
  this = (GlobalTimeManager *)GlobalTimeManager::getInstance();
  GlobalTimeManager::beginNewInterval(this,16.66667);
  return;
}


