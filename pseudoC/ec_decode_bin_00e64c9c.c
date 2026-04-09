// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_decode_bin
// Entry Point: 00e64c9c
// Size: 44 bytes
// Signature: undefined ec_decode_bin(void)


int ec_decode_bin(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar3 = *(uint *)(param_1 + 0x20) >> (ulong)(param_2 & 0x1f);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x24) / uVar3;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  iVar1 = 0;
  if (uVar4 + 1 <= uVar2) {
    iVar1 = uVar2 - (uVar4 + 1);
  }
  return iVar1;
}


