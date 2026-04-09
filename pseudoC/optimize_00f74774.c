// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimize
// Entry Point: 00f74774
// Size: 8 bytes
// Signature: undefined __cdecl optimize(btAlignedObjectArray * param_1, bool param_2)


/* btDefaultSoftBodySolver::optimize(btAlignedObjectArray<btSoftBody*>&, bool) */

void btDefaultSoftBodySolver::optimize(btAlignedObjectArray *param_1,bool param_2)

{
  btAlignedObjectArray<btSoftBody*>::copyFromArray
            ((btAlignedObjectArray<btSoftBody*> *)(param_1 + 0x18),
             (btAlignedObjectArray *)(ulong)param_2);
  return;
}


