// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeIdentifiersB
// Entry Point: 009b02e8
// Size: 88 bytes
// Signature: undefined __thiscall setShapeIdentifiersB(WheelManifoldResult * this, int param_1, int param_2)


/* Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::setShapeIdentifiersB(int, int) */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::setShapeIdentifiersB
          (WheelManifoldResult *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x18;
  if (this[0x74] != (WheelManifoldResult)0x0) {
    lVar1 = 0x10;
  }
  (**(code **)(**(long **)(this + 0x38) + lVar1))();
  *(int *)(this + 0x24) = param_1;
  *(int *)(this + 0x2c) = param_2;
  return;
}


