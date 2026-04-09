// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d0348
// Entry Point: 006d0348
// Size: 300 bytes
// Signature: undefined FUN_006d0348(void)


void FUN_006d0348(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  DebugMarkerManager *this;
  byte *pbVar5;
  ulong uVar6;
  Logger *this_00;
  
  if (1 < (ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555)) {
    this = (DebugMarkerManager *)DebugMarkerManager::getInstance();
    pbVar5 = (byte *)(*param_1 + 0x18);
    bVar2 = *pbVar5;
    uVar6 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar6 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar6 == 4) {
                    /* try { // try from 006d03a0 to 006d03b7 has its CatchHandler @ 006d049c */
      iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar5,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = false;
    }
    DebugMarkerManager::setEnabled(this,bVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006d0434 to 006d043b has its CatchHandler @ 006d0484 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 006d0440 to 006d0443 has its CatchHandler @ 006d0474 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  DebugMarkerManager::getInstance();
  uVar6 = DebugMarkerManager::getEnabled();
  pcVar1 = "enabled";
  if ((uVar6 & 1) == 0) {
    pcVar1 = "disabled";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Debug Marker rendering is %s\n",pcVar1);
  return;
}


