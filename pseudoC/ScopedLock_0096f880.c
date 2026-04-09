// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096f880
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>> * this)


/* ScopedLock<Ring<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, 100u> >::~ScopedLock() */

void __thiscall
ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>>
::~ScopedLock(ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>>
       )0x0) {
                    /* try { // try from 0096f894 to 0096f897 has its CatchHandler @ 0096f8a0 */
    Mutex::leaveCriticalSection();
  }
  return;
}


