// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_stringbuf
// Entry Point: 006d1868
// Size: 72 bytes
// Signature: undefined __thiscall ~basic_stringbuf(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringbuf(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this)

{
  *(undefined ***)this = &PTR__basic_stringbuf_00fd8fa0;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)this);
  operator_delete(this);
  return;
}


