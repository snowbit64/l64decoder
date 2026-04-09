// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c9c0
// Entry Point: 00e4c9c0
// Size: 92 bytes
// Signature: undefined FUN_00e4c9c0(void)


uint FUN_00e4c9c0(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 == (byte *)0x0) {
    uVar1 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar1 != 0xffffffff) {
      return uVar1;
    }
  }
  else if (pbVar2 < *(byte **)(param_1 + 0x50)) {
    *(byte **)(param_1 + 0x40) = pbVar2 + 1;
    return (uint)*pbVar2;
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  return 0;
}


