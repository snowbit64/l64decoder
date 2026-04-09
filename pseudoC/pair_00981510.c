// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 00981510
// Size: 64 bytes
// Signature: undefined __thiscall ~pair(pair<unsigned_int,MeshSplitManager::SaveTempFileId> * this)


/* std::__ndk1::pair<unsigned int, MeshSplitManager::SaveTempFileId>::~pair() */

void __thiscall
std::__ndk1::pair<unsigned_int,MeshSplitManager::SaveTempFileId>::~pair
          (pair<unsigned_int,MeshSplitManager::SaveTempFileId> *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


