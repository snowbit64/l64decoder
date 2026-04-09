// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateFunc
// Entry Point: 00f4fd98
// Size: 40 bytes
// Signature: undefined __thiscall CreateFunc(CreateFunc * this, btVoronoiSimplexSolver * param_1, btConvexPenetrationDepthSolver * param_2)


/* btConvexConvexAlgorithm::CreateFunc::CreateFunc(btVoronoiSimplexSolver*,
   btConvexPenetrationDepthSolver*) */

void __thiscall
btConvexConvexAlgorithm::CreateFunc::CreateFunc
          (CreateFunc *this,btVoronoiSimplexSolver *param_1,btConvexPenetrationDepthSolver *param_2)

{
  this[8] = (CreateFunc)0x0;
  *(btConvexPenetrationDepthSolver **)(this + 0x10) = param_2;
  *(btVoronoiSimplexSolver **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0x300000000;
  *(undefined ***)this = &PTR__CreateFunc_01019a48;
  return;
}


