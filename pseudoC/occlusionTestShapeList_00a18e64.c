// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: occlusionTestShapeList
// Entry Point: 00a18e64
// Size: 272 bytes
// Signature: undefined __thiscall occlusionTestShapeList(RenderList * this, vector * param_1, vector * param_2, float * param_3, float * param_4)


/* RenderList::occlusionTestShapeList(std::__ndk1::vector<RenderList::ShapeViewInfo,
   std::__ndk1::allocator<RenderList::ShapeViewInfo> > const&,
   std::__ndk1::vector<RenderList::ShapeViewInfo, std::__ndk1::allocator<RenderList::ShapeViewInfo>
   >&, float const*, float const*) */

int __thiscall
RenderList::occlusionTestShapeList
          (RenderList *this,vector *param_1,vector *param_2,float *param_3,float *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  std::__ndk1::vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>::
  reserve((vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>> *)
          param_2,(*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  lVar3 = *(long *)param_1;
  uVar5 = (*(long *)(param_1 + 8) - lVar3 >> 3) * -0x5555555555555555;
  iVar4 = (int)uVar5;
  if (iVar4 != 0) {
    lVar6 = 0;
    while( true ) {
      lVar2 = *(long *)(lVar3 + lVar6);
      if (((*(byte *)(*(long *)(lVar2 + 0x170) + 0x30) >> 6 & 1) != 0) ||
         (uVar1 = GsMaskedOcclusionCulling::testSphere
                            (*(GsMaskedOcclusionCulling **)(this + 8),*(float *)(lVar2 + 0x1a4),
                             *(float *)(lVar2 + 0x1a8),*(float *)(lVar2 + 0x1ac),
                             *(float *)(lVar2 + 0x1b0),param_3,param_4), (uVar1 & 1) != 0)) {
        FUN_00a19044(param_2,(long *)(lVar3 + lVar6));
      }
      if ((uVar5 & 0xffffffff) * 0x18 + -0x18 == lVar6) break;
      lVar3 = *(long *)param_1;
      lVar6 = lVar6 + 0x18;
    }
    iVar4 = (int)(*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x55555555;
  }
  return iVar4 + (int)((ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 3) * 0x55555555;
}


