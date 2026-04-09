// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeIdentifiersA
// Entry Point: 009b0290
// Size: 88 bytes
// Signature: undefined __thiscall setShapeIdentifiersA(WheelManifoldResult * this, int param_1, int param_2)


/* Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::setShapeIdentifiersA(int, int) */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::setShapeIdentifiersA
          (WheelManifoldResult *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (this[0x74] != (WheelManifoldResult)0x0) {
    lVar1 = 0x18;
  }
  (**(code **)(**(long **)(this + 0x38) + lVar1))();
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x28) = param_2;
  return;
}


