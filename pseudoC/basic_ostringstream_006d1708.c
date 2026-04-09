// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ostringstream
// Entry Point: 006d1708
// Size: 140 bytes
// Signature: undefined __thiscall ~basic_ostringstream(basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *this_00 = &PTR__basic_ostringstream_00fd8ed0;
  this_00[0xe] = &PTR__basic_ostringstream_00fd8ef8;
  this_00[1] = &PTR__basic_stringbuf_00fd8fa0;
  if (((byte)*(basic_ostream<char,std::__ndk1::char_traits<char>> *)(this_00 + 9) & 1) != 0) {
    operator_delete((void *)this_00[0xb]);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 1));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this_00 + 0xe));
  return;
}


