// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 009822ec
// Size: 100 bytes
// Signature: undefined __thiscall ~pair(pair<unsigned_int,MeshSplitManager::LoadedFileId> * this)


/* std::__ndk1::pair<unsigned int, MeshSplitManager::LoadedFileId>::~pair() */

void __thiscall
std::__ndk1::pair<unsigned_int,MeshSplitManager::LoadedFileId>::~pair
          (pair<unsigned_int,MeshSplitManager::LoadedFileId> *this)

{
  LoadedSplitShape *pLVar1;
  LoadedSplitShape *this_00;
  LoadedSplitShape *pLVar2;
  
  pLVar2 = *(LoadedSplitShape **)(this + 0x18);
  if (pLVar2 != (LoadedSplitShape *)0x0) {
    this_00 = *(LoadedSplitShape **)(this + 0x20);
    pLVar1 = pLVar2;
    if (this_00 != pLVar2) {
      do {
        this_00 = this_00 + -0x58;
        MeshSplitManager::LoadedSplitShape::~LoadedSplitShape(this_00);
      } while (this_00 != pLVar2);
      pLVar1 = *(LoadedSplitShape **)(this + 0x18);
    }
    *(LoadedSplitShape **)(this + 0x20) = pLVar2;
    operator_delete(pLVar1);
  }
  BitVector::~BitVector((BitVector *)(this + 8));
  return;
}


