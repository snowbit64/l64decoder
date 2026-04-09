// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2ConvexHeightfieldCollisionAlgorithm
// Entry Point: 00ba5bec
// Size: 132 bytes
// Signature: undefined __thiscall Bt2ConvexHeightfieldCollisionAlgorithm(Bt2ConvexHeightfieldCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4, btVoronoiSimplexSolver * param_5, btConvexPenetrationDepthSolver * param_6)


/* Bt2ConvexHeightfieldCollisionAlgorithm::Bt2ConvexHeightfieldCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool,
   btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*) */

void __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::Bt2ConvexHeightfieldCollisionAlgorithm
          (Bt2ConvexHeightfieldCollisionAlgorithm *this,
          btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3,bool param_4,btVoronoiSimplexSolver *param_5,
          btConvexPenetrationDepthSolver *param_6)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_1,param_2,param_3);
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  this[0x10] = (Bt2ConvexHeightfieldCollisionAlgorithm)param_4;
  *(btVoronoiSimplexSolver **)(this + 0x20) = param_5;
  *(btConvexPenetrationDepthSolver **)(this + 0x28) = param_6;
  uVar2 = *(undefined8 *)(pbVar1 + 0x10);
  *(undefined ***)this = &PTR__Bt2ConvexHeightfieldCollisionAlgorithm_00fead48;
  if (!param_4) {
    param_2 = param_3;
  }
                    /* try { // try from 00ba5c54 to 00ba5c57 has its CatchHandler @ 00ba5c70 */
  uVar2 = (**(code **)(**(long **)(this + 8) + 0x18))
                    (*(long **)(this + 8),uVar2,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}


