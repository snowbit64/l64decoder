// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackStart
// Entry Point: 008b945c
// Size: 232 bytes
// Signature: undefined notifyPlaybackStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSoundGenerator::notifyPlaybackStart() */

void StaticSoundGenerator::notifyPlaybackStart(void)

{
  int iVar1;
  byte **in_x0;
  byte *pbVar2;
  Logger *this;
  byte *pbVar3;
  
  if ((in_x0[1] == (byte *)0x0) &&
     (pbVar3 = *in_x0, *(int *)(pbVar3 + 0x30) != 0 && *(int *)(pbVar3 + 0x28) == 1)) {
    pbVar2 = (byte *)stb_vorbis_open_memory
                               (*(undefined8 *)(pbVar3 + 0x18),*(undefined4 *)(pbVar3 + 0x2c),0,0);
    in_x0[1] = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      stb_vorbis_seek_start();
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b9504 to 008b950b has its CatchHandler @ 008b9554 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 008b9510 to 008b9513 has its CatchHandler @ 008b9544 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pbVar2 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar2 = pbVar3 + 1;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Ogg Vorbis decoder failed to initialize (is the ogg data broken?) \'%s\'\n",
                       pbVar2);
  }
  return;
}


