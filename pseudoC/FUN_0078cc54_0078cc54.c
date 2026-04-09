// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cc54
// Entry Point: 0078cc54
// Size: 80 bytes
// Signature: undefined FUN_0078cc54(void)


void FUN_0078cc54(uint *param_1)

{
  ulong uVar1;
  
  uVar1 = StringUtil::unicodeToUtf8(*param_1,&DAT_0107c1e8);
  (&DAT_0107c1e8)[uVar1 & 0xffffffff] = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_0107c1e8;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


