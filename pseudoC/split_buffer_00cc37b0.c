// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cc37b0
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&>
::~__split_buffer(__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **)(this + 0x10) =
         (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)(lVar2 + -0x80);
    CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent
              ((BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)(lVar2 + -0x80));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


