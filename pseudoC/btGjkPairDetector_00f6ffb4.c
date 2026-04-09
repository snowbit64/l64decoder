// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGjkPairDetector
// Entry Point: 00f6ffb4
// Size: 72 bytes
// Signature: undefined __thiscall btGjkPairDetector(btGjkPairDetector * this, btConvexShape * param_1, btConvexShape * param_2, int param_3, int param_4, float param_5, float param_6, btVoronoiSimplexSolver * param_7, btConvexPenetrationDepthSolver * param_8)


/* btGjkPairDetector::btGjkPairDetector(btConvexShape const*, btConvexShape const*, int, int, float,
   float, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*) */

void __thiscall
btGjkPairDetector::btGjkPairDetector
          (btGjkPairDetector *this,btConvexShape *param_1,btConvexShape *param_2,int param_3,
          int param_4,float param_5,float param_6,btVoronoiSimplexSolver *param_7,
          btConvexPenetrationDepthSolver *param_8)

{
  *(float *)(this + 0x40) = param_5;
  *(btConvexPenetrationDepthSolver **)(this + 0x18) = param_8;
  *(btVoronoiSimplexSolver **)(this + 0x20) = param_7;
  *(btConvexShape **)(this + 0x28) = param_1;
  *(btConvexShape **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0x3f80000000000000;
  *(int *)(this + 0x38) = param_3;
  *(int *)(this + 0x3c) = param_4;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
  *(float *)(this + 0x44) = param_6;
  this[0x48] = (btGjkPairDetector)0x0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined8 *)(this + 0x5c) = 0x100000001;
  return;
}


