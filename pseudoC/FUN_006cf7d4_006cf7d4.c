// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cf7d4
// Entry Point: 006cf7d4
// Size: 300 bytes
// Signature: undefined FUN_006cf7d4(void)


void FUN_006cf7d4(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  TextureStreamingManager *this;
  byte *pbVar5;
  ulong uVar6;
  Logger *this_00;
  
  if (1 < (ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555)) {
    this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
    pbVar5 = (byte *)(*param_1 + 0x18);
    bVar2 = *pbVar5;
    uVar6 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar6 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar6 == 4) {
                    /* try { // try from 006cf82c to 006cf843 has its CatchHandler @ 006cf928 */
      iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar5,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = false;
    }
    TextureStreamingManager::setPaused(this,bVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006cf8c0 to 006cf8c7 has its CatchHandler @ 006cf910 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cf8cc to 006cf8cf has its CatchHandler @ 006cf900 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  TextureStreamingManager::getInstance();
  uVar6 = TextureStreamingManager::isPaused();
  pcVar1 = "paused";
  if ((uVar6 & 1) == 0) {
    pcVar1 = "not paused";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Texture streaming is %s\n",pcVar1);
  return;
}


