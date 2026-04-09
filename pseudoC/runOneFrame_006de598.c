// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: runOneFrame
// Entry Point: 006de598
// Size: 152 bytes
// Signature: undefined __thiscall runOneFrame(EngineApplication * this, float param_1)


/* EngineApplication::runOneFrame(float) */

uint __thiscall EngineApplication::runOneFrame(EngineApplication *this,float param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((this[0x215] != (EngineApplication)0x0) && (this[0x1cf] == (EngineApplication)0x0)) {
    EngineManager::getInstance();
    uVar2 = EngineManager::exitRequested();
    if (((uVar2 & 1) == 0) ||
       (((uVar2 = EngineManager::exitRequestedIsRestart(), (uVar2 & 1) != 0 &&
         (uVar2 = EngineManager::exitRequestedIsRestartingProcess(), (uVar2 & 1) == 0)) &&
        (uVar2 = softReset(), (uVar2 & 1) != 0)))) {
      ProfilerManager::getInstance();
      ProfilerManager::enterFrame();
      uVar1 = runOneFrameInternal(this,param_1);
      ProfilerManager::getInstance();
      ProfilerManager::leaveFrame();
      return uVar1 & 1;
    }
  }
  return 0;
}


