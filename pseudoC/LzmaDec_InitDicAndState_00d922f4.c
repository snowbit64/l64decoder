// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDec_InitDicAndState
// Entry Point: 00d922f4
// Size: 48 bytes
// Signature: undefined LzmaDec_InitDicAndState(void)


void LzmaDec_InitDicAndState(long param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0x100000000;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 100) = 1;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  return;
}


