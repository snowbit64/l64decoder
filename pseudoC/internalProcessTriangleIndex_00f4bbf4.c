// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalProcessTriangleIndex
// Entry Point: 00f4bbf4
// Size: 12 bytes
// Signature: undefined __thiscall internalProcessTriangleIndex(DebugDrawcallback * this, btVector3 * param_1, int param_2, int param_3)


/* non-virtual thunk to DebugDrawcallback::internalProcessTriangleIndex(btVector3*, int, int) */

void __thiscall
DebugDrawcallback::internalProcessTriangleIndex
          (DebugDrawcallback *this,btVector3 *param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00f4bbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -8) + 0x10))(this + -8,param_1,param_2,param_3);
  return;
}


