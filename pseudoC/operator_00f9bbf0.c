// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00f9bbf0
// Size: 60 bytes
// Signature: undefined __cdecl operator==(int3 * param_1, int3 * param_2)


/* TEMPNAMEPLACEHOLDERVALUE(int3 const&, int3 const&) */

bool operator==(int3 *param_1,int3 *param_2)

{
  if ((*(int *)param_1 == *(int *)param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
  }
  return false;
}


