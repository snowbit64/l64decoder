// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~basic_filebuf
// Entry Point: 0075e2cc
// Size: 148 bytes
// Signature: undefined __thiscall ~basic_filebuf(basic_filebuf<char,std::__ndk1::char_traits<char>> * this)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::~basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  FILE *__stream;
  
  __stream = *(FILE **)(this + 0x78);
  *(undefined ***)this = &PTR__basic_filebuf_00fdb428;
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 0075e2f8 to 0075e2ff has its CatchHandler @ 0075e368 */
    sync();
    fclose(__stream);
    *(undefined8 *)(this + 0x78) = 0;
                    /* try { // try from 0075e314 to 0075e323 has its CatchHandler @ 0075e360 */
    (**(code **)(*(long *)this + 0x18))(this,0,0);
  }
  if ((this[0xa0] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(this + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x40));
  }
  if ((this[0xa1] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(this + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)this);
  return;
}


