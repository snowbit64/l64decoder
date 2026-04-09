// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForJobsToComplete
// Entry Point: 00eab8d4
// Size: 128 bytes
// Signature: undefined waitForJobsToComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* simplejobsystem::SimpleJobSystemImpl::waitForJobsToComplete() */

void simplejobsystem::SimpleJobSystemImpl::waitForJobsToComplete(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((int)*(undefined8 *)(in_x0 + 0x10) != 0) {
    std::__ndk1::mutex::lock();
    std::__ndk1::condition_variable::wait((unique_lock *)(in_x0 + 0x3c));
    std::__ndk1::mutex::unlock();
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


