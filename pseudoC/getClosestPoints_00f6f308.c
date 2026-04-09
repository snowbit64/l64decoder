// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPoints
// Entry Point: 00f6f308
// Size: 8 bytes
// Signature: undefined __thiscall getClosestPoints(btGjkPairDetector * this, ClosestPointInput * param_1, Result * param_2, btIDebugDraw * param_3, bool param_4, bool param_5)


/* btGjkPairDetector::getClosestPoints(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool, bool) */

void __thiscall
btGjkPairDetector::getClosestPoints
          (btGjkPairDetector *this,ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3,
          bool param_4,bool param_5)

{
  getClosestPointsNonVirtual(this,param_1,param_2,param_3,param_5);
  return;
}


