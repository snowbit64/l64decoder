// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRectangleAttributes
// Entry Point: 008d5608
// Size: 216 bytes
// Signature: undefined __thiscall setRectangleAttributes(FoliageBendingSystem * this, uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* FoliageBendingSystem::setRectangleAttributes(unsigned int, float, float, float, float, float) */

undefined8 __thiscall
FoliageBendingSystem::setRectangleAttributes
          (FoliageBendingSystem *this,uint param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  int iVar1;
  undefined8 uVar2;
  Logger *this_00;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)param_1;
  if ((param_1 < *(uint *)(this + 0x40)) &&
     (*(char *)(*(long *)(this + 0x30) + uVar3 * 0xa0) != '\0')) {
    uVar2 = 1;
    lVar4 = *(long *)(this + 0x30) + uVar3 * 0xa0;
    *(float *)(lVar4 + 4) = param_2;
    *(float *)(lVar4 + 8) = param_3;
    *(float *)(lVar4 + 0x10) = param_4;
    *(float *)(lVar4 + 0x14) = param_5;
    *(float *)(lVar4 + 0xc) = param_6;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008d56a0 to 008d56a7 has its CatchHandler @ 008d56f0 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008d56ac to 008d56af has its CatchHandler @ 008d56e0 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: modifying invalid FoliageBendingSystem object index %u\n",uVar3);
    uVar2 = 0;
  }
  return uVar2;
}


