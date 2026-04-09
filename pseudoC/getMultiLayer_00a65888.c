// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMultiLayer
// Entry Point: 00a65888
// Size: 204 bytes
// Signature: undefined __thiscall getMultiLayer(FoliageSystemDesc * this, uint param_1, bool param_2)


/* FoliageSystemDesc::getMultiLayer(unsigned int, bool) */

long __thiscall FoliageSystemDesc::getMultiLayer(FoliageSystemDesc *this,uint param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  Logger *this_00;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)param_1;
  uVar4 = (*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) * -0x3333333333333333;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    if (param_2) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00a65914 to 00a6591b has its CatchHandler @ 00a65964 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a65920 to 00a65923 has its CatchHandler @ 00a65954 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: FoliageSystemDesc: multiLayer index %u is out of range.\n",uVar3);
    }
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0x10) + uVar3 * 0x28;
  }
  return lVar2;
}


