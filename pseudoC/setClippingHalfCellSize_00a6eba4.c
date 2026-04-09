// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClippingHalfCellSize
// Entry Point: 00a6eba4
// Size: 216 bytes
// Signature: undefined __thiscall setClippingHalfCellSize(LocalGeometryTransformGroup * this, float param_1)


/* LocalGeometryTransformGroup::setClippingHalfCellSize(float) */

void __thiscall
LocalGeometryTransformGroup::setClippingHalfCellSize
          (LocalGeometryTransformGroup *this,float param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (1.25 < param_1 / *(float *)(this + 0x164)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a6ec3c to 00a6ec43 has its CatchHandler @ 00a6ec8c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a6ec48 to 00a6ec4b has its CatchHandler @ 00a6ec7c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)((param_1 / *(float *)(this + 0x164) + -1.0) * 100.0),
                      "Info: transform group \'%s\' has elements very far out from the cell edge (%.2f%% expansion)\n"
                      ,*(undefined8 *)(this + 8));
  }
  *(float *)(this + 0x164) = param_1;
  return;
}


