// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cd4d0
// Entry Point: 006cd4d0
// Size: 316 bytes
// Signature: undefined FUN_006cd4d0(void)


void FUN_006cd4d0(long *param_1)

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
                    /* try { // try from 006cd5cc to 006cd5d3 has its CatchHandler @ 006cd61c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd5d8 to 006cd5db has its CatchHandler @ 006cd60c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar6 = EngineManager::getInstance();
    pcVar2 = "false";
    if (*(char *)(lVar6 + 0x248) != '\0') {
      pcVar2 = "true";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"DoF is %s\n",pcVar2);
  }
  else {
    lVar6 = EngineManager::getInstance();
    pbVar7 = (byte *)(*param_1 + 0x18);
    bVar3 = *pbVar7;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar1 == 4) {
                    /* try { // try from 006cd528 to 006cd53f has its CatchHandler @ 006cd634 */
      iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = false;
    }
    HardwareScalability::setUseDOF((HardwareScalability *)(lVar6 + 0x198),bVar4);
  }
  lVar6 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar6 + 0xb8) + 0xf06) = 1;
  return;
}


