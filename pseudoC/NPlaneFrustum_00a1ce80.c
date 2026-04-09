// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NPlaneFrustum
// Entry Point: 00a1ce80
// Size: 60 bytes
// Signature: undefined __thiscall NPlaneFrustum(NPlaneFrustum * this, Frustum * param_1, Vector3 * param_2)


/* NPlaneFrustum::NPlaneFrustum(Frustum const&, Vector3 const&) */

void __thiscall NPlaneFrustum::NPlaneFrustum(NPlaneFrustum *this,Frustum *param_1,Vector3 *param_2)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__NPlaneFrustum_00fe30e8;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00a1ceac to 00a1ceaf has its CatchHandler @ 00a1cebc */
  set(this,param_1,param_2);
  return;
}


