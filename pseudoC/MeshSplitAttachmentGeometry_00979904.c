// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitAttachmentGeometry
// Entry Point: 00979904
// Size: 164 bytes
// Signature: undefined __thiscall ~MeshSplitAttachmentGeometry(MeshSplitAttachmentGeometry * this)


/* MeshSplitAttachmentGeometry::~MeshSplitAttachmentGeometry() */

void __thiscall
MeshSplitAttachmentGeometry::~MeshSplitAttachmentGeometry(MeshSplitAttachmentGeometry *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = *(long **)(this + 0x68);
  iVar1 = *(int *)((long)plVar3 + 0x54);
  *(undefined ***)this = &PTR__MeshSplitAttachmentGeometry_00fe0720;
  iVar2 = iVar1 + -1;
  *(undefined ***)(this + 0x10) = &PTR__MeshSplitAttachmentGeometry_00fe0778;
  *(undefined ***)(this + 0x58) = &PTR__MeshSplitAttachmentGeometry_00fe0798;
  if (iVar1 == 0 || iVar2 == 0) {
    (**(code **)(*plVar3 + 8))();
    plVar3 = *(long **)(this + 0x70);
  }
  else {
    *(int *)((long)plVar3 + 0x54) = iVar2;
    plVar3 = *(long **)(this + 0x70);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar4 = *(void **)(this + 0x90);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar4;
    operator_delete(pvVar4);
  }
  Streamable::~Streamable((Streamable *)(this + 0x58));
  Geometry::~Geometry((Geometry *)this);
  operator_delete(this);
  return;
}


