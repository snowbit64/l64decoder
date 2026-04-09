// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_permit_mng_features
// Entry Point: 00dc3764
// Size: 24 bytes
// Signature: undefined png_permit_mng_features(void)


void png_permit_mng_features(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x418) = param_2 & 5;
  }
  return;
}


