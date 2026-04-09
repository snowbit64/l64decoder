// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_log2lin
// Entry Point: 00e68088
// Size: 100 bytes
// Signature: undefined silk_log2lin(void)


int silk_log2lin(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if (0xf7e < param_1) {
    return 0x7fffffff;
  }
  uVar2 = param_1 & 0x7f;
  uVar4 = 1 << (ulong)(param_1 >> 7 & 0x1f);
  iVar1 = uVar2 + ((int)(uVar2 * (0x80 - uVar2) * -0xae) >> 0x10);
  iVar3 = iVar1 * (uVar4 >> 7);
  if (param_1 < 0x800) {
    iVar3 = (iVar1 << (ulong)(param_1 >> 7 & 0x1f)) >> 7;
  }
  return iVar3 + uVar4;
}


