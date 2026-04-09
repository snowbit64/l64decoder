// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ifstream
// Entry Point: 00c5d3d8
// Size: 104 bytes
// Signature: undefined __thiscall ~basic_ifstream(basic_ifstream<char,std::__ndk1::char_traits<char>> * this)


/* virtual thunk to std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char>
   >::~basic_ifstream() */

void __thiscall
std::__ndk1::basic_ifstream<char,std::__ndk1::char_traits<char>>::~basic_ifstream
          (basic_ifstream<char,std::__ndk1::char_traits<char>> *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *this_00 = &PTR__basic_ifstream_00fee8c0;
  this_00[0x17] = &PTR__basic_ifstream_00fee8e8;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 2));
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)this_00);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this_00 + 0x17));
  operator_delete(this_00);
  return;
}


