// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitAttachmentSharedData
// Entry Point: 00902c00
// Size: 124 bytes
// Signature: undefined __thiscall ~MeshSplitAttachmentSharedData(MeshSplitAttachmentSharedData * this)


/* MeshSplitAttachmentSharedData::~MeshSplitAttachmentSharedData() */

void __thiscall
MeshSplitAttachmentSharedData::~MeshSplitAttachmentSharedData(MeshSplitAttachmentSharedData *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__MeshSplitAttachmentSharedData_00fdfb30;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  Streamable::~Streamable((Streamable *)this);
  return;
}


