// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btContinuousConvexCollision
// Entry Point: 00f6b3c0
// Size: 32 bytes
// Signature: undefined __thiscall btContinuousConvexCollision(btContinuousConvexCollision * this, btConvexShape * param_1, btConvexShape * param_2, btVoronoiSimplexSolver * param_3, btConvexPenetrationDepthSolver * param_4, bool param_5)


/* btContinuousConvexCollision::btContinuousConvexCollision(btConvexShape const*, btConvexShape
   const*, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*, bool) */

void __thiscall
btContinuousConvexCollision::btContinuousConvexCollision
          (btContinuousConvexCollision *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3,btConvexPenetrationDepthSolver *param_4,bool param_5)

{
  *(btConvexPenetrationDepthSolver **)(this + 0x10) = param_4;
  *(btConvexShape **)(this + 0x18) = param_1;
  *(btConvexShape **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (btContinuousConvexCollision)param_5;
  *(undefined ***)this = &PTR__btConvexCast_0101b3d0;
  *(btVoronoiSimplexSolver **)(this + 8) = param_3;
  return;
}


