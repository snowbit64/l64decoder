// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_free
// Entry Point: 00dee0a0
// Size: 100 bytes
// Signature: undefined th_decode_free(void)


void th_decode_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0xe120));
    free(*(void **)((long)param_1 + 0xe118));
    free(*(void **)((long)param_1 + 0xe110));
    free(*(void **)((long)param_1 + 0xdef8));
    oc_huff_trees_clear((long)param_1 + 0xd078);
    oc_state_clear(param_1);
    free(param_1);
    return;
  }
  return;
}


