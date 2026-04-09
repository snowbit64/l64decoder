// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistancePointCloudShape
// Entry Point: 009ab388
// Size: 100 bytes
// Signature: undefined __thiscall getDistancePointCloudShape(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, uint param_3, TransformGroup * param_4, Vector3 * param_5, Vector3 * param_6)


/* Bt2ScenegraphPhysicsContext::getDistancePointCloudShape(Matrix4x4 const&, Vector3 const*,
   unsigned int, TransformGroup*, Vector3*, Vector3*) */

void __thiscall
Bt2ScenegraphPhysicsContext::getDistancePointCloudShape
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,uint param_3,
          TransformGroup *param_4,Vector3 *param_5,Vector3 *param_6)

{
  long lVar1;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  getDistancePointCloudShape
            (this,param_1,param_2,param_3,*(btCollisionObject **)(lVar1 + 0x30),param_5,param_6);
  return;
}


