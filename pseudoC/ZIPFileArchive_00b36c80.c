// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ZIPFileArchive
// Entry Point: 00b36c80
// Size: 152 bytes
// Signature: undefined __thiscall ZIPFileArchive(ZIPFileArchive * this, char * param_1, bool param_2)


/* ZIPFileArchive::ZIPFileArchive(char const*, bool) */

void __thiscall ZIPFileArchive::ZIPFileArchive(ZIPFileArchive *this,char *param_1,bool param_2)

{
  *(undefined ***)this = &PTR__ZIPFileArchive_00fe99d8;
  NativeFile::NativeFile((NativeFile *)(this + 0x18));
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80c8) = 0;
  *(undefined8 *)(this + 0x80c0) = 0;
  *(ZIPFileArchive **)(this + 0x80b8) = this + 0x80c0;
                    /* try { // try from 00b36ce0 to 00b36d03 has its CatchHandler @ 00b36d18 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x40));
  this[8] = (ZIPFileArchive)0x0;
  *(NativeFile **)(this + 0x10) = (NativeFile *)(this + 0x18);
  *(undefined8 *)(this + 0x80d8) = 0;
  init(this,param_2);
  return;
}


