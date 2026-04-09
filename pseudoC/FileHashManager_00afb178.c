// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FileHashManager
// Entry Point: 00afb178
// Size: 72 bytes
// Signature: undefined __thiscall ~FileHashManager(FileHashManager * this)


/* FileHashManager::~FileHashManager() */

void __thiscall FileHashManager::~FileHashManager(FileHashManager *this)

{
  Mutex::~Mutex((Mutex *)(this + 0x30));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
  ::destroy((__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


