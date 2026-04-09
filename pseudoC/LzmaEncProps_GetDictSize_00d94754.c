// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEncProps_GetDictSize
// Entry Point: 00d94754
// Size: 72 bytes
// Signature: undefined LzmaEncProps_GetDictSize(void)


uint LzmaEncProps_GetDictSize(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 5;
  if (-1 < (int)*param_1) {
    uVar1 = *param_1;
  }
  if (param_1[1] != 0) {
    return param_1[1];
  }
  if (uVar1 < 6) {
    return 1 << (ulong)(uVar1 * 2 + 0xe & 0x1f);
  }
  uVar2 = 0x2000000;
  if (uVar1 != 6) {
    uVar2 = 0x4000000;
  }
  return uVar2;
}


