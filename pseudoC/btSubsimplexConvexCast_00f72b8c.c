// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSubsimplexConvexCast
// Entry Point: 00f72b8c
// Size: 24 bytes
// Signature: undefined __thiscall btSubsimplexConvexCast(btSubsimplexConvexCast * this, btConvexShape * param_1, btConvexShape * param_2, btVoronoiSimplexSolver * param_3)


/* btSubsimplexConvexCast::btSubsimplexConvexCast(btConvexShape const*, btConvexShape const*,
   btVoronoiSimplexSolver*) */

void __thiscall
btSubsimplexConvexCast::btSubsimplexConvexCast
          (btSubsimplexConvexCast *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3)

{
  *(btConvexShape **)(this + 0x10) = param_1;
  *(btConvexShape **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__btConvexCast_0101b5c0;
  *(btVoronoiSimplexSolver **)(this + 8) = param_3;
  return;
}


