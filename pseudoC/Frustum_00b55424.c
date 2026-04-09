// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Frustum
// Entry Point: 00b55424
// Size: 92 bytes
// Signature: undefined __thiscall Frustum(Frustum * this)


/* Frustum::Frustum() */

void __thiscall Frustum::Frustum(Frustum *this)

{
  *(undefined ***)this = &PTR__CullingBody_00fea1a8;
  Plane::Plane((Plane *)(this + 8));
  Plane::Plane((Plane *)(this + 0x18));
  Plane::Plane((Plane *)(this + 0x28));
  Plane::Plane((Plane *)(this + 0x38));
  Plane::Plane((Plane *)(this + 0x48));
  Plane::Plane((Plane *)(this + 0x58));
  return;
}


