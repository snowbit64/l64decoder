// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc09c
// Entry Point: 006cc09c
// Size: 312 bytes
// Signature: undefined FUN_006cc09c(void)


void FUN_006cc09c(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  Logger *this;
  
  if ((ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 006cc194 to 006cc19b has its CatchHandler @ 006cc1e4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cc1a0 to 006cc1a3 has its CatchHandler @ 006cc1d4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar6 = EngineManager::getInstance();
    pcVar2 = "disabled";
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xf05) != '\0') {
      pcVar2 = "enabled";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Cloud-Rendering is %s\n",pcVar2);
  }
  else {
    lVar6 = EngineManager::getInstance();
    pbVar7 = (byte *)(*param_1 + 0x18);
    bVar3 = *pbVar7;
    lVar6 = *(long *)(lVar6 + 0xb8);
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar1 == 4) {
                    /* try { // try from 006cc0f8 to 006cc10f has its CatchHandler @ 006cc1fc */
      iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = false;
    }
    *(bool *)(lVar6 + 0xf05) = bVar4;
    *(undefined *)(lVar6 + 0xf06) = 1;
  }
  return;
}


