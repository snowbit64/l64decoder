// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_serialnumber
// Entry Point: 00e1e7cc
// Size: 72 bytes
// Signature: undefined ov_serialnumber(void)


undefined8 ov_serialnumber(long param_1,uint param_2)

{
  uint uVar1;
  
  do {
    do {
      uVar1 = param_2;
      param_2 = *(int *)(param_1 + 0x40) - 1;
    } while (*(int *)(param_1 + 0x40) <= (int)uVar1);
  } while ((-1 < (int)uVar1) && (param_2 = 0xffffffff, *(int *)(param_1 + 8) == 0));
  if (-1 < (int)uVar1) {
    return *(undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 8);
  }
  return *(undefined8 *)(param_1 + 0x88);
}


