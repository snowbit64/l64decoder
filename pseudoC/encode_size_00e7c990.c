// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode_size
// Entry Point: 00e7c990
// Size: 52 bytes
// Signature: undefined encode_size(void)


undefined8 encode_size(uint param_1,undefined *param_2)

{
  if ((int)param_1 < 0xfc) {
    *param_2 = (char)param_1;
    return 1;
  }
  *param_2 = (char)(param_1 | 0xfffffffc);
  param_2[1] = (char)(param_1 - ((param_1 | 0xfffffffc) & 0xff) >> 2);
  return 2;
}


