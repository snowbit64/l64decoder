// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MessageQueue
// Entry Point: 00d0d384
// Size: 76 bytes
// Signature: undefined __thiscall ~MessageQueue(MessageQueue * this)


/* CryptoPP::MessageQueue::~MessageQueue() */

void __thiscall CryptoPP::MessageQueue::~MessageQueue(MessageQueue *this)

{
  *(undefined ***)this = &PTR__MessageQueue_0100e538;
  *(undefined ***)(this + 8) = &PTR__MessageQueue_0100e6c8;
  std::__ndk1::__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>>::~__deque_base
            ((__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x90));
  std::__ndk1::__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>>::~__deque_base
            ((__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x60));
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x18));
  operator_delete(this);
  return;
}


