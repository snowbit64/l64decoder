// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e808b4
// Entry Point: 00e808b4
// Size: 132 bytes
// Signature: undefined FUN_00e808b4(void)


uint FUN_00e808b4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 400) {
    uVar2 = 0;
    do {
      param_2 = param_2 * 2;
      uVar2 = uVar2 + 8;
    } while (param_2 < 400);
  }
  else {
    uVar2 = 0;
  }
  iVar3 = param_3;
  if (param_3 < 0x44f) {
    iVar3 = 0x44e;
  }
  uVar1 = uVar2 + 0xf0 | param_3 << 4 | 0x60;
  if (param_1 == 1000) {
    uVar1 = uVar2 - 0x10 | param_3 * 0x20 + 0x60U & 0xe0;
  }
  uVar2 = iVar3 * 0x20 + 0x40U & 0x60 | uVar2 | 0x80;
  if (param_1 != 0x3ea) {
    uVar2 = uVar1;
  }
  return uVar2 | (uint)(param_4 == 2) << 2;
}


