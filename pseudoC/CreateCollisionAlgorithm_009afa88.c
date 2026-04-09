// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 009afa88
// Size: 108 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* Bt2ConvexHeightfieldCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

Bt2ConvexHeightfieldCollisionAlgorithm * __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  Bt2ConvexHeightfieldCollisionAlgorithm *this_00;
  
  this_00 = (Bt2ConvexHeightfieldCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x30);
  Bt2ConvexHeightfieldCollisionAlgorithm
            (this_00,param_1,param_2,param_3,false,*(btVoronoiSimplexSolver **)(this + 0x10),
             *(btConvexPenetrationDepthSolver **)(this + 0x18));
  return this_00;
}


