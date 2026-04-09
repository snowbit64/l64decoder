// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_filebuf
// Entry Point: 0075e398
// Size: 36 bytes
// Signature: undefined __thiscall ~basic_filebuf(basic_filebuf<char,std::__ndk1::char_traits<char>> * this)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::~basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  ~basic_filebuf(this);
  operator_delete(this);
  return;
}


