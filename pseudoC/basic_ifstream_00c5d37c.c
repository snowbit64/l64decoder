// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ifstream
// Entry Point: 00c5d37c
// Size: 92 bytes
// Signature: undefined __thiscall ~basic_ifstream(basic_ifstream<char,std::__ndk1::char_traits<char>> * this)


/* std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> >::~basic_ifstream() */

void __thiscall
std::__ndk1::basic_ifstream<char,std::__ndk1::char_traits<char>>::~basic_ifstream
          (basic_ifstream<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined ***)this = &PTR__basic_ifstream_00fee8c0;
  *(undefined ***)(this + 0xb8) = &PTR__basic_ifstream_00fee8e8;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 0x10));
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0xb8));
  operator_delete(this);
  return;
}


