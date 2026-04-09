// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decode
// Entry Point: 00e5f15c
// Size: 56 bytes
// Signature: undefined opus_decode(void)


undefined8 opus_decode(void)

{
  undefined8 uVar1;
  int in_w4;
  
  if (0 < in_w4) {
    uVar1 = opus_decode_native();
    return uVar1;
  }
  return 0xffffffff;
}


