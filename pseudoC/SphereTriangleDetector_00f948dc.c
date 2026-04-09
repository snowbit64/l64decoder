// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SphereTriangleDetector
// Entry Point: 00f948dc
// Size: 28 bytes
// Signature: undefined __thiscall SphereTriangleDetector(SphereTriangleDetector * this, btSphereShape * param_1, btTriangleShape * param_2, float param_3)


/* SphereTriangleDetector::SphereTriangleDetector(btSphereShape*, btTriangleShape*, float) */

void __thiscall
SphereTriangleDetector::SphereTriangleDetector
          (SphereTriangleDetector *this,btSphereShape *param_1,btTriangleShape *param_2,
          float param_3)

{
  *(btSphereShape **)(this + 8) = param_1;
  *(btTriangleShape **)(this + 0x10) = param_2;
  *(float *)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_0101c2c0;
  return;
}


