// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 009afb68
// Size: 144 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* Bt2WheelConvexCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
Bt2WheelConvexCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x40);
  btConvexConvexAlgorithm::btConvexConvexAlgorithm
            ((btConvexConvexAlgorithm *)this_00,*(btPersistentManifold **)(param_1 + 8),param_1,
             param_2,param_3,*(btVoronoiSimplexSolver **)(this + 0x10),
             *(btConvexPenetrationDepthSolver **)(this + 0x18),0,0);
  *(undefined *)((long)this_00 + 0x3c) = 0;
  *this_00 = &PTR__btConvexConvexAlgorithm_00fe12b8;
  return this_00;
}


