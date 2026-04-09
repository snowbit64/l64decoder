// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ostringstream
// Entry Point: 006d1688
// Size: 128 bytes
// Signature: undefined __thiscall ~basic_ostringstream(basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  *(undefined ***)this = &PTR__basic_ostringstream_00fd8ed0;
  *(undefined ***)(this + 0x70) = &PTR__basic_ostringstream_00fd8ef8;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_00fd8fa0;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  operator_delete(this);
  return;
}


