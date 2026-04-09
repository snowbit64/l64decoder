// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 009858c8
// Size: 104 bytes
// Signature: undefined __thiscall vector(vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>> * this, ulong param_1)


/* std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> >::vector(unsigned long) */

void __thiscall
std::__ndk1::
vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
::vector(vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
         *this,ulong param_1)

{
  void *__s;
  ulong __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) {
                    /* try { // try from 00985928 to 0098592f has its CatchHandler @ 00985930 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 4;
                    /* try { // try from 009858f4 to 009858fb has its CatchHandler @ 00985930 */
    __s = operator_new(__n);
    *(void **)this = __s;
    *(void **)(this + 0x10) = (void *)((long)__s + __n);
    memset(__s,0,__n);
    *(void **)(this + 8) = (void *)((long)__s + __n);
  }
  return;
}


