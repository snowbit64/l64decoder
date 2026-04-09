// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cff28
// Entry Point: 006cff28
// Size: 292 bytes
// Signature: undefined FUN_006cff28(void)


void FUN_006cff28(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  Logger *this;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 006d000c to 006d0013 has its CatchHandler @ 006d005c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006d0018 to 006d001b has its CatchHandler @ 006d004c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar2 = "disabled";
    if (TrafficSystem::s_debugRenderingEnabled != '\0') {
      pcVar2 = "enabled";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Traffic system debug rendering is %s\n",pcVar2);
  }
  else {
    bVar4 = *(byte *)(lVar3 + 0x18);
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(lVar3 + 0x20);
    }
    if (uVar1 == 4) {
                    /* try { // try from 006cff70 to 006cff87 has its CatchHandler @ 006d0074 */
      iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)(byte *)(lVar3 + 0x18),0,(char *)0xffffffffffffffff,0x4ec5fc);
      TrafficSystem::s_debugRenderingEnabled = iVar5 == 0;
    }
    else {
      TrafficSystem::s_debugRenderingEnabled = '\0';
    }
  }
  return;
}


