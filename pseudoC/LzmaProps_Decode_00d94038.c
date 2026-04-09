// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaProps_Decode
// Entry Point: 00d94038
// Size: 156 bytes
// Signature: undefined LzmaProps_Decode(void)


undefined8 LzmaProps_Decode(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_3 < 5) {
    return 4;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 < 0x1001) {
    uVar1 = 0x1000;
  }
  param_1[3] = uVar1;
  bVar2 = *param_2;
  if (0xe0 < bVar2) {
    return 4;
  }
  uVar3 = (uint)bVar2;
  uVar1 = uVar3 * 0x6d >> 8;
  *param_1 = uVar3 + (bVar2 / 9) * -9 & 0xff;
  param_1[1] = (bVar2 / 9) % 5;
  param_1[2] = uVar1 + ((uVar3 - uVar1 & 0xfe) >> 1) >> 5;
  return 0;
}


