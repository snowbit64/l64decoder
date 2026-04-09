// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: importData
// Entry Point: 008a39b0
// Size: 288 bytes
// Signature: undefined __thiscall importData(LoopSynthesisDataExchanger * this, char * param_1, uchar * param_2, uint param_3)


/* LoopSynthesisDataExchanger::importData(char const*, unsigned char const*, unsigned int) */

undefined4 __thiscall
LoopSynthesisDataExchanger::importData
          (LoopSynthesisDataExchanger *this,char *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  Logger *this_00;
  StopWatch aSStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  StopWatch::StopWatch(aSStack_60);
  StopWatch::start();
  uVar3 = importData(this,param_1,param_2,param_3,(GLSHeader *)this);
  StopWatch::stop();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008a3a8c to 008a3a93 has its CatchHandler @ 008a3ae0 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a3a98 to 008a3a9b has its CatchHandler @ 008a3ad0 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar1 = *(uint *)(this + 4);
  StopWatch::getStoppedMs();
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "%s version %d (%.2f ms)\n",param_1,(ulong)uVar1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


