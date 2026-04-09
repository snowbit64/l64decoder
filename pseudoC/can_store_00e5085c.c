// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: can_store
// Entry Point: 00e5085c
// Size: 32 bytes
// Signature: undefined __cdecl can_store(int param_1, int param_2)


/* can_store(int, int) */

bool can_store(int param_1,int param_2)

{
  return -1 < param_1 && param_1 < 1 << (ulong)(param_2 & 0x1f);
}


