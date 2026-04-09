// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeterFilter
// Entry Point: 00cdd0b8
// Size: 112 bytes
// Signature: undefined __thiscall ~MeterFilter(MeterFilter * this)


/* non-virtual thunk to CryptoPP::MeterFilter::~MeterFilter() */

void __thiscall CryptoPP::MeterFilter::~MeterFilter(MeterFilter *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + -8);
  *puVar1 = &PTR__MeterFilter_010075d8;
  *(undefined ***)this = &PTR__MeterFilter_01007780;
  std::__ndk1::
  __deque_base<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
  ::~__deque_base((__deque_base<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
                   *)(this + 0x48));
  *puVar1 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar1);
  return;
}


