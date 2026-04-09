// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_setup_free
// Entry Point: 00ded744
// Size: 56 bytes
// Signature: undefined th_setup_free(void)


void th_setup_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    oc_quant_params_clear((long)param_1 + 0x280);
    oc_huff_trees_clear(param_1);
    free(param_1);
    return;
  }
  return;
}


