// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGjkPairDetector
// Entry Point: 00f6f274
// Size: 140 bytes
// Signature: undefined __thiscall btGjkPairDetector(btGjkPairDetector * this, btConvexShape * param_1, btConvexShape * param_2, btVoronoiSimplexSolver * param_3, btConvexPenetrationDepthSolver * param_4)


/* btGjkPairDetector::btGjkPairDetector(btConvexShape const*, btConvexShape const*,
   btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*) */

void __thiscall
btGjkPairDetector::btGjkPairDetector
          (btGjkPairDetector *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3,btConvexPenetrationDepthSolver *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(btConvexPenetrationDepthSolver **)(this + 0x18) = param_4;
  *(btVoronoiSimplexSolver **)(this + 0x20) = param_3;
  *(btConvexShape **)(this + 0x28) = param_1;
  *(btConvexShape **)(this + 0x30) = param_2;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0x3f80000000000000;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
  uVar1 = *(undefined4 *)(param_2 + 8);
  lVar2 = *(long *)param_1;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar3 = (**(code **)(lVar2 + 0x60))(param_1);
  lVar2 = *(long *)param_2;
  *(undefined4 *)(this + 0x40) = uVar3;
  uVar3 = (**(code **)(lVar2 + 0x60))(param_2);
  this[0x48] = (btGjkPairDetector)0x0;
  *(undefined4 *)(this + 0x44) = uVar3;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined8 *)(this + 0x5c) = 0x100000001;
  return;
}


