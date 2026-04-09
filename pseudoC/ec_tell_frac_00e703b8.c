// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_tell_frac
// Entry Point: 00e703b8
// Size: 76 bytes
// Signature: undefined ec_tell_frac(void)


int ec_tell_frac(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)LZCOUNT(*(uint *)(param_1 + 0x20));
  uVar1 = *(uint *)(param_1 + 0x20) >> (ulong)(0x10U - iVar3 & 0x1f);
  uVar2 = uVar1 >> 0xc;
  return (((*(int *)(param_1 + 0x18) * 8 + iVar3 * 8) -
          (uint)(*(uint *)(&DAT_00517700 + (ulong)(uVar2 - 8) * 4) < uVar1)) - uVar2) + -0xf8;
}


