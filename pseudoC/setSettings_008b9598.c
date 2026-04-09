// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008b9598
// Size: 264 bytes
// Signature: undefined __thiscall setSettings(StaticSoundGenerator * this, StaticSoundRuntimeSettings * param_1)


/* StaticSoundGenerator::setSettings(StaticSoundRuntimeSettings const*) */

undefined8 __thiscall
StaticSoundGenerator::setSettings(StaticSoundGenerator *this,StaticSoundRuntimeSettings *param_1)

{
  int iVar1;
  long lVar2;
  Logger *this_00;
  StaticSoundRuntimeSettings *pSVar3;
  
  *(undefined8 *)this = 0;
  if (*(long *)(this + 8) != 0) {
    stb_vorbis_close();
    *(undefined8 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined8 *)(this + 8) = 0;
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x28) == 1)) {
    lVar2 = stb_vorbis_open_memory
                      (*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),0,0);
    *(long *)(this + 8) = lVar2;
    if (lVar2 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 008b9660 to 008b9667 has its CatchHandler @ 008b96b0 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b966c to 008b966f has its CatchHandler @ 008b96a0 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pSVar3 = *(StaticSoundRuntimeSettings **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pSVar3 = param_1 + 1;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Ogg Vorbis decoder failed to initialize (is the ogg data broken?) \'%s\'\n"
                         ,pSVar3);
    }
    else {
      stb_vorbis_seek_start();
    }
  }
  *(StaticSoundRuntimeSettings **)this = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  return 1;
}


