// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastClip
// Entry Point: 009aa384
// Size: 8 bytes
// Signature: undefined __thiscall raycastClip(Bt2ScenegraphPhysicsContext * this, Vector3 * param_1, Vector3 * param_2, float param_3, uint param_4)


/* Bt2ScenegraphPhysicsContext::raycastClip(Vector3 const&, Vector3 const&, float, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::raycastClip
          (Bt2ScenegraphPhysicsContext *this,Vector3 *param_1,Vector3 *param_2,float param_3,
          uint param_4)

{
  Bt2SceneQueryUtil::raycastClip(*(Bt2World **)(this + 0x30),param_1,param_2,param_3,param_4);
  return;
}


