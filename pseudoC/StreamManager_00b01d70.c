// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamManager
// Entry Point: 00b01d70
// Size: 172 bytes
// Signature: undefined __thiscall ~StreamManager(StreamManager * this)


/* StreamManager::~StreamManager() */

void __thiscall StreamManager::~StreamManager(StreamManager *this)

{
  long **pplVar1;
  void *pvVar2;
  long **pplVar3;
  
                    /* try { // try from 00b01d88 to 00b01d8f has its CatchHandler @ 00b01e20 */
  Mutex::enterCriticalSection();
  pplVar3 = *(long ***)(this + 0xe8);
  pplVar1 = *(long ***)(this + 0xf0);
  if (pplVar3 != pplVar1) {
    do {
      if (*pplVar3 != (long *)0x0) {
        (**(code **)(**pplVar3 + 8))();
      }
      pplVar3 = pplVar3 + 1;
    } while (pplVar3 != pplVar1);
    pplVar3 = *(long ***)(this + 0xe8);
  }
  *(long ***)(this + 0xf0) = pplVar3;
                    /* try { // try from 00b01dcc to 00b01dd3 has its CatchHandler @ 00b01e1c */
  Mutex::leaveCriticalSection();
  pvVar2 = *(void **)(this + 0xe8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0xc0));
  std::__ndk1::__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>>::~__deque_base
            ((__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>> *)(this + 0x80));
  Mutex::~Mutex((Mutex *)(this + 0x58));
  std::__ndk1::__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>>::~__deque_base
            ((__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>> *)(this + 0x28));
  Mutex::~Mutex((Mutex *)this);
  return;
}


