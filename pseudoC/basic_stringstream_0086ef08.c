// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_stringstream
// Entry Point: 0086ef08
// Size: 156 bytes
// Signature: undefined __thiscall ~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this)


/* virtual thunk to std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *this_00 = 0xfdbe88;
  this_00[2] = 0xfdbeb0;
  this_00[0x10] = 0xfdbed8;
  this_00[3] = &PTR__basic_stringbuf_00fd8fa0;
  if ((*(byte *)(this_00 + 0xb) & 1) != 0) {
    operator_delete((void *)this_00[0xd]);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 3));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)this_00);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this_00 + 0x10));
  operator_delete(this_00);
  return;
}


