// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_stringstream
// Entry Point: 0086eccc
// Size: 140 bytes
// Signature: undefined __thiscall ~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* non-virtual thunk to std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  *(undefined8 *)this = 0xfdbeb0;
  *(undefined8 *)(this + 0x70) = 0xfdbed8;
  *(undefined8 *)(this + -0x10) = 0xfdbe88;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_00fd8fa0;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)(this + -0x10));
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  return;
}


