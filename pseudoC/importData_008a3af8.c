// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: importData
// Entry Point: 008a3af8
// Size: 388 bytes
// Signature: undefined __thiscall importData(LoopSynthesisDataExchanger * this, char * param_1, uchar * param_2, uint param_3, GLSHeader * param_4)


/* LoopSynthesisDataExchanger::importData(char const*, unsigned char const*, unsigned int,
   LoopSynthesisBinaryUtil::GLSHeader&) */

int __thiscall
LoopSynthesisDataExchanger::importData
          (LoopSynthesisDataExchanger *this,char *param_1,uchar *param_2,uint param_3,
          GLSHeader *param_4)

{
  int iVar1;
  int iVar2;
  Logger *this_00;
  
  GranularSynthesisRuntimeSettings::reset();
  GranularSynthesisRuntimeSettings::reset();
  SteadyLoopRuntimeSettings::reset();
  SteadyLoopRuntimeSettings::reset();
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)param_4 = 0;
  iVar1 = LoopSynthesisBinaryUtil::checkHeader(param_1,param_2,param_4);
  if ((iVar1 != 0) && (iVar1 < (int)param_3)) {
    iVar2 = LoopSynthesisBinaryUtil::read
                      (param_2 + iVar1,param_3,iVar1,param_4,
                       (GranularSynthesisRuntimeSettings *)(this + 0x38),
                       (GranularSynthesisRuntimeSettings *)(this + 0x90),
                       (SteadyLoopRuntimeSettings *)(this + 0xe8),
                       (StaticSoundRuntimeSettings *)(this + 0x100),
                       (StaticSoundRuntimeSettings *)(this + 0x140),
                       (LoadSimulationRuntimeSettings *)(this + 0x180),
                       (FadeRuntimeSettings *)(this + 600),
                       (SteadyLoopRuntimeSettings *)(this + 0x1e0),
                       (LoadSimulationRuntimeSettings *)(this + 0x1f8));
    if (iVar2 == -1) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 008a3c3c to 008a3c43 has its CatchHandler @ 008a3c8c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008a3c48 to 008a3c4b has its CatchHandler @ 008a3c7c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error import \'%s\'.\n",param_1);
      iVar1 = 0;
    }
    else {
      iVar1 = iVar2 + iVar1;
    }
  }
  return iVar1;
}


