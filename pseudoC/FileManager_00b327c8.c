// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FileManager
// Entry Point: 00b327c8
// Size: 216 bytes
// Signature: undefined __thiscall ~FileManager(FileManager * this)


/* FileManager::~FileManager() */

void __thiscall FileManager::~FileManager(FileManager *this)

{
  long **pplVar1;
  FileManager FVar2;
  void *pvVar3;
  long **pplVar4;
  
  pplVar1 = *(long ***)(this + 8);
  for (pplVar4 = *(long ***)this; pplVar4 != pplVar1; pplVar4 = pplVar4 + 1) {
    if (*pplVar4 != (long *)0x0) {
      (**(code **)(**pplVar4 + 8))();
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
             *)(this + 0xe0),*(__tree_node **)(this + 0xe8));
  Mutex::~Mutex((Mutex *)(this + 0xb8));
  Mutex::~Mutex((Mutex *)(this + 0x8c));
  Mutex::~Mutex((Mutex *)(this + 100));
  if (((byte)this[0x48] & 1) == 0) {
    FVar2 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    FVar2 = this[0x30];
  }
  if (((byte)FVar2 & 1) == 0) {
    pvVar3 = *(void **)(this + 0x18);
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    pvVar3 = *(void **)(this + 0x18);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar3;
  operator_delete(pvVar3);
  return;
}


