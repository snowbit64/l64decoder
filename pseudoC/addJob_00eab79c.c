// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addJob
// Entry Point: 00eab79c
// Size: 168 bytes
// Signature: undefined __thiscall addJob(SimpleJobSystemImpl * this, void * param_1, _func_void_void_ptr * param_2)


/* simplejobsystem::SimpleJobSystemImpl::addJob(void*, void (*)(void*)) */

void __thiscall
simplejobsystem::SimpleJobSystemImpl::addJob
          (SimpleJobSystemImpl *this,void *param_1,_func_void_void_ptr *param_2)

{
  ulong uVar1;
  long lVar2;
  void **ppvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  std::__ndk1::mutex::lock();
  ppvVar3 = (void **)operator_new(0x10);
  lVar4 = *(long *)(this + 0xa0);
  lVar2 = *(long *)(this + 0xa8);
  *ppvVar3 = param_1;
  ppvVar3[1] = param_2;
  lVar5 = *(long *)(this + 0xc0);
  uVar1 = 0;
  if (lVar2 - lVar4 != 0) {
    uVar1 = (lVar2 - lVar4) * 0x40 - 1;
  }
  uVar6 = lVar5 + *(long *)(this + 0xb8);
  if (uVar1 == uVar6) {
    std::__ndk1::
    deque<simplejobsystem::SimpleJob*,std::__ndk1::allocator<simplejobsystem::SimpleJob*>>::
    __add_back_capacity();
    lVar5 = *(long *)(this + 0xc0);
    lVar4 = *(long *)(this + 0xa0);
    uVar6 = *(long *)(this + 0xb8) + lVar5;
  }
  lVar4 = *(long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8));
  *(long *)(this + 0xc0) = lVar5 + 1;
  *(void ***)(lVar4 + (uVar6 & 0x1ff) * 8) = ppvVar3;
  std::__ndk1::mutex::unlock();
  return;
}


