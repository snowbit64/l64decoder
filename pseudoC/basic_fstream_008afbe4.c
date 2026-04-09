// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_fstream
// Entry Point: 008afbe4
// Size: 112 bytes
// Signature: undefined __thiscall ~basic_fstream(basic_fstream<char,std::__ndk1::char_traits<char>> * this)


/* virtual thunk to std::__ndk1::basic_fstream<char, std::__ndk1::char_traits<char>
   >::~basic_fstream() */

void __thiscall
std::__ndk1::basic_fstream<char,std::__ndk1::char_traits<char>>::~basic_fstream
          (basic_fstream<char,std::__ndk1::char_traits<char>> *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *this_00 = &PTR__basic_fstream_00fdd4f8;
  this_00[0x18] = &PTR__basic_fstream_00fdd548;
  this_00[2] = &PTR__basic_fstream_00fdd520;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 3));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)this_00);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this_00 + 0x18));
  operator_delete(this_00);
  return;
}


