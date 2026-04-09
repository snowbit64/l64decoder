// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_int_32
// Entry Point: 00dbc090
// Size: 60 bytes
// Signature: undefined png_get_int_32(void)


uint png_get_int_32(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = (uint)*param_1 * 0x1000000;
  uVar2 = uVar1 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 | (uint)param_1[3];
  bVar4 = -1 < (int)(uVar2 - 1);
  bVar3 = false;
  if (bVar4) {
    bVar3 = (int)(uVar1 + 1) < 0;
  }
  if (bVar4 && uVar1 == 0xffffffff || bVar3 != (bVar4 && SBORROW4(uVar1,-1))) {
    uVar2 = 0;
  }
  return uVar2;
}


