// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_bits___vyuuniuni
// Entry Point: 00e5b924
// Size: 44 bytes
// Signature: undefined get_bits___vyuuniuni(void)


void get_bits___vyuuniuni(undefined param_1 [16],undefined4 param_2)

{
  undefined auVar1 [16];
  
  auVar1._4_4_ = param_2;
  auVar1._0_4_ = param_2;
  auVar1._8_4_ = param_2;
  auVar1._12_4_ = param_2;
  auVar1 = NEON_neg(auVar1,4);
  NEON_ushl(param_1,auVar1,4);
  return;
}


