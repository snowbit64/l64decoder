// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClipDistanceThresholds
// Entry Point: 008c1f30
// Size: 180 bytes
// Signature: undefined __thiscall setClipDistanceThresholds(CullingGrid2D * this, uint param_1, float * param_2)


/* CullingGrid2D::setClipDistanceThresholds(unsigned int, float*) */

void __thiscall
CullingGrid2D::setClipDistanceThresholds(CullingGrid2D *this,uint param_1,float *param_2)

{
  int iVar1;
  Logger *this_00;
  
  if (param_1 == 2) {
    *(float *)(this + 0x34) = *param_2;
    *(float *)(this + 0x38) = param_2[1];
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c1fa4 to 008c1fab has its CatchHandler @ 008c1ff4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c1fb0 to 008c1fb3 has its CatchHandler @ 008c1fe4 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error: The number of passed culling clip distance thresholds must be %u.",2);
  }
  setupGrid();
  return;
}


