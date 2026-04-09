// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileName
// Entry Point: 00c5f154
// Size: 16 bytes
// Signature: undefined __thiscall getFileName(FileIterator * this, basic_string * param_1)


/* NativeFileUtil::FileIterator::getFileName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall NativeFileUtil::FileIterator::getFileName(FileIterator *this,basic_string *param_1)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_1,*(basic_string **)(this + 0x30));
  return;
}


