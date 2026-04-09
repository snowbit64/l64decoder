// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 008b91c8
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>&> * this)


/* std::__ndk1::__split_buffer<BiquadResonantFilter,
   std::__ndk1::allocator<BiquadResonantFilter>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>&>::
~__split_buffer(__split_buffer<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(BiquadResonantFilter **)(this + 0x10) = (BiquadResonantFilter *)(lVar2 + -0x38);
    BiquadResonantFilter::~BiquadResonantFilter((BiquadResonantFilter *)(lVar2 + -0x38));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


