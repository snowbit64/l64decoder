// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EqualityComparisonFilter
// Entry Point: 00d0d6f4
// Size: 216 bytes
// Signature: undefined __thiscall ~EqualityComparisonFilter(EqualityComparisonFilter * this)


/* CryptoPP::EqualityComparisonFilter::~EqualityComparisonFilter() */

void __thiscall
CryptoPP::EqualityComparisonFilter::~EqualityComparisonFilter(EqualityComparisonFilter *this)

{
  *(undefined ***)this = &PTR__EqualityComparisonFilter_0100e740;
  *(undefined ***)(this + 8) = &PTR__EqualityComparisonFilter_0100e8f0;
  *(undefined ***)(this + 0x120) = &PTR__MessageQueue_0100e538;
  *(undefined ***)(this + 0x128) = &PTR__MessageQueue_0100e6c8;
  std::__ndk1::__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>>::~__deque_base
            ((__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x1b0));
  std::__ndk1::__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>>::~__deque_base
            ((__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x180));
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x138));
  *(undefined ***)(this + 0x60) = &PTR__MessageQueue_0100e538;
  *(undefined ***)(this + 0x68) = &PTR__MessageQueue_0100e6c8;
  std::__ndk1::__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>>::~__deque_base
            ((__deque_base<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0xf0));
  std::__ndk1::__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>>::~__deque_base
            ((__deque_base<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0xc0));
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x78));
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d0d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


