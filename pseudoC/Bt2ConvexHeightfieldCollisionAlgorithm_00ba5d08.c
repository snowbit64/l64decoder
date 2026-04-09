// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2ConvexHeightfieldCollisionAlgorithm
// Entry Point: 00ba5d08
// Size: 96 bytes
// Signature: undefined __thiscall ~Bt2ConvexHeightfieldCollisionAlgorithm(Bt2ConvexHeightfieldCollisionAlgorithm * this)


/* Bt2ConvexHeightfieldCollisionAlgorithm::~Bt2ConvexHeightfieldCollisionAlgorithm() */

void __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::~Bt2ConvexHeightfieldCollisionAlgorithm
          (Bt2ConvexHeightfieldCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__Bt2ConvexHeightfieldCollisionAlgorithm_00fead48;
                    /* try { // try from 00ba5d38 to 00ba5d4f has its CatchHandler @ 00ba5d68 */
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),*(undefined8 *)(this + 0x18));
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),*(undefined8 *)(this + 0x18));
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  operator_delete(this);
  return;
}


