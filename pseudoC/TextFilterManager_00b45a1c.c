// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextFilterManager
// Entry Point: 00b45a1c
// Size: 8 bytes
// Signature: undefined __thiscall ~TextFilterManager(TextFilterManager * this)


/* TextFilterManager::~TextFilterManager() */

void __thiscall TextFilterManager::~TextFilterManager(TextFilterManager *this)

{
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)this,*(__tree_node **)(this + 8));
  return;
}


