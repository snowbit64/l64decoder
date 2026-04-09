// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalProcessTriangleIndex
// Entry Point: 009b1e4c
// Size: 12 bytes
// Signature: undefined __cdecl internalProcessTriangleIndex(btVector3 * param_1, int param_2, int param_3)


/* Bt2ScenegraphPhysicsContext::DebugDrawCallback::internalProcessTriangleIndex(btVector3*, int,
   int) */

void Bt2ScenegraphPhysicsContext::DebugDrawCallback::internalProcessTriangleIndex
               (btVector3 *param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x009b1e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


