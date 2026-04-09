// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00980a0c
// Size: 44 bytes
// Signature: undefined __thiscall resize(vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>> * this, ulong param_1)


/* std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> >::resize(unsigned long) */

void __thiscall
std::__ndk1::
vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
::resize(vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 4;
  }
  return;
}


