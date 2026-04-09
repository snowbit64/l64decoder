// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_huff_trees_clear
// Entry Point: 00df4614
// Size: 52 bytes
// Signature: undefined oc_huff_trees_clear(void)


void oc_huff_trees_clear(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    free(*(void **)(param_1 + lVar1));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x280);
  return;
}


