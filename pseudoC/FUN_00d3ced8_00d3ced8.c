// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ced8
// Entry Point: 00d3ced8
// Size: 92 bytes
// Signature: undefined FUN_00d3ced8(void)


int FUN_00d3ced8(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
  while ((uVar2 = bVar1 - 5, uVar2 < 0x19 && ((0x17e0007U >> (ulong)(uVar2 & 0x1f) & 1) != 0))) {
    param_2 = param_2 + *(long *)(&DAT_00547a70 + (long)(char)uVar2 * 8);
    bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
  }
  return (int)param_2 - iVar3;
}


