// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00915980
// Size: 92 bytes
// Signature: FileOutputStream * __thiscall operator<<(FileOutputStream * this, basic_string * param_1)


/* FileOutputStream& FileOutputStream::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

FileOutputStream * __thiscall
FileOutputStream::operator<<(FileOutputStream *this,basic_string *param_1)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 4);
  bVar2 = (*(byte *)param_1 & 1) == 0;
  if (bVar2) {
    pvVar3 = (void *)((long)param_1 + 1);
  }
  uVar1 = (uint)(*(byte *)param_1 >> 1);
  if (!bVar2) {
    uVar1 = param_1[2];
  }
  if (this[0x10] == (FileOutputStream)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x30))();
  }
  else {
    File::writeDosEOLExpand((File *)*(long **)(this + 8),pvVar3,uVar1);
  }
  return this;
}


