// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoadedFileId
// Entry Point: 00982350
// Size: 100 bytes
// Signature: undefined __thiscall ~LoadedFileId(LoadedFileId * this)


/* MeshSplitManager::LoadedFileId::~LoadedFileId() */

void __thiscall MeshSplitManager::LoadedFileId::~LoadedFileId(LoadedFileId *this)

{
  LoadedSplitShape *pLVar1;
  LoadedSplitShape *this_00;
  LoadedSplitShape *pLVar2;
  
  pLVar2 = *(LoadedSplitShape **)(this + 0x10);
  if (pLVar2 != (LoadedSplitShape *)0x0) {
    this_00 = *(LoadedSplitShape **)(this + 0x18);
    pLVar1 = pLVar2;
    if (this_00 != pLVar2) {
      do {
        this_00 = this_00 + -0x58;
        LoadedSplitShape::~LoadedSplitShape(this_00);
      } while (this_00 != pLVar2);
      pLVar1 = *(LoadedSplitShape **)(this + 0x10);
    }
    *(LoadedSplitShape **)(this + 0x18) = pLVar2;
    operator_delete(pLVar1);
  }
  BitVector::~BitVector((BitVector *)this);
  return;
}


