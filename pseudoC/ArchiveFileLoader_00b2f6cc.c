// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ArchiveFileLoader
// Entry Point: 00b2f6cc
// Size: 236 bytes
// Signature: undefined __thiscall ~ArchiveFileLoader(ArchiveFileLoader * this)


/* ArchiveFileLoader::~ArchiveFileLoader() */

void __thiscall ArchiveFileLoader::~ArchiveFileLoader(ArchiveFileLoader *this)

{
  bool bVar1;
  ArchiveFileLoader **ppAVar2;
  ArchiveFileLoader *pAVar3;
  ArchiveFileLoader **ppAVar4;
  
  *(undefined ***)this = &PTR__ArchiveFileLoader_00fe9490;
  ppAVar4 = *(ArchiveFileLoader ***)(this + 0x40);
  while (ppAVar4 != (ArchiveFileLoader **)(this + 0x48)) {
    if ((long *)ppAVar4[8] != (long *)0x0) {
      (**(code **)(*(long *)ppAVar4[8] + 8))();
    }
    ppAVar2 = (ArchiveFileLoader **)ppAVar4[1];
    if ((ArchiveFileLoader **)ppAVar4[1] == (ArchiveFileLoader **)0x0) {
      ppAVar2 = ppAVar4 + 2;
      bVar1 = *(ArchiveFileLoader ***)*ppAVar2 != ppAVar4;
      ppAVar4 = (ArchiveFileLoader **)*ppAVar2;
      if (bVar1) {
        do {
          pAVar3 = *ppAVar2;
          ppAVar2 = (ArchiveFileLoader **)(pAVar3 + 0x10);
          ppAVar4 = (ArchiveFileLoader **)*ppAVar2;
        } while (*ppAVar4 != pAVar3);
      }
    }
    else {
      do {
        ppAVar4 = ppAVar2;
        ppAVar2 = (ArchiveFileLoader **)*ppAVar4;
      } while ((ArchiveFileLoader **)*ppAVar4 != (ArchiveFileLoader **)0x0);
    }
  }
  Mutex::~Mutex((Mutex *)(this + 0x58));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


