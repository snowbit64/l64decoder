// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BinTriangles
// Entry Point: 00da0398
// Size: 68 bytes
// Signature: undefined __thiscall BinTriangles(MaskedOcclusionCullingPrivate * this, float * param_1, ushort * param_2, int param_3, TriList * param_4, uint param_5, uint param_6, float * param_7, BackfaceWinding param_8, ClipPlanes param_9, VertexLayout * param_10)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::BinTriangles(float const*, unsigned
   short const*, int, MaskedOcclusionCulling::TriList*, unsigned int, unsigned int, float const*,
   MaskedOcclusionCulling::BackfaceWinding, MaskedOcclusionCulling::ClipPlanes,
   MaskedOcclusionCulling::VertexLayout const&) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::BinTriangles
          (MaskedOcclusionCullingPrivate *this,float *param_1,ushort *param_2,int param_3,
          TriList *param_4,uint param_5,uint param_6,float *param_7,BackfaceWinding param_8,
          ClipPlanes param_9,VertexLayout *param_10)

{
  if ((*(int *)param_10 != 0x10 || *(int *)(param_10 + 4) != 4) || *(int *)(param_10 + 8) != 0xc) {
    BinTriangles<false>(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                        ,param_10);
    return;
  }
  BinTriangles<true>(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return;
}


