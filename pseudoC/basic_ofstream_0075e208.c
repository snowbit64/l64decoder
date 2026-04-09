// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ofstream
// Entry Point: 0075e208
// Size: 92 bytes
// Signature: undefined __thiscall ~basic_ofstream(basic_ofstream<char,std::__ndk1::char_traits<char>> * this)


/* std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >::~basic_ofstream() */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::~basic_ofstream
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined ***)this = &PTR__basic_ofstream_00fdb358;
  *(undefined ***)(this + 0xb0) = &PTR__basic_ofstream_00fdb380;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0xb0));
  operator_delete(this);
  return;
}


