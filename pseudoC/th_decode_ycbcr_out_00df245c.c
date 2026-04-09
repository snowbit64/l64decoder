// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_ycbcr_out
// Entry Point: 00df245c
// Size: 56 bytes
// Signature: undefined th_decode_ycbcr_out(void)


undefined8 th_decode_ycbcr_out(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != 0) && (param_2 != 0)) {
    oc_ycbcr_buffer_flip(param_2,param_1 + 0xe130);
    uVar1 = 0;
  }
  return uVar1;
}


