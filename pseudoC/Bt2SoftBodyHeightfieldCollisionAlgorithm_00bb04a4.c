// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2SoftBodyHeightfieldCollisionAlgorithm
// Entry Point: 00bb04a4
// Size: 92 bytes
// Signature: undefined __thiscall ~Bt2SoftBodyHeightfieldCollisionAlgorithm(Bt2SoftBodyHeightfieldCollisionAlgorithm * this)


/* Bt2SoftBodyHeightfieldCollisionAlgorithm::~Bt2SoftBodyHeightfieldCollisionAlgorithm() */

void __thiscall
Bt2SoftBodyHeightfieldCollisionAlgorithm::~Bt2SoftBodyHeightfieldCollisionAlgorithm
          (Bt2SoftBodyHeightfieldCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__Bt2SoftBodyHeightfieldCollisionAlgorithm_00feb1b8;
  *(undefined ***)(this + 0x18) = &PTR__Bt2SoftBodyHeightfieldTriangleCallback_00feb1f0;
                    /* try { // try from 00bb04dc to 00bb04e3 has its CatchHandler @ 00bb0500 */
  Bt2SoftBodyHeightfieldTriangleCallback::clearCache();
  btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
  ::~btHashMap((btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                *)(this + 0x70));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)(this + 0x18));
  return;
}


