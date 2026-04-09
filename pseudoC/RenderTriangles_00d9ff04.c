// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderTriangles
// Entry Point: 00d9ff04
// Size: 32 bytes
// Signature: undefined __thiscall RenderTriangles(MaskedOcclusionCullingPrivate * this, float * param_1, ushort * param_2, int param_3, float * param_4, BackfaceWinding param_5, ClipPlanes param_6, VertexLayout * param_7)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles(float const*, unsigned
   short const*, int, float const*, MaskedOcclusionCulling::BackfaceWinding,
   MaskedOcclusionCulling::ClipPlanes, MaskedOcclusionCulling::VertexLayout const&) */

CullingResult __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles
          (MaskedOcclusionCullingPrivate *this,float *param_1,ushort *param_2,int param_3,
          float *param_4,BackfaceWinding param_5,ClipPlanes param_6,VertexLayout *param_7)

{
  CullingResult CVar1;
  
  if ((*(int *)param_7 != 0x10 || *(int *)(param_7 + 4) != 4) || *(int *)(param_7 + 8) != 0xc) {
    CVar1 = RenderTriangles<0,0>(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return CVar1;
  }
  CVar1 = RenderTriangles<0,1>(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return CVar1;
}


