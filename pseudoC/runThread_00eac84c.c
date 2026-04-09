// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: runThread
// Entry Point: 00eac84c
// Size: 248 bytes
// Signature: undefined runThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* simplejobsystem::SimpleJobThread::runThread() */

void simplejobsystem::SimpleJobThread::runThread(void)

{
  long lVar1;
  long **in_x0;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(in_x0 + 1) & 1) == 0) {
    do {
      puVar2 = (undefined8 *)(**(code **)**in_x0)();
      while (puVar2 != (undefined8 *)0x0) {
        (*(code *)puVar2[1])(*puVar2);
        (**(code **)(**in_x0 + 8))(*in_x0,puVar2);
        puVar2 = (undefined8 *)(**(code **)**in_x0)();
      }
      std::__ndk1::mutex::lock();
      std::__ndk1::condition_variable::wait((unique_lock *)(in_x0 + 9));
      std::__ndk1::mutex::unlock();
    } while ((*(byte *)(in_x0 + 1) & 1) == 0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


