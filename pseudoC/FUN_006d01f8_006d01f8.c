// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d01f8
// Entry Point: 006d01f8
// Size: 292 bytes
// Signature: undefined FUN_006d01f8(void)


void FUN_006d01f8(long *param_1)

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
                    /* try { // try from 006d02dc to 006d02e3 has its CatchHandler @ 006d032c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006d02e8 to 006d02eb has its CatchHandler @ 006d031c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar2 = "disabled";
    if (NoteNode::s_isRenderActive != '\0') {
      pcVar2 = "enabled";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Notes rendering is %s\n",pcVar2);
  }
  else {
    bVar4 = *(byte *)(lVar3 + 0x18);
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(lVar3 + 0x20);
    }
    if (uVar1 == 4) {
                    /* try { // try from 006d0240 to 006d0257 has its CatchHandler @ 006d0344 */
      iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)(byte *)(lVar3 + 0x18),0,(char *)0xffffffffffffffff,0x4ec5fc);
      NoteNode::s_isRenderActive = iVar5 == 0;
    }
    else {
      NoteNode::s_isRenderActive = '\0';
    }
  }
  return;
}


