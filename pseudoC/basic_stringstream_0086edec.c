// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_stringstream
// Entry Point: 0086edec
// Size: 136 bytes
// Signature: undefined __thiscall ~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  *(undefined8 *)this = 0xfdbe88;
  *(undefined8 *)(this + 0x80) = 0xfdbed8;
  *(undefined8 *)(this + 0x10) = 0xfdbeb0;
  *(undefined ***)(this + 0x18) = &PTR__basic_stringbuf_00fd8fa0;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x80));
  operator_delete(this);
  return;
}


