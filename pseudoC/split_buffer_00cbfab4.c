// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cbfab4
// Size: 56 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>
   >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&>
::~__split_buffer(__split_buffer<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>&>
                  *this)

{
  FUN_00cbfaec(this,*(undefined8 *)(this + 8));
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


