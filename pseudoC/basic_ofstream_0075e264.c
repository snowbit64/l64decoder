// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_ofstream
// Entry Point: 0075e264
// Size: 104 bytes
// Signature: undefined __thiscall ~basic_ofstream(basic_ofstream<char,std::__ndk1::char_traits<char>> * this)


/* virtual thunk to std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char>
   >::~basic_ofstream() */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::~basic_ofstream
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *this_00 = &PTR__basic_ofstream_00fdb358;
  this_00[0x16] = &PTR__basic_ofstream_00fdb380;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 1));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this_00 + 0x16));
  operator_delete(this_00);
  return;
}


