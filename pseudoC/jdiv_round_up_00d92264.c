// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jdiv_round_up
// Entry Point: 00d92264
// Size: 16 bytes
// Signature: undefined jdiv_round_up(void)


long jdiv_round_up(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (param_1 + param_2 + -1) / param_2;
  }
  return lVar1;
}


