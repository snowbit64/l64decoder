// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startJobs
// Entry Point: 00eab844
// Size: 144 bytes
// Signature: undefined startJobs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* simplejobsystem::SimpleJobSystemImpl::startJobs() */

ulong simplejobsystem::SimpleJobSystemImpl::startJobs(void)

{
  long in_x0;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  std::__ndk1::mutex::lock();
  FUN_00f27700(*(undefined4 *)(in_x0 + 0xc0),(ulong *)(in_x0 + 0x10));
  uVar1 = *(ulong *)(in_x0 + 0x10);
  if (*(int *)(in_x0 + 0x6c) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      SimpleJobThread::start
                ((SimpleJobThread *)(*(long *)(in_x0 + 200) + lVar2),(FindJobs *)(in_x0 + 8),
                 *(IUserTaskRunner **)(in_x0 + 0xd0));
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x80;
    } while (uVar3 < *(uint *)(in_x0 + 0x6c));
  }
  std::__ndk1::mutex::unlock();
  return uVar1 & 0xffffffff;
}


