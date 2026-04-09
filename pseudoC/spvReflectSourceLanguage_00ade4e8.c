// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectSourceLanguage
// Entry Point: 00ade4e8
// Size: 40 bytes
// Signature: undefined spvReflectSourceLanguage(void)


undefined * spvReflectSourceLanguage(uint param_1)

{
  if (param_1 < 7) {
    return &DAT_005240c8 + *(int *)(&DAT_005240c8 + (long)(int)param_1 * 4);
  }
  return &DAT_0050a39f;
}


