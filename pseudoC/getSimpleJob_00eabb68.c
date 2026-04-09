// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimpleJob
// Entry Point: 00eabb68
// Size: 160 bytes
// Signature: undefined __thiscall getSimpleJob(SimpleJobSystemImpl * this)


/* non-virtual thunk to simplejobsystem::SimpleJobSystemImpl::getSimpleJob() */

undefined8 __thiscall simplejobsystem::SimpleJobSystemImpl::getSimpleJob(SimpleJobSystemImpl *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  std::__ndk1::mutex::lock();
  if (*(long *)(this + 0xb8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ulong *)(this + 0xb0);
    lVar2 = *(long *)((long)*(void ***)(this + 0x98) + (uVar1 >> 6 & 0x3fffffffffffff8));
    *(ulong *)(this + 0xb0) = uVar1 + 1;
    *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + -1;
    uVar3 = *(undefined8 *)(lVar2 + (uVar1 & 0x1ff) * 8);
    if (0x3ff < uVar1 + 1) {
      operator_delete(**(void ***)(this + 0x98));
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
      *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -0x200;
    }
  }
  std::__ndk1::mutex::unlock();
  return uVar3;
}


