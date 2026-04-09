// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateCombinedFriction
// Entry Point: 00f55ad8
// Size: 32 bytes
// Signature: undefined __cdecl calculateCombinedFriction(btCollisionObject * param_1, btCollisionObject * param_2)


/* btManifoldResult::calculateCombinedFriction(btCollisionObject const*, btCollisionObject const*)
    */

undefined4
btManifoldResult::calculateCombinedFriction(btCollisionObject *param_1,btCollisionObject *param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(param_2 + 0xf4) * *(float *)(param_1 + 0xf4);
  if (fVar1 <= -10.0) {
    fVar1 = -10.0;
  }
  uVar2 = NEON_fminnm(fVar1,0x41200000);
  return uVar2;
}


