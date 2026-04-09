// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Frustum
// Entry Point: 00b55480
// Size: 132 bytes
// Signature: undefined __thiscall Frustum(Frustum * this, Matrix4x4 * param_1, float param_2)


/* Frustum::Frustum(Matrix4x4 const&, float) */

void __thiscall Frustum::Frustum(Frustum *this,Matrix4x4 *param_1,float param_2)

{
  *(undefined ***)this = &PTR__CullingBody_00fea1a8;
  Plane::Plane((Plane *)(this + 8));
  Plane::Plane((Plane *)(this + 0x18));
  Plane::Plane((Plane *)(this + 0x28));
  Plane::Plane((Plane *)(this + 0x38));
  Plane::Plane((Plane *)(this + 0x48));
  Plane::Plane((Plane *)(this + 0x58));
  setClipMatrix(this,param_1,param_2);
  return;
}


