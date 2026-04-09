// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_option
// Entry Point: 00dae26c
// Size: 76 bytes
// Signature: undefined png_set_option(void)


uint png_set_option(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1;
  if (((param_1 != 0) && (param_2 < 0xc)) && ((param_2 & 1) == 0)) {
    uVar1 = 3 << (ulong)(param_2 & 0x1f);
    iVar3 = 2;
    if (param_3 != 0) {
      iVar3 = 3;
    }
    uVar2 = (*(uint *)(param_1 + 0x3c0) & uVar1) >> (ulong)(param_2 & 0x1f);
    *(uint *)(param_1 + 0x3c0) =
         *(uint *)(param_1 + 0x3c0) & (uVar1 ^ 0xffffffff) | iVar3 << (ulong)(param_2 & 0x1f);
  }
  return uVar2;
}


