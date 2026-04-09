// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SaveTempFileId
// Entry Point: 00981550
// Size: 64 bytes
// Signature: undefined __thiscall ~SaveTempFileId(SaveTempFileId * this)


/* MeshSplitManager::SaveTempFileId::~SaveTempFileId() */

void __thiscall MeshSplitManager::SaveTempFileId::~SaveTempFileId(SaveTempFileId *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


