// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80fbc
// Entry Point: 00e80fbc
// Size: 136 bytes
// Signature: undefined FUN_00e80fbc(void)


uint FUN_00e80fbc(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  
  sVar4 = (short)param_1;
  if (0x3bff < sVar4) {
    return 0x7f000000;
  }
  if (sVar4 < -0x3c00) {
    return 0;
  }
  iVar1 = (param_1 & 0x3ff) * 0x20;
  uVar3 = -((int)(param_1 << 0x10) >> 0x1a) - 2;
  uVar2 = ((((param_1 & 0x3ff) * 0x4fb80 >> 0x10) + 0x39e3) * iVar1 + 0x59140000 >> 0x10) * iVar1 +
          0x3fff0000 >> 0x10;
  if (sVar4 < -0x800) {
    return uVar2 >> (ulong)(uVar3 & 0x1f);
  }
  return uVar2 << (ulong)(-uVar3 & 0x1f);
}


