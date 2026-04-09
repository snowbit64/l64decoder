// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamQueue
// Entry Point: 00b01ee4
// Size: 60 bytes
// Signature: undefined __thiscall ~StreamQueue(StreamQueue * this)


/* StreamQueue::~StreamQueue() */

void __thiscall StreamQueue::~StreamQueue(StreamQueue *this)

{
  std::__ndk1::__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>>::~__deque_base
            ((__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>> *)(this + 0x80));
  Mutex::~Mutex((Mutex *)(this + 0x58));
  std::__ndk1::__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>>::~__deque_base
            ((__deque_base<Streamable*,std::__ndk1::allocator<Streamable*>> *)(this + 0x28));
  Mutex::~Mutex((Mutex *)this);
  return;
}


