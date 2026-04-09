// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00b24d30
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> * this)


/* ScopedLock<std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::~ScopedLock(ScopedLock<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
       )0x0) {
                    /* try { // try from 00b24d44 to 00b24d47 has its CatchHandler @ 00b24d50 */
    Mutex::leaveCriticalSection();
  }
  return;
}


