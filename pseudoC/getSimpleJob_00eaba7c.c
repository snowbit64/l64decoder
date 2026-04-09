// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimpleJob
// Entry Point: 00eaba7c
// Size: 156 bytes
// Signature: undefined getSimpleJob(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* simplejobsystem::SimpleJobSystemImpl::getSimpleJob() */

undefined8 simplejobsystem::SimpleJobSystemImpl::getSimpleJob(void)

{
  long in_x0;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  std::__ndk1::mutex::lock();
  if (*(long *)(in_x0 + 0xc0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ulong *)(in_x0 + 0xb8);
    lVar2 = *(long *)((long)*(void ***)(in_x0 + 0xa0) + (uVar1 >> 6 & 0x3fffffffffffff8));
    *(ulong *)(in_x0 + 0xb8) = uVar1 + 1;
    *(long *)(in_x0 + 0xc0) = *(long *)(in_x0 + 0xc0) + -1;
    uVar3 = *(undefined8 *)(lVar2 + (uVar1 & 0x1ff) * 8);
    if (0x3ff < uVar1 + 1) {
      operator_delete(**(void ***)(in_x0 + 0xa0));
      *(long *)(in_x0 + 0xa0) = *(long *)(in_x0 + 0xa0) + 8;
      *(long *)(in_x0 + 0xb8) = *(long *)(in_x0 + 0xb8) + -0x200;
    }
  }
  std::__ndk1::mutex::unlock();
  return uVar3;
}


