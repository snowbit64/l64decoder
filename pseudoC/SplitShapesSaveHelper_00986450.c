// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SplitShapesSaveHelper
// Entry Point: 00986450
// Size: 68 bytes
// Signature: undefined __thiscall ~SplitShapesSaveHelper(SplitShapesSaveHelper * this)


/* MeshSplitManager::SplitShapesSaveHelper::~SplitShapesSaveHelper() */

void __thiscall
MeshSplitManager::SplitShapesSaveHelper::~SplitShapesSaveHelper(SplitShapesSaveHelper *this)

{
  *(undefined ***)this = &PTR__SplitShapesSaveHelper_00fe0a10;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  SaveHelper::~SaveHelper((SaveHelper *)this);
  operator_delete(this);
  return;
}


