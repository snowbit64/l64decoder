// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompressedFileArchive
// Entry Point: 00b30f68
// Size: 272 bytes
// Signature: undefined __thiscall ~CompressedFileArchive(CompressedFileArchive * this)


/* CompressedFileArchive::~CompressedFileArchive() */

void __thiscall CompressedFileArchive::~CompressedFileArchive(CompressedFileArchive *this)

{
  CompressedFileArchive CVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  *(undefined ***)this = &PTR__CompressedFileArchive_00fe9510;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
                    /* try { // try from 00b30f9c to 00b30fa3 has its CatchHandler @ 00b31078 */
  NativeFile::close();
  if (*(long *)(this + 0xb0) != *(long *)(this + 0xa8)) {
    uVar5 = 0;
    do {
                    /* try { // try from 00b30fd4 to 00b30fd7 has its CatchHandler @ 00b3107c */
      NativeFile::close();
      lVar4 = *(long *)(this + 0xa8);
      plVar2 = *(long **)(lVar4 + uVar5 * 0x10 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(this + 0xa8);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(this + 0xb0) - lVar4 >> 4));
  }
  Mutex::~Mutex((Mutex *)(this + 0xc0));
  pvVar3 = *(void **)(this + 0xa8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar3;
    operator_delete(pvVar3);
  }
  NativeFile::~NativeFile((NativeFile *)(this + 0x78));
  if (((byte)this[0x60] & 1) == 0) {
    CVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    CVar1 = this[0x48];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    CVar1 = this[0x30];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}


