// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MeshSplitAttachmentSharedData
// Entry Point: 009019c8
// Size: 256 bytes
// Signature: undefined __thiscall MeshSplitAttachmentSharedData(MeshSplitAttachmentSharedData * this, IndexedTriangleSet * param_1, vector * param_2)


/* MeshSplitAttachmentSharedData::MeshSplitAttachmentSharedData(IndexedTriangleSet*,
   std::__ndk1::vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,
   std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData> > const&) */

void __thiscall
MeshSplitAttachmentSharedData::MeshSplitAttachmentSharedData
          (MeshSplitAttachmentSharedData *this,IndexedTriangleSet *param_1,vector *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined8 *this_00;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Streamable::Streamable((Streamable *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (undefined8 *)(this + 0x10);
  *this_00 = 0;
  uVar2 = *(uint *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x54) = 0;
  *(IndexedTriangleSet **)(this + 0x28) = param_1;
  *(undefined ***)this = &PTR__MeshSplitAttachmentSharedData_00fdfb30;
  *(uint *)(param_1 + 0x8c) = uVar2 | 0x20;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (this_00 != (undefined8 *)param_2) {
                    /* try { // try from 00901a3c to 00901a57 has its CatchHandler @ 00901ac8 */
    std::__ndk1::
    vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
    ::assign<MeshSplitAttachmentSharedData::AttachmentGeometryData*>
              ((vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
                *)this_00,*(AttachmentGeometryData **)param_2,
               *(AttachmentGeometryData **)(param_2 + 8));
  }
  uVar2 = TriangleSet::getAttributes();
  uVar3 = IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(uVar2 | 2);
  *(undefined4 *)(this + 0x40) = uVar3;
                    /* try { // try from 00901a60 to 00901a8b has its CatchHandler @ 00901acc */
  uVar2 = TriangleSet::getNumVertices();
  pfVar4 = (float *)TriangleSet::getPositions();
  IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
            (uVar2,pfVar4,false,(float *)(this + 0x44),&local_4c);
  *(float *)(this + 0x50) = 1.0 / local_4c;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


