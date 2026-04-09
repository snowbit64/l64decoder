// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateGeometry
// Entry Point: 00979d1c
// Size: 60 bytes
// Signature: undefined __thiscall updateGeometry(MeshSplitAttachmentGeometry * this, IRenderDevice * param_1)


/* MeshSplitAttachmentGeometry::updateGeometry(IRenderDevice*) */

void __thiscall
MeshSplitAttachmentGeometry::updateGeometry
          (MeshSplitAttachmentGeometry *this,IRenderDevice *param_1)

{
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  createIndexBuffer(this,param_1);
  return;
}


