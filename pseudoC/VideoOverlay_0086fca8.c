// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VideoOverlay
// Entry Point: 0086fca8
// Size: 564 bytes
// Signature: undefined __thiscall VideoOverlay(VideoOverlay * this, char * param_1, bool param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)


/* VideoOverlay::VideoOverlay(char const*, bool, float, float, float, float, float, float, float,
   float, float) */

void __thiscall
VideoOverlay::VideoOverlay
          (VideoOverlay *this,char *param_1,bool param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,float param_10,float param_11)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  TheoraVideoDecoder *this_00;
  VideoPlayer *this_01;
  
  Overlay::Overlay((Overlay *)this,param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)this = &PTR__VideoOverlay_00fdc0c8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x800000000;
                    /* try { // try from 0086fd18 to 0086fd2f has its CatchHandler @ 0086ff18 */
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
                    /* try { // try from 0086fd40 to 0086fd53 has its CatchHandler @ 0086ff1c */
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), (uVar3 & 1) == 0))
  {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0086fe5c to 0086fe67 has its CatchHandler @ 0086fee0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0086fda0 to 0086fdb7 has its CatchHandler @ 0086ff1c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: VideoOverlay, failed to open \'%s\'.\n",param_1);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (*(long *)(this + 0x78) == 0) {
      return;
    }
  }
  else {
    this_00 = (TheoraVideoDecoder *)operator_new(0x130);
                    /* try { // try from 0086fd58 to 0086fd5f has its CatchHandler @ 0086ff08 */
    TheoraVideoDecoder::TheoraVideoDecoder(this_00,(File *)plVar2);
    if (this_00[0xf0] == (TheoraVideoDecoder)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0086fea4 to 0086feaf has its CatchHandler @ 0086fedc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: VideoOverlay, failed to load \'%s\'.\n",param_1);
      if (*(long *)(this + 0x78) == 0) {
        TheoraVideoDecoder::~TheoraVideoDecoder(this_00);
        operator_delete(this_00);
        return;
      }
    }
    else {
                    /* try { // try from 0086fd68 to 0086fd6f has its CatchHandler @ 0086ff04 */
      this_01 = (VideoPlayer *)operator_new(0x58);
                    /* try { // try from 0086fd74 to 0086fd87 has its CatchHandler @ 0086fef4 */
      VideoPlayer::VideoPlayer(this_01,this_00,param_2,param_3,true);
      *(VideoPlayer **)(this + 0x78) = this_01;
    }
  }
                    /* try { // try from 0086fdd4 to 0086fe1f has its CatchHandler @ 0086ff1c */
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::disableBackgroundGc();
  return;
}


