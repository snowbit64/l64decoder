// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConvexFace
// Entry Point: 00bae398
// Size: 64 bytes
// Signature: undefined __thiscall ~ConvexFace(ConvexFace * this)


/* Bt2PhysicsCookingUtil::ConvexFace::~ConvexFace() */

void __thiscall Bt2PhysicsCookingUtil::ConvexFace::~ConvexFace(ConvexFace *this)

{
  if ((*(void **)(this + 0x20) != (void *)0x0) && (this[0x28] != (ConvexFace)0x0)) {
                    /* try { // try from 00bae3b8 to 00bae3bb has its CatchHandler @ 00bae3d8 */
    btAlignedFreeInternal(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (ConvexFace)0x1;
  return;
}


