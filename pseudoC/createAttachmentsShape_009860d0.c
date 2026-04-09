// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAttachmentsShape
// Entry Point: 009860d0
// Size: 228 bytes
// Signature: undefined __thiscall createAttachmentsShape(MeshSplitManager * this, MeshSplitShape * param_1, GsShape * param_2, vector * param_3, bool param_4, STREAM_QUEUE param_5)


/* MeshSplitManager::createAttachmentsShape(MeshSplitShape*, GsShape*,
   std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> > const&, bool,
   StreamManager::STREAM_QUEUE) */

void __thiscall
MeshSplitManager::createAttachmentsShape
          (MeshSplitManager *this,MeshSplitShape *param_1,GsShape *param_2,vector *param_3,
          bool param_4,STREAM_QUEUE param_5)

{
  MeshSplitAttachmentGeometry *this_00;
  StreamManager *this_01;
  GsShape *this_02;
  long lVar1;
  
  if (*(long *)(param_3 + 8) != *(long *)param_3) {
    lVar1 = *(long *)(param_2 + 0x170);
    this_00 = (MeshSplitAttachmentGeometry *)operator_new(0xa8);
                    /* try { // try from 00986120 to 0098612f has its CatchHandler @ 009861c0 */
    MeshSplitAttachmentGeometry::MeshSplitAttachmentGeometry
              (this_00,"attachmentGeometry",param_3,
               *(MeshSplitAttachmentSharedData **)(lVar1 + 0x68));
    this_01 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(this_01,(Streamable *)(this_00 + 0x58),param_5);
    this_02 = (GsShape *)operator_new(0x200);
                    /* try { // try from 0098614c to 0098615b has its CatchHandler @ 009861b4 */
    GsShape::GsShape(this_02,"attachments",(Geometry *)this_00);
    GsShape::copyShapePropertiesFrom(this_02,param_2);
    GsShape::raiseShapeFlag(this_02,0x100);
    if (param_4) {
      applySplitShapeShaderParameterOverwrites(this,this_02);
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,this_02,0);
  }
  return;
}


