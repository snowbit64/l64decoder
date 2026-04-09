// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3204
// Entry Point: 007b3204
// Size: 92 bytes
// Signature: undefined FUN_007b3204(void)


void FUN_007b3204(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4);
  uVar1 = *param_2 + iVar2 * 0x45d1745d;
  uVar3 = 1;
  if ((uint)(iVar2 * -0x45d1745d) <= *param_2) {
    if (uVar1 < (uint)((ulong)(*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8)) >> 6)) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar1 * 0x40 + 0x20);
    }
    else {
      uVar3 = 0;
    }
  }
  param_2[0x40] = uVar3;
  param_2[0x42] = 1;
  return;
}


