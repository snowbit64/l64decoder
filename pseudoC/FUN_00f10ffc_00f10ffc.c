// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10ffc
// Entry Point: 00f10ffc
// Size: 56 bytes
// Signature: undefined FUN_00f10ffc(void)


int FUN_00f10ffc(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = -1;
  uVar3 = param_1;
  if (0xff < param_1) {
    do {
      param_1 = uVar3 >> 8;
      uVar1 = uVar3 >> 0x10;
      iVar2 = iVar2 + 8;
      uVar3 = param_1;
    } while (uVar1 != 0);
  }
  return iVar2 + (uint)(byte)(&DAT_0056fe08)[param_1];
}


