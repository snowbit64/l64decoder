// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FileIterator
// Entry Point: 00c5ed34
// Size: 96 bytes
// Signature: undefined __thiscall FileIterator(FileIterator * this, char * param_1)


/* NativeFileUtil::FileIterator::FileIterator(char const*) */

void __thiscall NativeFileUtil::FileIterator::FileIterator(FileIterator *this,char *param_1)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00c5ed60 to 00c5ed7b has its CatchHandler @ 00c5ed94 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  PathUtil::removeBackReferencesInPlace((basic_string *)this);
  getFiles(param_1,(vector *)(this + 0x18),true);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x18);
  return;
}


