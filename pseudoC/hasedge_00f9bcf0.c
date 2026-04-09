// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasedge
// Entry Point: 00f9bcf0
// Size: 68 bytes
// Signature: undefined __cdecl hasedge(int3 * param_1, int param_2, int param_3)


/* hasedge(int3 const&, int, int) */

bool hasedge(int3 *param_1,int param_2,int param_3)

{
  if ((*(int *)param_1 != param_2 || *(int *)(param_1 + 4) != param_3) &&
     ((*(int *)(param_1 + 4) != param_2 || (*(int *)(param_1 + 8) != param_3)))) {
    return *(int *)(param_1 + 8) == param_2 && *(int *)param_1 == param_3;
  }
  return true;
}


