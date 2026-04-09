// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2ConvexHeightfieldCollisionAlgorithm
// Entry Point: 00ba5c84
// Size: 88 bytes
// Signature: undefined __thiscall ~Bt2ConvexHeightfieldCollisionAlgorithm(Bt2ConvexHeightfieldCollisionAlgorithm * this)


/* Bt2ConvexHeightfieldCollisionAlgorithm::~Bt2ConvexHeightfieldCollisionAlgorithm() */

void __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::~Bt2ConvexHeightfieldCollisionAlgorithm
          (Bt2ConvexHeightfieldCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__Bt2ConvexHeightfieldCollisionAlgorithm_00fead48;
                    /* try { // try from 00ba5cb4 to 00ba5ccb has its CatchHandler @ 00ba5cdc */
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),*(undefined8 *)(this + 0x18));
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),*(undefined8 *)(this + 0x18));
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}


