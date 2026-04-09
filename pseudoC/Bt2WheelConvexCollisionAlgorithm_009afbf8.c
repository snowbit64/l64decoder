// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2WheelConvexCollisionAlgorithm
// Entry Point: 009afbf8
// Size: 36 bytes
// Signature: undefined __thiscall ~Bt2WheelConvexCollisionAlgorithm(Bt2WheelConvexCollisionAlgorithm * this)


/* Bt2WheelConvexCollisionAlgorithm::~Bt2WheelConvexCollisionAlgorithm() */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::~Bt2WheelConvexCollisionAlgorithm
          (Bt2WheelConvexCollisionAlgorithm *this)

{
  btConvexConvexAlgorithm::~btConvexConvexAlgorithm((btConvexConvexAlgorithm *)this);
  operator_delete(this);
  return;
}


