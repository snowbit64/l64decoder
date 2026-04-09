// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cd5f28
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::ProjectivePoint,
   std::__ndk1::allocator<CryptoPP::ProjectivePoint>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>&>::
~__split_buffer(__split_buffer<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(ProjectivePoint **)(this + 0x10) = (ProjectivePoint *)(lVar2 + -0x90);
    CryptoPP::ProjectivePoint::~ProjectivePoint((ProjectivePoint *)(lVar2 + -0x90));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


