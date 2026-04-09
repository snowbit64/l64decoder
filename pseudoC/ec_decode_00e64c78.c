// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_decode
// Entry Point: 00e64c78
// Size: 36 bytes
// Signature: undefined ec_decode(void)


int ec_decode(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) / param_2;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x24) / uVar2;
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  iVar1 = 0;
  if (uVar3 + 1 <= param_2) {
    iVar1 = param_2 - (uVar3 + 1);
  }
  return iVar1;
}


