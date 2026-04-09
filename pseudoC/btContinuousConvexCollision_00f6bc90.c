// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btContinuousConvexCollision
// Entry Point: 00f6bc90
// Size: 28 bytes
// Signature: undefined __thiscall btContinuousConvexCollision(btContinuousConvexCollision * this, btConvexShape * param_1, btStaticPlaneShape * param_2)


/* btContinuousConvexCollision::btContinuousConvexCollision(btConvexShape const*, btStaticPlaneShape
   const*) */

void __thiscall
btContinuousConvexCollision::btContinuousConvexCollision
          (btContinuousConvexCollision *this,btConvexShape *param_1,btStaticPlaneShape *param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(btConvexShape **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(btStaticPlaneShape **)(this + 0x28) = param_2;
  *(undefined ***)this = &PTR__btConvexCast_0101b3d0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


