// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 0096f9bc
// Size: 72 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>> * this)


/* Lockable<Ring<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, 100u> >::~Lockable() */

void __thiscall
Lockable<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>>
::~Lockable(Lockable<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>>
            *this)

{
  long lVar1;
  
  lVar1 = 0x960;
  do {
    if (((byte)this[lVar1 + 0x10] & 1) != 0) {
      operator_delete(*(void **)(this + lVar1 + 0x20));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  Mutex::~Mutex((Mutex *)this);
  return;
}


