// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 0092d370
// Size: 68 bytes
// Signature: undefined __thiscall ~pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile> * this)


/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile>::~pair() */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>
::~pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>
        *this)

{
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


