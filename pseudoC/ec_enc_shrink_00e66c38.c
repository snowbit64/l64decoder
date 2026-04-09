// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_shrink
// Entry Point: 00e66c38
// Size: 64 bytes
// Signature: undefined ec_enc_shrink(void)


void ec_enc_shrink(long *param_1,uint param_2)

{
  ulong __n;
  
  __n = (ulong)*(uint *)((long)param_1 + 0xc);
  memmove((void *)((*param_1 + (ulong)param_2) - __n),
          (void *)((*param_1 + (ulong)*(uint *)(param_1 + 1)) - __n),__n);
  *(uint *)(param_1 + 1) = param_2;
  return;
}


