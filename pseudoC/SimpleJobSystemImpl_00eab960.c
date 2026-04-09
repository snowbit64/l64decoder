// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleJobSystemImpl
// Entry Point: 00eab960
// Size: 248 bytes
// Signature: undefined __thiscall ~SimpleJobSystemImpl(SimpleJobSystemImpl * this)


/* simplejobsystem::SimpleJobSystemImpl::~SimpleJobSystemImpl() */

void __thiscall
simplejobsystem::SimpleJobSystemImpl::~SimpleJobSystemImpl(SimpleJobSystemImpl *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR_addJob_010143b0;
  *(undefined ***)(this + 8) = &PTR_getSimpleJob_01014400;
  if ((int)*(undefined8 *)(this + 0x10) != 0) {
    std::__ndk1::mutex::lock();
    std::__ndk1::condition_variable::wait((unique_lock *)(this + 0x3c));
    std::__ndk1::mutex::unlock();
  }
  lVar2 = *(long *)(this + 200);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar4 != 0) {
      lVar4 = lVar4 << 7;
      do {
        SimpleJobThread::~SimpleJobThread((SimpleJobThread *)(lVar2 + -0x80 + lVar4));
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
  }
  std::__ndk1::
  __deque_base<simplejobsystem::SimpleJob*,std::__ndk1::allocator<simplejobsystem::SimpleJob*>>::
  ~__deque_base((__deque_base<simplejobsystem::SimpleJob*,std::__ndk1::allocator<simplejobsystem::SimpleJob*>>
                 *)(this + 0x98));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x70));
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x3c));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x14));
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


