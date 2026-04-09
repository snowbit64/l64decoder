// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_fstream
// Entry Point: 008af9f4
// Size: 96 bytes
// Signature: undefined __thiscall ~basic_fstream(basic_fstream<char,std::__ndk1::char_traits<char>> * this)


/* std::__ndk1::basic_fstream<char, std::__ndk1::char_traits<char> >::~basic_fstream() */

void __thiscall
std::__ndk1::basic_fstream<char,std::__ndk1::char_traits<char>>::~basic_fstream
          (basic_fstream<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined ***)this = &PTR__basic_fstream_00fdd4f8;
  *(undefined ***)(this + 0xc0) = &PTR__basic_fstream_00fdd548;
  *(undefined ***)(this + 0x10) = &PTR__basic_fstream_00fdd520;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0xc0));
  return;
}


