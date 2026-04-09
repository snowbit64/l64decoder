// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_input_complete
// Entry Point: 00d6e380
// Size: 84 bytes
// Signature: undefined jpeg_input_complete(void)


undefined jpeg_input_complete(long *param_1)

{
  code **ppcVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x24) - 0xd3U < 0xfffffff5) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  return *(undefined *)(param_1[0x48] + 0x21);
}


