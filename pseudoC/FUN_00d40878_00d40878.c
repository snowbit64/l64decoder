// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d40878
// Entry Point: 00d40878
// Size: 80 bytes
// Signature: undefined FUN_00d40878(void)


byte * FUN_00d40878(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_2[1] == 0) {
    pbVar2 = param_2;
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x88 + (ulong)*pbVar2);
      if (0x15 < uVar3 || (1 << (ulong)(uVar3 & 0x1f) & 0x200600U) == 0) {
        return pbVar2;
      }
      param_2 = pbVar2 + 2;
      pbVar1 = pbVar2 + 3;
      pbVar2 = param_2;
    } while (*pbVar1 == 0);
  }
  return param_2;
}


