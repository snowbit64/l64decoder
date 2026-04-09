// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CryptoFileArchive
// Entry Point: 00b31c00
// Size: 132 bytes
// Signature: undefined __thiscall ~CryptoFileArchive(CryptoFileArchive * this)


/* CryptoFileArchive::~CryptoFileArchive() */

void __thiscall CryptoFileArchive::~CryptoFileArchive(CryptoFileArchive *this)

{
  *(undefined ***)this = &PTR__CryptoFileArchive_00fe9618;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x60));
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  Mutex::~Mutex((Mutex *)(this + 0x10));
  operator_delete(this);
  return;
}


