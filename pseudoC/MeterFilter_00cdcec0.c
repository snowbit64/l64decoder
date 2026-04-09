// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeterFilter
// Entry Point: 00cdcec0
// Size: 104 bytes
// Signature: undefined __thiscall ~MeterFilter(MeterFilter * this)


/* CryptoPP::MeterFilter::~MeterFilter() */

void __thiscall CryptoPP::MeterFilter::~MeterFilter(MeterFilter *this)

{
  *(undefined ***)this = &PTR__MeterFilter_010075d8;
  *(undefined ***)(this + 8) = &PTR__MeterFilter_01007780;
  std::__ndk1::
  __deque_base<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
  ::~__deque_base((__deque_base<CryptoPP::MeterFilter::MessageRange,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange>>
                   *)(this + 0x50));
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cdcf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


