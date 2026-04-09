// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 006df89c
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>const> * this)


/* ScopedLock<Ring<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, 100u> const>::~ScopedLock() */

void __thiscall
ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>const>
::~ScopedLock(ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>const>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<Ring<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,100u>const>
       )0x0) {
                    /* try { // try from 006df8b0 to 006df8b3 has its CatchHandler @ 006df8bc */
    Mutex::leaveCriticalSection();
  }
  return;
}


