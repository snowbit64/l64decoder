// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllOccluders
// Entry Point: 00a1b3d8
// Size: 20 bytes
// Signature: undefined __thiscall getAllOccluders(RenderList * this, vector * param_1)


/* RenderList::getAllOccluders(std::__ndk1::vector<RenderList::OccluderShapeInfo,
   std::__ndk1::allocator<RenderList::OccluderShapeInfo> >&) */

type __thiscall RenderList::getAllOccluders(RenderList *this,vector *param_1)

{
  type tVar1;
  
  tVar1 = std::__ndk1::
          vector<RenderList::OccluderShapeInfo,std::__ndk1::allocator<RenderList::OccluderShapeInfo>>
          ::insert<std::__ndk1::__wrap_iter<RenderList::OccluderShapeInfo*>>
                    ((vector<RenderList::OccluderShapeInfo,std::__ndk1::allocator<RenderList::OccluderShapeInfo>>
                      *)param_1,(__wrap_iter)*(undefined8 *)(param_1 + 8),
                     (__wrap_iter)*(undefined8 *)(this + 0x100),
                     (__wrap_iter)*(undefined8 *)(this + 0x108));
  return tVar1;
}


