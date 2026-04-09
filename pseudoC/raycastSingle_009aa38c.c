// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastSingle
// Entry Point: 009aa38c
// Size: 8 bytes
// Signature: undefined __thiscall raycastSingle(Bt2ScenegraphPhysicsContext * this, Vector3 * param_1, Vector3 * param_2, float param_3, btCollisionObject * param_4, Vector3 * param_5)


/* Bt2ScenegraphPhysicsContext::raycastSingle(Vector3 const&, Vector3 const&, float,
   btCollisionObject const*, Vector3*) */

void __thiscall
Bt2ScenegraphPhysicsContext::raycastSingle
          (Bt2ScenegraphPhysicsContext *this,Vector3 *param_1,Vector3 *param_2,float param_3,
          btCollisionObject *param_4,Vector3 *param_5)

{
  Bt2SceneQueryUtil::raycastSingle
            (*(Bt2World **)(this + 0x30),param_1,param_2,param_3,param_4,param_5);
  return;
}


