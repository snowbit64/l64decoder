// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<MeshSplitAttachmentGeometry::ShapeAttachment*>
// Entry Point: 0097a9cc
// Size: 332 bytes
// Signature: type __thiscall assign<MeshSplitAttachmentGeometry::ShapeAttachment*>(vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>> * this, ShapeAttachment * param_1, ShapeAttachment * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<MeshSplitAttachmentGeometry::ShapeAttachment*>::value&&is_constructible<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::iterator_traits<MeshSplitAttachmentGeometry::ShapeAttachment*>::reference>::value,
   void>::type std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>
   >::assign<MeshSplitAttachmentGeometry::ShapeAttachment*>(MeshSplitAttachmentGeometry::ShapeAttachment*,
   MeshSplitAttachmentGeometry::ShapeAttachment*) */

type __thiscall
std::__ndk1::
vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
::assign<MeshSplitAttachmentGeometry::ShapeAttachment*>
          (vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
           *this,ShapeAttachment *param_1,ShapeAttachment *param_2)

{
  ShapeAttachment *__src;
  type tVar1;
  void *pvVar2;
  vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
  *pvVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(this + 0x10);
  sVar5 = (long)param_2 - (long)param_1;
  pvVar6 = *(void **)this;
  uVar7 = (long)sVar5 >> 2;
  if (uVar7 <= (ulong)((long)(uVar4 - (long)pvVar6) >> 2)) {
    uVar4 = *(long *)(this + 8) - (long)pvVar6 >> 2;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar6);
    if (uVar7 <= uVar4) {
      __src = param_2;
    }
    sVar5 = (long)__src - (long)param_1;
    pvVar3 = this;
    if (sVar5 != 0) {
      pvVar3 = (vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                *)memmove(pvVar6,param_1,sVar5);
    }
    tVar1 = (type)pvVar3;
    if (uVar4 < uVar7) {
      pvVar6 = *(void **)(this + 8);
      sVar5 = (long)param_2 - (long)__src;
      if (0 < (long)sVar5) {
        pvVar2 = memcpy(pvVar6,__src,sVar5);
        tVar1 = (type)pvVar2;
        pvVar6 = (void *)((long)pvVar6 + sVar5);
      }
      *(void **)(this + 8) = pvVar6;
    }
    else {
      *(size_t *)(this + 8) = (long)pvVar6 + sVar5;
    }
    return tVar1;
  }
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 8) = pvVar6;
    operator_delete(pvVar6);
    uVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (-1 < (long)sVar5) {
    if (uVar7 <= (ulong)((long)uVar4 >> 1)) {
      uVar7 = (long)uVar4 >> 1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 >> 0x3e == 0) {
      pvVar6 = operator_new(uVar7 * 4);
      *(void **)this = pvVar6;
      *(void **)(this + 8) = pvVar6;
      *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar7 * 4);
      pvVar2 = pvVar6;
      if (sVar5 != 0) {
        pvVar2 = memcpy(pvVar6,param_1,sVar5);
        pvVar6 = (void *)((long)pvVar6 + sVar5);
      }
      *(void **)(this + 8) = pvVar6;
      return (type)pvVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


