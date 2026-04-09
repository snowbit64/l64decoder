// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f038
// Entry Point: 00e4f038
// Size: 104 bytes
// Signature: undefined FUN_00e4f038(void)


ulong FUN_00e4f038(ulong param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(long *)(param_1 + 0x40) + (long)param_2;
    *(ulong *)(param_1 + 0x40) = uVar1;
    if (*(ulong *)(param_1 + 0x50) <= uVar1) {
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
    return param_1;
  }
  lVar3 = ftell(*(FILE **)(param_1 + 0x30));
  uVar2 = fseek(*(FILE **)(param_1 + 0x30),lVar3 + param_2,0);
  return (ulong)uVar2;
}


