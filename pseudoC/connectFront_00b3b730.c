// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectFront
// Entry Point: 00b3b730
// Size: 304 bytes
// Signature: undefined connectFront(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::connectFront() */

void MasterServerManager::connectFront(void)

{
  undefined4 uVar1;
  int iVar2;
  void *in_x0;
  undefined *puVar3;
  Thread *this;
  
  if (*(int *)((long)in_x0 + 0x178) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b3b828 to 00b3b833 has its CatchHandler @ 00b3b860 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Connecting to front server, still connected state: %u\n",
                       (ulong)*(uint *)((long)in_x0 + 0x178));
    return;
  }
  uVar1 = MathUtil::getRandomMinMax(0,1);
  *(undefined4 *)((long)in_x0 + 0x174) = uVar1;
  *(undefined *)((long)in_x0 + 0x38) = 0;
  if (*(char *)((long)in_x0 + 0x4c0) == '\0') {
    *(undefined *)((long)in_x0 + 0x4c0) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)((long)in_x0 + 0x4c8));
    if (*(void **)((long)in_x0 + 0x4b8) != (void *)0x0) {
      operator_delete(*(void **)((long)in_x0 + 0x4b8));
    }
    puVar3 = (undefined *)operator_new(1);
    *(undefined **)((long)in_x0 + 0x4b8) = puVar3;
    *puVar3 = 1;
  }
  *(undefined *)((long)in_x0 + 0x170) = 0;
  *(undefined4 *)((long)in_x0 + 0x178) = 4;
  this = (Thread *)operator_new(0x48);
                    /* try { // try from 00b3b7e0 to 00b3b7e3 has its CatchHandler @ 00b3b878 */
  Thread::Thread(this);
  *(Thread **)((long)in_x0 + 0x168) = this;
  Thread::start(this,backgroundHttpsConnectingFront,in_x0,0xffffffff,"GIANTS Https connecting",2,
                0x80000);
  return;
}


