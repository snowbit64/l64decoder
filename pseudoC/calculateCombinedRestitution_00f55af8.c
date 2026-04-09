// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateCombinedRestitution
// Entry Point: 00f55af8
// Size: 16 bytes
// Signature: undefined __cdecl calculateCombinedRestitution(btCollisionObject * param_1, btCollisionObject * param_2)


/* btManifoldResult::calculateCombinedRestitution(btCollisionObject const*, btCollisionObject
   const*) */

float btManifoldResult::calculateCombinedRestitution
                (btCollisionObject *param_1,btCollisionObject *param_2)

{
  return *(float *)(param_2 + 0xf8) * *(float *)(param_1 + 0xf8);
}


