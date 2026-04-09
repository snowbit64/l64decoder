// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~WheelManifoldResult
// Entry Point: 009b028c
// Size: 4 bytes
// Signature: undefined __thiscall ~WheelManifoldResult(WheelManifoldResult * this)


/* Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::~WheelManifoldResult() */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::~WheelManifoldResult
          (WheelManifoldResult *this)

{
  operator_delete(this);
  return;
}


