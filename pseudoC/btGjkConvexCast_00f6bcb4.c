// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGjkConvexCast
// Entry Point: 00f6bcb4
// Size: 24 bytes
// Signature: undefined __thiscall btGjkConvexCast(btGjkConvexCast * this, btConvexShape * param_1, btConvexShape * param_2, btVoronoiSimplexSolver * param_3)


/* btGjkConvexCast::btGjkConvexCast(btConvexShape const*, btConvexShape const*,
   btVoronoiSimplexSolver*) */

void __thiscall
btGjkConvexCast::btGjkConvexCast
          (btGjkConvexCast *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3)

{
  *(btConvexShape **)(this + 0x10) = param_1;
  *(btConvexShape **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__btConvexCast_0101b438;
  *(btVoronoiSimplexSolver **)(this + 8) = param_3;
  return;
}


