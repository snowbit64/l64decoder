// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_lin2log
// Entry Point: 00e680ec
// Size: 104 bytes
// Signature: undefined silk_lin2log(void)


int silk_lin2log(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)LZCOUNT(param_1);
  if (iVar1 - 0x18U != 0) {
    if (param_1 < 0x80) {
      uVar2 = param_1 << (ulong)(iVar1 - 0x18U & 0x1f);
      uVar3 = param_1 >> (ulong)(0x38U - iVar1 & 0x1f);
    }
    else {
      uVar3 = param_1 << (ulong)(iVar1 + 8U & 0x1f);
      uVar2 = param_1 >> (ulong)(0x18U - iVar1 & 0x1f);
    }
    param_1 = uVar3 | uVar2;
  }
  param_1 = param_1 & 0x7f;
  return param_1 + iVar1 * -0x80 + (param_1 * (0x80 - param_1) * 0xb3 >> 0x10) + 0xf80;
}


