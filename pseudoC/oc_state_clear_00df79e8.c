// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_clear
// Entry Point: 00df79e8
// Size: 96 bytes
// Signature: undefined oc_state_clear(void)


void oc_state_clear(long param_1)

{
  free(*(void **)(param_1 + 0x118));
  free(*(void **)(param_1 + 0x2c0));
  free(*(void **)(param_1 + 0x168));
  free(*(void **)(param_1 + 0x150));
  free(*(void **)(param_1 + 0x148));
  free(*(void **)(param_1 + 0x138));
  free(*(void **)(param_1 + 0x130));
  free(*(void **)(param_1 + 0x120));
  free(*(void **)(param_1 + 0x110));
  return;
}


