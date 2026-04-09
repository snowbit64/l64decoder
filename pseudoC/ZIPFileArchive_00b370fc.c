// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ZIPFileArchive
// Entry Point: 00b370fc
// Size: 132 bytes
// Signature: undefined __thiscall ~ZIPFileArchive(ZIPFileArchive * this)


/* ZIPFileArchive::~ZIPFileArchive() */

void __thiscall ZIPFileArchive::~ZIPFileArchive(ZIPFileArchive *this)

{
  *(undefined ***)this = &PTR__ZIPFileArchive_00fe99d8;
  if (*(long *)(this + 0x80b0) != 0) {
                    /* try { // try from 00b3712c to 00b3712f has its CatchHandler @ 00b37180 */
    unzClose();
    *(long *)(this + 0x80b0) = 0;
  }
  if ((this[8] != (ZIPFileArchive)0x0) && (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>>>
             *)(this + 0x80b8),*(__tree_node **)(this + 0x80c0));
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  NativeFile::~NativeFile((NativeFile *)(this + 0x18));
  return;
}


