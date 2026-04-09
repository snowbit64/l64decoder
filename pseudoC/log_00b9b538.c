// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: log
// Entry Point: 00b9b538
// Size: 228 bytes
// Signature: undefined log(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringStream::log() */

void StringStream::log(void)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  StringStream *in_x0;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
                    /* try { // try from 00b9b55c to 00b9b59f has its CatchHandler @ 00b9b630 */
  resolve(in_x0,(basic_string *)&local_40);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b9b5e0 to 00b9b5eb has its CatchHandler @ 00b9b61c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pvVar1 = (void *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    pvVar1 = local_30;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,pvVar1);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


