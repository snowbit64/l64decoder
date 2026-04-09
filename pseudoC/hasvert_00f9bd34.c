// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasvert
// Entry Point: 00f9bd34
// Size: 44 bytes
// Signature: undefined __cdecl hasvert(int3 * param_1, int param_2)


/* hasvert(int3 const&, int) */

bool hasvert(int3 *param_1,int param_2)

{
  return (*(int *)param_1 == param_2 || *(int *)(param_1 + 4) == param_2) ||
         *(int *)(param_1 + 8) == param_2;
}


