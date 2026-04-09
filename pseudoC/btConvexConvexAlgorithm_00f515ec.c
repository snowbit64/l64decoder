// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConvexConvexAlgorithm
// Entry Point: 00f515ec
// Size: 48 bytes
// Signature: undefined __thiscall btConvexConvexAlgorithm(btConvexConvexAlgorithm * this, btPersistentManifold * param_1, btCollisionAlgorithmConstructionInfo * param_2, btCollisionObjectWrapper * param_3, btCollisionObjectWrapper * param_4, btVoronoiSimplexSolver * param_5, btConvexPenetrationDepthSolver * param_6, int param_7, int param_8)


/* btConvexConvexAlgorithm::btConvexConvexAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*, int,
   int) */

void __thiscall
btConvexConvexAlgorithm::btConvexConvexAlgorithm
          (btConvexConvexAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,btVoronoiSimplexSolver *param_5,
          btConvexPenetrationDepthSolver *param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  
  *(btVoronoiSimplexSolver **)(this + 0x10) = param_5;
  *(btConvexPenetrationDepthSolver **)(this + 0x18) = param_6;
  uVar1 = *(undefined8 *)param_2;
  this[0x20] = (btConvexConvexAlgorithm)0x0;
  *(btPersistentManifold **)(this + 0x28) = param_1;
  this[0x30] = (btConvexConvexAlgorithm)0x0;
  *(undefined ***)this = &PTR__btConvexConvexAlgorithm_01019a70;
  *(undefined8 *)(this + 8) = uVar1;
  *(int *)(this + 0x34) = param_7;
  *(int *)(this + 0x38) = param_8;
  return;
}


